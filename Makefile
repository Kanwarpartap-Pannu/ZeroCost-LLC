
SHELL := /bin/bash

# define parameters
TEST 				?= test1
MEM_PATH              ?= test_files/${TEST}.x
MEM_PATH_NOT_DIR			:= $(notdir $(MEM_PATH))
LINE_COUNT            ?= $(shell echo `wc -l < $(MEM_PATH)`)
MEM_PATH_STR          ?= \"$(abspath $(MEM_PATH))\"
MEM_DEPTH ?= 65536
CACHE_SIZE ?= 128 
BLOCK_SIZE ?= 8
NUM_SETS ?= $(shell echo $$(( $(CACHE_SIZE) / ($(BLOCK_SIZE) * $(WAYS)) )))
WAYS ?= 8
CORE_COUNT ?= 4

CUSTOM_FILES ?= test/verilator_fifo.f
OBJ_DIR ?= Vfifo_tb

VERILATOR_FLAGS = \
    -DMEM_DEPTH=$(MEM_DEPTH) \
    -DCACHE_SIZE=$(CACHE_SIZE) \
    -DBLOCK_SIZE=$(BLOCK_SIZE) \
    -DWAYS=$(WAYS) \
	-DMEM_PATH=$(MEM_PATH_STR) \
	-DLINE_COUNT=$(LINE_COUNT) \
	-DCORE_COUNT=$(CORE_COUNT) \
	-DNUM_SETS=$(NUM_SETS) \
	-Idesign \
	-Itest


# Lint only mode to check for errors and warnings 
lint:
	verilator --lint-only $(VERILATOR_FLAGS) -f verilator.f

# Running the Simulation 
run: 
	verilator --binary $(VERILATOR_FLAGS) -f verilator.f > run.log 2>&1
	./obj_dir/Vcache_tb

# Running Specific Tests
custom:  
	verilator --binary $(VERILATOR_FLAGS) -f $(CUSTOM_FILES)
	./obj_dir/$(OBJ_DIR)

# Pulling up Waveforms with saved scopes 
wave: 
	gtkwave cache.vcd cache.gtkw

# Clean workspace 
clean:
	rm -rf obj_dir run.log