/* 
    Module: Data Array 

Description: A 2D array storing cache lines with a certain set association, 
supports replacing cache lines and returns cache lines with indexed entire set.  


*/

module data_array # (
    parameter int TAG_BITS=3,
    parameter int INDEX_BITS=2, 
    parameter int OFFSET_BITS=3, 
    parameter int NUM_SETS=4,    
    parameter int BLOCK_SIZE=`BLOCK_SIZE,
    parameter int WAYS=4,
    parameter int DWIDTH=32
)(
    input logic                      clk, 
    input logic [INDEX_BITS-1:0]     index_i, 
    input logic [OFFSET_BITS-1:0]    offset,
    input logic [$clog2(WAYS)-1:0]   replace_way, 
    input logic [$clog2(WAYS)-1:0]   hit_way, 
    input logic [(BLOCK_SIZE*8)-1:0] cache_line_i, 
    input logic [DWIDTH-1:0]         store_data, 
    input logic [2:0]                funct3_i, 
    input logic                      replace_en,
    input logic                      store_en,
    output logic [0:WAYS-1][(BLOCK_SIZE*8)-1:0] set_o 
); 


// Data Array, row is a set, col is a block containing data 
logic [0:NUM_SETS-1][0:WAYS-1][(BLOCK_SIZE*8)-1:0]     data_array ; 
logic [(BLOCK_SIZE*8)-1:0] temp;  
// Return set indexed 
assign set_o = data_array[index_i]; 

always_comb begin
    temp = data_array[index_i][hit_way];
    // size encoded logic 
    case (funct3_i)
        3'b000, 3'b100:  temp[offset*8 +: 32] = store_data[31:0];  // word 
        3'b001, 3'b101: temp[offset*8 +: 16] = store_data[15:0]; // halfword 
        3'b010:          temp[offset*8 +: 8]= store_data[7:0]; // byte 
        3'b111, 3'b011:          temp[offset*8 +: 32]= store_data[31:0]; // doubleword
        default:         temp[offset*8 +: 8]= store_data[7:0]; // default to byte 
    endcase
end


// Replace data on cache miss with new data line  
always_ff @(posedge clk) begin 
    if (replace_en) begin 
        data_array[index_i][replace_way] <= cache_line_i; 
    end 

    if (store_en) begin 
        data_array[index_i][hit_way] <= temp;  
    end 

end 


endmodule : data_array
