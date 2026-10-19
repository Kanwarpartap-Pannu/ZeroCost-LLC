# Writeback Buffer

## Overview

This module implements a **Writeback Buffer** for a shared Last-Level Cache (LLC).

The Writeback Buffer temporarily stores cache blocks awaiting writeback to memory. It uses a FIFO-based architecture to preserve the order of pending writebacks while supporting associative address searches.

The buffer allows pending writeback data to be retrieved by address, potentially avoiding unnecessary memory accesses when the requested data is already present in the buffer.

## Architecture

The Writeback Buffer consists of three primary components:

### 1. FIFO Storage

The buffer uses a FIFO structure to store pending writeback entries.

Each entry contains:
- **Address:** Identifies the memory address associated with the writeback.
- **Data:** Stores the data awaiting writeback.
- **Status Bit:** Indicates whether an entry has been invalidated.

The buffer contains `DEPTH` entries, each consisting of `DWIDTH + AWIDTH + 1` bits.

### 2. Head and Tail Pointers

Two pointers manage the FIFO:

- **Head:** Identifies the next entry to be removed from the buffer.
- **Tail:** Identifies the next available location for inserting new data.

Both pointers include an additional bit to distinguish between full and empty conditions when their lower address bits match.

### 3. Associative Search Logic

The buffer supports searching for pending writebacks using a memory address.

The search logic compares `search_addr` against the stored addresses and returns the corresponding data when a matching valid entry is found.

This enables the cache controller to retrieve data from the writeback buffer without waiting for the pending writeback to complete.

## Key Architectural Features

### FIFO-Based Writeback Management

The buffer maintains pending writebacks in FIFO order.

- New entries are inserted at the tail.
- Entries are removed from the head.
- Full and empty conditions are determined using the head and tail pointers.

The `full` output prevents additional entries from being inserted when the buffer reaches capacity.

### Associative Address Lookup

Unlike a conventional FIFO, the Writeback Buffer supports searching its entries by address.

The search logic:
1. Compares the requested address against stored addresses.
2. Checks whether a matching entry is valid.
3. Asserts `found` when a valid match exists.
4. Returns the corresponding data through `search_data_o`.

This allows pending writeback data to be accessed independently of its position in the FIFO.

### Entry Invalidation

Each FIFO entry includes an additional status bit.

When an entry is popped, its status bit is set to indicate that the entry is no longer valid for associative searches.

The search logic ignores entries whose status bit is set.

### Writeback Drain Request

The module generates a `drain_rq` signal whenever the FIFO is not empty.

This signal indicates that pending writeback entries are available for processing by the cache controller or memory interface.

### Full and Empty Detection

The FIFO uses extended head and tail pointers to detect buffer occupancy.

- **Empty:** Head and tail pointers are equal.
- **Full:** Head and tail address bits match, but their additional wrap bits differ.

This approach distinguishes a completely empty FIFO from a completely full FIFO.

## Supported Operations

| Operation | Description |
|---|---|
| Push | Insert a new address/data entry into the FIFO |
| Pop | Remove the oldest entry from the FIFO |
| Search | Search for a valid entry matching a requested address |
| Drain Request | Indicate that pending writeback entries exist |
| Reset | Clear FIFO contents and reset head/tail pointers |

## Interface

### Inputs

| Signal | Description |
|---|---|
| `clk` | Clock signal |
| `reset` | Active-low synchronous reset |
| `data_i` | Concatenated address and data input |
| `push_en` | Enables insertion of a new FIFO entry |
| `pop_en` | Enables removal of the oldest FIFO entry |
| `search_addr` | Address used for associative lookup |

### Outputs

| Signal | Description |
|---|---|
| `drain_rq` | Indicates that the FIFO contains pending entries |
| `search_data_o` | Data associated with a matching search address |
| `found` | Indicates that a valid matching address was found |
| `data_o` | Oldest FIFO entry returned during a pop |
| `data_valid` | Indicates valid output data following a pop |
| `full` | Indicates that the FIFO is full |

## Configuration

The module supports the following parameters:

| Parameter | Description |
|---|---|
| `DEPTH` | Maximum number of entries in the FIFO |
| `DWIDTH` | Width of the stored data |
| `AWIDTH` | Width of the stored address |

The total storage capacity is:

$$
\text{Storage (Bits)} = \text{DEPTH} \times (\text{DWIDTH} + \text{AWIDTH} + 1)
$$

