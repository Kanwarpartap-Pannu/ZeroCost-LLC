`include "constants.svh"
`include "uvm_macros.svh"
import uvm_pkg::*;

class cache_driver extends uvm_driver #(cache_transaction);

    `uvm_component_utils(cache_driver)

    virtual cache_if vif;

    function new(string name = "cache_driver",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    if (!uvm_config_db#(virtual cache_if)::get(
        this, "", "vif", vif
    )) begin
        `uvm_fatal("NO_VIF", "Driver could not find the cache interface")
        end
    endfunction

    task run_phase(uvm_phase phase);

    cache_transaction tx;

    forever begin

        seq_item_port.get_next_item(tx);
        
        @(negedge vif.clk); 
        `uvm_info("DRIVE", $sformatf("Received %s data=%0d", tx.op.name(), tx.data), UVM_LOW)
        vif.address <= tx.addr; 
        vif.funct3_i <= tx.funct_3; 
        vif.requester <= tx.requester; 
        vif.store_data <= tx.data; 
        case (tx.op)

            LOAD: begin
                vif.op <= 3'b001;
            end

            NO_OP: begin
                vif.op <= 3'b000;
            end

            STORE: begin
                vif.op <= 3'b010;
            end
            WRITEBACK: begin
                vif.op <= 3'b100;
            end
            EVICT: begin
                vif.op <= 3'b011;
            end
            
        endcase

        do begin 
        @(posedge vif.clk);
    end while (vif.stall == 1'b1);  

        @(negedge vif.clk); 
        vif.op <= NO_OP;

        seq_item_port.item_done();

        end

    endtask

endclass
