/* 
    Module: Data Array 

Description: A 2D array storing cache lines with a certain set association, 
supports replacing cache lines and returns cache lines with indexed entire set.  


*/

module data_array # (
    parameter int TAG_BITS=3,
    parameter int INDEX_BITS=2, 
    parameter int NUM_SETS=4,    
    parameter int BLOCK_SIZE=`BLOCK_SIZE,
    parameter int WAYS=4
)(
    input logic                      clk, 
    input logic [INDEX_BITS-1:0]     index_i, 
    input logic [$clog2(WAYS)-1:0]   replace_way, 
    input logic [(BLOCK_SIZE*8)-1:0] cache_line_i, 
    input logic                      replace_en,
    output logic [0:WAYS-1][(BLOCK_SIZE*8)-1:0] set_o 
); 


// Data Array, row is a set, col is a block containing data 
logic [0:NUM_SETS-1][0:WAYS-1][(BLOCK_SIZE*8)-1:0]     data_array ; 

// Return set indexed 
assign set_o = data_array[index_i]; 

// Replace data on cache miss with new data line  
always_ff @(posedge clk) begin 
    if (replace_en) begin 
        data_array[index_i][replace_way] <= cache_line_i; 
    end 

end 


endmodule : data_array
