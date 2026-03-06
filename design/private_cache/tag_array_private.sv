/*
    Module: Private Cache Tag Array 

    Description: A 2D Array Storing Tag for each block. Tracks LRU and Tracks the state of 
    the data according to MESI protocol handles any conflicts.    

*/

module tag_array_private #(
    parameter int TAG_BITS=3,
    parameter int INDEX_BITS=2, 
    parameter int NUM_SETS=4 
)(
    input logic                  clk,
    input logic                  idle, 
    input logic [TAG_BITS-1:0]   tag_i, 
    input logic [INDEX_BITS-1:0] index_i, 
    input logic replace_en,
    output logic                 hit,
    output logic [$clog2(WAYS)-1:0] hit_way_o,  
    output logic [$clog2(WAYS)-1:0] replace_way_o 
);

// Coherence Protocol States 
parameter MODIFIED = 2'b00, EXCLUSIVE = 2'b01, SHARED = 2'b10, INVALID = 2'b11;   


localparam int WAYS = `WAYS; 

// Tag Array, Each row is a set, each column holds tag for the block 
logic [TAG_BITS-1:0]     tag_array  [0:NUM_SETS-1][0:WAYS-1]; 

// Array to store if each block has valid or invalid data
logic                    valid_array [0:NUM_SETS-1][0:WAYS-1]; 

// LRU Array 
logic [$clog2(WAYS)-1:0] LRU_array  [0:NUM_SETS-1][0:WAYS-1]; 

// Coherence State Array 
logic [1:0] Coherence_array  [0:NUM_SETS-1][0:WAYS-1]; 

// Search for tag in the set, 1 for hit 0 for miss 
logic [$clog2(WAYS)-1:0] hit_way; 
assign hit_way_o = hit_way; 

always_comb begin 

   for (int i = 0; i<WAYS; i++) begin 
        if ((tag_array[index_i][i] == tag_i) && (valid_array[index_i][i] != 0)) begin 
            hit_way = i; 
            hit = 1; 
        end 
        else begin 
            hit = 0; 
            hit_way = 0; 
        end
    end  

end 

// Look for Empty Block 
logic [$clog2(WAYS)-1:0] empty_way; 
logic empty_found; 
always_comb begin 
    empty_way = 0;
    empty_found=0;  
    for (int i = 0; i<WAYS; i++) begin 
        if (valid_array[index_i][i] == 0) begin 
            empty_way = i; 
            empty_found = 1; 
        end 
    end 
end 

// LRU Logic 
logic [$clog2(WAYS)-1:0] oldest_way;  
always_comb begin 
    oldest_way = 0;
    for (int i = 0; i<WAYS; i++) begin 
        if (LRU_array[index_i][i] >= LRU_array[index_i][empty_way]) begin 
            oldest_way = i;  
        end 
    end 
end 

// Block aging logic for hit and replacement 
logic [$clog2(WAYS)-1:0] reset_way = hit ? hit_way : replace_way;
always_ff @(posedge clk) begin 
    if (!idle) begin // Do not update ages if cache not being used 
        for (int i=0; i<WAYS; i++) begin 
            if (i == reset_way) begin 
                LRU_array[index_i][i] <= 0; 
            end
            else if ( (LRU_array[index_i][i] < LRU_array[index_i][reset_way]) && (valid_array[index_i][i] != 0)) begin 
                LRU_array[index_i][i] <= LRU_array[index_i][i] + 1; 
            end 
        end
    end
end 

// Block to replace logic
logic [$clog2(WAYS)-1:0] replace_way; 
assign replace_way = empty_found ? empty_way : oldest_way; 
assign replace_way_o = replace_way; 

// Cache Insertion Logic 
always_ff @(posedge clk) begin  
        if (replace_en) begin 
            tag_array [index_i][replace_way] <= tag_i; 
            valid_array [index_i][replace_way] <= 1;
        end 
end 


endmodule : tag_array
