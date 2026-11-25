/* 
    Module: Cache Controller  

    Description: Top level module for Cache, contains the controller and the 
    finite state machine logic.  

*/

`include "constants.svh"

module cache_controller #(
    parameter int AWIDTH = $clog2(`MEM_DEPTH), 
    parameter int DWIDTH = 32,
    parameter int LOOKUP_WIDTH = 2*`WAYS
) (
    input logic     clk,
    input logic     reset, 
    input logic [2:0] op, 
    input logic [AWIDTH-1:0] address,
    input logic [DWIDTH-1:0] store_data,
    input logic [2:0] funct3_i, 
    input logic [$clog2(`CORE_COUNT)-1:0] requester, 

    output logic [DWIDTH-1:0] data_out,
    output logic stall, 
    output logic data_valid
    
); 


localparam int NUM_SETS = `CACHE_SIZE / (`BLOCK_SIZE * `WAYS); 
localparam OFFSET_BITS   = $clog2(`BLOCK_SIZE);
localparam SET_BITS    = $clog2(NUM_SETS);
localparam TAG_BITS      = AWIDTH - SET_BITS - OFFSET_BITS;
localparam DIRECTORY_WAY_BITS = $clog2(`WAYS*2); 

logic [OFFSET_BITS-1:0] offset;
logic [SET_BITS-1:0] set_i;
logic [TAG_BITS-1:0] tag_i; 
logic [AWIDTH-1:0] read_address;

assign offset = address[OFFSET_BITS-1:0];
assign set_i  = address[((OFFSET_BITS-1)+SET_BITS):OFFSET_BITS]; 
assign tag_i    = address[(((OFFSET_BITS+SET_BITS)-1)+TAG_BITS):(OFFSET_BITS+SET_BITS)]; 
assign read_address = {address[AWIDTH-1:OFFSET_BITS], {OFFSET_BITS{1'b0}}};


// Tag_array 
// clk, reset, tag_i , set_i, requester, T_op
// way_out, set_out, hit, relocate_ctrl, evict_ctrl
logic [3:0] T_op; 	

logic [$clog2(`WAYS)-1:0] tag_way; 
logic [SET_BITS-1:0] tag_set; 
logic hit; 
logic relocate_ctrl;
logic evict_ctrl; 
tag_array # (
    .TAG_BITS(TAG_BITS), 
    .SET_BITS(SET_BITS), 
    .NUM_SETS(NUM_SETS) 
     ) tag1 (
        .way_out(tag_way),
        .set_out(tag_set),
        .*
    ); 

// Data Array 
// clk, reset, way_i, set_i, D_op, funct3_i, store_data, cache_line_i
// If the request missed in the cache: 
//  - Check if there is a relocation request if yes transition to RELOC_ONE
//  the first relocation cycle 
//      - Else if the cache line is in the writeback buffer transition to
//      MISS_BUFFER_HIT
//      T
//          - If not in writeback buffer transition to READING_MEM 
//
//          # READING_MEM: 
// set_o
logic [1:0] D_op; 

logic [(`BLOCK_SIZE*8)-1:0] cache_line_data;
logic [SET_BITS-1:0] data_set;

logic [(`BLOCK_SIZE*8)-1:0] way_data_o; 
data_array #(
     ) data1 (
        .way_i(tag_way),
        .set_i(tag_set), 
        .cache_line_i(cache_line_data),
        .*
        ); 

// Writeback Buffer 
// clk, reset, data_i, push_en, pop_en, search_addr,
// drain_rq, serach_data_o, found, data_o, data_valid, full 
logic [(DWIDTH+AWIDTH)-1:0] buffer_data_i; 
logic push_en;
logic pop_en;

logic drain_rq; 
logic found; 
logic full;
logic [(DWIDTH+AWIDTH)-1:0] buffer_data_o; 
logic [(DWIDTH)-1:0] search_data_o; 
logic buffer_data_valid; 
writeback_buffer #(
    ) wr_buffer1 (
        .search_addr(address),
        .data_i(buffer_data_i),
        .data_o(buffer_data_o),
        .data_valid(buffer_data_valid),
        .*
    ); 
 
// Memory_controller 
// clk, reset, addr, M_op, data_in, 
// ready_out, wr_finished, data_out
 logic [AWIDTH-1:0] mem_addr;
 logic [DWIDTH-1:0] mem_data_in;
 logic [1:0] M_op; 

 logic ready_out; 
 logic wr_finished; 
 logic [DWIDTH-1:0] mem_data_out;
memory_controller #(
    ) mem1 (
        .addr(mem_addr), 
        .data_in(mem_data_in),
        .data_out(mem_data_out),
        .*
    );


// STATES 
// ACTIVE, MISS_BUFFER_HIT, READING_MEM, INSERT, RELOC_ONE, RELOC_TWO, RELOC_THREE, WRITE_BUFFER,
// WRITE_MEM, POP_BUFFER, WAITING 
localparam int ACTIVE = 4'd0, MISS_BUFFER_HIT = 4'd2, READING_MEM = 4'd3, INSERT = 4'd4, RELOC_ONE = 4'd5, RELOC_TWO = 4'd6, RELOC_THREE = 4'd7, WRITE_BUFFER = 4'd8, WRITE_MEM = 4'd9, POP_BUFFER = 4'd10; 
logic [3:0] curr_state; 
logic [3:0] next_state; 

//Data Out logic 
always_comb begin
    case (funct3_i)
        3'b000, 3'b100: data_out = way_data_o[offset*8 +: 32];  // word 
        3'b001, 3'b101: data_out = way_data_o[offset*8 +: 16]; // halfword 
        3'b010:         data_out = way_data_o[offset*8 +: 8]; // byte 
        3'b111, 3'b011:         data_out = way_data_o[offset*8 +: 32]; // doubleword
        default:        data_out = way_data_o[offset*8 +: 8]; // default to byte 
    endcase
