// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_array.h for the primary calling header

#ifndef VERILATED_VDATA_ARRAY___024ROOT_H_
#define VERILATED_VDATA_ARRAY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdata_array__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_array___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cache_tb__DOT__clk;
    CData/*0:0*/ cache_tb__DOT__reset;
    CData/*7:0*/ cache_tb__DOT__address;
    CData/*6:0*/ cache_tb__DOT__opcode_i;
    CData/*2:0*/ cache_tb__DOT__funct3_i;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__curr_state;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__next_state;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__hit;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__idle;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__replace_en;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_tag_array__DOT__replace_way;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__clk__0;
    IData/*31:0*/ cache_tb__DOT__cache__DOT__mem_out;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 21> cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory;
    VlUnpacked<CData/*7:0*/, 1024> cache_tb__DOT__cache__DOT__memory1__DOT__main_memory;
    VlUnpacked<VlUnpacked<CData/*2:0*/, 2>, 4> cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 4> cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 4> cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vdata_array__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_array___024root(Vdata_array__Syms* symsp, const char* v__name);
    ~Vdata_array___024root();
    VL_UNCOPYABLE(Vdata_array___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
