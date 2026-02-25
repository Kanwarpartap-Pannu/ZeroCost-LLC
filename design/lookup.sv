/* 
    Module: Lookup 

    Description: Lookup Operation on given memory address,
     outputting the Tag, Offset and Set bits for a k-way set 
    associative cache with parametrized cache size. 

*/

`include "constants.svh"

module lookup #(
    parameter int AWIDTH = $clog2(`MEM_DEPTH), 
    parameter int DWIDTH = 32
) (
    input logic     clk,
    input logic     reset, 
    input logic [AWIDTH-1:0] address,
    input logic [DWIDTH-1:0] store_data,
    input logic [6:0] opcode_i, 
    input logic [2:0] funct3_i,  
    output logic [OFFSET_BITS-1:0] offset,
    output logic [INDEX_BITS-1:0] index, 
    output logic [TAG_BITS-1:0] tag, 
    output logic [DWIDTH-1:0] data_out,
    output logic stall,  
    output logic data_valid
    
); 

localparam int NUM_SETS = `CACHE_SIZE / (`BLOCK_SIZE * `WAYS); 
localparam OFFSET_BITS   = $clog2(`BLOCK_SIZE);
localparam INDEX_BITS    = $clog2(NUM_SETS);
localparam TAG_BITS      = AWIDTH - INDEX_BITS - OFFSET_BITS;

assign offset = address[OFFSET_BITS-1:0];
assign index  = address[((OFFSET_BITS-1)+INDEX_BITS):OFFSET_BITS]; 
assign tag    = address[(((OFFSET_BITS+INDEX_BITS)-1)+TAG_BITS):(OFFSET_BITS+INDEX_BITS)]; 


// STATES 
parameter CACHE = 0, MAIN_MEMORY =1; 
logic curr_state, next_state; 


// MAIN MEMORY 
logic read_en = 1;
logic write_en = 0;
logic [DWIDTH-1:0] mem_out; 
logic ready; 
memory #(
    .AWIDTH(32),
    .DWIDTH(32),
    .BASE_ADDR(32'h01000000)
    ) memory1 (
    .clk(clk),
    .rst(reset),
    .addr_i(address),
    .addr_dat(address),
    .data_dat(store_data), 
    .read_en_i(read_en),
    .read_en_dat(read_en), // controls for data memory 
    .write_en_dat(write_en),
    .funct3_i(funct3_i),
    .ready(ready),
    .data_o(),
    .data_dat_o(mem_out) // data read from data memory
);


// TAG ARRAY 
logic hit; 
logic idle; 
logic [$clog2(`WAYS)-1:0] replace_way; 
tag_array # (
) cache_tag_array (
    .clk(clk),
    .idle(idle),
    .tag_i(tag),
    .index_i(index),
    .hit(hit),
    .replace_way_o(replace_way)
); 


// DATA ARRAY 
logic replace_en; 
logic [0:`WAYS-1][(`BLOCK_SIZE*8)-1:0] set ; 
data_array #(
) cache_data_array (
    .clk(clk),
    .index_i(index),
    .replace_way(replace_way),
    .cache_line_i(mem_out),
    .replace_en(replace_en),
    .set_o(set)
);

// state logic 
always_ff @(posedge clk) begin
    if (!reset) begin 
        curr_state <= CACHE; 
    end
    else begin 
        curr_state <= next_state; 
    end 

end

// next state logic 
always_ff @(posedge clk) begin 
    next_state <= curr_state;  // default safe value 
    unique case(curr_state)
        CACHE: begin 
            unique case (opcode_i)
                OP_LOAD, OP_STORE: begin  
                    if (hit) begin 
                        next_state <= CACHE; 
                    end 
                    else if (!hit) begin 
                        next_state <= MAIN_MEMORY; 
                    end
                end

                default: begin 
                    next_state <= CACHE; 
                end

            endcase

        end

        MAIN_MEMORY: begin 
            if (!ready) begin 
                next_state <= MAIN_MEMORY;  
            end 
            else if (ready) begin 
                next_state <= CACHE; 
            end 

        end 

    endcase

end

always_comb begin 
    data_out = 0; // default to safe values  
    data_valid =0;
    replace_en = 0;  
    unique case(curr_state)
        CACHE: begin 
            unique case (opcode_i)
                OP_LOAD, OP_STORE: begin 
                    if (hit) begin 
                        idle = 0; 
                        data_valid = 1; 
                        data_out = set[replace_way][offset*8 +: 8]; 
                        replace_en = 0; 
                    end 
                    else if (!hit) begin 
                        idle = 0;
                        data_valid = 0; 
                        stall = 1; 
                        replace_en = 0; 
                    end
                end

                default: begin 
                    idle = 1; 
                    data_out = 32'b0; 
                    replace_en = 0; 
                end

            endcase

        end

        MAIN_MEMORY: begin 
            if (!ready) begin 
                stall = 1;
                idle = 1; 
                data_valid = 0; 
                replace_en = 0;  
            end 
            else if (ready) begin 
                idle = 1; 
                data_valid = 1; 
                stall = 0; 
                data_out = mem_out[offset*8 +: 8];
                replace_en = 1; 
            end 

        end 

    endcase

end


endmodule : lookup 
