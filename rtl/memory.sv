/*
 * Module: memory
 *
 * Description: Byte-addressable memory implementation. Supports both read and write operations.
 * Reads are combinational and writes are performed on the rising clock edge.
 *
 * Inputs:
 * 1) clk
 * 2) rst signal
 * 3) AWIDTH address addr_i
 * 4) DWIDTH data to write data_i
 * 5) read enable signal read_en_i
 * 6) write enable signal write_en_i
 *
 * Outputs:
 * 1) DWIDTH data output data_o
 */

module memory #(
  // parameters
  parameter int AWIDTH = 32,
  parameter int DWIDTH = 32,
  parameter logic [31:0] BASE_ADDR = 32'h01000000, 
  parameter int MEM_DELAY = 10
) (

  // inputs
  input logic clk,
  input logic rst,
  input logic [AWIDTH-1:0] addr_i = BASE_ADDR,
  input logic [AWIDTH-1:0] addr_dat = BASE_ADDR,
  input logic [(`BLOCK_SIZE*8)-1:0] data_dat,
  input logic read_en_i,
  input logic read_en_dat,
  input logic write_en_dat,
  input logic [2:0] funct3_i,
  input logic request, 

  // outputs
  output logic              write_finished, 
  output logic              ready, 
  output logic [DWIDTH-1:0] data_o,
  output logic [(`BLOCK_SIZE*8)-1:0] data_dat_o
);

    // Total memory size in bytes
    localparam int MEM_BYTES = (`MEM_DEPTH )* (`BLOCK_SIZE*8);  

	logic [DWIDTH-1:0] temp_memory [0:`LINE_COUNT - 1];

    // Delay Counter 
    logic [$clog2(MEM_DELAY)-1:0] delay; 

   	// Byte-addressable memory
  	logic [7:0] main_memory [0:MEM_BYTES - 1]; 
   	
    // fetch address or pc address
    logic [AWIDTH-1:0] address;

    // data memory address 
    logic [AWIDTH-1:0] address_dat; 
   	
    // Adjusted address for fetch always assume given addr_i is within range
    assign address = addr_i - BASE_ADDR; 

    // Adjusted address for data memory
    assign address_dat = (addr_dat< BASE_ADDR) ? addr_dat % MEM_BYTES:(addr_dat - BASE_ADDR) % MEM_BYTES; 
  
    int i;
 
   	initial begin

        // Initialize all main memory bytes to 0
        for (i = 0; i < MEM_BYTES; i++) begin
            main_memory[i] = 8'h00;
        end

        $readmemh(`MEM_PATH, temp_memory);

        // Load data from temp_memory into main_memory
		for (i = 0; i < `LINE_COUNT; i++) begin
       	    main_memory[4*i]     = temp_memory[i][7:0];
       		main_memory[4*i + 1] = temp_memory[i][15:8];
       		main_memory[4*i + 2] = temp_memory[i][23:16];
       		main_memory[4*i + 3] = temp_memory[i][31:24];
     	end

		$display("IMEMORY: Loaded %0d 32-bit words from %s", `LINE_COUNT, `MEM_PATH);

	end
           

    // Combinational read logic for instruction memory
	always_comb begin
	    data_o = '0; // default to zero

        if (read_en_i) begin

            if ($isunknown(addr_i)) begin
                data_o = '0;
            end 
            else if ((addr_i >= BASE_ADDR) && (addr_i + 32'd3 < BASE_ADDR + MEM_BYTES)) begin
                
                // Word-aligned fetch: little-endian assembly
                data_o = {
                          main_memory[address + 3],
                          main_memory[address + 2],
                          main_memory[address + 1],
                          main_memory[address]
                };

            end 
            else begin
                data_o = 32'hDEAD_BEEF;
                //$display("IMEMORY: OOB read @0x%08h (mapped 0x%08h)", addr_i, address);
            end
        end
  	end

    // Simulated Memory Delay 
    always_ff @(posedge clk) begin 
        if(request) begin 
            if (delay >= MEM_DELAY) begin 
                if (read_en_dat) begin 
                    ready <= 1;
                    delay<=0;
                    write_finished<=0;
                end
                if (write_en_dat) begin
                    ready <= 0;
                    delay<=0;
                    write_finished<=1;
                end
            end
            else begin
                delay <= delay + 1;
                ready <= 0; 
                write_finished <= 0; 
            end
        end
        else begin
            ready <= 0;
            delay <= 0;
            write_finished <= 0;
        end
    end
    
    // Combinational read logic for data memory
    always_comb begin
	    data_dat_o = 0; // default to zero
        if (read_en_i) begin 
            if ($isunknown(addr_dat)) begin
                data_dat_o = 0;
            end 
            else if (read_en_i) begin
                for (int i=0; i < `BLOCK_SIZE; i++) begin 
                    data_dat_o[((`BLOCK_SIZE-1)-i)*8 +: 8] = main_memory[(address_dat+(`BLOCK_SIZE - i)) % MEM_BYTES];
                end 
            end 
        end
  	end


    // Sequential write logic
    always_ff @(posedge clk) begin

        if (write_en_dat) begin 
                for (int i=0; i < `BLOCK_SIZE; i++) begin 
                main_memory[(address_dat+(`BLOCK_SIZE - i)) % MEM_BYTES] <=  data_dat[((`BLOCK_SIZE-1)-i)*8 +: 8];
            end 
        end 
        
 	end   
 
endmodule : memory
