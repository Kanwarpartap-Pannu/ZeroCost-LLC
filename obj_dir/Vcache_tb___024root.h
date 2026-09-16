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
        CData/*6:0*/ cache_tb__DOT__opcode_i;
        CData/*2:0*/ cache_tb__DOT__funct3_i;
        CData/*0:0*/ cache_tb__DOT__stall;
        CData/*0:0*/ cache_tb__DOT__data_valid;
        CData/*0:0*/ cache_tb__DOT__requester;
        CData/*0:0*/ cache_tb__DOT__start;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__mem_op;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_data_valid;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__memory_rq;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__write_finished;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__pop_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__rd_rq;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__drain_req;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__pop_valid;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__wb_buffer_found;
        CData/*3:0*/ cache_tb__DOT__cache__DOT__found_entry;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__buffer_full;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__buffer_ctrl;
        CData/*2:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__q;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__next_state;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__active_req;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_flag;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_state;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__hit;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__idle;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_set_tag;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_way_tag;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__enable;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__dirty_sig;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__replace_en_data;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__store_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__dir_hit;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__search_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__search_done;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__share_en_tag;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en_tag;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__tag_way;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__insert_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__share_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__next_rs;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__q_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_dir_index;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_dir_way;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__valid_ornot;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT____VdfgExtracted_h03db6b6c__0;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT____VdfgExtracted_ha4ce45db__0;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocate_state;
    };
    struct {
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocate_set_o;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocate_way_o;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__has_re;
        CData/*2:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset;
        CData/*2:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__q;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_set;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_found;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__has_re_pv;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__next_rs;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__curr_state;
        CData/*1:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__next_state;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__read_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__write_en;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__ready;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__write_finished;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__request;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__address;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__funct3_i;
        CData/*3:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__delay;
        CData/*3:0*/ cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head;
        CData/*3:0*/ cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail;
        CData/*0:0*/ cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__clk__0;
        CData/*0:0*/ __VactDidInit;
        SData/*15:0*/ cache_tb__DOT__addr;
        SData/*15:0*/ cache_tb__DOT__cache__DOT__mem_addr;
        SData/*15:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__replace_address;
        SData/*11:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__replace_way_meta_data;
        SData/*11:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__tag_metadata_o;
        SData/*15:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__store_address;
        SData/*15:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__memory_address;
        SData/*15:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__memory1__DOT__memory_address__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__memory1__DOT__memory_address__1;
        IData/*31:0*/ cache_tb__DOT__store_data;
        IData/*31:0*/ cache_tb__DOT__data_out;
        IData/*31:0*/ cache_tb__DOT__i;
        VlWide<3>/*79:0*/ cache_tb__DOT__cache__DOT__buffer_store;
        VlWide<3>/*80:0*/ cache_tb__DOT__cache__DOT__pop_data;
        VlWide<3>/*79:0*/ cache_tb__DOT__cache__DOT__push_data;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__data_out;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk6__DOT__i;
    };
    struct {
        IData/*31:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__data_o;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ cache_tb__DOT__cache__DOT__wb_buffer1__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ cache_tb__DOT__cache__DOT__found_buffer_data;
        QData/*63:0*/ cache_tb__DOT__cache__DOT__temp;
        QData/*63:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__data_in;
        QData/*63:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_block;
        VlWide<4>/*127:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o;
        VlWide<8>/*255:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array;
        QData/*63:0*/ cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp;
        QData/*63:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__mem_out;
        QData/*63:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__mem_store;
        VlUnpacked<QData/*55:0*/, 21> cache_tb__DOT__test_addresses;
        VlUnpacked<IData/*31:0*/, 21> cache_tb__DOT__my_array;
        VlUnpacked<VlUnpacked<SData/*11:0*/, 2>, 2> cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*1:0*/, 2>, 2> cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 2> cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 2> cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 2>, 2> cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array;
        VlUnpacked<VlUnpacked<SData/*11:0*/, 4>, 2> cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array;
        VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 2> cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data;
        VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 2> cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array;
        VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 2> cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 2> cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array;
        VlUnpacked<SData/*11:0*/, 4> cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array;
        VlUnpacked<IData/*31:0*/, 146> cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__temp_memory;
        VlUnpacked<CData/*7:0*/, 4194304> cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory;
        VlUnpacked<VlWide<3>/*80:0*/, 8> cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer;
        VlUnpacked<QData/*63:0*/, 2> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
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
