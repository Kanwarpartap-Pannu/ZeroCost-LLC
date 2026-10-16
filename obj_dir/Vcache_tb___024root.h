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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ cache_tb__DOT__clk;
        CData/*0:0*/ cache_tb__DOT__reset;
        CData/*2:0*/ cache_tb__DOT__op;
        CData/*2:0*/ cache_tb__DOT__funct3_i;
        CData/*0:0*/ cache_tb__DOT__stall;
        CData/*0:0*/ cache_tb__DOT__data_valid;
        CData/*0:0*/ cache_tb__DOT__requester;
        CData/*0:0*/ cache_tb__DOT__start;
        CData/*3:0*/ cache_tb__DOT__cache__DOT__T_op;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__tag_way;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__tag_set;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__hit;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__relocate_ctrl;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__evict_ctrl;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__D_op;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__data_set;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__push_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__pop_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__found;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__full;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__buffer_data_valid;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__M_op;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__ready_out;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__wr_finished;
        CData/*3:0*/ cache_tb__DOT__cache__DOT__curr_state;
        CData/*3:0*/ cache_tb__DOT__cache__DOT__next_state;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__buff_write;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__has_cre;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__next_rs;
        CData/*4:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__q;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__hit_way;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__hit_set;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__cre_found;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__empty_found;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__empty_way;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__cre_way;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__free_way;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__search_set;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__victim;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__cre_update;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__victim_way;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__victim_set;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__overwrite_needed;
        CData/*3:0*/ cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head;
        CData/*3:0*/ cache_tb__DOT__cache__DOT__wr_buffer1__DOT__tail;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty;
        CData/*2:0*/ cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__read_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__write_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__request;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__address;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__funct3_i;
        CData/*3:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__delay;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__clk__0;
        SData/*15:0*/ cache_tb__DOT__address;
        SData/*15:0*/ cache_tb__DOT__cache__DOT__mem_addr;
        SData/*15:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__store_address;
        IData/*31:0*/ cache_tb__DOT__store_data;
        IData/*31:0*/ cache_tb__DOT__i;
    };
    struct {
        IData/*31:0*/ cache_tb__DOT__cache__DOT__search_data_o;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__mem_data_in;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__j;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__unnamedblk9__DOT__i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__wr_buffer1__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_dat;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__data_o;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ __VdfgRegularize_hebeb780c_0_0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ cache_tb__DOT__cache__DOT__cache_line_data;
        QData/*63:0*/ cache_tb__DOT__cache__DOT__way_data_o;
        QData/*47:0*/ cache_tb__DOT__cache__DOT__buffer_data_i;
        QData/*63:0*/ cache_tb__DOT__cache__DOT____Vcellout__wr_buffer1__data_o;
        QData/*63:0*/ cache_tb__DOT__cache__DOT__temp;
        VlWide<8>/*255:0*/ cache_tb__DOT__cache__DOT__data1__DOT__data_array;
        QData/*63:0*/ cache_tb__DOT__cache__DOT__data1__DOT__temp;
        QData/*63:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__mem_out;
        QData/*63:0*/ cache_tb__DOT__cache__DOT__mem1__DOT__mem_store;
        VlUnpacked<QData/*55:0*/, 21> cache_tb__DOT__test_addresses;
        VlUnpacked<IData/*31:0*/, 21> cache_tb__DOT__my_array;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 4>, 2> cache_tb__DOT__cache__DOT__tag1__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 4>, 2> cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata;
        VlUnpacked<VlUnpacked<CData/*5:0*/, 2>, 2> cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata;
        VlUnpacked<VlWide<3>/*64:0*/, 8> cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer;
        VlUnpacked<IData/*31:0*/, 146> cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__temp_memory;
        VlUnpacked<CData/*7:0*/, 4194304> cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
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
