/*
*
*
*
*
*/


// MODULE
module data_array #(
	parameter int DWIDTH = 32,
	parameter int WAY_BITS = 3, 
	parameter int SET_BITS = 2, 
	parameter int BLOCK_SIZE = `BLOCK_SIZE, 
	parameter int NUM_SETS = `NUM_SETS, 
	parameter int OFFSET_BITS = 3, 
	parameter int WAYS = `WAYS
	)(
	input logic clk, 
	input logic reset, 

	input logic [WAY_BITS-1:0] way_i, 
	input logic [SET_BITS-1:0] set_i, 
	input logic [OFFSET_BITS-1:0] offset,
	input logic [1:0] D_op, 
	input logic [2:0] funct3_i, 
	
	input logic [DWIDTH-1:0] store_data, 
	input logic [(BLOCK_SIZE*8)-1:0] cache_line_i,
	
	output logic [(BLOCK_SIZE*8)-1:0] way_data_o  
		);

// Data Array, row is a set, col is a block containing data 
logic [0:NUM_SETS-1][0:WAYS-1][(BLOCK_SIZE*8)-1:0] data_array; 
logic [(BLOCK_SIZE*8)-1:0] temp;  

// Return set indexed 
assign way_data_o = data_array[set_i][way_i]; 

always_comb begin
    temp = data_array[set_i][way_i];
    // size encoded logic 
    case (funct3_i)
        3'b000, 3'b100:  temp[offset*8 +: 32] = store_data[31:0];  // word 
        3'b001, 3'b101:  temp[offset*8 +: 16] = store_data[15:0]; // halfword 
        3'b010:          temp[offset*8 +: 8]= store_data[7:0]; // byte 
        3'b111, 3'b011:          temp[offset*8 +: 32]= store_data[31:0]; // doubleword
        default:         temp[offset*8 +: 8]= store_data[7:0]; // default to byte 
    endcase
end

always_ff @(posedge clk) begin 
	unique case (D_op)
		D_STORE: begin 
			data_array[set_i][way_i] <= temp; 
		end 
		D_WRITE: begin 
			data_array[set_i][way_i] <= cache_line_i; 
		end
		D_READ: ; 
		D_IDLE: ; 
		default: ; 

	endcase 

	end

endmodule : data_array 
