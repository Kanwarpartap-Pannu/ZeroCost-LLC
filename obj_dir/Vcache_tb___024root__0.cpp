// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_tb.h for the primary calling header

#include "Vcache_tb__pch.h"

VL_ATTR_COLD void Vcache_tb___024root___eval_initial__TOP(Vcache_tb___024root* vlSelf);
VlCoroutine Vcache_tb___024root___eval_initial__TOP__Vtiming__0(Vcache_tb___024root* vlSelf);

void Vcache_tb___024root___eval_initial(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_initial\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcache_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vcache_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vcache_tb___024root___eval_initial__TOP__Vtiming__0(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("SIMULATION START\n",0);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "design/cache_tb.sv", 
                                         31);
    VL_FINISH_MT("design/cache_tb.sv", 32, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcache_tb___024root___eval_triggers__act(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_triggers__act\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.cache_tb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__clk__0 
        = vlSelfRef.cache_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcache_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vcache_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcache_tb___024root___nba_sequent__TOP__0(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___nba_sequent__TOP__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__cache_tb__DOT__cache__DOT__next_state;
    __Vdly__cache_tb__DOT__cache__DOT__next_state = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v0;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v0 = 0;
    CData/*1:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v0;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v0 = 0;
    CData/*1:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v1;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v1 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v1;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v1 = 0;
    CData/*1:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v2;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v2 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v2;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v2 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v3;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v3 = 0;
    CData/*1:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v3;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v3 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v3;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v3 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 = 0;
    CData/*1:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 = 0;
    CData/*2:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 = 0;
    CData/*1:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 = 0;
    // Body
    __Vdly__cache_tb__DOT__cache__DOT__next_state = vlSelfRef.cache_tb__DOT__cache__DOT__next_state;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v1 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v2 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v3 = 0U;
    __Vdly__cache_tb__DOT__cache__DOT__next_state = vlSelfRef.cache_tb__DOT__cache__DOT__curr_state;
    if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__idle)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__unnamedblk4__DOT__i = 2U;
    }
    if (vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) {
        __Vdly__cache_tb__DOT__cache__DOT__next_state = 0U;
    } else {
        if ((1U & (~ VL_ONEHOT_I((((0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                                   << 1U) | (3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))))) {
            if ((0U != (((0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                         << 1U) | (3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: lookup.sv:115: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '7'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 7,(IData)(vlSelfRef.cache_tb__DOT__opcode_i));
                    VL_STOP_MT("design/lookup.sv", 115, "");
                }
            }
        }
        if (((3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
             || (0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)))) {
            if (vlSelfRef.cache_tb__DOT__cache__DOT__hit) {
                __Vdly__cache_tb__DOT__cache__DOT__next_state = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit)))) {
                __Vdly__cache_tb__DOT__cache__DOT__next_state = 1U;
            }
        } else {
            __Vdly__cache_tb__DOT__cache__DOT__next_state = 0U;
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))))) {
        if ((0U == (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: lookup.sv:113: Assertion failed in %Ncache_tb.cache: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
                VL_STOP_MT("design/lookup.sv", 113, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: lookup.sv:113: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
            VL_STOP_MT("design/lookup.sv", 113, "");
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__idle)))) {
        if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit)))) {
            __VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__replace_way;
            __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 
                = (3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U));
            __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 = 1U;
            __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 
                = (7U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 5U));
            __VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__replace_way;
            __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 
                = (3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U));
            __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 = 1U;
        }
        if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way) {
            if (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                  [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                          >> 3U))][0U] < vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                  [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                          >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way]) 
                 & vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                 [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U))][0U])) {
                __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v0 
                    = (1U & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                             [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                     >> 3U))][0U]));
                __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v0 
                    = (3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U));
                __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v0 = 1U;
            }
            __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v2 
                = (3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U));
            __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v2 = 1U;
        } else {
            __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v1 
                = (3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U));
            __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v1 = 1U;
            if (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                  [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                          >> 3U))][1U] < vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                  [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                          >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way]) 
                 & vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                 [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U))][1U])) {
                __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v3 
                    = (1U & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                             [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                     >> 3U))][1U]));
                __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v3 
                    = (3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U));
                __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v3 = 1U;
            }
        }
    }
    if (vlSelfRef.cache_tb__DOT__cache__DOT__replace_en) {
        VL_ASSIGNSEL_WQ(1024, 64, (0x000003ffU & (VL_SHIFTL_III(10,32,32, 
                                                                ((IData)(3U) 
                                                                 - 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                     >> 3U))), 8U) 
                                                  + 
                                                  (0x000000ffU 
                                                   & VL_SHIFTL_III(8,32,32, 
                                                                   ((IData)(3U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way)), 6U)))), vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array, (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_out)));
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v0][0U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v0;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v1) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v1][0U] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v2) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v2][1U] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v3) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v3][1U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array__v3;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0] = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__curr_state 
        = ((IData)(vlSelfRef.cache_tb__DOT__reset) 
           && (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__next_state));
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
         [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][0U] == (7U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                        >> 5U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__hit = 1U;
    }
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
         [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][1U] == (7U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                        >> 5U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__hit = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = 0U;
    if ((1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
               [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][0U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 0U;
    } else {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 0U;
    }
    if ((1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
               [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][1U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__next_state 
        = __Vdly__cache_tb__DOT__cache__DOT__next_state;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way = 0U;
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
         [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][0U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
         [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way = 0U;
    }
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
         [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][1U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
         [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way = 1U;
    }
    vlSelfRef.cache_tb__DOT__data_out = 0U;
    vlSelfRef.cache_tb__DOT__data_valid = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) {
        vlSelfRef.cache_tb__DOT__cache__DOT__idle = 1U;
        vlSelfRef.cache_tb__DOT__data_valid = 1U;
        vlSelfRef.cache_tb__DOT__stall = 0U;
        vlSelfRef.cache_tb__DOT__data_out = (0x000000ffU 
                                             & (vlSelfRef.cache_tb__DOT__cache__DOT__mem_out 
                                                >> 
                                                (0x0000001fU 
                                                 & VL_SHIFTL_III(5,32,32, 
                                                                 (7U 
                                                                  & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))));
        vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 1U;
    } else {
        if (((3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
             || (0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)))) {
            if (vlSelfRef.cache_tb__DOT__cache__DOT__hit) {
                vlSelfRef.cache_tb__DOT__cache__DOT__idle = 0U;
                vlSelfRef.cache_tb__DOT__data_valid = 1U;
                vlSelfRef.cache_tb__DOT__data_out = 
                    (0x000000ffU & (((0U == (0x0000001fU 
                                             & ((0x000003ffU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 ((IData)(3U) 
                                                                  - 
                                                                  (3U 
                                                                   & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                      >> 3U))), 8U)) 
                                                + (0x0000007fU 
                                                   & (VL_SHIFTL_III(7,32,32, 
                                                                    ((IData)(1U) 
                                                                     - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way)), 6U) 
                                                      + 
                                                      (0x0000003fU 
                                                       & VL_SHIFTL_III(6,32,32, 
                                                                       (7U 
                                                                        & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))))
                                      ? 0U : (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                                              (((IData)(7U) 
                                                + (
                                                   (0x000003ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    ((IData)(3U) 
                                                                     - 
                                                                     (3U 
                                                                      & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                         >> 3U))), 8U)) 
                                                   + 
                                                   (0x0000007fU 
                                                    & (VL_SHIFTL_III(7,32,32, 
                                                                     ((IData)(1U) 
                                                                      - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way)), 6U) 
                                                       + 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (7U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))) 
                                               >> 5U)] 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((0x000003ffU 
                                                       & VL_SHIFTL_III(10,10,32, 
                                                                       ((IData)(3U) 
                                                                        - 
                                                                        (3U 
                                                                         & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                            >> 3U))), 8U)) 
                                                      + 
                                                      (0x0000007fU 
                                                       & (VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))))) 
                                    | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                                       (((0x000003ffU 
                                          & VL_SHIFTL_III(10,10,32, 
                                                          ((IData)(3U) 
                                                           - 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                               >> 3U))), 8U)) 
                                         + (0x0000007fU 
                                            & (VL_SHIFTL_III(7,32,32, 
                                                             ((IData)(1U) 
                                                              - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way)), 6U) 
                                               + (0x0000003fU 
                                                  & VL_SHIFTL_III(6,32,32, 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                        >> 5U)] >> 
                                       (0x0000001fU 
                                        & ((0x000003ffU 
                                            & VL_SHIFTL_III(10,10,32, 
                                                            ((IData)(3U) 
                                                             - 
                                                             (3U 
                                                              & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                 >> 3U))), 8U)) 
                                           + (0x0000007fU 
                                              & (VL_SHIFTL_III(7,32,32, 
                                                               ((IData)(1U) 
                                                                - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way)), 6U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & VL_SHIFTL_III(6,32,32, 
                                                                  (7U 
                                                                   & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))))));
                vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit)))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__idle = 0U;
                vlSelfRef.cache_tb__DOT__data_valid = 0U;
                vlSelfRef.cache_tb__DOT__stall = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
            }
        } else {
            vlSelfRef.cache_tb__DOT__cache__DOT__idle = 1U;
            vlSelfRef.cache_tb__DOT__data_out = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                                   << 1U) | (3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))))) {
            if ((0U != (((0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                         << 1U) | (3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: lookup.sv:153: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '7'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 7,(IData)(vlSelfRef.cache_tb__DOT__opcode_i));
                    VL_STOP_MT("design/lookup.sv", 153, "");
                }
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))))) {
        if ((0U == (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: lookup.sv:151: Assertion failed in %Ncache_tb.cache: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
                VL_STOP_MT("design/lookup.sv", 151, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: lookup.sv:151: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
            VL_STOP_MT("design/lookup.sv", 151, "");
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__replace_way 
        = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found)
            ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way)
            : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way));
}

void Vcache_tb___024root___eval_nba(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_nba\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcache_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vcache_tb___024root___timing_resume(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___timing_resume\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcache_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcache_tb___024root___eval_phase__act(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_phase__act\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcache_tb___024root___eval_triggers__act(vlSelf);
    Vcache_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcache_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vcache_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vcache_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcache_tb___024root___eval_phase__nba(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_phase__nba\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcache_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcache_tb___024root___eval_nba(vlSelf);
        Vcache_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcache_tb___024root___eval(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcache_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("design/cache_tb.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcache_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("design/cache_tb.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vcache_tb___024root___eval_phase__act(vlSelf));
    } while (Vcache_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vcache_tb___024root___eval_debug_assertions(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_debug_assertions\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
