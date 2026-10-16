`include "constants.svh"
`include "uvm_macros.svh"
import uvm_pkg::*;

class cache_monitor extends uvm_monitor;

    `uvm_component_utils(cache_monitor)

    virtual cache_if vif;
    uvm_analysis_port #(cache_transaction) analysis_port;

    function new(string name = "cache_monitor",
                 uvm_component parent = null);
        super.new(name, parent);
        
        analysis_port = new("analysis_port", this);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual cache_if)::get(
            this, "", "vif", vif
        )) begin
            `uvm_fatal("NO_VIF",
                       "Monitor could not find the cache interface")
        end
    endfunction
    
    task run_phase(uvm_phase phase);
    logic [2:0] sampled_op;
    logic [31:0] sampled_data;
    logic [31:0] sampled_addr;
    logic [2:0] sampled_funct_3; 
    logic [$clog2(`CORE_COUNT)-1:0] sampled_requester; 
    bit accepted;
    cache_transaction observed_tx;

    forever begin
        @(posedge vif.clk);

        // Capture the command and flags before the cache updates.
        sampled_op   = vif.op;
        sampled_data = vif.store_data;
        sampled_addr = vif.address;
        sampled_requester = vif.requester; 
        sampled_funct_3 = vif.funct3_i; 
        accepted     = 0;

        if (vif.reset === 1'b1) begin
            accepted = (vif.stall == 1'b0); 
        end


        // The cache's registered output has settled by this edge.
        @(negedge vif.clk);

        if (accepted) begin
              observed_tx = cache_transaction::type_id::create("observed_tx");

              case (sampled_op)
                  C_IDLE: begin
                      observed_tx.op   = NO_OP;
                      observed_tx.data = sampled_data;
                      observed_tx.addr = sampled_addr;
                      observed_tx.funct_3 = WORD;
                      observed_tx.requester = sampled_requester;

                  end

                  C_LOAD: begin
                      observed_tx.op   = LOAD;
                      observed_tx.data = vif.data_out;
                      observed_tx.addr = sampled_addr;
                      observed_tx.funct_3 = WORD;
                      observed_tx.requester = sampled_requester;
                  end

                  C_STORE: begin
                      observed_tx.op   = STORE;
                      observed_tx.data = sampled_data; 
                      observed_tx.addr = sampled_addr;
                      observed_tx.funct_3 = WORD;
                      observed_tx.requester = sampled_requester;
                  end

                  C_EVICT: begin
                      observed_tx.op   = EVICT;
                      observed_tx.data = sampled_data; 
                      observed_tx.addr = sampled_addr;
                      observed_tx.funct_3 = WORD;
                      observed_tx.requester = sampled_requester;
                  end

                  C_WRITEBACK: begin
                      observed_tx.op   = WRITEBACK;
                      observed_tx.data = sampled_data; 
                      observed_tx.addr = sampled_addr;
                      observed_tx.funct_3 = WORD;
                      observed_tx.requester = sampled_requester;
                  end
              endcase

              `uvm_info("MON",$sformatf("Observed %s data=%0d",observed_tx.op.name(),observed_tx.data), UVM_HIGH)

              analysis_port.write(observed_tx);
          end  
      end
    endtask

endclass
