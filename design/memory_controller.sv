/* 
    Module: Memory Controller

    Description: Memory Controller handles requests coming in from the cache and writeback buffer 
    it opportunistically preforms write backs to main memory when no active request from the cache 
    is happening. 

*/

`include "constants.svh"

module memory_controller #(
    parameter int AWIDTH = $clog2(`MEM_DEPTH),
    parameter int DWIDTH = 32
)(
    input logic reset,
    input logic clk,
    input logic [AWIDTH-1:0] addr,
    input logic rd_req,
    input logic drain_req,
    input logic [AWIDTH+DWIDTH:0] buffer_data,
    input logic pop_valid, 

    output logic pop_en,
    output logic [1:0] curr_state_out, 
    output logic ready_out, 
    output logic [DWIDTH-1:0] data_out
); 

logic [1:0] curr_state; 
logic [1:0] next_state; 



// MAIN MEMORY 
logic read_en;
logic write_en;
logic [((`BLOCK_SIZE*8)-1):0] mem_out; 
logic ready; 
logic write_finished; 
logic [((`BLOCK_SIZE*8)-1):0] mem_store;
logic [AWIDTH-1:0] store_address;  
logic request;
logic [AWIDTH-1:0] memory_address; 
memory #(
    .AWIDTH(32),
    .DWIDTH(32),
    .BASE_ADDR(32'h01000000)
    ) memory1 (
    .clk(clk),
    .rst(reset),
    .addr_i(address),
    .addr_dat(memory_address),
    .data_dat(mem_store), 
    .read_en_i(read_en),
    .read_en_dat(read_en), // controls for data memory 
    .write_en_dat(write_en),
    .funct3_i(funct3_i),
    .request(request),
    .write_finished(write_finished),
    .ready(ready),
    .data_o(),
    .data_dat_o(mem_out) // data read from data memory
);

assign ready_out = ready; 
assign curr_state_out = curr_state; 
assign data_out = mem_out; 

// STATES 
parameter IDLE = 0, READING = 1, POPPING = 2, WRITE_BACK = 3; 

// STATE LOGIC 
always_ff @(posedge clk) begin 
     if (!reset) begin 
        curr_state <= IDLE; 
    end
    else begin 
        curr_state <= next_state;  
    end 

end

// NEXT STATE LOGIC 
always_comb begin
    next_state = curr_state; // default safe value 
    unique case(curr_state) 

        IDLE: begin 

            if (rd_req) begin 
                next_state = READING; 
            end

            else if ((!rd_req) && (drain_req)) begin
                next_state = POPPING; 
            end

            else begin
                next_state = IDLE; 
            end

        end

        READING: begin
            
            if (ready) begin
                next_state = IDLE; 
            end
            else begin
                next_state = READING; 
            end

        end

        POPPING: begin 
            if (pop_valid) begin
                if ( buffer_data[AWIDTH+DWIDTH] == 0 ) begin
                    next_state = WRITE_BACK; 
                end
                else begin 
                    next_state = IDLE; 
                end
            end
            else begin
                if (drain_req) begin
                    next_state = POPPING; 
                end
                else begin
                    next_state = IDLE; 
                end
            end

        end

        WRITE_BACK: begin

            if (write_finished) begin
                next_state = IDLE; 
            end
            else begin
                next_state = WRITE_BACK; 
            end

        end

        default: next_state = curr_state; 

    endcase
end

// CONTROL LOGIC 
always_comb begin
    request = 0; 
    write_en = 0;
    read_en = 0; 
    pop_en = 0;
    memory_address = addr; 

    unique case(curr_state) 

        IDLE: begin
            request = 0; 
            read_en = 0; 
            write_en = 0; 
            pop_en = 0;
            memory_address = addr;  
        end

        READING: begin 
            request = 1; 
            write_en = 0; 
            read_en = 1; 
            pop_en = 0; 
            memory_address = addr; 
        end

        POPPING: begin
            request = 0; 
            write_en = 0;
            read_en = 0; 
            memory_address = addr;
            if ((!pop_valid) && (drain_req)) begin
                pop_en = 1; 
            end  
            else begin
                pop_en = 0; 
            end
        end

        WRITE_BACK: begin
            request = 1; 
            write_en = 1;
            read_en = 0; 
            pop_en = 0;
            memory_address = store_address; 
        end

        default: begin
            request = 0; 
            write_en = 0;
            read_en = 0; 
            pop_en = 0;
            memory_address = addr; 
        end

    endcase

end

// STORE DATA LOGIC 
always_ff @(posedge clk) begin
    if (pop_valid) begin
        mem_store <= buffer_data[DWIDTH-1:0];
        store_address <= buffer_data[(AWIDTH+DWIDTH)-1:DWIDTH];  
    end
    else begin 
        mem_store <= mem_store; 
        store_address <= store_address; 
    end
end



endmodule : memory_controller