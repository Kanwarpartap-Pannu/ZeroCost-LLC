/* 
    Module: Cache Controller  

    Description: Top level module for Cache, contains the controller and the 
    finite state machine logic.  

*/

`include "constants.svh"

module cache_controller #(
    parameter int AWIDTH = $clog2(`MEM_DEPTH), 
    parameter int DWIDTH = 32
) (
    input logic     clk,
    input logic     reset, 
    input logic [AWIDTH-1:0] address,
    input logic [DWIDTH-1:0] store_data,
    input logic [6:0] opcode_i, 
    input logic [2:0] funct3_i, 
    input logic wb_buffer_found, 
    input logic [((`BLOCK_SIZE*8)-1):0] mem_in,
    input logic write_finished,
    input logic ready, 

    output logic [1:0] memory_rq, 
    output logic [AWIDTH-1:0] memory_address,
    output logic [(((`BLOCK_SIZE*8)-1)+AWIDTH):0] mem_store,
    output logic [DWIDTH-1:0] data_out,
    output logic stall,  
    output logic data_valid,
    output logic hit_out,
    output logic offset_out
    
); 

localparam int NUM_SETS = `CACHE_SIZE / (`BLOCK_SIZE * `WAYS); 
localparam OFFSET_BITS   = $clog2(`BLOCK_SIZE);
localparam INDEX_BITS    = $clog2(NUM_SETS);
localparam TAG_BITS      = AWIDTH - INDEX_BITS - OFFSET_BITS;

logic [OFFSET_BITS-1:0] offset;
logic [INDEX_BITS-1:0] index;
logic [TAG_BITS-1:0] tag; 
logic [AWIDTH-1:0] read_address;
logic [AWIDTH-1:0] replace_address;  

assign offset = address[OFFSET_BITS-1:0];
assign index  = address[((OFFSET_BITS-1)+INDEX_BITS):OFFSET_BITS]; 
assign tag    = address[(((OFFSET_BITS+INDEX_BITS)-1)+TAG_BITS):(OFFSET_BITS+INDEX_BITS)]; 
assign read_address = {address[AWIDTH-1:OFFSET_BITS], {OFFSET_BITS{1'b0}}};

assign offset_out = offset; 

// MAIN STATES 
parameter CACHE = 0, MAIN_MEMORY =1; 
logic curr_state, next_state; 

// MAIN MEMORY SUB STATES
parameter READING = 0, WRITE_BACK = 1; 
logic curr_state_mem, next_state_mem;

// TAG DETECTION STATES
parameter HIT = 1, MISS = 0; 
assign hit_out = hit && ((opcode_i == OP_LOAD) || (opcode_i == OP_STORE)); 

// TAG ARRAY 
logic hit; 
logic idle; 
logic [$clog2(`WAYS)-1:0] replace_way;
logic [$clog2(`WAYS)-1:0] hit_way; 
logic [1:0] replace_way_state; 
logic reset_search; 
logic search_en; 
logic search_done; 
tag_array # (
    .TAG_BITS(TAG_BITS),
    .INDEX_BITS(INDEX_BITS),
    .NUM_SETS(NUM_SETS),
    .OFFSET_BITS(OFFSET_BITS),
    .LOOKUP_WIDTH(4)
) cache_tag_array (
    .clk(clk),
    .idle(idle),
    .tag_i(tag),
    .index_i(index),
    .replace_en(replace_en),
    .store_en(store_en),
    .reset_search(reset_search),
    .search_en(search_en),
    .search_done(search_done),
    .hit(hit),
    .hit_way_o(hit_way),
    .replace_way_o(replace_way),
    .replace_way_state(replace_way_state),
    .replace_address(replace_address)
); 


// DATA ARRAY 
logic replace_en;
logic store_en;  
logic [0:`WAYS-1][(`BLOCK_SIZE*8)-1:0] set ; 
data_array #(
    .TAG_BITS(TAG_BITS),
    .INDEX_BITS(INDEX_BITS),
    .OFFSET_BITS(OFFSET_BITS),
    .NUM_SETS(NUM_SETS),
    .BLOCK_SIZE(`BLOCK_SIZE),
    .WAYS(`WAYS),
    .DWIDTH(DWIDTH)
) cache_data_array (
    .clk(clk),
    .index_i(index),
    .replace_way(replace_way),
    .hit_way(hit_way),
    .cache_line_i(mem_in),
    .store_data(store_data),
    .funct3_i(funct3_i),
    .replace_en(replace_en),
    .store_en(store_en), 
    .set_o(set)
);

// state logic 
always_ff @(posedge clk) begin
    if (!reset) begin 
        curr_state <= CACHE; 
        curr_state_mem <= READING;
    end
    else begin 
        curr_state <= next_state; 
        curr_state_mem <= next_state_mem; 
    end 

