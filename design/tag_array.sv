/*
    Module: Tag Array 

    Description: A 2D Array storing the Tag for each block of data stored in each set 
    of the cache in the data array. Tracks each Tag based on LRU policy to handle conflicts. 
    Able to add Tag into the array and search for a given tag in the array. Returns whether there
    was a cache hit or miss, and which block was a hit or needs to be replaced.   

*/

// Set, Way Tuple struct 
typedef struct packed {
    logic [$clog2(`NUM_SETS)-1:0] set;
    logic [$clog2(`WAYS)-1:0] way; 
} set_way_tuple;

module tag_array #(
    parameter int AWIDTH = $clog2(`MEM_DEPTH), 
    parameter int TAG_BITS = 3,
    parameter int INDEX_BITS = 2, 
    parameter int NUM_SETS = 4,
    parameter int OFFSET_BITS = 3,
    parameter int LOOKUP_WIDTH = 4
)(
    input logic                  clk,
    input logic                  reset, 
    input logic                  idle, 
    input logic [TAG_BITS-1:0]   tag_i, 
    input logic [INDEX_BITS-1:0] index_i, 
    input logic [$clog2(`CORE_COUNT)-1:0] requester, 
    input logic                  replace_en,
    input logic                  store_en,
    input logic                  reset_search, 
    input logic                  search_en, 

    output logic                    hit,
    output logic                    search_done, 
    output logic [$clog2(WAYS)-1:0] hit_way_o,  
    output logic [$clog2(WAYS)-1:0] replace_way_o,
    output logic [1:0]              replace_way_state,
    output logic [AWIDTH-1:0]       replace_address
);

localparam int WAYS = `WAYS; 


// These Structures track the tags and their meta data the tag array is
// slightly larger than the data array 

// Tag Array, Each row is a set, each column holds tag for the block 
logic [TAG_BITS-1:0]     tag_array  [0:NUM_SETS-1][0:WAYS-1]; 

// Set, Way Meta Data 
set_way_tuple relocation_data[NUM_SETS][WAYS]; 

// The following data structures track the state of the ways in the 
// data array 

// State Array: 0 = Invalid, 1 = Clean, 2 = Dirty
logic [1:0]              valid_array [0:NUM_SETS-1][0:WAYS-1]; 

// LRU Array 
logic [$clog2(WAYS)-1:0] LRU_array  [0:NUM_SETS-1][0:WAYS-1];

// Sharers Array
logic [`CORE_COUNT-1:0] sharers_array  [0:NUM_SETS-1][0:WAYS-1];

// Has Relocation Entry Vector
logic [NUM_SETS-1:0] has_re; 
logic [$clog2(NUM_SETS)-1:0] next_rs; // next relocation set  



// Search for tag in the set, 1 for hit 0 for miss 
logic [$clog2(WAYS)-1:0] hit_way; 
assign hit_way_o = hit_way; 

// Reconstructed address for evicted way
assign replace_address = {tag_array[index_i][replace_way],index_i,{OFFSET_BITS{1'b0}}};

// Reset logic 
always_ff @(posedge clk) begin 
    if (!reset) begin 
        has_re <= 1; 
        for (int i = 0; i < NUM_SETS; i++) begin
           for (int j = 0; j < WAYS; j++) begin
                tag_array[i][j] <= 0; 
                valid_array[i][j] <= 0; 
                LRU_array[i][j] <= 0; 
                sharers_array[i][j] <= 0; 
                relocation_data[i][j] <= 0; 
            end 
        end
    end
end

// Hit detection logic with parametrizable lookup width 
logic [$clog2(WAYS)-1:0] lookup_way; 
logic current_idx; 
logic [TAG_BITS-1:0]     lookup_array  [0:LOOKUP_WIDTH-1]; 
always_ff @(posedge clk) begin
    if (reset_search) begin
        lookup_way <= 0; 
        search_done <= 0;
        current_idx <= 1; 
    end
    else if (search_en && (!search_done)) begin
        current_idx <= 0; 
        if (hit) begin
            search_done <= 1; 
        end 
        else begin
            for (int i = 0; i<LOOKUP_WIDTH; i++) begin 
                lookup_array[i] <= tag_array[index_i][(lookup_way+i)]; 
            end
            if ((lookup_way+LOOKUP_WIDTH) == (WAYS)) begin
                search_done <= 1; 
                lookup_way <= lookup_way; 
            end
            else begin
                lookup_way <= lookup_way + LOOKUP_WIDTH;
            end
        end
    end
    else begin 
        lookup_way <= lookup_way; 
        search_done <= search_done; 
    end
end

always_comb begin 
   hit=0; 
   hit_way=0; 
   for (int i = 0; i<LOOKUP_WIDTH; i++) begin 
        
        if ((lookup_array[i] == tag_i) 
        && (valid_array[index_i][lookup_way+i] != 0) 
        && (current_idx != 1) && 
        (relocation_data[index_i][lookup_way+i].set == index_i)) begin 
            hit_way = lookup_way + i; 
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

// Look for Non Privately Cached Clean Blocks and set HASRE to zero 
// if not found
logic [$clog2(WAYS)-1:0] unshared_way; 
logic unshared_found; 
always_comb begin
    unshared_found = 0;
    unshared_way = 0;  
    for (int i=0; i<WAYS; i++) begin
        if ((sharers_array[index_i][i] == 0) && (valid_array[index_i][i] != 2)) begin
            unshared_found = 1; 
            unshared_way = i; 
        end
    end
end

always_ff @(posedge clk) begin
    if (!(unshared_found || empty_found)) begin
        has_re[index_i] <= 0; 
    end
end

// Next Relocation set Logic 
always_comb begin 
    next_rs = 0; 
    for (int i=0; i<WAYS; i++) begin
        if (has_re[i] == 1) begin
            next_rs = i; 
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
logic [$clog2(WAYS)-1:0] reset_way = hit_way;
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
assign replace_way = empty_found ? empty_way : (unshared_found ? unshared_way : oldest_way); 
assign replace_way_o = replace_way; 
// 0 invalid, 1 Unshared Clean, 2 Shared or Dirty 
assign replace_way_state = valid_array[index_i][replace_way]; 


// Cache Insertion Logic 
always_ff @(posedge clk) begin  
        if (replace_en) begin 
            tag_array[index_i][replace_way] <= tag_i; 
            valid_array[index_i][replace_way] <= 1;
            sharers_array[index_i][replace_way][requester] <= 1; 
            relocation_data[index_i][replace_way].set <= index_i;
            relocation_data[index_i][replace_way].way <= replace_way;
            // if inserting into fresh block increment all other valid blocks age
            if (valid_array[index_i][replace_way] == 0) begin
                for (int i=0; i<WAYS; i++) begin 
                    if ( (i != replace_way ) && (valid_array[index_i][i] != 0)) begin 
                        LRU_array[index_i][i] <= LRU_array[index_i][i] + 1; 
                    end 
                end 
            end
        end
        else if (store_en) begin
            sharers_array[index_i][replace_way][requester] <= 1; 
            valid_array[index_i][hit_way] <= 2;
        end 
end 


endmodule : tag_array
