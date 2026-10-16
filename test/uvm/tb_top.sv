`include "constants.svh"
`include "uvm_macros.svh"
import uvm_pkg::*;

module tb_top;

    // Stop a stalled practice test after 100 clock periods.
    initial begin
        #1000;
        $fatal(1, "Test timed out: UVM did not finish within 100 clock periods");
    end

    logic clk;

    cache_if cache_vif(clk);

    cache_controller dut (
        .clk     (clk),
        .reset   (cache_vif.reset),
        .op    (cache_vif.op),
        .address (cache_vif.address),
        .funct3_i(cache_vif.funct3_i),
        .requester    (cache_vif.requester),
        .data_out    (cache_vif.data_out),
        .stall    (cache_vif.stall),
        .data_valid   (cache_vif.data_valid)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end
    
    initial begin
      uvm_config_db#(virtual cache_if)::set(
          null, "*", "vif", cache_vif
        );
          
      run_test("cache_test");
      $finish;
    end
    
    initial begin
      cache_vif.reset     = 0;
      cache_vif.op  = C_IDLE;
      cache_vif.address = 0;

      repeat (3) @(posedge clk);

      @(negedge clk);
      cache_vif.reset = 1;
    end

    initial begin
        $dumpfile("cache.vcd");
        $dumpvars(0, tb_top);
    end
   

endmodule
