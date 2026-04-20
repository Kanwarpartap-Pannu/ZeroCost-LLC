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

logic [AWIDTH-1:0] addr; 
logic [DWIDTH-1:0] store_data; 
logic [6:0] opcode_i; 
logic [2:0] funct3_i;  
logic [DWIDTH-1:0] data_out;
logic stall;  
logic data_valid;

// dut 
top #(
) cache (.*); 

initial begin 
    clk = 0; 
    reset = 1;  
    opcode_i = 0; 
    funct3_i = 0;
    store_data = 0; 
    addr = 0;
    i = 0;
    $readmemb("test_files/test_address.x", test_addresses); 
end

always #1 clk = ~clk;

logic [21:0] test_addresses [0:15]; 
// Logic to test the LRU replacement Policy
integer i; 
always @(posedge clk ) begin 
    if (!stall) begin 
        if (i == 14 ) begin
            addr <= 0;
            opcode_i <= 0;  
        end
        else begin
            addr <= test_addresses[i][20:7];
            opcode_i <= test_addresses[i][6:0]; 
            i <= i+1;
        end
    end
    else begin 
        addr <= addr; 
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
    opcode_i = 0; 
    funct3_i = 11; 
    store_data = 0; 
    #1000
    $finish; 
end 

initial begin 
    $dumpfile("cache.vcd");
    $dumpvars(0, cache_tb);  
end


endmodule
