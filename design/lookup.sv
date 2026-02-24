/* 
    Module: Lookup 

    Description: Lookup Operation on given memory address,
     outputting the Tag, Offset and Set bits for a k-way set 
    associative cache with parametrized cache size. 

*/

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


// TWO STATES: CACHE and MAIN MEMORY 
// OUTPUTS: ON MISS IDLE HIGH WHEN DATA COMES BACK REPLACE EN HIGH TAG IS 
// ALREADY REPlACE IN TAG ARRAY 
// OTHERWISE: When OPCODE is load or store in those cases then what we do 
// look for hit or miss otherwise just idle states remain unchanged 

parameter CACHE = 0, MAIN_MEMORY =1; 
logic curr_state, next_state; 


logic read_en = 1;
logic write_en = 0;
logic [DWIDTH-1:0] mem_out; 
memory #(
    .AWIDTH(32),
    .DWIDTH(32),
    .BASE_ADDR(32'h01000000)
    ) memory1 (
    .clk(clk),
    .rst(reset),
    .addr_i(address),
    .addr_dat(address),
    .data_i(store_data), 
    .data_dat(store_data), 
    .read_en_i(read_en), 
    .write_en_i(write_en),
    .read_en_dat(read_en), // controls for data memory 
    .write_en_dat(write_en),
    .funct3_i(funct3_i),
    .size_encoded_o(), // new output for size encoding
    .data_o(),
    .data_dat_o(mem_out) // data read from data memory
);

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

logic replace_en; 
logic [(BLOCK_SIZE*8)-1:0] set [0:WAYS-1]; 
data_array #(
) cache_data_array (
    .clk(clk),
    .index_i(index),
    .replace_way(replace_way),
    .cache_line_i(mem_out),
    .replace_en(replace_en),
    .set_o(set)
);

always_ff @(posedge clk) begin
    if (!rstn) begin 
        curr_state <= CACHE; 
    end
    else begin 
        curr_state <= next_state; 
    end 

end
logic []
always_ff @(posedge clk) begin 
    data_o = 0; // default to safe values  
    data_valid =0;
    replace_en = 0;  
    unique case(curr_state)
        CACHE: begin 
            unique case (opcode_i)
                LOAD, STORE: begin 
                    idle = 0; 
                    if (hit) begin 
                        next_state <= CACHE; 
                        data_valid = 1; 
                        data_out = set[tag][offset*8 +: 8];
                        replace_en = 0;  
                    end
                    else if (!hit) begin 
                        next_state <= MAIN_MEMORY; 
                        data_valid = 0; 
                        stall = 1; 
                        replace_en = 0; 
                    end
                end

                default: begin 
                    idle = 1; 
                    data_out = 32'b0; 
                    replace_en = 0; 
                    next_state <= CACHE; 
                end

            endcase

        end

        MAIN_MEMORY: begin 
            if (!ready) begin 
                next_state <= MAIN_MEMORY; 
                stall = 1;
                data_valid = 0; 
                replace_en = 0;  
            end 
            else if (ready) begin 
                next_state <= CACHE; 
                data_valid = 1; 
                stall = 0; 
                data_out = mem_out[offset*8 +: 8];
                replace_en = 1; 
            end 

        end 

    endcase

end


endmodule : lookup 