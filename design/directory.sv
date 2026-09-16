/*
    Module: Directory 

    Description: The Directory is a decoupled data structure that stores the Tag 
    of blocks currently being stored in any private cache. It also store the meta
    data of the set and way in which the tag is being store inside the LLC. 
*/

// Set, Way Tuple struct 
typedef struct packed {
    logic [$clog2(`NUM_SETS)-1:0] set;
    logic [$clog2(`WAYS)-1:0] way; 
} set_way_tuple;

module directory #(
    parameter int AWIDTH = $clog2(`MEM_DEPTH), 
    parameter int TAG_BITS = 3,
    parameter int INDEX_BITS = 2, 
    parameter int NUM_SETS = 4,
    parameter int OFFSET_BITS = 3,
    parameter int LOOKUP_WIDTH = 2
)(
    input logic                  clk,
    input logic                  reset, 
    input logic [TAG_BITS-1:0]   tag_i, 
    input logic [INDEX_BITS-1:0] index_i, 
    input logic [$clog2(`CORE_COUNT)-1:0] requester, 
    input logic [$clog2(`WAYS*2)-1:0] tag_way,
    input logic [$clog2(NUM_SETS)-1:0] relocate_set,
    input logic [$clog2(`WAYS*2)-1:0] relocate_way, 


    // Control Signals 
    input logic                  insert_en,
    input logic                  share_en,
    input logic                  evict_en,
    input logic                  relocate_en, 
    input logic                  reset_search, 
    input logic                  search_en, 

    output logic                    insert_en_tag, 
    output logic                    evict_en_tag, 
    output logic [TAG_BITS-1:0]     tag_metadata_o, 
    output logic                    hit,
    output logic                    search_done, 
    output logic [$clog2(WAYS)-1:0] hit_way_o, 
    output logic [$clog2(NUM_SETS)-1:0] hit_set_o, 
    output logic [AWIDTH-1:0]       replace_address, 
    output logic                    evicting_state
);

localparam int WAYS = `WAYS; 

// Tag Array, Each row is a set, each column holds tag for the block 
logic [TAG_BITS-1:0]     tag_array  [0:NUM_SETS-1][0:(2*WAYS)-1];

// Set, Way Meta Data 
set_way_tuple relocation_data [NUM_SETS][2*WAYS];

// State Array: 0 = Invalid/Not Shared, 1 = Shared, 2 = Shared & Modified 
logic [1:0]              valid_array [0:NUM_SETS-1][0:(2*WAYS)-1]; 

// Sharers Array
logic [`CORE_COUNT-1:0] sharers_array  [0:NUM_SETS-1][0:(2*WAYS)-1];
logic [$clog2(`CORE_COUNT)-1:0] num_sharers_array  [0:NUM_SETS-1][0:(2*WAYS)-1];
logic [$clog2(`WAYS*`NUM_SETS):0] q; 
// Search for tag in the set, 1 for hit 0 for miss 
logic [$clog2(WAYS)-1:0] hit_way;
logic [$clog2(NUM_SETS)-1:0] hit_set;
logic [$clog2(WAYS)-1:0] hit_way_dir;  
assign hit_way_o = hit_way; 
assign hit_set_o = hit_set; 

assign replace_address = {tag_array[index_i][hit_way_dir],index_i,{OFFSET_BITS{1'b0}}};
assign evicting_state =  ((num_sharers_array[index_i][hit_way_dir]-1) == 0);
// Reset logic 
always_ff @(posedge clk) begin 
    if (!reset) begin 
        for (int i = 0; i < NUM_SETS; i++) begin
           for (int j = 0; j < 2*WAYS; j++) begin
                tag_array[i][j] <= 0; 
                valid_array[i][j] <= 0; 
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
        q <= 0; 
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
            if ((lookup_way+LOOKUP_WIDTH) == (2*WAYS)) begin
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
   hit_way_dir = 0; 
   for (int i = 0; i<LOOKUP_WIDTH; i++) begin 
        
        if ((lookup_array[i] == tag_i) 
        && (valid_array[index_i][lookup_way+i] != 0) 
        && (current_idx != 1)) begin 
            hit_way = relocation_data[index_i][lookup_way+i].way; 
            hit_set = relocation_data[index_i][lookup_way+i].set; 
            hit = 1; 
            hit_way_dir = lookup_way+i; 
        end 
    end  
end 


// Look for Empty Block 
logic [$clog2(2*WAYS)-1:0] empty_way; 
logic empty_found; 
always_comb begin 
    empty_way = 0;
    empty_found=0;  
    for (int i = 0; i<(2*WAYS); i++) begin 
        if (valid_array[index_i][i] == 0) begin 
            empty_way = i; 
            empty_found = 1; 
        end 
    end 
end 



// Control Signals 
always_comb begin
    insert_en_tag = 0;
    evict_en_tag = 0; 
    if (insert_en) begin
        insert_en_tag = 1; 
        tag_metadata_o = {index_i, empty_way, '0};
    end
    else if ( evict_en) begin
        evict_en_tag = ((num_sharers_array[index_i][hit_way_dir]-1) == 0); 
        tag_metadata_o = tag_i; 
    end
    else if (relocate_en) begin
       tag_metadata_o = {index_i, tag_way, '0}; 
    end
end


// Cache Insertion And Relocation Logic 
always_ff @(posedge clk) begin  
    if (insert_en) begin 
        tag_array[index_i][empty_way] <= tag_i; 
        valid_array[index_i][empty_way] <= 1; 
        sharers_array[index_i][empty_way][requester] <= 1; 
        num_sharers_array[index_i][empty_way] <= num_sharers_array[index_i][empty_way] + 1;
        relocation_data[index_i][empty_way].set <= index_i;
        relocation_data[index_i][empty_way].way <= tag_way;
    end

    else if (share_en) begin
        if (!sharers_array[index_i][hit_way_dir][requester]) begin
            sharers_array[index_i][hit_way_dir][requester] <= 1;
            num_sharers_array[index_i][hit_way_dir] <= num_sharers_array[index_i][hit_way_dir] + 1; 
        end
    end

    else if (evict_en) begin
        sharers_array[index_i][hit_way_dir][requester] <= 0;
        num_sharers_array[index_i][hit_way_dir] <= num_sharers_array[index_i][hit_way_dir] - 1; 
        if ((num_sharers_array[index_i][hit_way_dir]-1) == 0) begin
            valid_array[index_i][hit_way_dir] <= 0;
        end
    end

    else if (relocate_en) begin
        relocation_data[index_i][tag_way].set <= relocate_set;
        relocation_data[index_i][tag_way].way <= relocate_way; 
    end

end 


endmodule : directory 
