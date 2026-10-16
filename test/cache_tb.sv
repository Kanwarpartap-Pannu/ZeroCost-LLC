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
logic [2:0] op; 
logic [2:0] funct3_i;  
logic [DWIDTH-1:0] data_out;
logic stall;  
logic data_valid;
logic [$clog2(`CORE_COUNT)-1:0] requester; 

// dut 
cache_controller #(
) cache (.*); 

logic start; 
initial begin 
    clk = 0; 
    reset = 0;  
    op = 0; 
    funct3_i = 0;
    store_data = 0; 
    address = 0;
    start=0; 
    i = 0;
    $readmemh("test/test_files/test_address.x", test_addresses); 
end

always #1 clk = ~clk;

logic [55:0] test_addresses [0:20];
int my_array[21] = '{0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0}; 
// Logic to test the LRU replacement Policy
integer i; 
always @(posedge clk ) begin 
    if ((!stall) && start) begin 
        if (i == 21 ) begin
            address <= 0;
            op <= 0; 
            store_data <= 0;  
            requester <= 0; 
        end
        else begin
            address <= test_addresses[i][55:40];
            op <= test_addresses[i][34:32];
            store_data <= test_addresses[i][31:0]; 
            requester <= my_array[i]; 
            i <= i+1;
        end
    end
    else begin 
        address <= address; 
    end
end 



// simulation 
initial begin 
    $display("SIMULATION START"); 
    op = 0; 
    funct3_i = 11; 
    store_data = 0;
    #2
    start = 1; 
    reset = 1;  
    #1000
    $finish; 
end 

initial begin 
    $dumpfile("sim/sim_out/cache.vcd");
    $dumpvars(0, cache_tb);  
end


endmodule
