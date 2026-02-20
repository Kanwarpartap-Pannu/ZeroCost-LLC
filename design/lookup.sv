/* 
    Module: Lookup 

    Description: Lookup Operation on given memory address, outputting the Tag, Offset and Set bits for a k-way set 
    associative cache with parametrized cache size. 

*/

module lookup #(
    parameter int AWIDTH = $clog2(`MEM_DEPTH) 
) (
    input logic [AWIDTH-1:0] address,
    output logic [OFFSET_BITS-1:0] offset,
    output logic [INDEX_BITS-1:0] index, 
    output logic [TAG_BITS-1:0] tag
    
); 

localparam int NUM_SETS = `CACHE_SIZE / (`BLOCK_SIZE * `WAYS); 
localparam OFFSET_BITS   = $clog2(`BLOCK_SIZE);
localparam INDEX_BITS    = $clog2(NUM_SETS);
localparam TAG_BITS      = AWIDTH - INDEX_BITS - OFFSET_BITS;

assign offset = address[OFFSET_BITS-1:0];
assign index  = address[((OFFSET_BITS-1)+INDEX_BITS):OFFSET_BITS]; 
assign tag    = address[(((OFFSET_BITS+INDEX_BITS)-1)+TAG_BITS):(OFFSET_BITS+INDEX_BITS)]; 

endmodule : lookup 