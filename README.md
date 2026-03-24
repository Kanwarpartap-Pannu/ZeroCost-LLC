# ZeroCost-LLC
ZeroCost-LLC (ZCLLC) is a SystemVerilog implementation of a last level cache based on the ACM paper “High Performance and Predictable Shared Last-Level Cache for Safety-Critical Systems” by Zhuanhao Wu, Anirudh Kaushik, and Hiren Patel (ACM Transactions on Embedded Computing Systems, 2024).

# Supported Features 
- Parameterizable Set Associative Cache 
- Parameterizable Block size, memory depth, memory delay 
- LRU Replacement policy 
- Load/Store Support 
- Write back Cache 

# Planned Improvements 
    - 
# Running the Cache 

To run simulation ensure verilator is installed and run the following command: 
```
make run
```

Then to view waveforms ensure GTKwave is installed and run the following:
```
gtkwave cache.vcd
```
