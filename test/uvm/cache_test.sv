`include "uvm_macros.svh"
import uvm_pkg::*;

class cache_test extends uvm_test;

    `uvm_component_utils(cache_test)

    cache_env env;
    virtual cache_if vif;

    function new(string name = "cache_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        env = cache_env::type_id::create("env", this);

        if (!uvm_config_db#(virtual cache_if)::get(
            this, "", "vif", vif
        )) begin
            `uvm_fatal("NO_VIF", "Test could not find the cache interface")
        end
    endfunction

    task run_phase(uvm_phase phase);
        cache_sequence seq;

        phase.raise_objection(this);

        wait (vif.reset === 1'b1);


        seq = cache_sequence::type_id::create("seq");
        seq.start(env.agent.sequencer);

        @(posedge vif.clk);
        phase.drop_objection(this);
    endtask

endclass
