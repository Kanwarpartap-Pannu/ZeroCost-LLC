// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"

VL_ATTR_COLD void Vfifo_tb___024root___eval_initial__TOP(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__2(Vfifo_tb___024root* vlSelf);

void Vfifo_tb___024root___eval_initial(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfifo_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("SIMULATION START\n",0);
    co_await vlSelfRef.__VdlySched.delay(3ULL, nullptr, 
                                         "test/fifo_tb.sv", 
                                         66);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__reset = 1U;
    vlSelfRef.fifo_tb__DOT__search_addr = 8U;
    vlSelfRef.fifo_tb__DOT__push_test = 1U;
    vlSelfRef.fifo_tb__DOT__push_data = 0x08aaU;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "test/fifo_tb.sv", 
                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__push_test = 1U;
    vlSelfRef.fifo_tb__DOT__push_data = 0x0aaaU;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "test/fifo_tb.sv", 
                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__push_test = 1U;
    vlSelfRef.fifo_tb__DOT__push_data = 0x09aaU;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "test/fifo_tb.sv", 
                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__push_test = 3U;
    vlSelfRef.fifo_tb__DOT__push_data = 0x08a0U;
    vlSelfRef.fifo_tb__DOT__merge_entry = 0U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "test/fifo_tb.sv", 
                                         85);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.fifo_tb__DOT__push_test = 0U;
    vlSelfRef.fifo_tb__DOT__rd_req = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "test/fifo_tb.sv", 
                                         89);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("test/fifo_tb.sv", 129, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "test/fifo_tb.sv", 
                                             59);
        vlSelfRef.fifo_tb__DOT__push_pop = ((IData)(vlSelfRef.fifo_tb__DOT__pop_en)
                                             ? 2U : 
                                            (3U & (IData)(vlSelfRef.fifo_tb__DOT__push_test)));
    }
}

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__2(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "test/fifo_tb.sv", 
                                             56);
        vlSelfRef.fifo_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.fifo_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vfifo_tb___024root___eval_triggers__act(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_triggers__act\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.fifo_tb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 
        = vlSelfRef.fifo_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vfifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_anySet__act\n"); );
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

void Vfifo_tb___024root___act_sequent__TOP__0(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___act_sequent__TOP__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fifo_tb__DOT__found = 0U;
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [0U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [0U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found = 1U;
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [1U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [1U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found = 1U;
    }
    vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 0U;
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [0U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [0U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 0U;
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [1U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [1U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 1U;
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [2U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [2U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found = 1U;
        vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 2U;
    }
    vlSelfRef.fifo_tb__DOT__found_data = 0U;
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [0U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [0U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found_data = (0x000000ffU 
                                              & vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                                              [0U]);
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [1U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [1U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found_data = (0x000000ffU 
                                              & vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                                              [1U]);
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [2U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [2U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found_data = (0x000000ffU 
                                              & vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                                              [2U]);
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [3U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [3U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found = 1U;
        vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 3U;
        vlSelfRef.fifo_tb__DOT__found_data = (0x000000ffU 
                                              & vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                                              [3U]);
    }
    if ((0U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = ((IData)(vlSelfRef.fifo_tb__DOT__rd_req)
                ? 1U : ((1U & ((~ (IData)(vlSelfRef.fifo_tb__DOT__rd_req)) 
                               & (~ (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__empty))))
                         ? 2U : 0U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__push_data) 
                              >> 8U));
    } else if ((1U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = ((IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__ready)
                ? 0U : 1U);
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__push_data) 
                              >> 8U));
    } else if ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = ((IData)(vlSelfRef.fifo_tb__DOT__pop_valid)
                ? ((0x00001000U & (IData)(vlSelfRef.fifo_tb__DOT__pop_data))
                    ? 0U : 3U) : 2U);
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__push_data) 
                              >> 8U));
    } else if ((3U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = ((IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__write_finished)
                ? 0U : 3U);
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__store_address));
    } else {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state;
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__push_data) 
                              >> 8U));
    }
    vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat 
        = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address;
    vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat 
        = ((0x01000000U > vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat)
            ? VL_MODDIV_III(32, vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat, (IData)(0x0009ca00U))
            : VL_MODDIV_III(32, (vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat 
                                 - (IData)(0x01000000U)), (IData)(0x0009ca00U)));
    vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out = 0ULL;
    if (vlSelfRef.fifo_tb__DOT__mem1__DOT__read_en) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0x00ffffffffffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(8U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(8U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000038U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xff00ffffffffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(7U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(7U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000030U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffff00ffffffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(6U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(6U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000028U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffff00ffffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(5U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(5U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000020U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffffff00ffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000018U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffffffff00ffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(3U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(3U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000010U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffffffffff00ffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(2U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(2U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 8U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffffffffffff00ULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | (IData)((IData)(((0x0009c9ffU >= (0x000fffffU 
                                                   & VL_MODDIV_III(32, 
                                                                   ((IData)(1U) 
                                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                   ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x000fffffU & VL_MODDIV_III(32, 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                   : 0U))));
    }
}

void Vfifo_tb___024root___eval_act(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_act\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vfifo_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vfifo_tb__ConstPool__TABLE_h65dd285e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vfifo_tb__ConstPool__TABLE_hfc6a6fef_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vfifo_tb__ConstPool__TABLE_h6fb8f3ff_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vfifo_tb__ConstPool__TABLE_h11f3b929_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vfifo_tb__ConstPool__TABLE_h47de3021_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vfifo_tb__ConstPool__TABLE_h95960f88_0;

void Vfifo_tb___024root___nba_sequent__TOP__0(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_sequent__TOP__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vdly__fifo_tb__DOT__fifo1__DOT__tail;
    __Vdly__fifo_tb__DOT__fifo1__DOT__tail = 0;
    CData/*2:0*/ __Vdly__fifo_tb__DOT__fifo1__DOT__head;
    __Vdly__fifo_tb__DOT__fifo1__DOT__head = 0;
    SData/*12:0*/ __VdlyVal__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0;
    __VdlyVal__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 = 0;
    CData/*1:0*/ __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0;
    __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0;
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 = 0;
    CData/*1:0*/ __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v1;
    __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v1;
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v1 = 0;
    SData/*12:0*/ __VdlyVal__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v2;
    __VdlyVal__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v2 = 0;
    CData/*1:0*/ __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v2;
    __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v2 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v2;
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v2 = 0;
    CData/*1:0*/ __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v3;
    __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v3 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v3;
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v3 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v4;
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v5;
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v5 = 0;
    CData/*7:0*/ __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v0;
    __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v0 = 0;
    IData/*19:0*/ __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v0;
    __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v0;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v1;
    __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v1 = 0;
    IData/*19:0*/ __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v1;
    __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v1 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v1;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v2;
    __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v2 = 0;
    IData/*19:0*/ __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v2;
    __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v2 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v2;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v3;
    __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v3 = 0;
    IData/*19:0*/ __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v3;
    __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v3 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v3;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v3 = 0;
    CData/*7:0*/ __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v4;
    __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v4 = 0;
    IData/*19:0*/ __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v4;
    __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v4 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v4;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v4 = 0;
    CData/*7:0*/ __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v5;
    __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v5 = 0;
    IData/*19:0*/ __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v5;
    __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v5 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v5;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v5 = 0;
    CData/*7:0*/ __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v6;
    __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v6 = 0;
    IData/*19:0*/ __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v6;
    __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v6 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v6;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v6 = 0;
    CData/*7:0*/ __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v7;
    __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v7 = 0;
    IData/*19:0*/ __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v7;
    __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v7 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v7;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v7 = 0;
    // Body
    __Vdly__fifo_tb__DOT__fifo1__DOT__tail = vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail;
    __Vdly__fifo_tb__DOT__fifo1__DOT__head = vlSelfRef.fifo_tb__DOT__fifo1__DOT__head;
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 = 0U;
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v1 = 0U;
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v2 = 0U;
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v3 = 0U;
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v4 = 0U;
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v5 = 0U;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v0 = 0U;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v1 = 0U;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v2 = 0U;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v3 = 0U;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v4 = 0U;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v5 = 0U;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v6 = 0U;
    __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v7 = 0U;
    if (vlSelfRef.fifo_tb__DOT__mem1__DOT__write_en) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__unnamedblk2__DOT__i = 8U;
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0 
            = (0x000000ffU & (IData)((vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_store 
                                      >> 0x38U)));
        if ((0x0009c9ffU >= (0x000fffffU & VL_MODDIV_III(32, 
                                                         ((IData)(8U) 
                                                          + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))) {
            __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v0 
                = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0;
            __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v0 
                = (0x000fffffU & VL_MODDIV_III(32, 
                                               ((IData)(8U) 
                                                + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)));
            __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v0 = 1U;
        }
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0 
            = (0x000000ffU & (IData)((vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_store 
                                      >> 0x30U)));
        if ((0x0009c9ffU >= (0x000fffffU & VL_MODDIV_III(32, 
                                                         ((IData)(7U) 
                                                          + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))) {
            __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v1 
                = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0;
            __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v1 
                = (0x000fffffU & VL_MODDIV_III(32, 
                                               ((IData)(7U) 
                                                + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)));
            __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v1 = 1U;
        }
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0 
            = (0x000000ffU & (IData)((vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_store 
                                      >> 0x28U)));
        if ((0x0009c9ffU >= (0x000fffffU & VL_MODDIV_III(32, 
                                                         ((IData)(6U) 
                                                          + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))) {
            __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v2 
                = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0;
            __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v2 
                = (0x000fffffU & VL_MODDIV_III(32, 
                                               ((IData)(6U) 
                                                + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)));
            __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v2 = 1U;
        }
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0 
            = (0x000000ffU & (IData)((vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_store 
                                      >> 0x20U)));
        if ((0x0009c9ffU >= (0x000fffffU & VL_MODDIV_III(32, 
                                                         ((IData)(5U) 
                                                          + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))) {
            __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v3 
                = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0;
            __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v3 
                = (0x000fffffU & VL_MODDIV_III(32, 
                                               ((IData)(5U) 
                                                + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)));
            __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v3 = 1U;
        }
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0 
            = (0x000000ffU & (IData)((vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_store 
                                      >> 0x18U)));
        if ((0x0009c9ffU >= (0x000fffffU & VL_MODDIV_III(32, 
                                                         ((IData)(4U) 
                                                          + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))) {
            __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v4 
                = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0;
            __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v4 
                = (0x000fffffU & VL_MODDIV_III(32, 
                                               ((IData)(4U) 
                                                + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)));
            __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v4 = 1U;
        }
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0 
            = (0x000000ffU & (IData)((vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_store 
                                      >> 0x10U)));
        if ((0x0009c9ffU >= (0x000fffffU & VL_MODDIV_III(32, 
                                                         ((IData)(3U) 
                                                          + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))) {
            __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v5 
                = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0;
            __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v5 
                = (0x000fffffU & VL_MODDIV_III(32, 
                                               ((IData)(3U) 
                                                + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)));
            __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v5 = 1U;
        }
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0 
            = (0x000000ffU & (IData)((vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_store 
                                      >> 8U)));
        if ((0x0009c9ffU >= (0x000fffffU & VL_MODDIV_III(32, 
                                                         ((IData)(2U) 
                                                          + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))) {
            __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v6 
                = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0;
            __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v6 
                = (0x000fffffU & VL_MODDIV_III(32, 
                                               ((IData)(2U) 
                                                + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)));
            __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v6 = 1U;
        }
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0 
            = (0x000000ffU & (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_store));
        if ((0x0009c9ffU >= (0x000fffffU & VL_MODDIV_III(32, 
                                                         ((IData)(1U) 
                                                          + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))) {
            __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v7 
                = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0;
            __VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v7 
                = (0x000fffffU & VL_MODDIV_III(32, 
                                               ((IData)(1U) 
                                                + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)));
            __VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v7 = 1U;
        }
    }
    if (vlSelfRef.fifo_tb__DOT__pop_valid) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_store 
            = (QData)((IData)((0x000000ffU & (IData)(vlSelfRef.fifo_tb__DOT__pop_data))));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__store_address 
            = (0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__pop_data) 
                              >> 8U));
    } else {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_store 
            = vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_store;
        vlSelfRef.fifo_tb__DOT__mem1__DOT__store_address 
            = (0x0000000fU & (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__store_address));
    }
    __Vtableidx2 = ((((IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__write_en) 
                      << 6U) | ((IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__read_en) 
                                << 5U)) | (((IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__delay) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__request)));
    if ((1U & Vfifo_tb__ConstPool__TABLE_h65dd285e_0
         [__Vtableidx2])) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__ready = 
            Vfifo_tb__ConstPool__TABLE_hfc6a6fef_0[__Vtableidx2];
    }
    if ((2U & Vfifo_tb__ConstPool__TABLE_h65dd285e_0
         [__Vtableidx2])) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__delay 
            = Vfifo_tb__ConstPool__TABLE_h6fb8f3ff_0
            [__Vtableidx2];
    }
    if ((4U & Vfifo_tb__ConstPool__TABLE_h65dd285e_0
         [__Vtableidx2])) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__write_finished 
            = Vfifo_tb__ConstPool__TABLE_h11f3b929_0
            [__Vtableidx2];
    }
    if (__VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v0) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v0] 
            = __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v0;
    }
    if (__VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v1) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v1] 
            = __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v1;
    }
    if (__VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v2) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v2] 
            = __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v2;
    }
    if (__VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v3) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v3] 
            = __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v3;
    }
    if (__VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v4) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v4] 
            = __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v4;
    }
    if (__VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v5) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v5] 
            = __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v5;
    }
    if (__VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v6) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v6] 
            = __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v6;
    }
    if (__VdlySet__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v7) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[__VdlyDim0__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v7] 
            = __VdlyVal__fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory__v7;
    }
    vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state = 
        ((IData)(vlSelfRef.fifo_tb__DOT__reset) ? (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state)
          : 0U);
    if (vlSelfRef.fifo_tb__DOT__reset) {
        if ((1U & (~ VL_ONEHOT_I(((((3U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)) 
                                    << 3U) | ((2U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)) 
                                              << 2U)) 
                                  | (((1U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)) 
                                      << 1U) | (0U 
                                                == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)))))))) {
            if ((0U != ((((3U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)) 
                          << 3U) | ((2U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)) 
                                    << 2U)) | (((1U 
                                                 == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)) 
                                                << 1U) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: writeback_buffer.sv:106: Assertion failed in %Nfifo_tb.fifo1: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(IData)(vlSelfRef.fifo_tb__DOT__push_pop));
                    VL_STOP_MT("design/writeback_buffer.sv", 106, "");
                }
            }
        }
        if ((0U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop))) {
            __Vdly__fifo_tb__DOT__fifo1__DOT__tail 
                = vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail;
            __Vdly__fifo_tb__DOT__fifo1__DOT__head 
                = vlSelfRef.fifo_tb__DOT__fifo1__DOT__head;
            vlSelfRef.fifo_tb__DOT__pop_data = 0U;
            vlSelfRef.fifo_tb__DOT__pop_valid = 0U;
        } else if ((1U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop))) {
            if ((1U & (~ (IData)(vlSelfRef.fifo_tb__DOT__buffer_full)))) {
                __VdlyVal__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 
                    = vlSelfRef.fifo_tb__DOT__push_data;
                __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 
                    = (3U & (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail));
                __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 = 1U;
                __Vdly__fifo_tb__DOT__fifo1__DOT__tail 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail)));
            }
            vlSelfRef.fifo_tb__DOT__pop_data = 0U;
            vlSelfRef.fifo_tb__DOT__pop_valid = 0U;
        } else if ((2U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop))) {
            if (vlSelfRef.fifo_tb__DOT__fifo1__DOT__empty) {
                vlSelfRef.fifo_tb__DOT__pop_data = 0U;
                vlSelfRef.fifo_tb__DOT__pop_valid = 0U;
            } else {
                vlSelfRef.fifo_tb__DOT__pop_data = 
                    vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                    [(3U & (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__head))];
                vlSelfRef.fifo_tb__DOT__pop_valid = 1U;
                __Vdly__fifo_tb__DOT__fifo1__DOT__head 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__head)));
                __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v1 
                    = (3U & (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__head));
                __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v1 = 1U;
            }
        } else if ((3U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop))) {
            if ((1U & (~ (IData)(vlSelfRef.fifo_tb__DOT__buffer_full)))) {
                __VdlyVal__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v2 
                    = vlSelfRef.fifo_tb__DOT__push_data;
                __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v2 
                    = (3U & (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail));
                __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v2 = 1U;
                __Vdly__fifo_tb__DOT__fifo1__DOT__tail 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail)));
            }
            vlSelfRef.fifo_tb__DOT__pop_data = 0U;
            vlSelfRef.fifo_tb__DOT__pop_valid = 0U;
            __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v3 
                = (3U & (IData)(vlSelfRef.fifo_tb__DOT__merge_entry));
            __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v3 = 1U;
        } else {
            __Vdly__fifo_tb__DOT__fifo1__DOT__tail 
                = vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail;
            __Vdly__fifo_tb__DOT__fifo1__DOT__head 
                = vlSelfRef.fifo_tb__DOT__fifo1__DOT__head;
            vlSelfRef.fifo_tb__DOT__pop_data = 0U;
            vlSelfRef.fifo_tb__DOT__pop_valid = 0U;
        }
    } else {
        __Vdly__fifo_tb__DOT__fifo1__DOT__tail = 0U;
        __Vdly__fifo_tb__DOT__fifo1__DOT__head = 0U;
        __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v4 = 1U;
        vlSelfRef.fifo_tb__DOT__fifo1__DOT__unnamedblk2__DOT__i = 4U;
        __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v5 = 1U;
    }
    if ((1U & (~ VL_ONEHOT_I(((((3U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                << 3U) | ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                          << 2U)) | 
                              (((1U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                << 1U) | (0U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)))))))) {
        if ((0U != ((((3U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                      << 3U) | ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                << 2U)) | (((1U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: memory_controller.sv:87: Assertion failed in %Nfifo_tb.mem1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state));
                VL_STOP_MT("design/memory_controller.sv", 87, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((3U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                << 3U) | ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                          << 2U)) | 
                              (((1U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                << 1U) | (0U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)))))))) {
        if ((0U != ((((3U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                      << 3U) | ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                << 2U)) | (((1U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: memory_controller.sv:155: Assertion failed in %Nfifo_tb.mem1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state));
                VL_STOP_MT("design/memory_controller.sv", 155, "");
            }
        }
    }
    vlSelfRef.fifo_tb__DOT__mem1__DOT__request = ((0U 
                                                   != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                  && ((1U 
                                                       == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                      || ((2U 
                                                           != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                          && (3U 
                                                              == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)))));
    vlSelfRef.fifo_tb__DOT__mem1__DOT__write_en = (
                                                   (0U 
                                                    != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                   && ((1U 
                                                        != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                       && ((2U 
                                                            != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                           && (3U 
                                                               == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)))));
    vlSelfRef.fifo_tb__DOT__mem1__DOT__read_en = ((0U 
                                                   != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)));
    vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail = __Vdly__fifo_tb__DOT__fifo1__DOT__tail;
    vlSelfRef.fifo_tb__DOT__fifo1__DOT__head = __Vdly__fifo_tb__DOT__fifo1__DOT__head;
    if (__VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0) {
        vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[__VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0] 
            = __VdlyVal__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0;
    }
    if (__VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v1) {
        vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[__VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v1] 
            = (0x00001000U | vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [__VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v1]);
    }
    if (__VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v2) {
        vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[__VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v2] 
            = __VdlyVal__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v2;
    }
    if (__VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v3) {
        vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[__VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v3] 
            = (0x00001000U | vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [__VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v3]);
    }
    if (__VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v4) {
        vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[0U] = 0U;
    }
    if (__VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v5) {
        vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[1U] = 0U;
        vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[2U] = 0U;
        vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[3U] = 0U;
    }
    vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__data_o = 0U;
    if (vlSelfRef.fifo_tb__DOT__mem1__DOT__read_en) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__data_o 
            = (((0x01000000U <= vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i) 
                & (0x0109ca00U > ((IData)(3U) + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i)))
                ? (((((0x0009c9ffU >= (0x000fffffU 
                                       & ((IData)(3U) 
                                          + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i)))
                       ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                      [(0x000fffffU & ((IData)(3U) 
                                       + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i))]
                       : 0U) << 0x00000018U) | (((0x0009c9ffU 
                                                  >= 
                                                  (0x000fffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i)))
                                                  ? 
                                                 vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                                 [(0x000fffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i))]
                                                  : 0U) 
                                                << 0x00000010U)) 
                   | ((((0x0009c9ffU >= (0x000fffffU 
                                         & ((IData)(1U) 
                                            + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i)))
                         ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                        [(0x000fffffU & ((IData)(1U) 
                                         + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i))]
                         : 0U) << 8U) | ((0x0009c9ffU 
                                          >= (0x000fffffU 
                                              & vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i))
                                          ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                         [(0x000fffffU 
                                           & vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i)]
                                          : 0U))) : 0xdeadbeefU);
    }
    vlSelfRef.fifo_tb__DOT__pop_en = ((0U != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                      && ((1U != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                          && ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                              && (1U 
                                                  & (~ (IData)(vlSelfRef.fifo_tb__DOT__pop_valid))))));
    __Vtableidx1 = (((IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail) 
                     << 3U) | (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__head));
    vlSelfRef.fifo_tb__DOT__fifo1__DOT__empty = Vfifo_tb__ConstPool__TABLE_h47de3021_0
        [__Vtableidx1];
    vlSelfRef.fifo_tb__DOT__buffer_full = Vfifo_tb__ConstPool__TABLE_h95960f88_0
        [__Vtableidx1];
}

void Vfifo_tb___024root___nba_comb__TOP__0(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_comb__TOP__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__push_data) 
                              >> 8U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = ((IData)(vlSelfRef.fifo_tb__DOT__rd_req)
                ? 1U : ((1U & ((~ (IData)(vlSelfRef.fifo_tb__DOT__rd_req)) 
                               & (~ (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__empty))))
                         ? 2U : 0U));
    } else if ((1U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__push_data) 
                              >> 8U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = ((IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__ready)
                ? 0U : 1U);
    } else if ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__push_data) 
                              >> 8U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = ((IData)(vlSelfRef.fifo_tb__DOT__pop_valid)
                ? ((0x00001000U & (IData)(vlSelfRef.fifo_tb__DOT__pop_data))
                    ? 0U : 3U) : 2U);
    } else if ((3U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__store_address));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = ((IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__write_finished)
                ? 0U : 3U);
    } else {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__push_data) 
                              >> 8U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state;
    }
    vlSelfRef.fifo_tb__DOT__found = 0U;
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [0U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [0U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found = 1U;
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [1U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [1U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found = 1U;
    }
    vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 0U;
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [0U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [0U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 0U;
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [1U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [1U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 1U;
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [2U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [2U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found = 1U;
        vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 2U;
    }
    vlSelfRef.fifo_tb__DOT__found_data = 0U;
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [0U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [0U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found_data = (0x000000ffU 
                                              & vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                                              [0U]);
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [1U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [1U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found_data = (0x000000ffU 
                                              & vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                                              [1U]);
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [2U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [2U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found_data = (0x000000ffU 
                                              & vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                                              [2U]);
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [3U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [3U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found = 1U;
        vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 3U;
        vlSelfRef.fifo_tb__DOT__found_data = (0x000000ffU 
                                              & vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                                              [3U]);
    }
    vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat 
        = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address;
    vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat 
        = ((0x01000000U > vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat)
            ? VL_MODDIV_III(32, vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat, (IData)(0x0009ca00U))
            : VL_MODDIV_III(32, (vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat 
                                 - (IData)(0x01000000U)), (IData)(0x0009ca00U)));
    vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out = 0ULL;
    if (vlSelfRef.fifo_tb__DOT__mem1__DOT__read_en) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0x00ffffffffffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(8U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(8U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000038U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xff00ffffffffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(7U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(7U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000030U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffff00ffffffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(6U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(6U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000028U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffff00ffffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(5U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(5U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000020U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffffff00ffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000018U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffffffff00ffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(3U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(3U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000010U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffffffffff00ffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(2U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(2U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 8U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffffffffffff00ULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | (IData)((IData)(((0x0009c9ffU >= (0x000fffffU 
                                                   & VL_MODDIV_III(32, 
                                                                   ((IData)(1U) 
                                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                   ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x000fffffU & VL_MODDIV_III(32, 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                   : 0U))));
    }
}

void Vfifo_tb___024root___eval_nba(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_nba\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

void Vfifo_tb___024root___timing_resume(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_resume\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfifo_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfifo_tb___024root___eval_phase__act(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__act\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vfifo_tb___024root___eval_triggers__act(vlSelf);
    Vfifo_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vfifo_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vfifo_tb___024root___timing_resume(vlSelf);
        Vfifo_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vfifo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfifo_tb___024root___eval_phase__nba(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__nba\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vfifo_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vfifo_tb___024root___eval_nba(vlSelf);
        Vfifo_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vfifo_tb___024root___eval(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfifo_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("test/fifo_tb.sv", 4, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vfifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("test/fifo_tb.sv", 4, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vfifo_tb___024root___eval_phase__act(vlSelf));
    } while (Vfifo_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vfifo_tb___024root___eval_debug_assertions(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_debug_assertions\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
