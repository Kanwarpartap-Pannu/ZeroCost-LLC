
SHELL := /bin/bash

# define parameters
TEST 				?= test1
MEM_PATH              ?= test_files/${TEST}.x
MEM_PATH_NOT_DIR			:= $(notdir $(MEM_PATH))
LINE_COUNT            ?= $(shell echo `wc -l < $(MEM_PATH)`)
MEM_PATH_STR          ?= \"$(abspath $(MEM_PATH))\"
MEM_DEPTH ?= 256
CACHE_SIZE ?= 64 
BLOCK_SIZE ?= 8
WAYS ?= 2

VERILATOR_FLAGS = \
    -DMEM_DEPTH=$(MEM_DEPTH) \
    -DCACHE_SIZE=$(CACHE_SIZE) \
    -DBLOCK_SIZE=$(BLOCK_SIZE) \
    -DWAYS=$(WAYS) \
	-DMEM_PATH=$(MEM_PATH_STR) \
	-DLINE_COUNT=$(LINE_COUNT) \
	-Idesign


lint:
	verilator --lint-only $(VERILATOR_FLAGS) -f verilator.f

run: 
	verilator --binary $(VERILATOR_FLAGS) -f verilator.f > run.log 2>&1
	./obj_dir/Vcache_tb

