/*
    Module: Tag Array 

    Description: A 2D Array storing the Tag for each block of data stored in each set 
    of the cache in the data array. Tracks each Tag based on LRU policy to handle conflicts. 
    Able to add Tag into the array and search for a given tag in the array. Returns whether there
    was a cache hit or miss, and which block was a hit or needs to be replaced.   

*/

module tag_array #(
    parameter int AWIDTH = $clog2(`MEM_DEPTH), 
    parameter int TAG_BITS = 3,
    parameter int INDEX_BITS = 2, 
    parameter int NUM_SETS = 4,
    parameter int OFFSET_BITS = 3,
    parameter int LOOKUP_WIDTH = 4 
)(
    input logic                  clk,
    input logic                  idle, 
    input logic [TAG_BITS-1:0]   tag_i, 
    input logic [INDEX_BITS-1:0] index_i, 

    // Control Logic
    input logic                    replace_en,
    input logic                    share_en, // 0 means keep state unchanged, 1 means toggle
    input logic                    store_en,
    input logic                    evict_en,
    input logic                    enable, 
    input logic                    valid_or_not, 
    input logic [$clog2(WAYS)-1:0] way_i,  
    input logic                    relocate_en, 
    input logic [TAG_BITS-1:0]      tag_metadata_i,  
    input logic [1:0]               relocate_state, 

    output logic [$clog2(WAYS)-1:0] cre_way_o,   
    output logic                    hit, 
    output logic [$clog2(WAYS)-1:0] hit_way_o,  
    output logic [$clog2(WAYS)-1:0] replace_way_o,
    output logic [TAG_BITS-1:0]              replace_way_meta_data,
    output logic [1:0]              way_i_state_o,
    output logic [AWIDTH-1:0]       replace_address,
    output logic                    has_re_out,
    output logic [INDEX_BITS-1:0]   relocate_set_o, 
    output logic [$clog2(2*WAYS)-1:0]   relocate_way_o,
);

localparam int WAYS = `WAYS; 

// Tag Array, Each row is a set, each column holds tag for the block 
logic [TAG_BITS-1:0]     tag_array  [0:NUM_SETS-1][0:WAYS-1]; 

// State Array: 0 = Invalid, 1 = Clean, 2 = Dirty
logic [1:0]              valid_array [0:NUM_SETS-1][0:WAYS-1]; 

// Relocated Array: 0 = Not Relocated, 1 = Relocated 
logic                    relocated_array [0:NUM_SETS-1][0:WAYS-1]; 

// Shared Array: 0 = Unshared, 1 = Shared 
logic                    shared_array  [0:NUM_SETS-1][0:WAYS-1];

// LRU Array 
logic [$clog2(WAYS)-1:0] LRU_array  [0:NUM_SETS-1][0:WAYS-1]; 

// Search for tag in the set, 1 for hit 0 for miss 
logic [$clog2(WAYS)-1:0] hit_way; 
assign hit_way_o = hit_way; 


logic [$clog2(WAYS)-1:0] cre_way; 

//reconstructed address for evicted way
assign replace_address = {tag_array[index_i][replace_way],index_i,{OFFSET_BITS{1'b0}}};
assign way_i_state_o = ((valid_array[index_i][way_i]==2)) ? ((!(relocated_array[index_i][way_i])) ? 2'b11 : 2'b01) : ((!(relocated_array[index_i][way_i])) ? 2'b00 : 2'b10) ;

// 00 = no re clean
// 01 = re dirty 
// 10 = re clean 
// 11 = no re dirty 

always_comb begin 
   hit=0; 
   hit_way=0;  
   for (int i = 0; i<WAYS; i++) begin 
        if ((tag_array[index_i][i] == tag_i) 
        && (valid_array[index_i][i] != 0) 
        && (!relocated_array[index_i][i])) begin 
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
        if (valid_array[index_i][i] == 0) begin 
            empty_way = i; 
            empty_found = 1; 
        end 
    end 
end 

assign cre_way_o = empty_found ? empty_way : cre_way; 



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
logic [$clog2(WAYS)-1:0] reset_way = way_i;
always_ff @(posedge clk) begin 
    if (!idle) begin // Do not update ages if cache not being used 
        for (int i=0; i<WAYS; i++) begin 
            if (i == reset_way) begin 
                LRU_array[index_i][i] <= 0; 
            end
            else if ( ((LRU_array[index_i][i] < LRU_array[index_i][reset_way]) 
                        && (valid_array[index_i][reset_way] != 0)) ) begin 

                LRU_array[index_i][i] <= LRU_array[index_i][i] + 1; 
            end 
        end
    end
end 

// Block to replace logic
logic [$clog2(WAYS)-1:0] replace_way; 
assign replace_way = way_i; 
assign replace_way_o = oldest_way; 

assign replace_way_meta_data = tag_array[index_i][oldest_way];

// Cache Insertion Logic 
always_ff @(posedge clk) begin  
        if (replace_en && !(share_en)) begin 
            tag_array[index_i][way_i] <= tag_metadata_i; 
            valid_array[index_i][way_i] <= 1;
            shared_array[index_i][way_i] <= ~shared_array[index_i][way_i];
            // if inserting into fresh block increment all other valid blocks age
            if (valid_array[index_i][way_i] == 0) begin
                for (int i=0; i<WAYS; i++) begin 
                    if ( (i != way_i ) && (valid_array[index_i][i] != 0)) begin 
                        LRU_array[index_i][i] <= LRU_array[index_i][i] + 1; 
                    end 
                end 
            end
        end

        else if (store_en) begin 
            valid_array[index_i][hit_way] <= 2;
        end 

        if (relocate_en) begin
            relocated_array[index_i][cre_way] <= 1;
            tag_array[index_i][cre_way] <= tag_metadata_i; 
            valid_array[index_i][cre_way] <= valid_or_not ? 2'b10 : 2'b01;
            shared_array[index_i][cre_way] <= 1;
            // if inserting into fresh block increment all other valid blocks age
            if (valid_array[index_i][cre_way] == 0) begin
                for (int i=0; i<WAYS; i++) begin 
                    if ( (i != cre_way ) && (valid_array[index_i][i] != 0)) begin 
                        LRU_array[index_i][i] <= LRU_array[index_i][i] + 1; 
                    end 
                end 
            end
        end

        if (share_en) begin
            tag_array[index_i][way_i] <= tag_metadata_i; 
            shared_array[index_i][way_i] <= ~shared_array[index_i][way_i];
        end
end 


// Cache Eviction Logic 
always_ff @(posedge clk) begin
    if (evict_en) begin
        if (relocated_array[index_i][way_i]) begin
            valid_array[index_i][way_i] <= 0;
            relocated_array[index_i][way_i] <= 0;  
        end
        valid_array[index_i][way_i] <= valid_or_not ? 2'b10 : 2'b01;
        shared_array[index_i][way_i] <= 0;
        tag_array[index_i][way_i] <= tag_metadata_i; 
    end
    if (enable) begin
        valid_array[index_i][way_i] <= 0;
        relocated_array[index_i][way_i] <= 0;
        shared_array[index_i][way_i] <= 0;
    end
end


// Has Relocation Entry Vector
logic has_re; 
// Look for Non Privately Cached Clean Blocks and set HASRE to zero 
// if not found
always_comb begin
    has_re=0; 
    cre_way=0;
    for (int i=0; i<WAYS; i++) begin
        if ((shared_array[index_i][i] == 0) && (valid_array[index_i][i] != 2)) begin
            has_re = 1;  
            cre_way = i; 
        end
    end
end

assign has_re_out = has_re; 
 

endmodule : tag_array