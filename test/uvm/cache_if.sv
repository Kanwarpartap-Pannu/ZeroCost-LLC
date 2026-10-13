`include "constants.svh"

interface cache_if #(
    parameter int DWIDTH = 32,
    parameter int AWIDTH = 32
)(
     input logic clk,
     input logic reset
);


     logic [2:0] op; 
     logic [AWIDTH-1:0] address; 
     logic [DWIDTH-1:0] store_data; 
     logic [2:0] funct3_i; 
     logic [$clog2(`CORE_COUNT)-1:0] requester;  

     logic [DWIDTH-1:0] data_out; 
     logic stall; 
     logic data_valid; 

endinterface
