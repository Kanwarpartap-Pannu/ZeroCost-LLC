/* 

    Module: Top 

    Description: Top level module handling all memory requests

*/ 


`include "constants.svh"

module top #(
    parameter int AWIDTH = $clog2(`MEM_DEPTH),
    parameter int DWIDTH = 32,
    parameter int BUFFER_DEPTH = 8 
)(
    input logic clk, 
    input logic reset, 
    input logic [AWIDTH-1:0] addr, 
    input logic [DWIDTH-1:0] store_data, 
    input logic [6:0] opcode_i, 
    input logic [2:0] funct3_i,  

    output logic [DWIDTH-1:0] data_out, 
    output logic data_valid
); 

// STATES: 
parameter HIT_FOUND = 0, WRITE_BACK = 1, READING = 2;

// CACHE CONTROLLER 
logic [AWIDTH-1:0] mem_addr; 
logic [DWIDTH-1:0] cache_hit_data;
logic cache_data_valid;  
logic [1:0] memory_rq; 
logic [((`BLOCK_SIZE*8)-1):0] buffer_store; 
logic stall; 
logic write_finished; 
cache_controller # (
    .AWIDTH(AWIDTH),
    .DWIDTH(DWIDTH)
) cache_1 (
    .clk(clk),
    .reset(reset),
    .address(addr),
    .store_data(store_data),
    .opcode_i(opcode_i),
    .funct3_i(funct3_i),
    .wb_buffer_found(wb_buffer_found),
    .mem_in(mem_out),
    .write_finished(write_finished),
    .ready(ready),

    .memory_rq(memory_rq),
    .memory_address(mem_addr),
    .mem_store(buffer_store),
    .data_out(cache_hit_data),
    .stall(stall),
    .data_valid(cache_data_valid)
);


// MEMORY CONTROLLER 
logic [((`BLOCK_SIZE*8)-1):0] mem_out; 
logic pop_en; 
logic [1:0] mem_state;
logic ready; 
logic rd_rq; 
logic drain_req; 
memory_controller # (
    .AWIDTH(AWIDTH),
    .DWIDTH(((`BLOCK_SIZE*8)-1))
) memory1 (
    .clk(clk),
    .reset(reset),
    .addr(mem_addr),
    .rd_req(rd_rq),
    .drain_req(drain_req),
    .buffer_data(pop_data),
    .pop_valid(pop_valid),
    
    .pop_en(pop_en),
    .curr_state_out(mem_state),
    .ready_out(ready),
    .data_out(mem_out)
);

// WRITEBACK BUFFER 
logic [((`BLOCK_SIZE*8)-1)+AWIDTH:0] pop_data; 
logic pop_valid; 
logic wb_buffer_found; 
logic [$clog2(BUFFER_DEPTH):0] found_entry; 
logic [((`BLOCK_SIZE*8)-1):0] found_buffer_data;
logic drain_rq; 
logic buffer_full; 
logic [1:0] buffer_ctrl; 
logic [((`BLOCK_SIZE*8)-1)+AWIDTH:0] push_data; 
writeback_buffer #(
    .DEPTH(BUFFER_DEPTH),
    .DWIDTH(((`BLOCK_SIZE*8)-1)),
    .AWIDTH(AWIDTH)
) wb_buffer1 (
    .clk(clk),
    .reset(reset),
    .push_pop(buffer_ctrl),
    .push_data(push_data),
    .search_addr(addr),
    .merge_entry(found_entry),

    .drain_rq(drain_rq),
    .found(wb_buffer_found),
    .found_entry(found_entry),
    .found_data(found_buffer_data),
    .pop_data(pop_data),
    .pop_valid(pop_valid),
    .buffer_full(buffer_full)
); 

// CONTROL LOGIC 
always_comb begin 
    unique case (memory_rq)

        HIT_FOUND: begin 
            rd_rq = 0;  
            if(cache_data_valid) begin
                data_out = cache_hit_data; 
                data_valid = 1; 
                push_data = 0; 
                buffer_ctrl = pop_en ? 2 : 0;
                write_finished = 0;
                drain_req = drain_rq;  
            end
            else if (wb_buffer_found) begin
                if (buffer_full || (mem_state == 2)) begin
                    write_finished = 0;
                    buffer_ctrl = pop_en ? 2 : 0;
                    data_out = found_buffer_data; 
                    data_valid = 0; 
                    push_data = 0;
                    drain_req = buffer_full ? drain_rq : 0;   
                end
                else begin
                    write_finished = 0;
                    buffer_ctrl = (opcode_i == OP_STORE ) ? 3 : 0;
                    data_out = found_buffer_data; 
                    data_valid = (opcode_i == OP_LOAD) ? 1 : 0; 
                    push_data = store_data;
                    drain_req = 0;   
                end
            end
        end

        WRITE_BACK: begin 
            rd_rq = 0;
            if (buffer_full || (mem_state == 2)) begin
                write_finished = 0;
                buffer_ctrl = pop_en ? 2 : 0;
                data_out = found_buffer_data; 
                data_valid = 0; 
                push_data = 0;
                drain_req = buffer_full ? drain_rq : 0;   
            end
            else begin
                write_finished = 1;
                buffer_ctrl = 1;
                data_out = found_buffer_data; 
                data_valid = 0; 
                push_data = buffer_store;
                drain_req = 0;   
            end 
        end

        READING: begin
            rd_rq = 1;
            drain_req = drain_rq; 
            write_finished = 0;
            buffer_ctrl = pop_en ? 2 : 0;
            data_out = found_buffer_data; 
            data_valid = 0; 
            push_data = buffer_store; 
        end

    endcase
end


endmodule : top 