/* 
* Module: Tag Array 
*
	* Description:  
*
*
* */

`include "constants.svh"
parameter int TAG_BITS = 3; 

// TAG ARRAY STRUCT 
// Stores Tags
// 	Tag 
// 	Sharers ( list of which cores are currently caching this tag)
// 	Set (set of corresponding entry in data array)
// 	Way (way of corresponding entry in data array)
typedef struct packed {
	logic [TAG_BITS-1:0] tag;
	logic [`CORE_COUNT-1:0] sharers; 
	logic [$clog2(`NUM_SETS)-1:0] set; 
	logic [$clog2(`WAYS)-1:0] way; 
} tag_array_e; 

// TAG ARRAY METADATA STRUCT 
// Stores states of each tag entry
// 	Empty (is current way a valid entry)
// 	Clean (is current way storing clean or dirty data)
// 	Relocated (was the current way relocated ) 
// 	Shared (is the current way in a private cahce)
typedef struct packed {
	logic empty; 
	logic clean; 
	logic relocated; 
	logic shared; 
} tag_metadata_e; 

// DATA ARRAY METADATA STRUCT
// Stores state of each data entry 
// 	Empty (is current way a valid entry)
// 	is_cre (can current way support relocation)
// 	LRU (Age of stored block)
// 	Set (set of corresponding entry in tag array)
// 	Way (way of corresponding entry in tag array)
typedef struct packed {
	logic empty; 
	logic is_cre; 
	logic [$clog2(`WAYS)-1:0] LRU; 
	logic [$clog2(`NUM_SETS)-1:0] set; 
	logic [$clog2(`WAYS)-1:0] way; 
} data_metadata_e;



// MODULE 
module tag_array #(
	parameter int TAG_BITS = 3, 
	parameter int SET_BITS = 2, 
	parameter int NUM_SETS = `NUM_SETS, 
	parameter int WAYS = `WAYS
)(
	// 
	input logic clk, 
	input logic reset, 

	input logic [TAG_BITS-1:0] tag_i, 
	input logic [SET_BITS-1:0] set_i, 
	input logic [$clog2(`CORE_COUNT)-1:0] requester, 
	input logic [3:0] T_op, 	

	output logic [$clog2(`WAYS)-1:0] way_out, 
	output logic [SET_BITS-1:0] set_out, 
	output logic hit, 
	output logic relocate_ctrl,
	output logic evict_ctrl 
	); 

parameter int WAY_BITS = $clog2(`WAYS); 

// Capacity of entire privace cache 
parameter int CAPACITY = `CORE_COUNT * `PRIV_CAP;

// Data Structures 
tag_array_e tag_array [NUM_SETS][`WAYS]; 
tag_metadata_e tag_metadata [NUM_SETS][`WAYS]; 
data_metadata_e data_metadata [NUM_SETS][`WAYS]; 

// Vector indicating whether a particular set holds a valid relocation entry  
logic [NUM_SETS-1:0] has_cre; 
// Pointer to next set with a valid relocation entry  
logic [$clog2(`NUM_SETS)-1:0] next_rs; 
// Q - Tracks dirty cache lines not currently cached in a private cache 
logic [$clog2(`LLC_CAP)-1:0] q;

// Next_rs logic 
always_comb begin
	for (int i=0; i <NUM_SETS; i++) begin 
		if (has_cre[i]) begin 
			next_rs = i; 
		end
	end
end


// TAG Search 
// Hit entry in tag array 
logic [WAY_BITS-1:0] hit_way_tag; 
// Hit entry in data array 
logic [WAY_BITS-1:0] hit_way; 
logic [$clog2(`NUM_SETS)-1:0] hit_set;
always_comb begin 
	// default values 
	hit=0; 
	hit_way=0; 
	hit_set=0; 
	hit_way_tag=0; 

	for (int i = 0; i<WAYS; i++) begin 
		// Hit if tag matches and entry is valid 
		if ( (tag_array[set_i][i].tag == tag_i) && 
			( !(tag_metadata[set_i][i].empty) ) ) begin 
			hit = 1; 
			hit_way_tag=i; 
			hit_way = tag_array[set_i][i].way;
			hit_set = tag_array[set_i][i].set;
		end
	end
end

// Find Unshared Clean or Empty entry in the data array  
// Flags Indicating if a empty or cre(clean relocation entry) has been found 
logic cre_found;  
logic empty_found;
// Pointers to empty or cre_way 
logic [WAY_BITS-1:0] empty_way; 
logic [WAY_BITS-1:0] cre_way;
// Free way is the way that can accomadate a new block 
// set to empty unless no block found in that case set as cre_way 
// if no cre_way relocation will happen first
logic [WAY_BITS-1:0] free_way;
assign free_way = empty_found ? empty_way : cre_way;  
// If relocation stage two seach in next_rs set otherwise search in inputted
// set
logic [$clog2(`NUM_SETS)-1:0] search_set;
assign search_set = (T_op == T_RELOC_TWO) ? next_rs : set_i;
always_comb begin
	cre_found=0; 
	cre_way=0; 
	empty_found=0; 
	empty_way=0; 
	for (int i = 0; i<WAYS; i++) begin 
		// look for empty block 
		if (data_metadata[search_set][i].empty) begin   
			empty_found=i; 
			empty_way=i; 
		end
		// look for clean and unshared block  
		if (data_metadata[search_set][i].is_cre) begin
			cre_found=1; 
			cre_way=i; 
		end
	end
end

// Find an empty entry in the tag, always guaranteed to exist due to structure
// of tag array
// Flag indicating if empty way was found 
logic empty_found_tag;
// Pointer to empty way tag 
logic [WAY_BITS-1:0] empty_way_tag; 
// Way to insert tag into 
logic [WAY_BITS-1:0] replace_way_tag; 
// If an empty way was found in the data insert into new tag way otherwise
// overwrite entry of tag being replaced 
assign replace_way_tag = empty_found ? empty_way_tag : data_metadata[set_i][free_way].way;
always_comb begin
	empty_found_tag=0; 
	empty_way_tag=0; 
	for (int i = 0; i<WAYS; i++) begin 
		if (tag_metadata[set_i][i].empty) begin   
			empty_found_tag=i; 
			empty_way_tag=i; 
		end
	end
end


// Find Oldest way (Least Recently Used) in data array 
logic [WAY_BITS-1:0] victim;
always_comb begin
	victim=0; 
	// If age is greater than least used way set as new least used way 
	for (int i = 0; i<WAYS; i++) begin 
		if ((data_metadata[set_i][i].LRU >= data_metadata[set_i][victim].LRU) && (!(data_metadata[set_i][i].empty))) begin 
			victim=i; 
		end
	end
end



// Ctrl flag logic 
logic [`CORE_COUNT-1:0] sharer_mask;
assign sharer_mask = `CORE_COUNT'(1) << requester;
logic cre_update;
always_comb begin 
	relocate_ctrl = 0;
	evict_ctrl = 0; 
	cre_update = 0;

	// If cache missed and no cre or empty entry exists in current state
	// set relocate_ctrl high to notify cache controller
	if ( ((T_op == T_LOAD) || (T_op == T_STORE)) && (!hit) ) begin 
		if ( (!(empty_found)) && (!(cre_found)) ) begin 
			relocate_ctrl = 1; 
		end	
	end

			
	if ( ((T_op == T_EVICT) || (T_op == T_WRITEBACK))  ) begin 
		// If no sharers remaining 
		if ( (tag_array[set_i][hit_way].sharers & ~sharer_mask) == 0) begin 
			// if clean update cre state of the set 
			if ((T_op != T_WRITEBACK) && (tag_metadata[set_i][hit_way_tag].clean)) begin
				cre_update=1; 
			end
			else begin 
				// check VINV if broken evict entry from cache  
				if ((`LLC_CAP - q) == CAPACITY ) begin 
					evict_ctrl = 1; 
				end
			end
		end
	end
