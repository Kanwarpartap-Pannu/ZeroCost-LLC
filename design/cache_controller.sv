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
    input logic [AWIDTH-1:0] address,
    input logic [DWIDTH-1:0] store_data,
    input logic [6:0] opcode_i, 
    input logic [2:0] funct3_i, 
    input logic wb_buffer_found, 
    input logic [$clog2(`CORE_COUNT)-1:0] requester, 
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
localparam DIRECTORY_WAY_BITS = $clog2(`WAYS*2); 

logic [$clog2(`WAYS*`NUM_SETS)] q; 
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

// CACHE SUB_STATES: 
parameter IDLE = 0, ACTIVE = 1; 
logic active_req; 

assign active_req = (opcode_i == OP_STORE) || (opcode_i == OP_LOAD);   

// ACTIVE CACHE SUB STATES 
parameter SEARCHING = 0, CACHE_HIT = 1, DIRECTORY_HIT = 2, EVICTING = 3; 
logic [1:0] curr_state_active_cache, next_state_active_cache; 

//EVICTING STATES 
parameter SHARED = 0, UNSHARED = 1; 
// MAIN MEMORY SUB STATES
parameter READING = 0, WRITE_BACK = 1; 
logic curr_state_mem, next_state_mem;
logic [1:0] relocation_flag, relocation_state; 

// TAG DETECTION STATES
parameter HIT = 1, MISS = 0; 
assign hit_out = hit && ((opcode_i == OP_LOAD) || (opcode_i == OP_STORE)); 


// -------------------------------- MODULES START ---------------------------- 

// TAG ARRAY 
logic hit; 
logic idle; 
logic [$clog2(`WAYS)-1:0] replace_way;
logic [$clog2(`WAYS)-1:0] hit_way; 
logic [TAG_BITS-1:0] replace_way_meta_data; 
logic [$clog2(`WAYS)-1:0] cre_way; 
logic [INDEX_BITS-1:0] index_in; 
logic [$clog2(`WAYS)-1:0] way_i_tag; 
logic has_re_out;
logic [INDEX_BITS-1:0] relocate_set_tag; 
logic [$clog2(`WAYS)-1:0] relocate_way_tag; 
logic [1:0] way_i_state_o;  
logic enable; 
logic dirty_sig; 
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
    .index_i(index_in),
    .replace_en(insert_en_tag),
    .share_en(share_en_tag),
    .tag_metadata_i(tag_metadata_o),
    .store_en(store_en),
    .enable(enable),
    .valid_or_not(dirty_sig),
    .evict_en(evict_en_tag),
    .way_i(way_i_tag),
    .way_i_state_o(way_i_state_o), 
    .hit(hit),
    .relocate_en(relocate_en),
    .hit_way_o(hit_way),
    .has_re_out(has_re_out),
    .cre_way_o(cre_way),
    .replace_way_o(replace_way),
    .replace_way_meta_data(replace_way_meta_data)
); 


// DATA ARRAY 
logic replace_en_data;
logic store_en;  
logic [0:`WAYS-1][(`BLOCK_SIZE*8)-1:0] set;
logic [((`BLOCK_SIZE*8)-1):0] data_in;
logic [$clog2(`WAYS)-1:0] input_way_data; 
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
    .index_i(index_in),
    .replace_way(input_way_data),
    .cache_line_i(data_in),
    .store_data(store_data),
    .funct3_i(funct3_i),
    .replace_en(replace_en_data),
    .store_en(store_en), 
    .relocate_en(relocate_en),
    .set_o(set)
);

// DIRECTORY 
logic dir_hit; 
logic reset_search; 
logic search_en; 
logic search_done; 
logic evict_en; 
logic [1:0] evicting_state;
logic [INDEX_BITS-1:0] index_dir_out;
logic [$clog2(`WAYS)-1:0] way_dir_out;
logic share_en_tag; 
logic [TAG_BITS-1:0] tag_metadata_o;   
logic evict_en_tag; 
logic insert_en_tag; 
logic [INDEX_BITS-1:0] index_in_dir; 
logic [$clog2(`WAYS*2)-1:0] tag_way; 
logic insert_en; 
logic share_en; 
logic relocate_en; 
directory #(
    .TAG_BITS(TAG_BITS),
    .INDEX_BITS(INDEX_BITS),
    .OFFSET_BITS(OFFSET_BITS),
    .NUM_SETS(NUM_SETS),
    .LOOKUP_WIDTH(LOOKUP_WIDTH)
) directory_slice (
    .clk(clk),
    .reset(reset),

    .tag_i(tag),
    .index_i(index_in_dir),
    .requester(requester),
    .relocate_set(next_rs),
    .relocate_way(cre_way),

    .insert_en(insert_en),
    .share_en(share_en),
    .evict_en(evict_en),
    .relocate_en(relocate_en),
    .reset_search(reset_search),
    .search_en(search_en),
    .tag_way(tag_way),

    .evict_en_tag(evict_en_tag),
    .insert_en_tag(insert_en_tag),
    .tag_metadata_o(tag_metadata_o),
    .hit(dir_hit),
    .search_done(search_done),
    .hit_way_o(way_dir_out),
    .hit_set_o(index_dir_out),
    .replace_address(replace_address),
    .evicting_state(evicting_state)
); 

// RELOCATION 
logic [INDEX_BITS-1:0] next_rs; 
relocation #(
    .NUM_SETS(NUM_SETS)
) relocation (
    .clk(clk),
    .rst(reset),

    .has_re(has_re_out),
    .index_i(index_in),
    .next_rs_out(next_rs)
);


// -------------------------------- MODULES END ---------------------------- 



// -------------------------------- STATE LOGIC START ---------------------------- 

// state logic 
always_ff @(posedge clk) begin
    if (!reset) begin 
        curr_state <= CACHE; 
        curr_state_mem <= READING;
        curr_state_active_cache <= SEARCHING;
        relocation_state <= 0; 
        q <= 0;  
    end
    else begin 
        curr_state <= next_state; 
        curr_state_mem <= next_state_mem; 
        curr_state_active_cache <= next_state_active_cache;
        relocation_state <= relocation_flag; 
    end 
end

logic q_en; 
// next state logic 
always_comb begin 
    next_state = curr_state;  // default safe value
    next_state_mem = curr_state_mem; 
    next_state_active_cache = curr_state_active_cache;  
    unique case(curr_state)
        CACHE: begin 
            unique case (active_req)
                ACTIVE: begin
                    unique case (curr_state_active_cache) 
                        SEARCHING: begin
                            if ((opcode_i == OP_WRITEBACK) || (opcode_i == OP_EVICT) && (search_done) ) begin
                                next_state = CACHE; 
                                next_state_active_cache = EVICTING; 
                            end
                            else if ((hit || wb_buffer_found) && (search_done)) begin
                                next_state = CACHE; 
                                next_state_active_cache = CACHE_HIT; 
                            end
                            else if(search_done) begin
                                if (dir_hit) begin
                                    next_state = CACHE; 
                                    next_state_active_cache = DIRECTORY_HIT; 
                                end 
                                else begin 
                                    next_state = MAIN_MEMORY; 
                                    next_state_mem = READING;
                                    if (!has_re_out) begin
                                        relocation_flag = 2; 
                                    end
                                    else begin
                                        relocation_flag = 0; 
                                    end 
                                end
                            end
                        end

                        CACHE_HIT: begin
                            next_state = CACHE; 
                            next_state_active_cache = SEARCHING; 
                        end

                        DIRECTORY_HIT: begin
                            next_state = CACHE; 
                            next_state_active_cache = SEARCHING; 
                        end 

                        EVICTING: begin
                            unique case (evicting_state) 
                            SHARED: begin
                                next_state = (opcode_i == OP_EVICT) ? MAIN_MEMORY : CACHE;
                                next_state_mem = (opcode_i == OP_EVICT) ? WRITE_BACK : READING;  
                                next_state_active_cache = SEARCHING;
                            end

                            UNSHARED: begin
                                unique case (opcode_i)
                                    // Data Less Eviction 
                                    OP_EVICT: begin 
                                        if (way_i_state_o == 2'b01) begin
                                            next_state = MAIN_MEMORY;
                                            next_state_mem = WRITE_BACK;  
                                            next_state_active_cache = SEARCHING; 
                                        end
                                        else begin
                                            next_state = CACHE; 
                                            next_state_active_cache = SEARCHING;  
                                        end
                                    end

                                    // Data Write back 
                                    OP_WRITEBACK: begin
                                        if ((way_i_state_o == 2'b00)) begin
                                            next_state = CACHE; 
                                            next_state_active_cache = SEARCHING;
                                            q_en = 1;  
                                        end
                                        else begin
                                            next_state = MAIN_MEMORY;
                                            next_state_mem = WRITE_BACK;  
                                            next_state_active_cache = SEARCHING; 
                                             
                                        end
                                    end

                                endcase
                            end
                                

                            endcase 
                            
                        end

                    endcase
                
                end

                IDLE: begin
                    next_state = CACHE; 
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
                    else if (ready && (relocation_state == 0)) begin 
                        next_state = CACHE; 
                        next_state_mem = READING; 
                    end 
                end

                WRITE_BACK: begin
                    if (write_finished) begin 
                        next_state_mem = READING; 
                        next_state = CACHE; 
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
logic [$clog2(`WAYS)-1:0] hit_way_data_out;
always_comb begin
    case (funct3_i)
        3'b000, 3'b100: data_out = set[hit_way_data_out][offset*8 +: 32];  // word 
        3'b001, 3'b101: data_out = set[hit_way_data_out][offset*8 +: 16]; // halfword 
        3'b010:         data_out = set[hit_way_data_out][offset*8 +: 8]; // byte 
        3'b111, 3'b011:         data_out = set[hit_way_data_out][offset*8 +: 32]; // doubleword
        default:        data_out = set[hit_way_data_out][offset*8 +: 8]; // default to byte 
    endcase
end


logic [((`BLOCK_SIZE*8)-1):0] relocation_block;
logic [INDEX_BITS-1:0] relocation_dir_index; 
logic [$clog2(`WAYS*2)-1:0]  relocation_dir_way; 
logic valid_ornot; 
always_ff @(posedge clk ) begin
    if (relocation_state == 2) begin
        relocation_block <= set[hit_way_data_out];
        relocation_dir_index <= replace_way_meta_data[(INDEX_BITS-1):0]; 
        relocation_dir_way <= replace_way_meta_data[(DIRECTORY_WAY_BITS+INDEX_BITS)-1:INDEX_BITS];
        valid_ornot <= (way_i_state_o == 2'b01) || (way_i_state_o == 2'b11) ;   
    end
    if (q_en) begin
        q <= q+1; 
    end
end

// CONTROL LOGIC 
always_comb begin  
    q_en = 0; 
    mem_store = {replace_address,set[way_dir_out]}; 
    data_valid =0;
    store_en = 0;  
    idle = 1; 
    stall = 0; 
    reset_search = 0; 
    search_en = 0;  
    share_en = 0; 
    evict_en = 0; 
    relocate_en = 0; 
    insert_en = 0; 
    index_in = index; 
    hit_way_data_out = hit_way;
    share_en_tag = 0; 
    way_i_tag = hit_way; 
    replace_en_data = 0;
    data_in = mem_in;  
    index_in_dir = index; 
    tag_way = 0; 
    input_way_data = replace_way; 
    relocation_flag = 0; 
    enable = 0; 
    dirty_sig = valid_ornot; 
    unique case(curr_state)

        CACHE: begin 
            memory_rq = 0; 
            unique case (active_req)
                ACTIVE: begin
                    unique case (curr_state_active_cache) 
                        SEARCHING: begin
                            stall = 1;
                            search_en = 1; 
                        end 

                        CACHE_HIT: begin 
                            data_valid = (opcode_i == OP_LOAD) ? 1 : 0 ; 
                            store_en = (opcode_i == OP_LOAD) ? 0 : 1 ;  
                            idle = 0; 
                            reset_search = 1; 
                            share_en_tag = (!dir_hit); 
                            insert_en = (!dir_hit);
                            tag_way = hit_way;  
                        end

                        DIRECTORY_HIT: begin
                            data_valid = (opcode_i == OP_LOAD) ? 1 : 0 ;
                            idle = 0;
                            reset_search = 1;
                            store_en = (opcode_i == OP_LOAD) ? 0 : 1 ; 
                            share_en = 1; 
                            index_in = index_dir_out; 
                            hit_way_data_out = way_dir_out; 
                            input_way_data = way_dir_out; 
                            way_i_tag = way_dir_out;  
                        end

                        EVICTING: begin
                            idle = 1;
                            stall = 1;
                            index_in = index_dir_out; 
                            hit_way_data_out = hit_way; 
                            way_i_tag = way_dir_out;
                            input_way_data = way_dir_out; 
                            evict_en = 0; 
                            unique case (evicting_state)
                                SHARED: begin
                                    evict_en = 1;
                                    replace_en_data = (opcode_i == OP_WRITEBACK) ? 1 : 0;
                                end

                                UNSHARED: begin
                                    unique case (opcode_i)
                                        OP_EVICT: begin
                                            if (way_i_state_o == 2'b01) begin
                                                evict_en = 0; 
                                            end
                                            else begin
                                                evict_en = 1; 
                                            end
                                        end

                                        OP_WRITEBACK: begin
                                            if ((way_i_state_o == 2'b00) || (way_i_state_o == 2'b11)) begin
                                                dirty_sig = 1; 
                                                evict_en = 1;
                                                replace_en_data = 1;  
                                            end
                                            else begin
                                                evict_en = 0;  
                                            end
                                        end
                                    endcase
                                end

                            endcase
                        end
                        

                    endcase
                end

                IDLE: begin
                    data_valid =0;
                    store_en = 0;  
                    idle = 1; 
                    stall = 0;
                    reset_search = 0; 
                    search_en = 0;
                    share_en = 0; 
                    evict_en = 0; 
                    relocate_en = 0; 
                    insert_en = 0;  
                end 

                default: begin 
                    idle = 1;
                    data_valid = 0; 
                    stall = 0; 
                    store_en=0; 
                    search_en = 0; 
                    reset_search = 1; 
                end
                
            endcase
            
        end

        MAIN_MEMORY: begin 
            unique case (curr_state_mem) 
                READING: begin 
                    memory_rq = 2; 
                    memory_address = read_address; 
                    if (!ready) begin 
                        stall = 1; 
                    end 
                    else if (ready && !(relocation_state)) begin 
                        reset_search = 1; 
                        stall = 1; 
                        insert_en = 1; 
                        way_i_tag = cre_way; 
                        index_in = index; 
                        tag_way = cre_way;
                        input_way_data = cre_way;
                        replace_en_data = 1;  
                    end 
                    if (relocation_state == 2) begin 
                        index_in = index; 
                        hit_way_data_out = replace_way; 
                        way_i_tag = replace_way; 
                        relocation_flag = 1; 
                        enable = 1; 
                    end
                    else if (relocation_state == 1) begin
                        index_in = next_rs; 
                        input_way_data = cre_way;
                        way_i_tag = cre_way;  
                        data_in = relocation_block; 
                        index_in_dir = relocation_dir_index; 
                        tag_way = relocation_dir_way; 
                        relocate_en = 1;  
                    end
                end
                WRITE_BACK: begin
                    memory_rq = 1; 
                    memory_address = replace_address;
                    stall = 1;
                    index_in = index_dir_out; 
                    way_i_tag = way_dir_out;
                    input_way_data = way_dir_out; 
                    hit_way_data_out = way_dir_out;  
                    if (opcode_i == OP_WRITEBACK) begin
                        mem_store = {replace_address, mem_in}; 
                    end
                    if (write_finished) begin 
                        reset_search = 1;
                        evict_en = 1;  
                    end
                    else begin 
                        reset_search = 0; 
                        evict_en = 0; 
                    end
                end
                default: begin 
                    reset_search = 0;
                    stall = 1;
                    idle = 1; 
                    data_valid = 0; 
                end

            endcase
           

        end 

    endcase

end



endmodule : cache_controller
