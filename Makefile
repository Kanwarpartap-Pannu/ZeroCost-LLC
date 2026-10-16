
SHELL := /bin/bash

# Memory Paramters 
TEST 				?= test1
MEM_PATH              ?= test/test_files/${TEST}.x
MEM_PATH_NOT_DIR			:= $(notdir $(MEM_PATH))
LINE_COUNT            ?= $(shell echo `wc -l < $(MEM_PATH)`)
MEM_PATH_STR          ?= \"$(abspath $(MEM_PATH))\"
MEM_DEPTH ?= 65536

# CACHE Parameters 
CACHE_SIZE ?= 32 
BLOCK_SIZE ?= 8
NUM_SETS ?= $(shell echo $$(( $(CACHE_SIZE) / ($(BLOCK_SIZE) * $(WAYS)) )))
WAYS ?= 2
CORE_COUNT ?= 2
PRIV_CAP ?= 2
LLC_CAP ?= 4

VERILATOR_FLAGS = \
    -DMEM_DEPTH=$(MEM_DEPTH) \
    -DCACHE_SIZE=$(CACHE_SIZE) \
    -DBLOCK_SIZE=$(BLOCK_SIZE) \
    -DWAYS=$(WAYS) \
	-DMEM_PATH=$(MEM_PATH_STR) \
	-DLINE_COUNT=$(LINE_COUNT) \
	-DCORE_COUNT=$(CORE_COUNT) \
	-DNUM_SETS=$(NUM_SETS) \
	-DPRIV_CAP=$(PRIV_CAP) \
	-DLLC_CAP=$(LLC_CAP) \
	-Irtl \
	-Isim/simconfig \
	-Isim \
	-I$(UVM_HOME)/src \
	-Itest


# Lint only mode to check for errors and warnings 
lint:
	verilator --lint-only $(VERILATOR_FLAGS) -f sim/simconfig/verilator.f

# Running the Simulation 
run_uvm: 
	verilator --binary $(VERILATOR_FLAGS) --top-module tb_top -f sim/simconfig/verilator_uvm.f > sim/sim_out/run.log 2>&1
	./obj_dir/Vtb_top

run: 
	verilator --binary $(VERILATOR_FLAGS) --top-module cache_tb -f sim/simconfig/verilator.f > sim/sim_out/run.log 2>&1
	./obj_dir/Vcache_tb
# Pulling up Waveforms with saved scopes 
wave: 
	gtkwave sim/sim_out/cache.vcd sim/sim_out/cache.gtkw

# Clean workspace 
clean:
	rm -rf obj_dir run.log