end

// next state logic 
always_comb begin 
    next_state = curr_state;  // default safe value
    next_state_mem = curr_state_mem;  
    unique case(curr_state)
        CACHE: begin 
            unique case (opcode_i)
                OP_LOAD, OP_STORE: begin
                    if (!search_done) begin
                        next_state = CACHE; 
                    end 
                    else begin 
                        if (hit || wb_buffer_found) begin 
                            next_state = CACHE; 
                        end 
                        else if (!hit) begin 
                            next_state = MAIN_MEMORY;
                            if (replace_way_state == 2) begin
                                next_state_mem = WRITE_BACK; 
                            end
                            else begin
                                next_state_mem = READING; 
                            end
                        end
                    end
                end

                default: begin 
                    next_state = CACHE; 
                end

            endcase

        end

        MAIN_MEMORY: begin 
            unique case (curr_state_mem)
                READING: begin 
                    if (!ready) begin 
                        next_state = MAIN_MEMORY;
                        next_state_mem = READING;   
                    end 
                    else if (ready) begin 
                        next_state = CACHE; 
                        next_state_mem = READING; 
                    end 
                end

                WRITE_BACK: begin
                    if (write_finished) begin 
                        next_state_mem = READING; 
                        next_state = MAIN_MEMORY; 
                    end
                    else begin 
                        next_state_mem = WRITE_BACK; 
                        next_state = MAIN_MEMORY; 
                    end 
                end


            endcase

            

        end 

    endcase

end

// Data Out logic 
always_comb begin
    case (funct3_i)
        3'b000, 3'b100: data_out = set[hit_way][offset*8 +: 32];  // word 
        3'b001, 3'b101: data_out = set[hit_way][offset*8 +: 16]; // halfword 
        3'b010:         data_out = set[hit_way][offset*8 +: 8]; // byte 
        3'b111, 3'b011:         data_out = set[hit_way][offset*8 +: 32]; // doubleword
        default:        data_out = set[hit_way][offset*8 +: 8]; // default to byte 
    endcase
end

assign mem_store = {replace_address,set[replace_way]}; 


// CONTROL LOGIC 
always_comb begin  
    data_valid =0;
    replace_en = 0;  
    store_en = 0;  
    idle = 1; 
    stall = 1;
    reset_search = 0; 
    search_en = 0;  
    unique case(curr_state)

        CACHE: begin 
            memory_rq = 0; 
            unique case (opcode_i) 
                OP_LOAD, OP_STORE: begin
                    if (!search_done) begin
                        search_en = 1;
                        reset_search = 0; 
                        idle = 1; 
                        data_valid = 0; 
                        replace_en = 0; 
                        store_en=0; 
                        stall=1; 
                    end 
                    else begin
                        search_en = 0; 
                        reset_search = write_finished ? 1 : 0; 
                        unique case (hit)
                            HIT: begin 
                                if (opcode_i == OP_LOAD) begin 
                                    idle = 0; 
                                    data_valid = 1; 
                                    replace_en = 0; 
                                    store_en=0; 
                                    stall=0; 
                                end 
                                else if (opcode_i == OP_STORE) begin 
                                    idle = 0;
                                    data_valid = 0; 
                                    stall = 0; 
                                    store_en=1; 
                                    replace_en = 0; 
                                end
                            end

                            MISS: begin
                                idle = 1;
                                data_valid = 0; 
                                stall = write_finished ? 0 : 1; 
                                store_en=0; 
                                replace_en = 0; 
                            end

                        endcase
                    end
                end

                default: begin 
                    idle = 1;
                    data_valid = 0; 
                    stall = 0; 
                    store_en=0; 
                    replace_en = 0;
                    search_en = 0; 
                    reset_search = 1; 
                end
                
            endcase
            
        end

        MAIN_MEMORY: begin 
            search_en = 0; 
            unique case (curr_state_mem)
                READING: begin
                    memory_rq = 2; 
                    memory_address = read_address; 
                     if (!ready) begin
                        reset_search = 0; 
                        stall = 1;
                        idle = 1; 
                        data_valid = 0; 
                        replace_en = 0; 
                    end 
                    else if (ready) begin 
                        reset_search = 1;
                        idle = 1; 
                        data_valid = 0; 
                        stall = 1; 
                        replace_en = 1; 
                    end 
                end
                WRITE_BACK: begin
                    reset_search = 0;
                    memory_rq = 1; 
                    memory_address = replace_address;
                    stall = 1;
                    idle = 1; 
                    data_valid = 0; 
                    replace_en = 0;
                end
                default: begin 
                    reset_search = 0;
                    stall = 1;
                    idle = 1; 
                    data_valid = 0; 
                    replace_en = 0;
                end

            endcase
           

        end 

    endcase

end



endmodule : cache_controller
