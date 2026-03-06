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
    address = 14'b00000000000000;
    i=0;
    $readmemb("test_files/test_address.x", test_addresses); 
end

always #1 clk = ~clk;

logic [AWIDTH-1:0] test_addresses [0:10]; 
// Logic to test the LRU replacement Policy
integer i; 
always @(posedge clk ) begin 
    if (!stall) begin 
        address <= test_addresses[i]; 
        i<=i+1;
    end
    else begin 
        address <= address; 
    end
end 

/* 
always_ff @(posedge clk) begin 
    if (!stall) begin 
        address <= address +1; 
    end
    else begin 
        address <= address; 
    end 
end
*/ 

// simulation 
initial begin 
    $display("SIMULATION START"); 
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
