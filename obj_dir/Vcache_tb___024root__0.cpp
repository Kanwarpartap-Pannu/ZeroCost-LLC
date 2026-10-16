// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_tb.h for the primary calling header

#include "Vcache_tb__pch.h"

VL_ATTR_COLD void Vcache_tb___024root___eval_initial__TOP(Vcache_tb___024root* vlSelf);
VlCoroutine Vcache_tb___024root___eval_initial__TOP__Vtiming__0(Vcache_tb___024root* vlSelf);
VlCoroutine Vcache_tb___024root___eval_initial__TOP__Vtiming__1(Vcache_tb___024root* vlSelf);

void Vcache_tb___024root___eval_initial(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_initial\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcache_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vcache_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcache_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vcache_tb___024root___eval_initial__TOP__Vtiming__0(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("SIMULATION START\n",0);
    vlSelfRef.cache_tb__DOT__op = 0U;
    vlSelfRef.cache_tb__DOT__funct3_i = 3U;
    vlSelfRef.cache_tb__DOT__store_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "test/cache_tb.sv", 
                                         76);
    vlSelfRef.cache_tb__DOT__start = 1U;
    vlSelfRef.cache_tb__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "test/cache_tb.sv", 
                                         79);
    VL_FINISH_MT("test/cache_tb.sv", 80, "");
}

VlCoroutine Vcache_tb___024root___eval_initial__TOP__Vtiming__1(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "test/cache_tb.sv", 
                                             41);
        vlSelfRef.cache_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__clk)));
    }
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