end



// Update lru ages
always_ff @(posedge clk) begin
	// Update LRU AGES
	if ( ((T_op == T_LOAD) || (T_op == T_STORE)) && hit ) begin // Do not update ages if cache not being used 
		for (int i=0; i<WAYS; i++) begin 
			// Reset age of hit way 
			if (i == hit_way) begin 
				data_metadata[hit_set][hit_way].LRU <= 0; 
			end
			else if ( ((data_metadata[hit_set][i].LRU < data_metadata[hit_set][hit_way].LRU ) && (!(data_metadata[hit_set][i].empty))) ) begin 
				data_metadata[hit_set][i].LRU <= data_metadata[hit_set][i].LRU + 1; 
			end 
		end
	end
end

// reset logic 
always_ff @(posedge clk) begin 
	if (!reset) begin
		has_cre <= 0; 
		q <= 0; 
		for (int i =0; i<WAYS; i++) begin 
			tag_array[set_i][i].tag <= 0; 	
			tag_metadata[set_i][i].empty <= 1; 	
			tag_metadata[set_i][i].clean <= 1; 	
			tag_metadata[set_i][i].relocated <= 0; 	
			tag_metadata[set_i][i].shared <= 0; 	
			tag_array[set_i][i].sharers <= 0; 	
			tag_array[set_i][i].set <= 0; 	
			tag_array[set_i][i].way <= 0; 	

		end
		
		for (int i =0; i<WAYS; i++) begin 
			data_metadata[set_i][i].empty <= 1; 
			data_metadata[set_i][i].is_cre<= 0; 
			data_metadata[set_i][i].set<= 0; 
			data_metadata[set_i][i].way <= 0; 
			data_metadata[set_i][i].LRU <= 0; 
		end	
	end
end

//Set and Way Output logic this controls what set and way in data array is
//currently being accessed 
always_comb begin 
	set_out = hit_set; 
	way_out = hit_way;
	unique case (T_op) 
		T_INSERT: begin 
			set_out = set_i; 
			way_out = free_way;
		end
		T_RELOC_ONE: begin 
			set_out = set_i; 
			way_out = victim;
		end
		T_RELOC_TWO: begin 
			set_out = next_rs; 
			way_out = free_way;
		end
		default: begin 
			set_out = hit_set; 
			way_out = hit_way;
		end
	endcase
