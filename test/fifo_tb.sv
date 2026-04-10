


module fifo_tb; 

logic clk; 
logic reset; 
logic [11:0] push_data; 
logic [1:0] push_pop; 
logic [3:0] search_addr;
logic [2:0] merge_entry; 

logic drain_rq; 
logic found_entry; 
logic found;
logic [12:0] pop_data; 
logic [7:0] found_data; 
logic buffer_full;
logic pop_valid; 

writeback_buffer #(
    .DEPTH(4), 
    .DWIDTH(8),
    .AWIDTH(4)
    ) fifo1 (.*); 


logic [3:0] addr; 
logic rd_req; 
logic drain_req; 
logic [12:0] buffer_data; 
assign drain_req = drain_rq; 
assign buffer_data = pop_data;
assign addr = push_data[11:8]; 

logic pop_en; 
logic curr_state_out; 
logic ready_out;
logic data_out; 
memory_controller #(
    .DWIDTH(8),
    .AWIDTH(4)
) mem1 (.*); 


initial begin 
    clk=0; 
    reset=0;
    push_data=0; 
    push_pop=0; 
    search_addr=0;
    merge_entry=0; 
    rd_req=1; 
end

always #1 clk = ~clk;

logic [1:0] push_test; 
always #1 push_pop = pop_en ? 2 : push_test; 



// simulation 
initial begin 
    $display("SIMULATION START"); 
    #3
    reset=1; 
    search_addr = 4'b1000; 
    // PUSH X
    push_test = 1; 
    push_data = 12'b100010101010;
    #2
    // PUSH Y
    push_test = 1; 
    push_data = 12'b101010101010;
    #2
    // PUSH Z
    push_test = 1; 
    push_data = 12'b100110101010;
    #2 
    // MERGE X
    push_test = 3; 
    push_data = 12'b100010100000;
    merge_entry = 3'b000; 
    #2 
    push_test = 0; 
    rd_req = 0; 

    #100

    /*
    #2
    // POP
    push_pop = 2; 
    #2 
    // PUSH A
    push_pop = 1; 
    push_data = 12'b110010101010;
    #2 
    // PUSH B
    push_pop = 1; 
    push_data = 12'b100010101010;
    #2 
    // POP
    push_pop = 2; 
    #2 
    // POP 
    push_pop = 2; 
    #2
    // POP
    push_pop = 2; 
    #2 
    // PUSH X 
    push_pop = 1; 
    push_data = 12'b100010101010;
    #2
    // MERGE X
    push_pop = 3; 
    push_data = 12'b100010100000;
    merge_entry = 3'b001;
    #2
    // MERGE X
    push_pop = 3; 
    push_data = 12'b100010111111;
    merge_entry = 3'b010;  
    #2
    */

    $finish; 
end 

initial begin 
    $dumpfile("fifo.vcd");
    $dumpvars(0, fifo_tb);  
end

endmodule