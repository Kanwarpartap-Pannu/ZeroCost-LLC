# Data Array

## Overview

This module implements the **Data Array** for a shared Last-Level Cache (LLC).

The Data Array is responsible for storing cache lines and supporting read, store, and cache line write operations.

The module supports configurable cache geometry, including the number of sets, ways, and cache line size. It also supports byte-addressable updates within cache lines, allowing individual bytes, halfwords, and words to be modified without overwriting the entire cache line.

## Architecture

The Data Array is organized as a **set-associative storage structure**.

Each entry contains a cache line consisting of `BLOCK_SIZE × 8` bits.

The storage structure is defined as:

```systemverilog
logic [0:NUM_SETS-1][0:WAYS-1][(BLOCK_SIZE*8)-1:0] data_array;
```

The array contains:
- **Sets:** Groups of cache lines indexed by `set_i`.
- **Ways:** Individual cache line locations within each set, selected by `way_i`.
- **Cache Lines:** Fixed-size blocks of data containing `BLOCK_SIZE` bytes.

The total storage capacity is:

$$
\text{Capacity (Bytes)} = \text{NUM\_SETS} \times \text{WAYS} \times \text{BLOCK\_SIZE}
$$

## Key Architectural Features

### Set-Associative Organization

The Data Array uses a two-dimensional set and way organization.

Each memory access specifies:
- `set_i`: Selects the target set.
- `way_i`: Selects the cache line within the set.
- `offset`: Selects the byte position within the cache line.

The Data Array does not perform tag comparisons or replacement decisions. These operations are handled by the Tag Array and cache controller.

### Byte-Addressable Store Operations

The module supports modifying individual portions of a cache line without overwriting the remaining data.

For store operations:

1. The selected cache line is read into a temporary variable.
2. The byte offset determines the location of the update.
3. The store data is inserted into the selected portion of the cache line.
4. The modified cache line is written back on the rising clock edge.

The `funct3_i` input determines the width of the store operation.

### Full Cache Line Writes

The module supports writing an entire cache line through `cache_line_i`.

This operation replaces the complete contents of the selected set and way.

Full cache line writes can be used for:
- Cache line insertion.
- Cache refills.
- Cache block relocation.

### Read Operations

The selected cache line is continuously available through `way_data_o`.

```systemverilog
assign way_data_o = data_array[set_i][way_i];
```

Reads are asynchronous, while writes are synchronous.

The module outputs the entire cache line rather than extracting individual bytes or words.

## Supported Operations

| Operation | Description |
|---|---|
| `D_IDLE` | No operation |
| `D_READ` | Read the selected cache line |
| `D_STORE` | Modify a portion of the selected cache line |
| `D_WRITE` | Overwrite the selected cache line with new data |

## Interface

### Inputs

| Signal | Description |
|---|---|
| `clk` | Clock signal |
| `reset` | Reset input |
| `set_i` | Target cache set |
| `way_i` | Target cache way |
| `offset` | Byte offset within the cache line |
| `D_op` | Data Array operation |
| `funct3_i` | Determines store data width |
| `store_data` | Data used for partial cache line updates |
| `cache_line_i` | Full cache line input |

### Outputs

| Signal | Description |
|---|---|
| `way_data_o` | Full cache line from the selected set and way |

## Configuration

The module supports the following parameters:

| Parameter | Description |
|---|---|
| `DWIDTH` | Width of store data |
| `WAY_BITS` | Number of bits used to index cache ways |
| `SET_BITS` | Number of bits used to index cache sets |
| `BLOCK_SIZE` | Cache line size in bytes |
| `NUM_SETS` | Number of cache sets |
| `OFFSET_BITS` | Number of bits used for byte offsets |
| `WAYS` | Number of ways per set |

