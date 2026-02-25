module cache_tb; 

// reg
logic clk; 
logic reset; 
parameter int AWIDTH = $clog2(`MEM_DEPTH);
parameter int DWIDTH = 32;
localparam int NUM_SETS = `CACHE_SIZE / (`BLOCK_SIZE * `WAYS); 
localparam OFFSET_BITS   = $clog2(`BLOCK_SIZE);
localparam INDEX_BITS    = $clog2(NUM_SETS);
localparam TAG_BITS      = AWIDTH - INDEX_BITS - OFFSET_BITS;

logic [AWIDTH-1:0] address; 
logic [DWIDTH-1:0] store_data; 
logic [6:0] opcode_i; 
logic [2:0] funct3_i;  
logic [OFFSET_BITS-1:0] offset;
logic [INDEX_BITS-1:0] index; 
logic [TAG_BITS-1:0] tag; 
logic [DWIDTH-1:0] data_out;
logic stall;  
logic data_valid;

// dut 
lookup #(
) cache (.*); 

// simulation 
initial begin 
    $display("SIMULATION START"); 
    #1
    $finish; 
end 


endmodule
