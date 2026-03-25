/*
    Module: FIFO Buffer 

    Description: Reusable FIFO buffer, implemented as a circular array 
    pushes data to the tail, and pops from the head. Outputs full signal 
    for when queue is full. 

*/

module fifo_buffer #(
    parameter int DEPTH = 8, 
    parameter int DWIDTH = 32
)(
    input logic [DWIDTH-1:0] push_data,
    input logic [1:0] push_pop,
    input logic reset, 

    output logic [DWIDTH-1:0] pop_data,
    output logic buffer_full 
);

// Push_Pop States 
parameter NO_OP = 0, PUSH = 1, POP = 2; 

// FIFO Buffer 
logic [DWIDTH-1:0] fifo_buffer [0:DEPTH-1];

// Pointers 
parameter int POINTER_BITS = $clog2(DEPTH);
logic [POINTER_BITS:0] head; 
logic [POINTER_BITS:0] tail;

// Empty flag 
logic empty; 


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
        full = 0; 
    end

end

// Push and Pop logic 
always_ff begin

    if (!reset) begin
        tail <= 0; 
        head <= 0; 
    end

    else begin 
        unique case(push_pop)

            NO_OP:begin
                tail <= tail; 
                head <= head; 
                pop_data <= 0; 
            end

            PUSH: begin
                if(!full) begin
                    fifo_buffer[tail] <= push_data;
                    tail <= tail+1; 
                end
                pop_data <= 0; 
            end

            POP: begin
                if (!empty) begin
                    pop_data <= fifo_buffer[head];
                    head <= head+1; 
                end
            end

            default: begin
                tail <= tail; 
                head <= head; 
                pop_data <= 0;
            end

        endcase
    end
end 


endmodule : fifo_buffer