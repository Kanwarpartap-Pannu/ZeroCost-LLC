# Tag Array

## Overview

This module implements the **Tag Array and metadata management logic** for a shared Last-Level Cache (LLC).

The architecture supports cache block relocation, tracking of private cache sharers, and replacement policies. It maintains mappings between tag entries and their corresponding locations in the data array.

A key architectural feature is the separation of the **Tag Array** and **Data Array**, allowing cache blocks to be relocated independently of their original tag locations.

## Architecture

The module consists of three primary structures:

### 1. Tag Array

Stores cache tags and their corresponding data locations.

Each entry contains:
- **Tag:** Identifies the cache block.
- **Sharers:** Bit vector indicating which cores currently cache the block.
- **Set:** Set index of the corresponding data array entry.
- **Way:** Way index of the corresponding data array entry.

The tag array contains `NUM_SETS × (2 × WAYS)` entries.

### 2. Tag Metadata

Maintains the state of each tag array entry.

- **Empty:** Indicates whether the entry is valid.
- **Clean:** Tracks whether the cache block is clean or dirty.
- **Relocated:** Indicates whether the block has been relocated.
- **Shared:** Indicates whether the block is currently cached in a private cache.

### 3. Data Metadata

Tracks the state and ownership of entries in the data array.

- **Empty:** Indicates whether the data entry is valid.
- **CRE:** Identifies whether the entry can be used as a Clean Relocation Entry.
- **LRU:** Tracks the relative age of cache blocks for replacement.
- **Set/Way:** Reverse pointer to the corresponding tag array entry.

The data metadata structure contains `NUM_SETS × WAYS` entries.

## Key Architectural Features

### Decoupled Tag and Data Arrays

Unlike conventional set-associative caches, tag entries are not restricted to referencing data entries within the same set.

Each tag entry maintains a pointer to its corresponding data location, while each data entry maintains a reverse pointer to its associated tag.

This enables cache blocks to be relocated between data sets without changing their original tag lookup location.

### Cache Block Relocation

The module implements a three-stage relocation mechanism:

1. **Stage 1 — Victim Selection:** Selects a victim using LRU and records its associated tag location.
2. **Stage 2 — Relocation:** Updates the victim's tag pointer to reference an available data entry in another set and updates the reverse pointer.
3. **Stage 3 — Cleanup:** Invalidates the original data entry and, when necessary, the overwritten tag entry.

Relocation allows the cache to accommodate new blocks when the requested set has no immediately available data entries.

### Clean Relocation Entries (CRE)

The architecture tracks data entries eligible for relocation or replacement.

A CRE represents an available entry or a clean, unshared cache block that can be replaced without requiring a dirty writeback.

The module maintains:
- `has_cre`: Bit vector identifying sets containing available relocation entries.
- `next_rs`: Selects a set containing an available relocation entry.

### Cache Coherence Tracking

Each tag entry maintains a sharer bit vector indicating which private caches currently hold the block.

The module updates sharer information during load, store, eviction, and writeback operations.

It also tracks clean/dirty status and generates control signals when eviction or relocation is required.

### Replacement Policy

The module implements an **LRU-based replacement policy**.

Each data entry maintains an LRU age counter. Cache hits update the corresponding ages, and the entry with the greatest age is selected as the relocation victim.

## Supported Operations

| Operation | Description |
|---|---|
| `T_IDLE` | No operation |
| `T_INSERT` | Insert a new tag and update data metadata |
| `T_REMOVE` | Invalidate an existing cache entry |
| `T_LOAD` | Process a cache hit and update sharer/LRU information |
| `T_STORE` | Process a cache hit and mark the block dirty |
| `T_RELOC_ONE` | Select and record the relocation victim |
| `T_RELOC_TWO` | Update tag and data pointers during relocation |
| `T_RELOC_THREE` | Complete relocation and invalidate old entries |
| `T_EVICT` | Update sharer information following eviction |
| `T_WRITEBACK` | Process a private-cache writeback and update metadata |

## Control Signals

The module generates the following outputs:

| Signal | Description |
|---|---|
| `hit` | Indicates a matching valid tag |
| `set_out` | Selected data array set |
| `way_out` | Selected data array way |
| `relocate_ctrl` | Signals that relocation is required |
| `evict_ctrl` | Signals that eviction is required |

## Interface

### Inputs

| Signal | Description |
|---|---|
| `clk` | Clock signal |
| `reset` | Active-low synchronous reset |
| `tag_i` | Tag of the requested cache block |
| `set_i` | Set index used for tag lookup and cache operations |
| `requester` | ID of the requesting core, used to track private cache sharers |
| `T_op` | Tag Array operation selector |

### Outputs

| Signal | Description |
|---|---|
| `way_out` | Selected way in the Data Array |
| `set_out` | Selected set in the Data Array |
| `hit` | Indicates whether a valid matching tag was found |
| `relocate_ctrl` | Signals that cache block relocation is required |
| `evict_ctrl` | Signals that cache block eviction is required |

## Configuration

The module supports configurable cache parameters defined through `constants.svh`.

| Parameter | Description |
|---|---|
| `NUM_SETS` | Number of cache sets |
| `WAYS` | Number of data ways per set |
| `TAG_BITS` | Width of cache tag |
| `SET_BITS` | Width of set index |
| `CORE_COUNT` | Number of supported cores |
| `PRIV_CAP` | Private cache capacity |
| `LLC_CAP` | Last-level cache capacity |
