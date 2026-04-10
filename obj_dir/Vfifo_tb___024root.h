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
    CData/*0:0*/ fifo_tb__DOT__pop_valid;
    CData/*2:0*/ fifo_tb__DOT____Vcellout__fifo1__found_entry;
    CData/*0:0*/ fifo_tb__DOT__rd_req;
    CData/*0:0*/ fifo_tb__DOT__pop_en;
    CData/*1:0*/ fifo_tb__DOT__push_test;
    CData/*2:0*/ fifo_tb__DOT__fifo1__DOT__head;
    CData/*2:0*/ fifo_tb__DOT__fifo1__DOT__tail;
    CData/*0:0*/ fifo_tb__DOT__fifo1__DOT__empty;
    CData/*1:0*/ fifo_tb__DOT__mem1__DOT__curr_state;
    CData/*1:0*/ fifo_tb__DOT__mem1__DOT__next_state;
    CData/*0:0*/ fifo_tb__DOT__mem1__DOT__read_en;
    CData/*0:0*/ fifo_tb__DOT__mem1__DOT__write_en;
    CData/*0:0*/ fifo_tb__DOT__mem1__DOT__ready;
    CData/*0:0*/ fifo_tb__DOT__mem1__DOT__write_finished;
    CData/*3:0*/ fifo_tb__DOT__mem1__DOT__store_address;
    CData/*0:0*/ fifo_tb__DOT__mem1__DOT__request;
    CData/*3:0*/ fifo_tb__DOT__mem1__DOT__memory_address;
    CData/*0:0*/ fifo_tb__DOT__mem1__DOT__address;
    CData/*0:0*/ fifo_tb__DOT__mem1__DOT__funct3_i;
    CData/*3:0*/ fifo_tb__DOT__mem1__DOT__memory1__DOT__delay;
    CData/*7:0*/ fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h9cad2051__0;
    CData/*7:0*/ fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h8832fe4e__0;
    CData/*7:0*/ fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h22887a14__0;
    CData/*7:0*/ fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h22386af0__0;
    CData/*7:0*/ fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h22377ae3__0;
    CData/*7:0*/ fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0;
    SData/*11:0*/ fifo_tb__DOT__push_data;
    SData/*12:0*/ fifo_tb__DOT__pop_data;
    IData/*31:0*/ fifo_tb__DOT__fifo1__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat;
    IData/*31:0*/ fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i;
    IData/*31:0*/ fifo_tb__DOT__mem1__DOT__memory1__DOT__data_o;
    IData/*31:0*/ fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat;
    IData/*31:0*/ fifo_tb__DOT__mem1__DOT__memory1__DOT__i;
    IData/*31:0*/ fifo_tb__DOT__mem1__DOT__memory1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ fifo_tb__DOT__mem1__DOT__memory1__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ fifo_tb__DOT__mem1__DOT__mem_out;
    QData/*63:0*/ fifo_tb__DOT__mem1__DOT__mem_store;
    VlUnpacked<SData/*12:0*/, 4> fifo_tb__DOT__fifo1__DOT__fifo_buffer;
    VlUnpacked<IData/*31:0*/, 147> fifo_tb__DOT__mem1__DOT__memory1__DOT__temp_memory;
    VlUnpacked<CData/*7:0*/, 641536> fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
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
