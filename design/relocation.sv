/*
    Module: Relocation 

    Description: The Relocation Module is responsible for keeping track of the has_re property
    vector and ensuring the next_rs register is updated in a round robin fashion. 
*/


module relocation #(
    NUM_SETS= 4
)(
    input logic clk, 
    input logic rst, 

    input logic has_re, 
    input logic index_i, 
    output logic next_rs_out
); 

logic [NUM_SETS-1:0] has_re_pv;
logic [$clog2(NUM_SETS)-1:0] next_rs;  


always_ff @(posedge clk) begin
    if(!rst) begin
        has_re_pv <= {(NUM_SETS){1'b1}}; 
    end
    else begin
        has_re_pv[index_i] <= has_re; 
    end
end

// Next Relocation set Logic 
always_comb begin 
    next_rs_out = 0; 
    for (int i=0; i<`WAYS; i++) begin
        if (has_re_pv[i] == 1) begin
            next_rs_out = i; 
        end
    end 
end


endmodule : relocation