end

//Operation logic
logic [WAY_BITS-1:0] victim_way; 
logic [$clog2(`NUM_SETS)-1:0] victim_set;
logic overwrite_needed; // flag indicating whether to invalidate tag in reloc stage 3
always_ff @(posedge clk) begin 
	overwrite_needed <= 0; 
	unique case (T_op)
		T_IDLE: ; 
		// INSERT: ADD New tag into tag array 
		T_INSERT: begin 
			// if empty block in data this writes to new tag entry 
			// else it will overwrite the victim way entry 
			tag_array[set_i][replace_way_tag].tag <= tag_i; 	

			tag_metadata[set_i][replace_way_tag].empty <= 0; 	
			tag_metadata[set_i][replace_way_tag].clean <= 1; 	
			tag_metadata[set_i][replace_way_tag].relocated <= 0; 	
			tag_metadata[set_i][replace_way_tag].shared <= 0; 	

			tag_array[set_i][replace_way_tag].sharers[requester] <= 0; 	
			tag_array[set_i][replace_way_tag].set <= set_i; 	
			tag_array[set_i][replace_way_tag].way <= free_way; 	
			
			// Update data array tracking and set correct reverse pointer 
			data_metadata[set_i][free_way].empty <= 0; 
			data_metadata[set_i][free_way].is_cre <= 1; 
			data_metadata[set_i][free_way].set <= set_i; 
			data_metadata[set_i][free_way].way <= replace_way_tag; 
			data_metadata[set_i][free_way].LRU <= 0; 

		end

		// REMOVE: Remove an entry from tag_array 
		T_REMOVE: begin 
			tag_metadata[set_i][hit_way_tag].empty <= 1; 
			data_metadata[hit_set][hit_way].empty <= 1; 
			has_cre[hit_set] <= 1; 
		end

		// LOAD, STORE: 
		T_LOAD, T_STORE: begin
			if(hit) begin 
				//update sharers on hit
				tag_array[set_i][hit_way_tag].sharers[requester] <= 1;
				// update clean state if store operation 
				if (T_op == T_STORE) begin 
					tag_metadata[set_i][hit_way_tag].clean <= 0;
				end
				// if not previously shared update shared and
				// cre states
				if (!(tag_metadata[set_i][hit_way_tag].shared)) begin 
					tag_metadata[set_i][hit_way_tag].shared <= 1; 
					data_metadata[hit_set][hit_way].is_cre <= 0;
					has_cre[hit_set] <= (cre_found && (cre_way != hit_way)) ? 1 : 0;
					// if dirty entry this entry was
					// tracked under q so update q
					if ( !tag_metadata[set_i][hit_way_tag].clean) begin 
						q <= q-1; 
					end
				end
			end	
		end

		// RELOCATE STAGE ONE: Save victim set and way location in tag
		// array 
		T_RELOC_ONE: begin
				victim_set <= data_metadata[set_i][victim].set;
				victim_way <= data_metadata[set_i][victim].way;
		end

		// RELCOATE STAGE TWO: update victim way set,way tuple to cre
		// data entry and save reverse pointer to data entry, save
		// old reverse pointer  
		T_RELOC_TWO: begin
			tag_array[victim_set][victim_way].set <= next_rs;
			tag_array[victim_set][victim_way].way <= free_way;
			data_metadata[next_rs][free_way].set <= victim_set;
			data_metadata[next_rs][free_way].way <= victim_way;
			// if cre was not empty we need to evict corresponding
			// tag entry in next stage 
			if (!empty_found) begin 
				victim_set <= data_metadata[set_i][victim].set;
				victim_way <= data_metadata[set_i][victim].way;
				overwrite_needed <= 1; 
			end
		end

		// RELOCATE STAGE THREE: invalidate victim data entry and old
		// cre tag entry 
		T_RELOC_THREE: begin
			data_metadata[set_i][victim].empty <= 1;
			data_metadata[set_i][victim].is_cre <= 1;
			if (overwrite_needed) begin 
				tag_metadata[victim_set][victim_way].empty <= 1;
			end
		end

		// EVICT WRITEBACK:
		T_EVICT, T_WRITEBACK: begin 
			// update sharers list 
			tag_array[set_i][hit_way_tag].sharers[requester] <= 0; 	
			// if writeback also update clean state 
			if (T_op == T_WRITEBACK) begin
				tag_metadata[set_i][hit_way_tag].clean <= 0; 	
				data_metadata[hit_set][hit_way].is_cre <= 0;
			end
			// if vinv not broken increment q and update has_cre
			// depending on if entry is cre now or not 
			has_cre[hit_set] <= cre_update; 
			q <= q+(!evict_ctrl); 
		end


		default: ; 

	endcase

end


endmodule : tag_array



