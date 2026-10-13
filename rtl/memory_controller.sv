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
    input logic [1:0] M_op, 
    input logic [DWIDTH-1:0] data_in,

    output logic ready_out, 
    output logic wr_finished, 
    output logic [DWIDTH-1:0] data_out
); 




// MAIN MEMORY 
logic read_en;
logic write_en;
logic [((`BLOCK_SIZE*8)-1):0] mem_out; 
logic [((`BLOCK_SIZE*8)-1):0] mem_store;
logic [AWIDTH-1:0] store_address;  
logic request;
memory #(
    .AWIDTH(32),
    .DWIDTH(32),
    .BASE_ADDR(32'h01000000)
    ) memory1 (
    .clk(clk),
    .rst(reset),
    .addr_i(address),
    .addr_dat(addr),
    .data_dat(mem_store), 
    .read_en_i(read_en),
    .read_en_dat(read_en), // controls for data memory 
    .write_en_dat(write_en),
    .funct3_i(funct3_i),
    .request(request),
    .write_finished(write_finished),
    .ready(ready_out),
    .data_o(),
    .data_dat_o(mem_out) // data read from data memory
);

assign data_out = mem_out; 

// STATES 
parameter IDLE = 0, READING = 1, WRITE_BACK = 2; 

// CONTROL LOGIC 
always_comb begin
    request = 0; 
    write_en = 0;
    read_en = 0; 

    unique case(M_op) 

        M_IDLE: begin
            request = 0; 
            read_en = 0; 
            write_en = 0; 
        end

        M_READ: begin 
            request = 1; 
            write_en = 0; 
            read_en = 1; 
        end

        M_WRITE: begin
            request = 1; 
            write_en = 1;
            read_en = 0; 
        end

        default: begin
            request = 0; 
            write_en = 0;
            read_en = 0; 
        end

    endcase

end



endmodule : memory_controller
