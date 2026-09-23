
`include "uvm_macros.svh"
import uvm_pkg::*;

class cache_sequence extends uvm_sequence #(cache_transaction);

    `uvm_object_utils(cache_sequence)

    function new(string name = "cache_sequence");
        super.new(name);
    endfunction

    task body();

        cache_transaction tx;

	// READ TRANSACTION 
	tx = cache_transaction::type_id::create("tx"); 
	start_item(tx); 
	tx.op = LOAD; 
	tx.data = 0; 
	tx.funct_3 = WORD; 
	tx.addr = 1001; 
	tx.requester = 1001; 
	finish_item(tx); 

    endtask

endclass
