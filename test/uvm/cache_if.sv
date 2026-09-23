`include "constants.svh"

interface cache_if #(
    parameter int DWIDTH = 32
    parameter int AWIDTH = 32
    parameter int AWIDTH = 32
)(
     input logic clk
);

     logic clk; 

     logic reset; 
     logic [AWIDTH-1:0] addr; 
     logic [DWIDTH-1:0] store_data; 
     logic [6:0] opcode_i; 
     logic [2:0] funct3_i; 
     logic [$clog2(`CORE_COUNT)-1:0] requester;  

     logic [DWIDTH-1:0] data_out; 
     logic data_valid; 
     logic stall;

endinterface
