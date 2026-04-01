// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo_tb.h for the primary calling header

#ifndef VERILATED_VFIFO_TB___024ROOT_H_
#define VERILATED_VFIFO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfifo_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfifo_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ fifo_tb__DOT__clk;
    CData/*0:0*/ fifo_tb__DOT__reset;
    CData/*1:0*/ fifo_tb__DOT__push_pop;
    CData/*3:0*/ fifo_tb__DOT__search_addr;
    CData/*2:0*/ fifo_tb__DOT__merge_entry;
    CData/*0:0*/ fifo_tb__DOT__found;
    CData/*7:0*/ fifo_tb__DOT__found_data;
    CData/*0:0*/ fifo_tb__DOT__buffer_full;
    CData/*7:0*/ fifo_tb__DOT____Vcellout__fifo1__pop_data;
    CData/*2:0*/ fifo_tb__DOT____Vcellout__fifo1__found_entry;
    CData/*2:0*/ fifo_tb__DOT__fifo1__DOT__head;
    CData/*2:0*/ fifo_tb__DOT__fifo1__DOT__tail;
    CData/*0:0*/ fifo_tb__DOT__fifo1__DOT__empty;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0;
    SData/*11:0*/ fifo_tb__DOT__push_data;
    IData/*31:0*/ fifo_tb__DOT__fifo1__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*12:0*/, 4> fifo_tb__DOT__fifo1__DOT__fifo_buffer;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vfifo_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfifo_tb___024root(Vfifo_tb__Syms* symsp, const char* v__name);
    ~Vfifo_tb___024root();
    VL_UNCOPYABLE(Vfifo_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
