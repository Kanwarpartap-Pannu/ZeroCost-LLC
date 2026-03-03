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
    vlSelfRef.cache_tb__DOT__address = 0x0093U;
    vlSelfRef.cache_tb__DOT__opcode_i = 3U;
    vlSelfRef.cache_tb__DOT__funct3_i = 3U;
    vlSelfRef.cache_tb__DOT__store_data = 0x0000000aU;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "design/cache_tb.sv", 
                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("design/cache_tb.sv", 46, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VlCoroutine Vcache_tb___024root___eval_initial__TOP__Vtiming__1(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "design/cache_tb.sv", 
                                             36);
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

extern const VlUnpacked<CData/*1:0*/, 8> Vcache_tb__ConstPool__TABLE_hd6134ef5_0;

void Vcache_tb___024root___act_sequent__TOP__0(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___act_sequent__TOP__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    // Body
    __Vtableidx1 = vlSelfRef.cache_tb__DOT__funct3_i;
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__size_encoded 
        = Vcache_tb__ConstPool__TABLE_hd6134ef5_0[__Vtableidx1];
    vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i 
        = vlSelfRef.cache_tb__DOT__address;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = 0U;
    if ((1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
               [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][0U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat 
        = (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__address));
    __VExpandSel_WordIdx_1 = (0x0000000fU & (VL_SHIFTL_III(9,9,32, 
                                                           ((IData)(3U) 
                                                            - 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                >> 3U))), 7U) 
                                             >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & VL_SHIFTL_III(9,9,32, 
                                                          ((IData)(3U) 
                                                           - 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                               >> 3U))), 7U));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[0U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
             ((IData)(1U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[__VExpandSel_WordIdx_1] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[1U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
             ((IData)(2U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
              ((IData)(1U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[2U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
             ((IData)(3U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
              ((IData)(2U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[3U] 
        = (((((0x0000000cU <= __VExpandSel_WordIdx_1)
               ? 0U : vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
              ((IData)(4U) + __VExpandSel_WordIdx_1)]) 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
              ((IData)(3U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way 
        = ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
            [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                    >> 3U))][1U] == (0x000001ffU & 
                                     ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                      >> 5U))) & vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
           [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                   >> 3U))][1U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__hit = ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                                 [(3U 
                                                   & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                      >> 3U))]
                                                 [1U] 
                                                 == 
                                                 (0x000001ffU 
                                                  & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                     >> 5U))) 
                                                & vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                                                [(3U 
                                                  & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                     >> 3U))]
                                                [1U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 0U;
    if ((1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
               [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][0U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 0U;
    }
    if ((1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
               [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][1U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__data_o 
        = (((0x01000000U <= vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i) 
            & (0x01009ca0U > ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i)))
            ? (((((0x9c9fU >= (0x0000ffffU & ((IData)(3U) 
                                              + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i)))
                   ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                  [(0x0000ffffU & ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i))]
                   : 0U) << 0x00000018U) | (((0x9c9fU 
                                              >= (0x0000ffffU 
                                                  & ((IData)(2U) 
                                                     + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i)))
                                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                                             [(0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i))]
                                              : 0U) 
                                            << 0x00000010U)) 
               | ((((0x9c9fU >= (0x0000ffffU & ((IData)(1U) 
                                                + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i)))
                     ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                    [(0x0000ffffU & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i))]
                     : 0U) << 8U) | ((0x9c9fU >= (0x0000ffffU 
                                                  & vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i))
                                      ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                                     [(0x0000ffffU 
                                       & vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i)]
                                      : 0U))) : 0xdeadbeefU);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat 
        = ((0x01000000U > vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat)
            ? VL_MODDIV_III(32, vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat, (IData)(0x00009ca0U))
            : VL_MODDIV_III(32, (vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat 
                                 - (IData)(0x01000000U)), (IData)(0x00009ca0U)));
    vlSelfRef.cache_tb__DOT__data_out = ((4U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                          ? ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & (VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,32,32, 
                                                                         (7U 
                                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                    (((IData)(0x0000001fU) 
                                                      + 
                                                      (0x0000007fU 
                                                       & (VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                  | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                     (3U 
                                                      & ((VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))
                                                  : 
                                                 (0x000000ffU 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(1U) 
                                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                           + 
                                                           (0x0000003fU 
                                                            & VL_SHIFTL_III(6,32,32, 
                                                                            (7U 
                                                                             & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                       (((IData)(7U) 
                                                         + 
                                                         (0x0000007fU 
                                                          & (VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                        (3U 
                                                         & ((VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                  ? 
                                                 (0x0000ffffU 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(1U) 
                                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                           + 
                                                           (0x0000003fU 
                                                            & VL_SHIFTL_III(6,32,32, 
                                                                            (7U 
                                                                             & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                       (((IData)(0x0000000fU) 
                                                         + 
                                                         (0x0000007fU 
                                                          & (VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                        (3U 
                                                         & ((VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))))
                                                  : 
                                                 (((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & (VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,32,32, 
                                                                         (7U 
                                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                    (((IData)(0x0000001fU) 
                                                      + 
                                                      (0x0000007fU 
                                                       & (VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                  | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                     (3U 
                                                      & ((VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))))
                                          : ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & (VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,32,32, 
                                                                         (7U 
                                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                    (((IData)(0x0000001fU) 
                                                      + 
                                                      (0x0000007fU 
                                                       & (VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                  | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                     (3U 
                                                      & ((VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))
                                                  : 
                                                 (0x000000ffU 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(1U) 
                                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                           + 
                                                           (0x0000003fU 
                                                            & VL_SHIFTL_III(6,32,32, 
                                                                            (7U 
                                                                             & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                       (((IData)(7U) 
                                                         + 
                                                         (0x0000007fU 
                                                          & (VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                        (3U 
                                                         & ((VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                  ? 
                                                 (0x0000ffffU 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(1U) 
                                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                           + 
                                                           (0x0000003fU 
                                                            & VL_SHIFTL_III(6,32,32, 
                                                                            (7U 
                                                                             & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                       (((IData)(0x0000000fU) 
                                                         + 
                                                         (0x0000007fU 
                                                          & (VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                        (3U 
                                                         & ((VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))))
                                                  : 
                                                 (((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & (VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,32,32, 
                                                                         (7U 
                                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                    (((IData)(0x0000001fU) 
                                                      + 
                                                      (0x0000007fU 
                                                       & (VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                  | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                     (3U 
                                                      & ((VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))))));
    vlSelfRef.cache_tb__DOT__data_valid = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__idle = 1U;
    vlSelfRef.cache_tb__DOT__stall = 0U;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) {
        vlSelfRef.cache_tb__DOT__cache__DOT__idle = 1U;
        vlSelfRef.cache_tb__DOT__data_valid = 0U;
        vlSelfRef.cache_tb__DOT__stall = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 1U;
    } else {
        if (((3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
             || (0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)))) {
            if (vlSelfRef.cache_tb__DOT__cache__DOT__hit) {
                vlSelfRef.cache_tb__DOT__cache__DOT__idle = 0U;
                vlSelfRef.cache_tb__DOT__data_valid = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
                vlSelfRef.cache_tb__DOT__stall = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit)))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__idle = 1U;
                vlSelfRef.cache_tb__DOT__data_valid = 0U;
                vlSelfRef.cache_tb__DOT__stall = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
            }
        } else {
            vlSelfRef.cache_tb__DOT__cache__DOT__idle = 1U;
            vlSelfRef.cache_tb__DOT__data_out = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
            vlSelfRef.cache_tb__DOT__stall = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                                   << 1U) | (3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))))) {
            if ((0U != (((0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                         << 1U) | (3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: lookup.sv:177: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '7'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 7,(IData)(vlSelfRef.cache_tb__DOT__opcode_i));
                    VL_STOP_MT("design/lookup.sv", 177, "");
                }
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))))) {
        if ((0U == (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: lookup.sv:175: Assertion failed in %Ncache_tb.cache: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
                VL_STOP_MT("design/lookup.sv", 175, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: lookup.sv:175: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
            VL_STOP_MT("design/lookup.sv", 175, "");
        }
    }
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
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 0ULL;
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(8U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(8U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 0x00000038U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(7U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(7U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 0x00000030U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(6U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(6U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 0x00000028U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(5U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(5U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 0x00000020U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(4U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(4U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 0x00000018U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(3U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(3U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 0x00000010U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(2U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | (IData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                         & VL_MODDIV_III(32, 
                                                         ((IData)(1U) 
                                                          + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                             ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                            [(0x0000ffffU & VL_MODDIV_III(32, 
                                                          ((IData)(1U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                             : 0U))));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way 
        = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found)
            ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way)
            : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way));
}

void Vcache_tb___024root___eval_act(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_act\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcache_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
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
    SData/*8:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 = 0;
    CData/*1:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 = 0;
    CData/*1:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 = 0;
    // Body
    __Vdly__cache_tb__DOT__cache__DOT__next_state = vlSelfRef.cache_tb__DOT__cache__DOT__next_state;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 = 0U;
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
                    VL_WRITEF_NX("[%0t] %%Error: lookup.sv:126: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '7'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 7,(IData)(vlSelfRef.cache_tb__DOT__opcode_i));
                    VL_STOP_MT("design/lookup.sv", 126, "");
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
                VL_WRITEF_NX("[%0t] %%Error: lookup.sv:124: Assertion failed in %Ncache_tb.cache: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
                VL_STOP_MT("design/lookup.sv", 124, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: lookup.sv:124: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
            VL_STOP_MT("design/lookup.sv", 124, "");
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__idle)))) {
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
        __VdlyVal__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 
            = (0x000001ffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                              >> 5U));
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 
            = (3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                     >> 3U));
        __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array__v0 = 1U;
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 
            = (3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                     >> 3U));
        __VdlySet__cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array__v0 = 1U;
        VL_ASSIGNSEL_WQ(512, 64, (0x000001ffU & (VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(3U) 
                                                                - 
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                    >> 3U))), 7U) 
                                                 + 
                                                 (0x0000007fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(1U) 
                                                                   - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way)), 6U)))), vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array, vlSelfRef.cache_tb__DOT__cache__DOT__mem_out);
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
    vlSelfRef.cache_tb__DOT__cache__DOT__next_state 
        = __Vdly__cache_tb__DOT__cache__DOT__next_state;
}

void Vcache_tb___024root___nba_sequent__TOP__1(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___nba_sequent__TOP__1\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelfRef.cache_tb__DOT__funct3_i;
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__size_encoded 
        = Vcache_tb__ConstPool__TABLE_hd6134ef5_0[__Vtableidx1];
    vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i 
        = vlSelfRef.cache_tb__DOT__address;
    vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat 
        = (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__address));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__data_o 
        = (((0x01000000U <= vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i) 
            & (0x01009ca0U > ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i)))
            ? (((((0x9c9fU >= (0x0000ffffU & ((IData)(3U) 
                                              + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i)))
                   ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                  [(0x0000ffffU & ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i))]
                   : 0U) << 0x00000018U) | (((0x9c9fU 
                                              >= (0x0000ffffU 
                                                  & ((IData)(2U) 
                                                     + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i)))
                                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                                             [(0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i))]
                                              : 0U) 
                                            << 0x00000010U)) 
               | ((((0x9c9fU >= (0x0000ffffU & ((IData)(1U) 
                                                + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i)))
                     ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                    [(0x0000ffffU & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i))]
                     : 0U) << 8U) | ((0x9c9fU >= (0x0000ffffU 
                                                  & vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i))
                                      ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                                     [(0x0000ffffU 
                                       & vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i)]
                                      : 0U))) : 0xdeadbeefU);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat 
        = ((0x01000000U > vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat)
            ? VL_MODDIV_III(32, vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat, (IData)(0x00009ca0U))
            : VL_MODDIV_III(32, (vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat 
                                 - (IData)(0x01000000U)), (IData)(0x00009ca0U)));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 0ULL;
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(8U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(8U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 0x00000038U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(7U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(7U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 0x00000030U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(6U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(6U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 0x00000028U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(5U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(5U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 0x00000020U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(4U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(4U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 0x00000018U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(3U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(3U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 0x00000010U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | ((QData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                          & VL_MODDIV_III(32, 
                                                          ((IData)(2U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                              ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                             [(0x0000ffffU & VL_MODDIV_III(32, 
                                                           ((IData)(2U) 
                                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                              : 0U))) << 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem_out) 
         | (IData)((IData)(((0x9c9fU >= (0x0000ffffU 
                                         & VL_MODDIV_III(32, 
                                                         ((IData)(1U) 
                                                          + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U))))
                             ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                            [(0x0000ffffU & VL_MODDIV_III(32, 
                                                          ((IData)(1U) 
                                                           + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat), (IData)(0x00009ca0U)))]
                             : 0U))));
}

void Vcache_tb___024root___nba_comb__TOP__0(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___nba_comb__TOP__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    // Body
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = 0U;
    if ((1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
               [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][0U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way 
        = ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
            [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                    >> 3U))][1U] == (0x000001ffU & 
                                     ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                      >> 5U))) & vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
           [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                   >> 3U))][1U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__hit = ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                                 [(3U 
                                                   & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                      >> 3U))]
                                                 [1U] 
                                                 == 
                                                 (0x000001ffU 
                                                  & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                     >> 5U))) 
                                                & vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                                                [(3U 
                                                  & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                     >> 3U))]
                                                [1U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 0U;
    if ((1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
               [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][0U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 0U;
    }
    if ((1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
               [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][1U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 1U;
    }
    __VExpandSel_WordIdx_1 = (0x0000000fU & (VL_SHIFTL_III(9,9,32, 
                                                           ((IData)(3U) 
                                                            - 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                >> 3U))), 7U) 
                                             >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & VL_SHIFTL_III(9,9,32, 
                                                          ((IData)(3U) 
                                                           - 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                               >> 3U))), 7U));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[0U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
             ((IData)(1U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[__VExpandSel_WordIdx_1] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[1U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
             ((IData)(2U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
              ((IData)(1U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[2U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
             ((IData)(3U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
              ((IData)(2U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[3U] 
        = (((((0x0000000cU <= __VExpandSel_WordIdx_1)
               ? 0U : vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
              ((IData)(4U) + __VExpandSel_WordIdx_1)]) 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
              ((IData)(3U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__data_valid = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__idle = 1U;
    vlSelfRef.cache_tb__DOT__stall = 0U;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) {
        vlSelfRef.cache_tb__DOT__cache__DOT__idle = 1U;
        vlSelfRef.cache_tb__DOT__data_valid = 0U;
        vlSelfRef.cache_tb__DOT__stall = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 1U;
    } else {
        if (((3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
             || (0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)))) {
            if (vlSelfRef.cache_tb__DOT__cache__DOT__hit) {
                vlSelfRef.cache_tb__DOT__cache__DOT__idle = 0U;
                vlSelfRef.cache_tb__DOT__data_valid = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
                vlSelfRef.cache_tb__DOT__stall = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit)))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__idle = 1U;
                vlSelfRef.cache_tb__DOT__data_valid = 0U;
                vlSelfRef.cache_tb__DOT__stall = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
            }
        } else {
            vlSelfRef.cache_tb__DOT__cache__DOT__idle = 1U;
            vlSelfRef.cache_tb__DOT__data_out = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
            vlSelfRef.cache_tb__DOT__stall = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                                   << 1U) | (3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))))) {
            if ((0U != (((0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                         << 1U) | (3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: lookup.sv:177: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '7'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 7,(IData)(vlSelfRef.cache_tb__DOT__opcode_i));
                    VL_STOP_MT("design/lookup.sv", 177, "");
                }
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))))) {
        if ((0U == (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: lookup.sv:175: Assertion failed in %Ncache_tb.cache: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
                VL_STOP_MT("design/lookup.sv", 175, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: lookup.sv:175: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
            VL_STOP_MT("design/lookup.sv", 175, "");
        }
    }
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
    vlSelfRef.cache_tb__DOT__data_out = ((4U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                          ? ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & (VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,32,32, 
                                                                         (7U 
                                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                    (((IData)(0x0000001fU) 
                                                      + 
                                                      (0x0000007fU 
                                                       & (VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                  | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                     (3U 
                                                      & ((VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))
                                                  : 
                                                 (0x000000ffU 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(1U) 
                                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                           + 
                                                           (0x0000003fU 
                                                            & VL_SHIFTL_III(6,32,32, 
                                                                            (7U 
                                                                             & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                       (((IData)(7U) 
                                                         + 
                                                         (0x0000007fU 
                                                          & (VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                        (3U 
                                                         & ((VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                  ? 
                                                 (0x0000ffffU 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(1U) 
                                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                           + 
                                                           (0x0000003fU 
                                                            & VL_SHIFTL_III(6,32,32, 
                                                                            (7U 
                                                                             & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                       (((IData)(0x0000000fU) 
                                                         + 
                                                         (0x0000007fU 
                                                          & (VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                        (3U 
                                                         & ((VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))))
                                                  : 
                                                 (((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & (VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,32,32, 
                                                                         (7U 
                                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                    (((IData)(0x0000001fU) 
                                                      + 
                                                      (0x0000007fU 
                                                       & (VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                  | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                     (3U 
                                                      & ((VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))))
                                          : ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & (VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,32,32, 
                                                                         (7U 
                                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                    (((IData)(0x0000001fU) 
                                                      + 
                                                      (0x0000007fU 
                                                       & (VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                  | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                     (3U 
                                                      & ((VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))
                                                  : 
                                                 (0x000000ffU 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(1U) 
                                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                           + 
                                                           (0x0000003fU 
                                                            & VL_SHIFTL_III(6,32,32, 
                                                                            (7U 
                                                                             & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                       (((IData)(7U) 
                                                         + 
                                                         (0x0000007fU 
                                                          & (VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                        (3U 
                                                         & ((VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                  ? 
                                                 (0x0000ffffU 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(1U) 
                                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                           + 
                                                           (0x0000003fU 
                                                            & VL_SHIFTL_III(6,32,32, 
                                                                            (7U 
                                                                             & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                       (((IData)(0x0000000fU) 
                                                         + 
                                                         (0x0000007fU 
                                                          & (VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                        (3U 
                                                         & ((VL_SHIFTL_III(7,32,32, 
                                                                           ((IData)(1U) 
                                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,32,32, 
                                                                              (7U 
                                                                               & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(1U) 
                                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,32,32, 
                                                                             (7U 
                                                                              & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))))
                                                  : 
                                                 (((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & (VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,32,32, 
                                                                         (7U 
                                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                    (((IData)(0x0000001fU) 
                                                      + 
                                                      (0x0000007fU 
                                                       & (VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))) 
                                                  | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                     (3U 
                                                      & ((VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(1U) 
                                                                         - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,32,32, 
                                                                           (7U 
                                                                            & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))))));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way 
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
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcache_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcache_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
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
            VL_FATAL_MT("design/cache_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcache_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("design/cache_tb.sv", 3, "", "Active region did not converge after 100 tries");
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
