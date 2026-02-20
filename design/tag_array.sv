/*
    Module: Tag Array 

    Description: A 2D Array storing the Tag for each block of data stored in each set 
    of the cache in the data array. Tracks each Tag based on LRU policy to handle conflicts. 
    Able to add Tag into the array and search for a given tag in the array. 

*/

module tag_array #(
    parameter int TAG_BITS=3,
    parameter int INDEX_BITS=2, 
    parameter int NUM_SETS=4 
)(
    input logic                  clk, 
    input logic [TAG_BITS-1:0]   tag_i, 
    input logic [INDEX_BITS-1:0] index_i, 
    output logic                 hit 
);

localparam int WAYS = `WAYS; 

// Tag Array, Each row is a set, each column holds tag for the block 
logic [TAG_BITS-1:0]     tag_array  [0:NUM_SETS-1][0:WAYS]; 

// Array to store flags for each block for now single flag for valid or invalid
logic                    flag_array [0:NUM_SETS-1][0:WAYS]; 

// LRU Array 
logic [$clog2(WAYS)-1:0] LRU_array  [0:NUM_SETS-1][0:WAYS]; 

// Search for tag in the set, 1 for hit 0 for miss
logic [$clog2(WAYS)-1:0] hit_way; 
always_comb begin

   for (int i = 0; i<WAYS; i++) begin 
        if (tag_array_array[index_i][i] == tag_i) begin 
            hit_way = i; 
            hit = 1; 
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
        if (flag_array[index_i][i] == 0) begin 
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

// Block to replace logic 
assign replace_way = empty_found ? empty_way : oldest_way; 

// Block aging logic for hit and replacement 
logic [$clog2(WAYS)-1:0] reset_way = hit ? hit_way : replace_way; 
always_ff @(posedge clk) begin 
    for (int i=0; i<WAYS; i++) begin 
        if (i == reset_way) begin 
            LRU_array[index_i][i] <= 0; 
        end
        else if ( (LRU_array[index_i][i] < LRU_array[index_i][reset_way]) && (flag_array[index_i][i] != 0)) begin 
            LRU_array[index_i][i] <= LRU_array[index_i][i] + 1; 
        end 
    end
end 

// Cache Insertion Logic 
always_ff @(posedge clk) begin 
    if (!hit) begin 
        tag_array [index_i][replace_way] <= tag_i; 
        flag_array [index_i][replace_way] <= 1;
    end 

end 


endmodule : tag_array