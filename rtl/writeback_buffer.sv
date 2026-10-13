




module writeback_buffer #( 
	parameter int DEPTH = 8, 
	parameter int DWIDTH = 32, 
	parameter int AWIDTH = 32
	)(
	input logic clk, 
	input logic reset, 

	input logic [(DWIDTH+AWIDTH)-1:0] data_i, 
	input logic push_en, 
	input logic pop_en, 
	input logic [AWIDTH-1:0] search_addr, 

	output logic drain_rq, 
	output logic [(DWIDTH)-1:0] search_data_o, 
	output logic found, 
	output logic [(DWIDTH+AWIDTH)-1:0] data_o, 
	output logic data_valid, 
	output logic full
	
		); 


// FIFO Buffer 
logic [(DWIDTH+AWIDTH):0] fifo_buffer [0:DEPTH-1];

// Pointers 
parameter int POINTER_BITS = $clog2(DEPTH);
logic [POINTER_BITS:0] head; 
logic [POINTER_BITS:0] tail;

// Empty flag 
logic empty; 

assign drain_rq = !(empty); 

// Search Logic 
logic [$clog2(DEPTH)-1:0] found_entry; 
always_comb begin 
    found = 0; 
    found_entry = 0; 
    search_data_o = 0;

    for(int i=0; i<DEPTH; i++) begin 
        if ((!empty) && (fifo_buffer[i][(DWIDTH+AWIDTH)-1:DWIDTH] == search_addr) && (fifo_buffer[i][DWIDTH+AWIDTH] != 1)) begin
            found = 1; 
	    found_entry = i;
            search_data_o = fifo_buffer[i][DWIDTH-1:0];
        end
    end
end 


// Full and Empty Detection Logic 
always_comb begin

    if (head == tail) begin 
        empty = 1; 
        full = 0; 
    end

    else if (head[POINTER_BITS] ^ tail[POINTER_BITS]) begin 
        if (head[POINTER_BITS-1:0] == tail[POINTER_BITS-1:0]) begin
            full = 1; 
        end
        else begin
            full = 0;
        end
        empty = 0; 
    end

    else begin
        empty = 0; 
        full = 0; 
    end

end

always_ff @(posedge clk) begin 
	if (!reset) begin 
		tail <= 0; 
		head <= 0; 
		for (int i=0; i<DEPTH; i++) begin 
		    fifo_buffer[i] <= 0; 
		end 
	end

	else begin 
		if (push_en) begin 
			if(!full) begin
			    fifo_buffer[tail[POINTER_BITS-1:0]] <= data_i;
			    tail <= tail+1; 
			end
			data_o <= 0;
			data_valid <= 0;  
		end
		if (pop_en) begin 
			if (!empty) begin
			    data_o <= fifo_buffer[head[POINTER_BITS-1:0]];
			    head <= head+1;
			    fifo_buffer[head[POINTER_BITS-1:0]][DWIDTH+AWIDTH] <= 1; 
			    data_valid <= 1; 
			end
			else begin 
				data_o <= 0;
				data_valid <= 0;  
			end
		end
		if (push_en && pop_en) begin 
			fifo_buffer[found_entry][DWIDTH+AWIDTH] <= 1; 
			data_o <= 0;
			data_valid <= 0;  
		end
	end 
end

endmodule : writeback_buffer 
