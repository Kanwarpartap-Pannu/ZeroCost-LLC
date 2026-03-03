// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcache_tb.h for the primary calling header

#ifndef VERILATED_VCACHE_TB___024ROOT_H_
#define VERILATED_VCACHE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcache_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcache_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cache_tb__DOT__clk;
    CData/*0:0*/ cache_tb__DOT__reset;
    CData/*6:0*/ cache_tb__DOT__opcode_i;
    CData/*2:0*/ cache_tb__DOT__funct3_i;
    CData/*0:0*/ cache_tb__DOT__stall;
    CData/*0:0*/ cache_tb__DOT__data_valid;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__curr_state;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__next_state;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__hit;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__idle;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__replace_en;
    CData/*1:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__size_encoded;
    CData/*7:0*/ cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h65e45dcb__0;
    CData/*7:0*/ cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h7dc8d4e9__0;
    CData/*7:0*/ cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h553c837c__0;
    CData/*7:0*/ cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h553c93ad__0;
    CData/*7:0*/ cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h562a9db1__0;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way;
    CData/*6:0*/ __VdfgRegularize_hebeb780c_0_0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__clk__0;
    SData/*13:0*/ cache_tb__DOT__address;
    IData/*31:0*/ cache_tb__DOT__store_data;
    IData/*31:0*/ cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat;
    IData/*31:0*/ cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i;
    IData/*31:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__data_o;
    IData/*31:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__address_dat;
    IData/*31:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__i;
    IData/*31:0*/ cache_tb__DOT__cache__DOT__cache_tag_array__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_1;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ cache_tb__DOT__cache__DOT__mem_out;
    VlWide<4>/*127:0*/ cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o;
    VlWide<16>/*511:0*/ cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array;
    VlUnpacked<IData/*31:0*/, 147> cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory;
    VlUnpacked<CData/*7:0*/, 40096> cache_tb__DOT__cache__DOT__memory1__DOT__main_memory;
    VlUnpacked<VlUnpacked<SData/*8:0*/, 2>, 4> cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 4> cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 4> cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vcache_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcache_tb___024root(Vcache_tb__Syms* symsp, const char* v__name);
    ~Vcache_tb___024root();
    VL_UNCOPYABLE(Vcache_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
