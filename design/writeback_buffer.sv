/*
    Module: Writeback Buffer 

    Description: FIFO buffer, implemented as a circular array 
    pushes data to the tail, and pops from the head. Outputs full signal 
    for when queue is full. Dirty Cache evictions are stored here to reduce latency 
    and opportunistically drained to the memory to ensure coherence. This module 
    also searches for matching entries and returns upon hits. Stores to the same 
    address are coalesced by skipping the draining of newer entries and adding the 
    new store to the tail.  

*/

module writeback_buffer #(
    parameter int DEPTH = 8, 
    parameter int DWIDTH = 32,
    parameter int AWIDTH = 32
)(
    input logic reset, 
    input logic clk,
    input logic [(DWIDTH+AWIDTH)-1:0] push_data,
    input logic [1:0] push_pop,
    input logic [AWIDTH-1:0] search_addr,
    input logic [POINTER_BITS:0] merge_entry,
    
    output logic drain_rq, 
    output logic [POINTER_BITS:0] found_entry, 
    output logic [DWIDTH-1:0] found_data,
    output logic found,
    output logic [(DWIDTH+AWIDTH):0] pop_data,
    output logic pop_valid, 
    output logic buffer_full 
);



// Push_Pop States 
parameter NO_OP = 0, PUSH = 1, POP = 2, MERGE = 3; 

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
always_comb begin 
    found = 0; 
    found_entry = 0; 
    found_data = 0;

    for(int i=0; i<DEPTH; i++) begin 
        if ((!empty) && (fifo_buffer[i][(DWIDTH+AWIDTH)-1:DWIDTH] == search_addr) && (fifo_buffer[i][DWIDTH+AWIDTH] != 1)) begin
            found = 1; 
            found_entry = i; 
            found_data = fifo_buffer[i][DWIDTH-1:0];
        end
    end
end 


// Full and Empty Detection Logic 
always_comb begin

    if (head == tail) begin 
        empty = 1; 
        buffer_full = 0; 
    end

    else if (head[POINTER_BITS] ^ tail[POINTER_BITS]) begin 
        if (head[POINTER_BITS-1:0] == tail[POINTER_BITS-1:0]) begin
            buffer_full = 1; 
        end
        else begin
            buffer_full = 0;
        end
        empty = 0; 
    end

    else begin
        empty = 0; 
        buffer_full = 0; 
    end

end

// Push and Pop logic 
always_ff @(posedge clk) begin

    if (!reset) begin
        tail <= 0; 
        head <= 0; 
        for (int i=0; i<DEPTH; i++) begin 
            fifo_buffer[i] <= 0; 
        end 
    end

    else begin 
        unique case(push_pop)

            NO_OP:begin
                tail <= tail; 
                head <= head; 
                pop_data <= 0; 
                pop_valid <= 0; 
            end

            PUSH: begin
                if(!buffer_full) begin
                    fifo_buffer[tail[POINTER_BITS-1:0]] <= push_data;
                    tail <= tail+1; 
                end
                pop_data <= 0;
                pop_valid <= 0;  
            end

            POP: begin
                if (!empty) begin
                    pop_data <= fifo_buffer[head[POINTER_BITS-1:0]];
                    head <= head+1;
                    fifo_buffer[head[POINTER_BITS-1:0]][DWIDTH+AWIDTH] <= 1; 
                    pop_valid <= 1; 
                end
                else begin 
                    pop_data <= 0;
                    pop_valid <= 0;  
                end
            end

            MERGE: begin 
               if(!buffer_full) begin
                    fifo_buffer[tail[POINTER_BITS-1:0]] <= push_data;
                    tail <= tail+1; 
                end
                fifo_buffer[merge_entry[POINTER_BITS-1:0]][DWIDTH+AWIDTH] <= 1; 
                pop_data <= 0; 
                pop_valid <= 0; 
            end 

            default: begin
                tail <= tail; 
                head <= head; 
                pop_data <= 0;
                pop_valid <= 0; 
            end

        endcase
    end
end 


endmodule : writeback_buffer