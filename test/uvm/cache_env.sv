`include "uvm_macros.svh"
import uvm_pkg::*;

class cache_env extends uvm_env;

    `uvm_component_utils(cache_env)

    cache_agent agent;
    cache_scoreboard scoreboard;

    function new(string name = "cache_env",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        agent = cache_agent::type_id::create("agent", this);
        scoreboard =
            cache_scoreboard::type_id::create("scoreboard", this);
    endfunction

    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);

        agent.monitor.analysis_port.connect(
            scoreboard.analysis_imp
        );
    endfunction

endclass
