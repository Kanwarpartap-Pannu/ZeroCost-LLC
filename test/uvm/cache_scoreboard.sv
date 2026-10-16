
`include "uvm_macros.svh"
import uvm_pkg::*;

class cache_scoreboard extends uvm_scoreboard;

    `uvm_component_utils(cache_scoreboard)

    uvm_analysis_imp #(cache_transaction, cache_scoreboard) analysis_imp;

    logic [31:0] expected_data[$];
    int unsigned match_count;

    function new(string name = "cache_scoreboard",
                 uvm_component parent = null);
        super.new(name, parent);

        analysis_imp = new("analysis_imp", this);
    endfunction

    function void write(cache_transaction tx);
        logic [31:0] expected;

        case (tx.op)
            C_IDLE: begin
                expected_data.push_back(tx.data);
            end

            C_LOAD: begin
                if (expected_data.size() == 0) begin
                    `uvm_error("SCB",
                        "Observed an accepted POP with no expected data")
                    return;
                end

                expected = expected_data.pop_front();

                if (tx.data !== expected) begin
                    `uvm_error("SCB",
                        $sformatf("POP mismatch: expected=%0d actual=%0d",
                                  expected, tx.data))
                end
                else begin
                    match_count++;
                    `uvm_info("SCB",
                        $sformatf("POP matched: data=%0d", tx.data),
                        UVM_HIGH)
                end
            end
        endcase
    endfunction

    function void report_phase(uvm_phase phase);
        super.report_phase(phase);

        `uvm_info("SCB",
            $sformatf("Matched pops=%0d; expected items remaining=%0d",
                      match_count, expected_data.size()),
            UVM_LOW)
    endfunction

endclass
