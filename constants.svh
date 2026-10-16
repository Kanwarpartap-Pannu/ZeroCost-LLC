`ifndef CONSTANTS_SVH_
`define CONSTANTS_SVH_

parameter logic [31:0] ZERO = 32'd0;

    // TAG Array Operations 
    parameter logic [3:0]
        T_IDLE         = 4'b0000, // Insert in TAG  
        T_INSERT         = 4'b1110, // Insert in TAG  
        T_REMOVE         = 4'b1111, // 
        T_RELOC_ONE         = 4'b1000, // 
        T_RELOC_TWO         = 4'b1010, // 
        T_RELOC_THREE         = 4'b1100, // 
        T_LOAD         = 4'b0010, // 
        T_STORE         = 4'b0011, // 
        T_EVICT         = 4'b0110, // 
        T_WRITEBACK         = 4'b0100; // 


    // Data Array Operations 
    parameter logic [1:0]
        D_STORE = 2'b00,
        D_WRITE = 2'b01,
        D_READ = 2'b10,
        D_IDLE = 2'b11; 

    // Memory Operations 
    parameter logic [1:0]
        M_WRITE = 2'b01,
        M_READ = 2'b10,
        M_IDLE = 2'b00; 

    // Cache Operations 
    parameter logic [3:0]
        C_IDLE = 3'b000,
        C_LOAD = 3'b001,
        C_STORE = 3'b010, 
        C_EVICT = 3'b011, 
        C_WRITEBACK = 3'b100; 
`endif
