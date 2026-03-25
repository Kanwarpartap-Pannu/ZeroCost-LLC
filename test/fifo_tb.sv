


module fifo_tb; 

logic clk; 
logic reset; 
logic [7:0] push_data; 
logic [1:0] push_pop; 
logic [7:0] pop_data; 
logic buffer_full; 


fifo_buffer #(
    .DEPTH(4), 
    .DWIDTH(8)
    ) fifo1 (.*); 


initial begin 
    clk=0; 
    reset=0;
    push_data=0; 
    push_pop=0;   
end

always #1 clk = ~clk;



// simulation 
initial begin 
    $display("SIMULATION START"); 
    #5
    reset=1; 
    #5
    push_data = 3; 
    push_pop = 1;
    #10
    push_pop = 2; 
    #100
    $finish; 
end 

initial begin 
    $dumpfile("fifo.vcd");
    $dumpvars(0, fifo_tb);  
end

endmodule