end


logic [(`BLOCK_SIZE*8)-1:0] temp;
logic buff_write; 
//STATE LOGIC
always_ff @(posedge clk) begin 
    if (!reset) begin 
        curr_state <= ACTIVE; 
    end
    else begin 
        curr_state <= next_state; 
    end
end

always_ff @(posedge clk) begin 
    unique case (curr_state) 

        ACTIVE: begin 
            if (op == C_IDLE) begin 
                if (drain_rq) begin 
                    buff_write <= 0; 
                end
            end
            else begin 
                if (!hit) begin 
                    if ((!relocate_ctrl) && (!found)) begin 
                        mem_addr <= read_address;
                    end
                end
                else begin 
                    if (evict_ctrl) begin 
                        if (full) begin 
                            buff_write <= 1; 
                        end
                    end
                end
            end
        end

        READING_MEM: begin 
            if (!ready_out) ; 
            else begin 
                temp <= mem_data_out; 
            end
        end

        RELOC_ONE: begin 
            temp <= way_data_o;  
        end

        POP_BUFFER: begin 
            mem_addr <= buffer_data_o[(DWIDTH+AWIDTH)-1:DWIDTH];
            temp <= buffer_data_o[DWIDTH-1:0];
        end

        WRITE_MEM: begin 
            if (buff_write) begin 
                buff_write <= 0; 
            end
        end
        
        default: ;

    endcase 
end

// CONTROL LOGIC 
// Sensitive to curr_state, op and hit 
always_comb begin

    data_valid = 0;
    push_en = 0; 
    pop_en = 0; 
    cache_line_data = 0; 
    buffer_data_i = 0; 
    mem_data_in = 0; 
    T_op = T_IDLE; 
    D_op = D_IDLE;
    M_op = M_IDLE; 
    stall = 0;
    next_state = ACTIVE; 

    unique case (curr_state)
        ACTIVE: begin
            if (op == C_IDLE) begin
                if (drain_rq) begin 
                    next_state = POP_BUFFER;  
                end
            end
            else begin 
                if (hit) begin 
                    stall = evict_ctrl ? 1 : 0;
                    unique case (op)
                        C_LOAD: begin 
                            T_op = T_LOAD; 
                            D_op = D_READ;
                            data_valid = 1; 
                        end 
                        C_STORE: begin 
                            T_op = T_STORE; 
                            D_op = D_STORE;
                        end 
                        C_EVICT: begin 
                            T_op = T_EVICT; 
                            D_op = D_IDLE;
                        end 
                        C_WRITEBACK: begin 
                            T_op = T_WRITEBACK; 
                            D_op = D_STORE;
                        end 
                        default: ;
                    endcase
                    if (evict_ctrl) begin 
                        if (full) begin 
                            next_state = POP_BUFFER; 
                        end
                        else begin 
                            next_state = WRITE_BUFFER; 
                        end
                    end
                    else begin 
                        next_state = ACTIVE;
                    end
                end 
                else begin 
                    if (relocate_ctrl && ((op == C_LOAD) || (op == C_STORE)) ) begin 
                        next_state = RELOC_ONE; 
                        stall = 1; 
                    end
                    else if (found) begin 
                        next_state = MISS_BUFFER_HIT; 
                        stall = 1; 
                    end
                    else if ((op == C_LOAD) || (op == C_STORE))begin 
                        next_state = READING_MEM; 
                        stall = 1; 
                    end
                    else begin 
                        next_state = ACTIVE;
                    end
                    T_op = T_IDLE; 
                    D_op = D_IDLE;
                end
            end
        end

        READING_MEM: begin 
            stall = 1; 
            M_op = M_READ;
            if (!ready_out) begin 
                next_state = READING_MEM; 
            end
            else begin 
                next_state = INSERT; 
            end
        end

        INSERT: begin 
            next_state = ACTIVE; 
            stall = 1; 
            T_op = T_INSERT;
            D_op = D_WRITE;
            cache_line_data = temp;
        end
        
        MISS_BUFFER_HIT: begin 
            next_state = ACTIVE; 
            stall = 1; 
            push_en = 1;
            pop_en = 1; 
            cache_line_data = search_data_o;
            T_op = T_INSERT; 
            D_op = D_WRITE;
        end

        RELOC_ONE: begin 
            next_state = RELOC_TWO; 
            stall = 1; 
            T_op = T_RELOC_ONE;
            D_op = D_READ;
        end

        RELOC_TWO: begin 
            next_state = RELOC_THREE; 
            stall = 1; 
            T_op = T_RELOC_TWO;
            D_op = D_WRITE;
            cache_line_data = temp;
        end

        RELOC_THREE: begin 
            next_state = found ? MISS_BUFFER_HIT : READING_MEM; 
            stall = 1; 
            T_op = T_RELOC_THREE;
        end

        WRITE_BUFFER: begin 
            next_state = ACTIVE; 
            stall = 0; 
            push_en = 1; 
            T_op = T_REMOVE;
            buffer_data_i = {address, way_data_o}; 
        end

        POP_BUFFER: begin
            next_state = WRITE_MEM; 
            stall = 1; 
            pop_en = 1; 
        end

        WRITE_MEM: begin 
            stall = 1; 
            M_op = M_WRITE; 
            mem_data_in = temp; 
            if (buff_write) begin 
                push_en = 1; 
                T_op = T_REMOVE;
                buffer_data_i = {address, way_data_o}; 
            end
            if (!wr_finished) begin 
                next_state = WRITE_MEM; 
            end
            else begin 
                next_state = ACTIVE; 
            end
        end

    endcase 

end

endmodule : cache_controller
