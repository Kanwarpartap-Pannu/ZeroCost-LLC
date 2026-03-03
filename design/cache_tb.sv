`include "constants.svh"

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
logic [DWIDTH-1:0] data_out;
logic stall;  
logic data_valid;

// dut 
lookup #(
) cache (.*); 

initial begin 
    clk=0; 
    reset=1; 
    address = 0; 
    opcode_i = 0; 
    funct3_i = 0;
    store_data = 0; 
end

always #1 clk = ~clk;

// simulation 
initial begin 
    $display("SIMULATION START"); 
    address = 'h00000093;
    opcode_i = OP_LOAD; 
    funct3_i = 11; 
    store_data = 10; 
    #100
    $finish; 
end 

initial begin 
    $dumpfile("cache.vcd");
    $dumpvars(0, cache_tb);  
end


endmodule