void Vcache_tb___024root___act_sequent__TOP__0(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___act_sequent__TOP__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_tb__DOT__data_valid = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 3U;
    vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 0U;
    if (((((((((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
               | (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
              | (4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
             | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
            | (5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
           | (6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
          | (7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
         | (8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))) {
        if ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((0U != (IData)(vlSelfRef.cache_tb__DOT__op))) {
                if (vlSelfRef.cache_tb__DOT__cache__DOT__hit) {
                    if ((1U & (~ ((IData)(vlSelfRef.cache_tb__DOT__op) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cache_tb__DOT__op) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cache_tb__DOT__op) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.cache_tb__DOT__op))) {
                                    vlSelfRef.cache_tb__DOT__data_valid = 1U;
                                }
                            }
                        }
                        if ((4U & (IData)(vlSelfRef.cache_tb__DOT__op))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cache_tb__DOT__op) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__op)))) {
                                    vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 0U;
                                    vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 4U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.cache_tb__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cache_tb__DOT__op))) {
                                vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 3U;
                                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 6U;
                            } else {
                                vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 0U;
                                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 3U;
                            }
                        } else if ((1U & (IData)(vlSelfRef.cache_tb__DOT__op))) {
                            vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 2U;
                            vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 2U;
                        }
                    }
                } else {
                    vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 3U;
                    vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 0U;
                }
            }
        } else if ((3U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 0x0eU;
            } else if ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 0x0eU;
            } else if ((5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 2U;
                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 8U;
            } else if ((6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 0x0aU;
            } else {
                vlSelfRef.cache_tb__DOT__cache__DOT__T_op 
                    = ((7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                        ? 0x0cU : 0x0fU);
            }
        }
    } else if ((0x0aU != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
        if ((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if (vlSelfRef.cache_tb__DOT__cache__DOT__buff_write) {
                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 0x0fU;
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                               << 2U) | (((8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                                          << 1U) | 
                                         (0x0eU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))))))) {
        if ((0U != (((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                     << 2U) | (((8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                                << 1U) | (0x0eU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tag_array.sv:297: Assertion failed in %Ncache_tb.cache.tag1: unique case, but multiple matches found for '4'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),4,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op));
                VL_STOP_MT("rtl/tag_array.sv", 297, "");
            }
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_update = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__evict_ctrl = 0U;
    if (((6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
         | (4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))) {
        if (((3U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                    [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                            >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag] 
                    >> 2U)) == (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_tb__DOT__requester))))) {
            if (((4U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                 & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                    [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                            >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag] 
                    >> 2U))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_update = 1U;
            }
            if ((1U & (~ ((4U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                          & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                             [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                     >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag] 
                             >> 2U))))) {
                if ((4U == ((IData)(4U) - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__q)))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__evict_ctrl = 1U;
                }
            }
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set 
        = (1U & (((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                  | (0x0cU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))
                  ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs)
                  : ((IData)(vlSelfRef.cache_tb__DOT__address) 
                     >> 3U)));
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_found = 0U;
    if ((0x00000010U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
         [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set]
         [0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_found = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_way = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_way = 0U;
    } else {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_way = 0U;
    }
    if ((0x00000010U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
         [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set]
         [1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_found = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_way = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way = 0U;
    if ((0x00000020U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
         [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set]
         [0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found = 1U;
    } else {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found = 0U;
    }
    if ((0x00000020U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
         [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set]
         [1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__relocate_ctrl = 0U;
    if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit)))) {
        if ((1U & ((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found)) 
                   & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_found))))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__relocate_ctrl = 1U;
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way 
        = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found)
            ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way)
            : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_way));
    if ((0x0eU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_set 
            = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                     >> 3U));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_way 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
    } else if ((8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_set 
            = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                     >> 3U));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_way 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim));
    } else if ((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_set 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_way 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
    } else {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_set 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_way 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way));
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag 
        = (3U & ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found)
                  ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag)
                  : vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                 [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U))][(1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way))]));
    vlSelfRef.cache_tb__DOT__stall = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__next_state = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp 
        = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array[
                            (((IData)(0x0000003fU) 
                              + (0x000000ffU & (VL_SHIFTL_III(8,32,32, 
                                                              ((IData)(1U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))) 
                             >> 5U)])) << ((0U == (0x0000001fU 
                                                   & (VL_SHIFTL_III(8,32,32, 
                                                                    ((IData)(1U) 
                                                                     - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                      + 
                                                      (0x0000007fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U)))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & (VL_SHIFTL_III(8,32,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                     + 
                                                     (0x0000007fU 
                                                      & VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))))) 
           | (((0U == (0x0000001fU & (VL_SHIFTL_III(8,32,32, 
                                                    ((IData)(1U) 
                                                     - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                      + (0x0000007fU 
                                         & VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(1U) 
                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U)))))
                ? 0ULL : ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array[
                                          (((IData)(0x0000001fU) 
                                            + (0x000000ffU 
                                               & (VL_SHIFTL_III(8,32,32, 
                                                                ((IData)(1U) 
                                                                 - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                  + 
                                                  (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))) 
                                           >> 5U)])) 
                          << ((IData)(0x00000020U) 
                              - (0x0000001fU & (VL_SHIFTL_III(8,32,32, 
                                                              ((IData)(1U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))))) 
              | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array[
                                 (7U & ((VL_SHIFTL_III(8,32,32, 
                                                       ((IData)(1U) 
                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                         + (0x0000007fU 
                                            & VL_SHIFTL_III(7,32,32, 
                                                            ((IData)(1U) 
                                                             - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))) 
                                        >> 5U))])) 
                 >> (0x0000001fU & (VL_SHIFTL_III(8,32,32, 
                                                  ((IData)(1U) 
                                                   - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                    + (0x0000007fU 
                                       & VL_SHIFTL_III(7,32,32, 
                                                       ((IData)(1U) 
                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U)))))));
    vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp 
        = ((4U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
            ? ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                ? ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                    ? (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))
                    : (((~ (0x00000000000000ffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)((0x000000ffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                : ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                    ? (((~ (0x000000000000ffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)((0x0000ffffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))
                    : (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))
            : ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                ? ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                    ? (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))
                    : (((~ (0x00000000000000ffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)((0x000000ffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                : ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                    ? (((~ (0x000000000000ffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)((0x0000ffffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))
                    : (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))));
    vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o 
        = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array[
                            (((IData)(0x0000003fU) 
                              + (0x000000ffU & (VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(1U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,7,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))) 
                             >> 5U)])) << ((0U == (0x0000001fU 
                                                   & (VL_SHIFTL_III(8,8,32, 
                                                                    ((IData)(1U) 
                                                                     - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                      + 
                                                      (0x0000007fU 
                                                       & VL_SHIFTL_III(7,7,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U)))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & (VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                     + 
                                                     (0x0000007fU 
                                                      & VL_SHIFTL_III(7,7,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))))) 
           | (((0U == (0x0000001fU & (VL_SHIFTL_III(8,8,32, 
                                                    ((IData)(1U) 
                                                     - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                      + (0x0000007fU 
                                         & VL_SHIFTL_III(7,7,32, 
                                                         ((IData)(1U) 
                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U)))))
                ? 0ULL : ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array[
                                          (((IData)(0x0000001fU) 
                                            + (0x000000ffU 
                                               & (VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(1U) 
                                                                 - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                  + 
                                                  (0x0000007fU 
                                                   & VL_SHIFTL_III(7,7,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))) 
                                           >> 5U)])) 
                          << ((IData)(0x00000020U) 
                              - (0x0000001fU & (VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(1U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,7,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))))) 
              | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array[
                                 (7U & ((VL_SHIFTL_III(8,8,32, 
                                                       ((IData)(1U) 
                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                         + (0x0000007fU 
                                            & VL_SHIFTL_III(7,7,32, 
                                                            ((IData)(1U) 
                                                             - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))) 
                                        >> 5U))])) 
                 >> (0x0000001fU & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(1U) 
                                                   - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                    + (0x0000007fU 
                                       & VL_SHIFTL_III(7,7,32, 
                                                       ((IData)(1U) 
                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (IData)(
                                                       (vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o 
                                                        >> 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (7U 
                                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))));
    vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_i = 0ULL;
    if (((((((((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
               | (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
              | (4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
             | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
            | (5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
           | (6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
          | (7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
         | (8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))) {
        if ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((0U != (IData)(vlSelfRef.cache_tb__DOT__op))) {
                if (vlSelfRef.cache_tb__DOT__cache__DOT__hit) {
                    vlSelfRef.cache_tb__DOT__stall 
                        = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__evict_ctrl)
                            ? 1U : 0U);
                } else if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__relocate_ctrl) 
                            & ((1U == (IData)(vlSelfRef.cache_tb__DOT__op)) 
                               | (2U == (IData)(vlSelfRef.cache_tb__DOT__op))))) {
                    vlSelfRef.cache_tb__DOT__stall = 1U;
                } else if (vlSelfRef.cache_tb__DOT__cache__DOT__found) {
                    vlSelfRef.cache_tb__DOT__stall = 1U;
                } else if (((1U == (IData)(vlSelfRef.cache_tb__DOT__op)) 
                            | (2U == (IData)(vlSelfRef.cache_tb__DOT__op)))) {
                    vlSelfRef.cache_tb__DOT__stall = 1U;
                }
            }
            if ((0U == (IData)(vlSelfRef.cache_tb__DOT__op))) {
                if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__next_state = 0x0aU;
                }
            } else {
                vlSelfRef.cache_tb__DOT__cache__DOT__next_state 
                    = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit)
                        ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__evict_ctrl)
                            ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__full)
                                ? 0x0aU : 8U) : 0U)
                        : (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__relocate_ctrl) 
                            & ((1U == (IData)(vlSelfRef.cache_tb__DOT__op)) 
                               | (2U == (IData)(vlSelfRef.cache_tb__DOT__op))))
                            ? 5U : ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__found)
                                     ? 2U : (((1U == (IData)(vlSelfRef.cache_tb__DOT__op)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.cache_tb__DOT__op)))
                                              ? 3U : 0U))));
            }
        } else {
            vlSelfRef.cache_tb__DOT__stall = ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                              || ((4U 
                                                   == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                                  || ((2U 
                                                       == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                                      || ((5U 
                                                           == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                                          || ((6U 
                                                               == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                                              || (7U 
                                                                  == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))));
            vlSelfRef.cache_tb__DOT__cache__DOT__next_state 
                = (0x0000000fU & ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                                   ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__ready_out)
                                       ? 4U : 3U) : 
                                  ((4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                                    ? 0U : ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                                             ? 0U : 
                                            ((5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                                              ? 6U : 
                                             ((6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                                               ? 7U
                                               : ((7U 
                                                   == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                                                   ? 
                                                  ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__found)
                                                    ? 2U
                                                    : 3U)
                                                   : 0U)))))));
        }
        if ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((3U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                if ((4U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                    if ((2U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                        if ((5U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                            if ((6U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                                if ((7U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                                    vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_i 
                                        = (0x0000ffffffffffffULL 
                                           & vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            vlSelfRef.cache_tb__DOT__stall = 1U;
            vlSelfRef.cache_tb__DOT__cache__DOT__next_state = 9U;
        } else if ((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            vlSelfRef.cache_tb__DOT__stall = 1U;
            vlSelfRef.cache_tb__DOT__cache__DOT__next_state 
                = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_finished)
                    ? 0U : 9U);
        }
        if ((0x0aU != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                if (vlSelfRef.cache_tb__DOT__cache__DOT__buff_write) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_i 
                        = (0x0000ffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o);
                }
            }
        }
    }
}

void Vcache_tb___024root___eval_act(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_act\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcache_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vcache_tb__ConstPool__TABLE_h65dd285e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcache_tb__ConstPool__TABLE_hfc6a6fef_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vcache_tb__ConstPool__TABLE_h6fb8f3ff_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcache_tb__ConstPool__TABLE_h11f3b929_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcache_tb__ConstPool__TABLE_h627a7f2d_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcache_tb__ConstPool__TABLE_hfe0ee99c_0;

void Vcache_tb___024root___nba_sequent__TOP__0(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___nba_sequent__TOP__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*15:0*/ __Vdly__cache_tb__DOT__address;
    __Vdly__cache_tb__DOT__address = 0;
    CData/*2:0*/ __Vdly__cache_tb__DOT__op;
    __Vdly__cache_tb__DOT__op = 0;
    CData/*2:0*/ __VdlyMask__cache_tb__DOT__op;
    __VdlyMask__cache_tb__DOT__op = 0;
    IData/*31:0*/ __Vdly__cache_tb__DOT__store_data;
    __Vdly__cache_tb__DOT__store_data = 0;
    IData/*31:0*/ __VdlyMask__cache_tb__DOT__store_data;
    __VdlyMask__cache_tb__DOT__store_data = 0;
    CData/*0:0*/ __Vdly__cache_tb__DOT__cache__DOT__buff_write;
    __Vdly__cache_tb__DOT__cache__DOT__buff_write = 0;
    CData/*4:0*/ __Vdly__cache_tb__DOT__cache__DOT__tag1__DOT__q;
    __Vdly__cache_tb__DOT__cache__DOT__tag1__DOT__q = 0;
    CData/*3:0*/ __Vdly__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head;
    __Vdly__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1;
    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3;
    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v4;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v4 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v24;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v24 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v24;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v24 = 0;
    SData/*11:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32;
    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v33;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v33 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v33;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v33 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v25;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v25 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v25;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v25 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v34;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v34 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v34;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v34 = 0;
    IData/*31:0*/ __VdlyLsb__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33;
    __VdlyLsb__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v26;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v26 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v26;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v26 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v35;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v35 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v35;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v35 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34;
    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27;
    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v36;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v36 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v36;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v36 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35;
    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35 = 0;
    CData/*1:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28;
    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v29;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v29 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v29;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v29 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36;
    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v32;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v32 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v32;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v32 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37;
    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v33;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v33 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v33;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v33 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34;
    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34 = 0;
    CData/*1:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35;
    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35 = 0;
    IData/*31:0*/ __VdlyLsb__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38;
    __VdlyLsb__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v36;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v36 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v36;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v36 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39 = 0;
    IData/*31:0*/ __VdlyLsb__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39;
    __VdlyLsb__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40;
    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40;
    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40 = 0;
    VlWide<3>/*64:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0;
    VL_ZERO_W(65, __VdlyVal__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0);
    CData/*2:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0 = 0;
    CData/*2:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v1;
    __VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v1;
    __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v1 = 0;
    CData/*2:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v2;
    __VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v2 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v2;
    __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v2 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v3;
    __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v3 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v4;
    __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v4 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v0;
    __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v0 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v1;
    __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v1 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v1;
    __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v2;
    __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v2 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v2;
    __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v3;
    __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v3 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v3;
    __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v3 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v4;
    __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v4 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v4;
    __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v4 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v5;
    __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v5 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v5;
    __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v5 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v6;
    __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v6 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v6;
    __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v6 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v7;
    __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v7 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v7;
    __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v7 = 0;
    // Body
    __VdlySet__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v4 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v1 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v2 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v3 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v4 = 0U;
    __Vdly__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head 
        = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head;
    if ((1U & (~ VL_ONEHOT_I(((((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                << 4U) | (((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                           << 3U) | 
                                          ((5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                           << 2U))) 
                              | (((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                  << 1U) | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))))) {
        if ((0U != ((((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                      << 4U) | (((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                 << 3U) | ((5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                           << 2U))) 
                    | (((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                        << 1U) | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:158: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
                VL_STOP_MT("rtl/cache_controller.sv", 158, "");
            }
        }
    }
    __Vdly__cache_tb__DOT__cache__DOT__buff_write = vlSelfRef.cache_tb__DOT__cache__DOT__buff_write;
    __Vdly__cache_tb__DOT__address = vlSelfRef.cache_tb__DOT__address;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3 = 0U;
    __Vdly__cache_tb__DOT__cache__DOT__tag1__DOT__q 
        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__q;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32 = 0U;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__write_en) {
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__unnamedblk2__DOT__i = 8U;
        __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v0 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_store 
                                      >> 0x38U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v0 
            = (0x003fffffU & ((IData)(8U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat));
        __VdlySet__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v0 = 1U;
        __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v1 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_store 
                                      >> 0x30U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v1 
            = (0x003fffffU & ((IData)(7U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat));
        __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v2 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_store 
                                      >> 0x28U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v2 
            = (0x003fffffU & ((IData)(6U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat));
        __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v3 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_store 
                                      >> 0x20U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v3 
            = (0x003fffffU & ((IData)(5U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat));
        __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v4 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_store 
                                      >> 0x18U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v4 
            = (0x003fffffU & ((IData)(4U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat));
        __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v5 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_store 
                                      >> 0x10U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v5 
            = (0x003fffffU & ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat));
        __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v6 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_store 
                                      >> 8U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v6 
            = (0x003fffffU & ((IData)(2U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat));
        __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v7 
            = (0x000000ffU & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_store));
        __VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v7 
            = (0x003fffffU & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat));
    }
    if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__reset)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i = 4U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__unnamedblk9__DOT__i = 2U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__j = 2U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__unnamedblk2__DOT__i = 8U;
        __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v4 = 1U;
        __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v0 = 1U;
        __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v0 = 1U;
        __Vdly__cache_tb__DOT__cache__DOT__tag1__DOT__q = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre = 3U;
    }
    if ((((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
          | (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) 
         & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk6__DOT__i = 2U;
        if ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way))) {
            __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0 
                = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way));
            __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0 
                = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set;
            __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0 = 1U;
        } else if ((((1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                            [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set]
                            [0U] >> 3U)) <= (1U & (
                                                   vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                                                   [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set]
                                                   [
                                                   (1U 
                                                    & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way))] 
                                                   >> 3U))) 
                    & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                          [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set]
                          [0U] >> 5U)))) {
            __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1 
                = (1U & ((IData)(1U) + (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                                        [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set]
                                        [0U] >> 3U)));
            __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1 
                = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set;
            __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1 = 1U;
        }
        if ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way))) {
            __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2 
                = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way));
            __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2 
                = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set;
            __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2 = 1U;
        } else if ((((1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                            [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set]
                            [1U] >> 3U)) <= (1U & (
                                                   vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                                                   [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set]
                                                   [
                                                   (1U 
                                                    & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way))] 
                                                   >> 3U))) 
                    & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                          [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set]
                          [1U] >> 5U)))) {
            __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3 
                = (1U & ((IData)(1U) + (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                                        [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set]
                                        [1U] >> 3U)));
            __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3 
                = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set;
            __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3 = 1U;
        }
    }
    if ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
        if ((0U == (IData)(vlSelfRef.cache_tb__DOT__op))) {
            if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)))) {
                __Vdly__cache_tb__DOT__cache__DOT__buff_write = 0U;
            }
        } else if (vlSelfRef.cache_tb__DOT__cache__DOT__hit) {
            if (vlSelfRef.cache_tb__DOT__cache__DOT__evict_ctrl) {
                if (vlSelfRef.cache_tb__DOT__cache__DOT__full) {
                    __Vdly__cache_tb__DOT__cache__DOT__buff_write = 1U;
                }
            }
        }
        if ((0U != (IData)(vlSelfRef.cache_tb__DOT__op))) {
            if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit)))) {
                if ((1U & ((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__relocate_ctrl)) 
                           & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__found))))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr 
                        = (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__address));
                }
            }
        }
    } else if ((3U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
        if ((5U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((0x0aU != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                if ((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                    if (vlSelfRef.cache_tb__DOT__cache__DOT__buff_write) {
                        __Vdly__cache_tb__DOT__cache__DOT__buff_write = 0U;
                    }
                }
            }
            if ((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr 
                    = (0x0000ffffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT____Vcellout__wr_buffer1__data_o 
                                              >> 0x00000020U)));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__D_op) 
                  >> 1U)))) {
        VL_ASSIGNSEL_WQ(256, 64, (0x000000ffU & (VL_SHIFTL_III(8,32,32, 
                                                               ((IData)(1U) 
                                                                - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                 + 
                                                 (0x0000007fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(1U) 
                                                                   - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U)))), vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array, 
                        ((1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__D_op))
                          ? vlSelfRef.cache_tb__DOT__cache__DOT__cache_line_data
                          : vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp));
    }
    if ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
        if ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if (vlSelfRef.cache_tb__DOT__cache__DOT__ready_out) {
                vlSelfRef.cache_tb__DOT__cache__DOT__temp 
                    = (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out));
            }
        } else if ((5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__temp 
                = vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o;
        } else if ((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__temp 
                = (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT____Vcellout__wr_buffer1__data_o));
        }
    }
    if (vlSelfRef.cache_tb__DOT__reset) {
        if (vlSelfRef.cache_tb__DOT__cache__DOT__push_en) {
            vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_valid = 0U;
            if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__full)))) {
                __VdlyVal__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0[0U] 
                    = (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_i);
                __VdlyVal__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0[1U] 
                    = (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_i 
                               >> 0x00000020U));
                __VdlyVal__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0[2U] = 0U;
                __VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0 
                    = (7U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__tail));
                __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0 = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__tail 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__tail)));
            }
            vlSelfRef.cache_tb__DOT__cache__DOT____Vcellout__wr_buffer1__data_o = 0ULL;
        }
        if (vlSelfRef.cache_tb__DOT__cache__DOT__pop_en) {
            vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_valid 
                = (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)));
            if (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty) {
                vlSelfRef.cache_tb__DOT__cache__DOT____Vcellout__wr_buffer1__data_o = 0ULL;
            } else {
                vlSelfRef.cache_tb__DOT__cache__DOT____Vcellout__wr_buffer1__data_o 
                    = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
                                        [(7U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head))][1U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
                                                          [
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head))][0U])));
                __Vdly__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head)));
                __VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v1 
                    = (7U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head));
                __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v1 = 1U;
            }
        }
        if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__push_en) 
             & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__pop_en))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_valid = 0U;
            __VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v2 
                = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry;
            __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v2 = 1U;
            vlSelfRef.cache_tb__DOT__cache__DOT____Vcellout__wr_buffer1__data_o = 0ULL;
        }
        vlSelfRef.cache_tb__DOT__cache__DOT__curr_state 
            = vlSelfRef.cache_tb__DOT__cache__DOT__next_state;
    } else {
        vlSelfRef.cache_tb__DOT__cache__DOT__curr_state = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__tail = 0U;
        __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v3 = 1U;
        __Vdly__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head = 0U;
        __VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v4 = 1U;
    }
    if ((1U & (~ ((6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                  | (4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set))) 
                & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre)) 
               | (3U & (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found) 
                         | (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_found)) 
                        << (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set))));
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v0] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v0;
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v1] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v1;
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v2] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v2;
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v3] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v3;
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v4] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v4;
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v5] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v5;
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v6] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v6;
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v7] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory__v7;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__buff_write 
        = __Vdly__cache_tb__DOT__cache__DOT__buff_write;
    if ((8U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
        if ((4U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
            if ((2U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
                if ((1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag;
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32 = 1U;
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v24 
                        = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way));
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v24 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set;
                    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre 
                        = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre) 
                           | (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set))));
                } else {
                    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32 
                        = (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                          >> 4U));
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag;
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32 = 1U;
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v33 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag;
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v33 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v25 
                        = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v25 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v34 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag;
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v34 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlyLsb__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33 
                        = ((IData)(2U) + (IData)(vlSelfRef.cache_tb__DOT__requester));
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag;
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v26 
                        = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v26 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v35 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag;
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v35 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag;
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27 
                        = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v36 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag;
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v36 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35 
                        = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag;
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag;
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28 
                        = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v29 
                        = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v29 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                 >> 3U));
                }
            } else if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))) {
                __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30 
                    = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim));
                __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30 
                    = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U));
                __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30 = 1U;
                if (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__overwrite_needed) {
                    __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_way;
                    __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_set;
                    __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37 = 1U;
                }
                __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31 
                    = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim));
                __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31 
                    = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U));
                __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31 = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
            if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))) {
                __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs;
                __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_way;
                __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_set;
                __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36 = 1U;
                __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v32 
                    = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
                __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v32 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs;
                __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37 
                    = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
                __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_way;
                __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_set;
                __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v33 
                    = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
                __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v33 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs;
                __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_set;
                __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34 
                    = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
                __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs;
                __VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_way;
                __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35 
                    = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
                __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs;
            }
        }
    } else if ((4U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
        if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))) {
            __Vdly__cache_tb__DOT__cache__DOT__tag1__DOT__q 
                = (0x0000001fU & ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__q) 
                                  + (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__evict_ctrl)))));
            __VdlyLsb__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38 
                = ((IData)(2U) + (IData)(vlSelfRef.cache_tb__DOT__requester));
            __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38 
                = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag;
            __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38 
                = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U));
            __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38 = 1U;
            if ((4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
                __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag;
                __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38 
                    = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U));
                __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38 = 1U;
                __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v36 
                    = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way));
                __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v36 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set;
            }
            vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set))) 
                    & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre)) 
                   | (3U & ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_update) 
                            << (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set))));
        }
    } else if ((2U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
        if (vlSelfRef.cache_tb__DOT__cache__DOT__hit) {
            if ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
                __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag;
                __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39 
                    = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U));
                __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39 = 1U;
            }
            __VdlyLsb__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39 
                = ((IData)(2U) + (IData)(vlSelfRef.cache_tb__DOT__requester));
            __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39 
                = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag;
            __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39 
                = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U));
            __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39 = 1U;
            if ((1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                       [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                               >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag]))) {
                if ((1U & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                              [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                      >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag] 
                              >> 2U)))) {
                    __Vdly__cache_tb__DOT__cache__DOT__tag1__DOT__q 
                        = (0x0000001fU & ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__q) 
                                          - (IData)(1U)));
                }
                __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37 
                    = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way));
                __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set;
                __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37 = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set))) 
                        & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre)) 
                       | (3U & ((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_found) 
                                  & ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_way) 
                                     != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way)))
                                  ? 1U : 0U) << (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set))));
                __VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag;
                __VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40 
                    = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U));
                __VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40 = 1U;
            }
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__q 
        = __Vdly__cache_tb__DOT__cache__DOT__tag1__DOT__q;
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][0U] 
            = (0x000fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][0U] 
            = (0xfff3U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][0U] 
            = (0xfffdU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][0U] 
            = (0xfffeU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][1U] 
            = (0x000fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][1U] 
            = (0xfff3U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][1U] 
            = (0xfffdU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][1U] 
            = (0xfffeU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][2U] 
            = (0x000fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][2U] 
            = (0xfff3U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][2U] 
            = (0xfffdU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][2U] 
            = (0xfffeU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][3U] 
            = (0x000fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][3U] 
            = (0xfff3U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][3U] 
            = (0xfffdU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[0U][3U] 
            = (0xfffeU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [0U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][0U] 
            = (0x000fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][0U] 
            = (0xfff3U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][0U] 
            = (0xfffdU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][0U] 
            = (0xfffeU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][1U] 
            = (0x000fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][1U] 
            = (0xfff3U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][1U] 
            = (0xfffdU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][1U] 
            = (0xfffeU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][2U] 
            = (0x000fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][2U] 
            = (0xfff3U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][2U] 
            = (0xfffdU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][2U] 
            = (0xfffeU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][3U] 
            = (0x000fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][3U] 
            = (0xfff3U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][3U] 
            = (0xfffdU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[1U][3U] 
            = (0xfffeU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [1U][3U]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32] 
            = ((0x000fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32]
                [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32]) 
               | ((IData)(__VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32) 
                  << 4U));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33] 
            = ((~ ((IData)(1U) << __VdlyLsb__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33)) 
               & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v33]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34] 
            = ((0xfffdU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34]
                [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34]) 
               | ((IData)(__VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v34) 
                  << 1U));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35] 
            = ((0xfffeU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35]
                [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35]) 
               | (IData)(__VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v35));
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36] 
            = ((0xfffdU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36]
                [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36]) 
               | ((IData)(__VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36) 
                  << 1U));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37] 
            = ((0xfffeU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37]
                [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37]) 
               | (IData)(__VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v37));
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38] 
            = ((~ ((IData)(1U) << __VdlyLsb__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38)) 
               & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v38]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39] 
            = (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39] 
               | (0x0000ffffU & ((IData)(1U) << __VdlyLsb__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v39)));
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][0U] 
            = (8U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][0U] 
            = (4U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][0U] 
            = (0x0dU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][0U] 
            = (0x0eU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][1U] 
            = (8U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][1U] 
            = (4U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][1U] 
            = (0x0dU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][1U] 
            = (0x0eU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][2U] 
            = (8U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][2U] 
            = (4U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][2U] 
            = (0x0dU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][2U] 
            = (0x0eU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][3U] 
            = (8U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][3U] 
            = (4U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][3U] 
            = (0x0dU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[0U][3U] 
            = (0x0eU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [0U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][0U] 
            = (8U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][0U] 
            = (4U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][0U] 
            = (0x0dU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][0U] 
            = (0x0eU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][1U] 
            = (8U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][1U] 
            = (4U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][1U] 
            = (0x0dU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][1U] 
            = (0x0eU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][2U] 
            = (8U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][2U] 
            = (4U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][2U] 
            = (0x0dU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][2U] 
            = (0x0eU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][3U] 
            = (8U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][3U] 
            = (4U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][3U] 
            = (0x0dU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[1U][3U] 
            = (0x0eU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [1U][3U]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32] 
            = (8U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v33][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v33] 
            = (7U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v33]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v33]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v34][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v34] 
            = (4U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v34]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v34]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v35][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v35] 
            = (0x0dU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v35]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v35]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v36][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v36] 
            = (0x0eU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v36]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v36]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37] 
            = (8U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v37]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38] 
            = (0x0bU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39] 
            = (0x0bU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v39]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40] 
            = (1U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v40]);
    }
    __Vtableidx2 = ((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__write_en) 
                      << 6U) | ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__read_en) 
                                << 5U)) | (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__delay) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__request)));
    if ((1U & Vcache_tb__ConstPool__TABLE_h65dd285e_0
         [__Vtableidx2])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__ready_out 
            = Vcache_tb__ConstPool__TABLE_hfc6a6fef_0
            [__Vtableidx2];
    }
    if ((2U & Vcache_tb__ConstPool__TABLE_h65dd285e_0
         [__Vtableidx2])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__delay 
            = Vcache_tb__ConstPool__TABLE_h6fb8f3ff_0
            [__Vtableidx2];
    }
    if ((4U & Vcache_tb__ConstPool__TABLE_h65dd285e_0
         [__Vtableidx2])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_finished 
            = Vcache_tb__ConstPool__TABLE_h11f3b929_0
            [__Vtableidx2];
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_dat 
        = vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr;
    if ((1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs = 0U;
    }
    if ((2U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__overwrite_needed = 0U;
    if ((8U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
        if ((1U & (~ ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
                if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))) {
                    if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found)))) {
                        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__overwrite_needed = 1U;
                        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_set 
                            = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                                     [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                             >> 3U))]
                                     [(1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim))] 
                                     >> 2U));
                        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_way 
                            = (3U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                               [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                       >> 3U))][(1U 
                                                 & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim))]);
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_set 
                    = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                             [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                     >> 3U))][(1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim))] 
                             >> 2U));
                vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim_way 
                    = (3U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                       [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                               >> 3U))][(1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim))]);
            }
        }
    }
    if (((~ (IData)(vlSelfRef.cache_tb__DOT__stall)) 
         & (IData)(vlSelfRef.cache_tb__DOT__start))) {
        if ((0x00000015U == vlSelfRef.cache_tb__DOT__i)) {
            __Vdly__cache_tb__DOT__address = 0U;
            __Vdly__cache_tb__DOT__op = 0U;
            __VdlyMask__cache_tb__DOT__op = 7U;
            __Vdly__cache_tb__DOT__store_data = 0U;
            __VdlyMask__cache_tb__DOT__store_data = 0xffffffffU;
            vlSelfRef.cache_tb__DOT__requester = 0U;
        } else {
            __Vdly__cache_tb__DOT__address = (0x0000ffffU 
                                              & (IData)(
                                                        (((0x14U 
                                                           >= 
                                                           (0x0000001fU 
                                                            & vlSelfRef.cache_tb__DOT__i))
                                                           ? 
                                                          vlSelfRef.cache_tb__DOT__test_addresses
                                                          [
                                                          (0x0000001fU 
                                                           & vlSelfRef.cache_tb__DOT__i)]
                                                           : 0ULL) 
                                                         >> 0x28U)));
            __Vdly__cache_tb__DOT__op = (7U & (IData)(
                                                      (((0x14U 
                                                         >= 
                                                         (0x0000001fU 
                                                          & vlSelfRef.cache_tb__DOT__i))
                                                         ? 
                                                        vlSelfRef.cache_tb__DOT__test_addresses
                                                        [
                                                        (0x0000001fU 
                                                         & vlSelfRef.cache_tb__DOT__i)]
                                                         : 0ULL) 
                                                       >> 0x20U)));
            __VdlyMask__cache_tb__DOT__op = 7U;
            __Vdly__cache_tb__DOT__store_data = (IData)(
                                                        ((0x14U 
                                                          >= 
                                                          (0x0000001fU 
                                                           & vlSelfRef.cache_tb__DOT__i))
                                                          ? 
                                                         vlSelfRef.cache_tb__DOT__test_addresses
                                                         [
                                                         (0x0000001fU 
                                                          & vlSelfRef.cache_tb__DOT__i)]
                                                          : 0ULL));
            __VdlyMask__cache_tb__DOT__store_data = 0xffffffffU;
            vlSelfRef.cache_tb__DOT__requester = ((0x14U 
                                                   >= 
                                                   (0x0000001fU 
                                                    & vlSelfRef.cache_tb__DOT__i))
                                                   ? 
                                                  (1U 
                                                   & vlSelfRef.cache_tb__DOT__my_array
                                                   [
                                                   (0x0000001fU 
                                                    & vlSelfRef.cache_tb__DOT__i)])
                                                   : 0U);
            vlSelfRef.cache_tb__DOT__i = ((IData)(1U) 
                                          + vlSelfRef.cache_tb__DOT__i);
        }
    } else {
        __Vdly__cache_tb__DOT__address = vlSelfRef.cache_tb__DOT__address;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat 
        = ((0x01000000U > vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_dat)
            ? (0x003fffffU & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_dat)
            : (0x003fffffU & (vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_dat 
                              - (IData)(0x01000000U))));
    if (__VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[__VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0][0U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0[0U];
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[__VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0][1U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0[1U];
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[__VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0][2U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v0[2U];
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v1) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[__VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v1][2U] 
            = (1U | vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
               [__VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v1][2U]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v2) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[__VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v2][2U] 
            = (1U | vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
               [__VdlyDim0__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v2][2U]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v3) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[0U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[0U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[0U][2U] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer__v4) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[1U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[1U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[1U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[2U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[2U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[2U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[3U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[3U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[3U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[4U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[4U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[4U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[5U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[5U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[5U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[6U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[6U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[6U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[7U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[7U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[7U][2U] = 0U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head 
        = __Vdly__cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head;
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0] 
            = (0x37U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v0]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1][0U] 
            = ((0x37U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1]
                [0U]) | ((IData)(__VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v1) 
                         << 3U));
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2] 
            = (0x37U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v2]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3][1U] 
            = ((0x37U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3]
                [1U]) | ((IData)(__VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v3) 
                         << 3U));
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v4) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[0U][0U] 
            = (0x00000020U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [0U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[0U][0U] 
            = (0x00000010U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [0U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[0U][0U] 
            = (4U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [0U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[0U][0U] 
            = (1U | (0x3cU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                     [0U][0U]));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[0U][0U] 
            = (0x37U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [0U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[0U][1U] 
            = (0x00000020U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [0U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[0U][1U] 
            = (0x00000010U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [0U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[0U][1U] 
            = (4U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [0U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[0U][1U] 
            = (1U | (0x3cU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                     [0U][1U]));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[0U][1U] 
            = (0x37U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [0U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[1U][0U] 
            = (0x00000020U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [1U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[1U][0U] 
            = (0x00000010U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [1U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[1U][0U] 
            = (4U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [1U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[1U][0U] 
            = (1U | (0x3cU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                     [1U][0U]));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[1U][0U] 
            = (0x37U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [1U][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[1U][1U] 
            = (0x00000020U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [1U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[1U][1U] 
            = (0x00000010U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [1U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[1U][1U] 
            = (4U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [1U][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[1U][1U] 
            = (1U | (0x3cU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                     [1U][1U]));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[1U][1U] 
            = (0x37U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [1U][1U]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v32) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v24][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v24] 
            = (0x00000020U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v24]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v24]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v32) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v25][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v25] 
            = (0x1fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v25]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v25]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v26][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v26] 
            = (0x2fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v26]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v26]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27] 
            = ((0x3bU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27]
                [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27]) 
               | ((IData)(__VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v27) 
                  << 2U));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28] 
            = ((0x3cU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28]
                [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28]) 
               | (IData)(__VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v28));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v29][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v29] 
            = (0x37U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v29]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v29]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30] 
            = (0x00000020U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v30]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31] 
            = (0x00000010U | vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v31]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_array__v36) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v32][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v32] 
            = (0x1fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v32]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v32]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v33][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v33] 
            = (0x2fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v33]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v33]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34] 
            = ((0x3bU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34]
                [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34]) 
               | ((IData)(__VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v34) 
                  << 2U));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35] 
            = ((0x3cU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35]
                [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35]) 
               | (IData)(__VdlyVal__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v35));
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata__v38) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v36][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v36] 
            = (0x2fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v36]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v36]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37][__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37] 
            = (0x2fU & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [__VdlyDim1__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata__v37]);
    }
    vlSelfRef.cache_tb__DOT__store_data = ((__Vdly__cache_tb__DOT__store_data 
                                            & __VdlyMask__cache_tb__DOT__store_data) 
                                           | (vlSelfRef.cache_tb__DOT__store_data 
                                              & (~ __VdlyMask__cache_tb__DOT__store_data)));
    __VdlyMask__cache_tb__DOT__store_data = 0U;
    vlSelfRef.cache_tb__DOT__op = (((IData)(__Vdly__cache_tb__DOT__op) 
                                    & (IData)(__VdlyMask__cache_tb__DOT__op)) 
                                   | ((IData)(vlSelfRef.cache_tb__DOT__op) 
                                      & (~ (IData)(__VdlyMask__cache_tb__DOT__op))));
    __VdlyMask__cache_tb__DOT__op = 0U;
    vlSelfRef.cache_tb__DOT__address = __Vdly__cache_tb__DOT__address;
    if ((1U & (~ VL_ONEHOT_I(((((((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                  << 4U) | (((0x0aU 
                                              == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                             << 3U) 
                                            | ((8U 
                                                == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                               << 2U))) 
                                | (((7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                    << 1U) | (6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))) 
                               << 5U) | ((((5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                           << 4U) | 
                                          (((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                            << 3U) 
                                           | ((4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                              << 2U))) 
                                         | (((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                             << 1U) 
                                            | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))))))))) {
        if ((0U == ((((((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                        << 4U) | (((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                   << 3U) | ((8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                             << 2U))) 
                      | (((7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                          << 1U) | (6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))) 
                     << 5U) | ((((5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                 << 4U) | (((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                            << 3U) 
                                           | ((4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                              << 2U))) 
                               | (((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                   << 1U) | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:225: Assertion failed in %Ncache_tb.cache: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
                VL_STOP_MT("rtl/cache_controller.sv", 225, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:225: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
            VL_STOP_MT("rtl/cache_controller.sv", 225, "");
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__pop_en = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__push_en = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_data_in = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                        | (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
                       | (4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
                      | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
                     | (5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
                    | (6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
                   | (7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
                  | (8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))) {
        if ((0x0aU != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__mem_data_in 
                    = (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__temp);
            }
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__M_op = 0U;
    __Vtableidx1 = (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__tail) 
                     << 4U) | (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head));
    vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty 
        = Vcache_tb__ConstPool__TABLE_h627a7f2d_0[__Vtableidx1];
    vlSelfRef.cache_tb__DOT__cache__DOT__full = Vcache_tb__ConstPool__TABLE_hfe0ee99c_0
        [__Vtableidx1];
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag = 0U;
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag = 1U;
    }
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag = 1U;
    }
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][2U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag = 0U;
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag = 0U;
    }
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag = 1U;
    }
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][2U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag = 2U;
    }
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][3U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag = 3U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim = 0U;
    if ((((1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                 [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U))][0U] >> 3U)) >= (1U 
                                                  & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                                                     [
                                                     (1U 
                                                      & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                         >> 3U))]
                                                     [0U] 
                                                     >> 3U))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][0U] >> 5U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim = 0U;
    }
    if ((((1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                 [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U))][1U] >> 3U)) >= (1U 
                                                  & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                                                     [
                                                     (1U 
                                                      & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                         >> 3U))]
                                                     [
                                                     (1U 
                                                      & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim))] 
                                                     >> 3U))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][1U] >> 5U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way = 0U;
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][0U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [0U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way 
            = (1U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set 
            = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                     [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U))][0U] >> 1U));
    } else {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set = 0U;
    }
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][1U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [1U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way 
            = (1U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set 
            = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                     [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U))][1U] >> 1U));
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag = 0U;
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][0U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [0U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag = 0U;
    }
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][1U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [1U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag = 1U;
    }
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][2U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [2U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way 
            = (1U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set 
            = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                     [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U))][2U] >> 1U));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag = 2U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__hit = 0U;
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][0U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [0U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__hit = 1U;
    }
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][1U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [1U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__hit = 1U;
    }
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][2U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [2U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__hit = 1U;
    }
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][3U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [3U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way 
            = (1U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set 
            = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                     [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U))][3U] >> 1U));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag = 3U;
        vlSelfRef.cache_tb__DOT__cache__DOT__hit = 1U;
    }
    if (((((((((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
               | (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
              | (4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
             | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
            | (5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
           | (6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
          | (7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
         | (8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))) {
        if ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((3U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                if ((4U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                    if ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                        vlSelfRef.cache_tb__DOT__cache__DOT__pop_en = 1U;
                        vlSelfRef.cache_tb__DOT__cache__DOT__push_en = 1U;
                    } else if ((5U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                        if ((6U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                            if ((7U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                                vlSelfRef.cache_tb__DOT__cache__DOT__push_en = 1U;
                            }
                        }
                    }
                }
            }
            if ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__M_op = 2U;
            }
        }
    } else {
        if ((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_en = 1U;
        }
        if ((0x0aU != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                if (vlSelfRef.cache_tb__DOT__cache__DOT__buff_write) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__push_en = 1U;
                }
                vlSelfRef.cache_tb__DOT__cache__DOT__M_op = 1U;
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
                               << 2U) | (((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)))))))) {
        if ((0U != (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
                     << 2U) | (((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
                                << 1U) | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: memory_controller.sv:69: Assertion failed in %Ncache_tb.cache.mem1: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op));
                VL_STOP_MT("rtl/memory_controller.sv", 69, "");
            }
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__write_en 
        = ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
           && ((2U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
               && (1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op))));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__request 
        = ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
           && ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
               || (1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op))));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__read_en 
        = ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
           && (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)));
    vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 0U;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [0U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [0U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 0U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [1U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [1U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [2U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [2U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 2U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [3U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [3U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 3U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [4U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [4U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 4U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [5U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [5U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 5U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o = 0U;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [0U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [0U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [0U][0U];
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [1U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [1U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [1U][0U];
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [2U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [2U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [2U][0U];
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [3U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [3U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [3U][0U];
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [4U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [4U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [4U][0U];
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [5U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [5U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [5U][0U];
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [6U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [6U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 6U;
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [6U][0U];
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__found = 0U;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [0U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [0U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [1U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [1U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [2U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [2U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [3U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [3U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [4U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [4U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [5U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [5U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [6U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [6U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [7U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [7U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 7U;
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [7U][0U];
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__data_o = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out = 0ULL;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__read_en) {
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__data_o 
            = (((0x01000000U <= vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i) 
                & (0x01400000U > ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i)))
                ? (((vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                     [(0x003fffffU & ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i))] 
                     << 0x00000018U) | (vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                        [(0x003fffffU 
                                          & ((IData)(2U) 
                                             + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i))] 
                                        << 0x00000010U)) 
                   | ((vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                       [(0x003fffffU & ((IData)(1U) 
                                        + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i))] 
                       << 8U) | vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                      [(0x003fffffU & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i)]))
                : 0xdeadbeefU);
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0x00ffffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(8U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000038U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xff00ffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(7U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000030U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xffff00ffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(6U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000028U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xffffff00ffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(5U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000020U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xffffffff00ffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(4U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000018U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xffffffffff00ffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(3U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000010U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xffffffffffff00ffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(2U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 8U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xffffffffffffff00ULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | (IData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                 [(0x003fffffU & ((IData)(1U) 
                                                  + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])));
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_line_data = 0ULL;
    if (((((((((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
               | (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
              | (4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
             | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
            | (5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
           | (6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
          | (7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
         | (8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))) {
        if ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((3U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                if ((4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_line_data 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__temp;
                } else if ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_line_data 
                        = (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o));
                } else if ((5U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                    if ((6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                        vlSelfRef.cache_tb__DOT__cache__DOT__cache_line_data 
                            = vlSelfRef.cache_tb__DOT__cache__DOT__temp;
                    }
                }
            }
        }
    }
}

void Vcache_tb___024root___eval_nba(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_nba\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcache_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcache_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
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
        Vcache_tb___024root___eval_act(vlSelf);
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
            VL_FATAL_MT("test/cache_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcache_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("test/cache_tb.sv", 3, "", "Active region did not converge after 100 tries");
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
