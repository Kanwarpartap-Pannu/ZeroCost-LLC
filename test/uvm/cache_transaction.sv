`include "uvm_macros.svh"
import uvm_pkg::*;

typedef enum {
    LOAD,
    STORE,
    WRITEBACK, 
    EVICT   
} cache_op_e;

typedef enum {
    WORD,
    HALFWORD,
    BYTE   
} funct3_e;

class cache_transaction extends uvm_sequence_item;

    rand cache_op_e   op;
    rand funct3_e   funct_3;
    rand logic [31:0] data;
    rand logic [31:0] addr; 
    rand logic [$clog2(`CORE_COUNT)-1:0] requester; 

    `uvm_object_utils(cache_transaction)

    function new(string name = "cache_transaction");
        super.new(name);
    endfunction

endclass
