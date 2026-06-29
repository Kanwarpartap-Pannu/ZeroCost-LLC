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
    vlSelfRef.cache_tb__DOT__opcode_i = 0U;
    vlSelfRef.cache_tb__DOT__funct3_i = 3U;
    vlSelfRef.cache_tb__DOT__store_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(2ULL, nullptr, 
                                         "design/cache_tb.sv", 
                                         75);
    vlSelfRef.cache_tb__DOT__start = 1U;
    vlSelfRef.cache_tb__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "design/cache_tb.sv", 
                                         78);
    VL_FINISH_MT("design/cache_tb.sv", 79, "");
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
                                             40);
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
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 6U) 
                                                      | ((((IData)(vlSelfRef.cache_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__clk__0))) 
                                                          << 5U) 
                                                         | (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory_address) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__memory1__DOT__memory_address__1)) 
                                                            << 4U))) 
                                                     | (((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir__1)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in__1)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o__1)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__write_finished) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__1)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__1 
        = vlSelfRef.cache_tb__DOT__cache__DOT__write_finished;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o__1 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in__1 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir__1 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__memory1__DOT__memory_address__1 
        = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory_address;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__clk__0 
        = vlSelfRef.cache_tb__DOT__clk;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
    }
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
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_op = (
                                                   (3U 
                                                    == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                                                   | (0x23U 
                                                      == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req 
        = ((0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
           | (3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)));
    vlSelfRef.cache_tb__DOT__cache__DOT__temp = vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data;
    vlSelfRef.cache_tb__DOT__cache__DOT__temp = ((4U 
                                                  & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                    ? 
                                                   (((~ 
                                                      (0x00000000ffffffffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))))
                                                    : 
                                                   (((~ 
                                                      (0x00000000000000ffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(
                                                                       (0x000000ffU 
                                                                        & vlSelfRef.cache_tb__DOT__store_data))) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                    ? 
                                                   (((~ 
                                                      (0x000000000000ffffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(
                                                                       (0x0000ffffU 
                                                                        & vlSelfRef.cache_tb__DOT__store_data))) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))))
                                                    : 
                                                   (((~ 
                                                      (0x00000000ffffffffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                    ? 
                                                   (((~ 
                                                      (0x00000000ffffffffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))))
                                                    : 
                                                   (((~ 
                                                      (0x00000000000000ffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(
                                                                       (0x000000ffU 
                                                                        & vlSelfRef.cache_tb__DOT__store_data))) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                    ? 
                                                   (((~ 
                                                      (0x000000000000ffffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(
                                                                       (0x0000ffffU 
                                                                        & vlSelfRef.cache_tb__DOT__store_data))) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))))
                                                    : 
                                                   (((~ 
                                                      (0x00000000ffffffffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))))));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____VdfgExtracted_ha4ce45db__0 
        = (0U != ((2U & ((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req)) 
                         << 1U)) | (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req)));
}

void Vcache_tb___024root___act_sequent__TOP__1(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___act_sequent__TOP__1\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    // Body
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way = 0U;
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
           [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
           [0U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                                               [0U])) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
            [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
            [0U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way = 0U;
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
           [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
           [1U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                                               [1U])) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
            [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
            [1U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 0U;
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way = 0U;
    if (((~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
          [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
          [0U]) & (2U != vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                   [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                   [0U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way = 0U;
    }
    if (((~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
          [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
          [1U]) & (2U != vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                   [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                   [1U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way = 1U;
    }
    __VExpandSel_WordIdx_1 = (7U & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(1U) 
                                                   - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U) 
                                    >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & VL_SHIFTL_III(8,8,32, 
                                                          ((IData)(1U) 
                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[0U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(1U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[__VExpandSel_WordIdx_1] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[1U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(2U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(1U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[2U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(3U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(2U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[3U] 
        = (((((4U <= __VExpandSel_WordIdx_1) ? 0U : 
              vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(4U) + __VExpandSel_WordIdx_1)]) 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(3U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 0U;
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 0U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o 
        = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found)
            ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way)
            : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 0U;
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [0U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 0U;
    }
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [1U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 1U;
    }
}

void Vcache_tb___024root___act_sequent__TOP__2(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___act_sequent__TOP__2\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way = 0U;
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array
           [0U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                                               [(3U 
                                                 & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way 
            = (1U & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
               [(3U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way))]);
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_set 
            = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                     [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                     [(3U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way))] 
                     >> 1U));
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array
           [1U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                                               [(3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way 
            = (1U & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
               [(3U & ((IData)(1U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))]);
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_set 
            = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                     [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                     [(3U & ((IData)(1U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))] 
                     >> 1U));
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dir_hit = 0U;
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array
           [0U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                                               [(3U 
                                                 & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dir_hit = 1U;
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array
           [1U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                                               [(3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dir_hit = 1U;
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array
           [2U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                                               [(3U 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way 
            = (1U & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
               [(3U & ((IData)(2U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))]);
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_set 
            = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                     [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                     [(3U & ((IData)(2U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))] 
                     >> 1U));
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dir_hit = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir = 0U;
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array
           [0U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                                               [(3U 
                                                 & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way;
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array
           [1U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                                               [(3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)));
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array
           [2U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                                               [(3U 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way;
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array
           [3U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                                               [(3U 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way 
            = (1U & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
               [(3U & ((IData)(3U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))]);
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_set 
            = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                     [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                     [(3U & ((IData)(3U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))] 
                     >> 1U));
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dir_hit = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)));
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_address 
        = ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
            [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
            [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir] 
            << 4U) | ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir) 
                      << 3U));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state 
        = (0U == (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                  [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                  [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir] 
                  - (IData)(1U)));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____VdfgExtracted_h03db6b6c__0 
        = (0U == (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state) 
                   << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state)))));
}

void Vcache_tb___024root___act_sequent__TOP__3(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___act_sequent__TOP__3\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat 
        = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory_address;
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat 
        = ((0x01000000U > vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat)
            ? (0x003fffffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat)
            : (0x003fffffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat 
                              - (IData)(0x01000000U))));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out = 0ULL;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__read_en) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0x00ffffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(8U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000038U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xff00ffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(7U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000030U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffff00ffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(6U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000028U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffff00ffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(5U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000020U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffffff00ffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(4U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000018U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffffffff00ffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(3U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000010U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffffffffff00ffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(2U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 8U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffffffffffff00ULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | (IData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                 [(0x003fffffU & ((IData)(1U) 
                                                  + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])));
    }
}

void Vcache_tb___024root___act_comb__TOP__0(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___act_comb__TOP__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    // Body
    vlSelfRef.cache_tb__DOT__cache__DOT__buffer_store[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                    (((IData)(0x0000003fU) 
                                      + (0x0000007fU 
                                         & VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(1U) 
                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     ((IData)(1U) 
                                                                      - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     ((IData)(1U) 
                                                                      - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U))))) 
                   | (((0U == (0x0000001fU & VL_SHIFTL_III(7,32,32, 
                                                           ((IData)(1U) 
                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U)))
                        ? 0ULL : ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x0000007fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     ((IData)(1U) 
                                                                      - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U))) 
                                                   >> 5U)])) 
                                  << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(1U) 
                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U))))) 
                      | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                         (3U & (VL_SHIFTL_III(7,32,32, 
                                                              ((IData)(1U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U) 
                                                >> 5U))])) 
                         >> (0x0000001fU & VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(1U) 
                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U))))));
    vlSelfRef.cache_tb__DOT__cache__DOT__buffer_store[1U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                     (((IData)(0x0000003fU) 
                                       + (0x0000007fU 
                                          & VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(1U) 
                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U))) 
                                      >> 5U)])) << 
                     ((0U == (0x0000001fU & VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(1U) 
                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U)))
                       ? 0x00000020U : ((IData)(0x00000040U) 
                                        - (0x0000001fU 
                                           & VL_SHIFTL_III(7,32,32, 
                                                           ((IData)(1U) 
                                                            - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U))))) 
                    | (((0U == (0x0000001fU & VL_SHIFTL_III(7,32,32, 
                                                            ((IData)(1U) 
                                                             - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U)))
                         ? 0ULL : ((QData)((IData)(
                                                   vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                                   (((IData)(0x0000001fU) 
                                                     + 
                                                     (0x0000007fU 
                                                      & VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U))) 
                                                    >> 5U)])) 
                                   << ((IData)(0x00000020U) 
                                       - (0x0000001fU 
                                          & VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(1U) 
                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U))))) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                          (3U & (VL_SHIFTL_III(7,32,32, 
                                                               ((IData)(1U) 
                                                                - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U) 
                                                 >> 5U))])) 
                          >> (0x0000001fU & VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(1U) 
                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way)), 6U))))) 
                   >> 0x00000020U));
    vlSelfRef.cache_tb__DOT__cache__DOT__buffer_store[2U] 
        = (0x0000ffffU & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_address));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__store_en = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__idle = 1U;
    vlSelfRef.cache_tb__DOT__stall = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_en = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__share_en = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_en = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__insert_en = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in 
        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__share_en_tag = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_en_data = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_in 
        = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir 
        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_way = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_flag = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__enable = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dirty_sig 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__valid_ornot;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state) {
        if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem) {
            vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq = 1U;
            vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_address;
            vlSelfRef.cache_tb__DOT__stall = 1U;
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_set;
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way;
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way;
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way;
            if ((0x7fU == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__buffer_store[0U] 
                    = (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out);
                vlSelfRef.cache_tb__DOT__cache__DOT__buffer_store[1U] 
                    = (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
                               >> 0x00000020U));
                vlSelfRef.cache_tb__DOT__cache__DOT__buffer_store[2U] 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_address;
            }
            if (vlSelfRef.cache_tb__DOT__cache__DOT__write_finished) {
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en = 1U;
            } else {
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en = 0U;
            }
        } else {
            vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq = 2U;
            vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr 
                = (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr));
            if (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__ready) {
                if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__ready) 
                     & (~ (0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_state))))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search = 1U;
                    vlSelfRef.cache_tb__DOT__stall = 1U;
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__insert_en = 1U;
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o;
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in 
                        = (1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                 >> 3U));
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_way 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o;
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o;
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_en_data = 1U;
                }
            } else {
                vlSelfRef.cache_tb__DOT__stall = 1U;
            }
            if ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in 
                    = (1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                             >> 3U));
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_flag = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__enable = 1U;
            } else if ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_rs;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_in 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_block;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_dir_index;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_way 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_dir_way;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_en = 1U;
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem)))))))) {
            if ((0U != (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:545: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem));
                    VL_STOP_MT("design/cache_controller.sv", 545, "");
                }
            }
        }
    } else {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq = 0U;
        if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req) {
            if ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache))) {
                vlSelfRef.cache_tb__DOT__stall = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_en = 1U;
            } else if ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache))) {
                if ((3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid = 1U;
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__store_en = 0U;
                } else {
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid = 0U;
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__store_en = 1U;
                }
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__idle = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__share_en_tag 
                    = (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dir_hit)));
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__insert_en 
                    = (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dir_hit)));
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_way 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way;
            } else if ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache))) {
                if ((3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid = 1U;
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__store_en = 0U;
                } else {
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid = 0U;
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__store_en = 1U;
                }
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__idle = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__share_en = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_set;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way;
            } else if ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__idle = 1U;
                vlSelfRef.cache_tb__DOT__stall = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_set;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en = 0U;
                if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state) {
                    if ((1U & (~ VL_ONEHOT_I((((0x7fU 
                                                == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                                               << 1U) 
                                              | (0x63U 
                                                 == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))))) {
                        if ((0U == (((0x7fU == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                                     << 1U) | (0x63U 
                                               == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:488: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but none matched for '7'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             7,(IData)(vlSelfRef.cache_tb__DOT__opcode_i));
                                VL_STOP_MT("design/cache_controller.sv", 488, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:488: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but multiple matches found for '7'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         7,(IData)(vlSelfRef.cache_tb__DOT__opcode_i));
                            VL_STOP_MT("design/cache_controller.sv", 488, "");
                        }
                    }
                    if ((0x63U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))) {
                        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en 
                            = (1U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o));
                    } else if ((0x7fU == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))) {
                        if (((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o)) 
                             | (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o)))) {
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dirty_sig = 1U;
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en = 1U;
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_en_data = 1U;
                        } else {
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en = 0U;
                        }
                    }
                } else {
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en = 1U;
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_en_data 
                        = ((0x7fU == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))
                            ? 1U : 0U);
                }
                if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state) 
                                           << 1U) | 
                                          (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state)))))))) {
                    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____VdfgExtracted_h03db6b6c__0) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:481: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but none matched for '32'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state));
                            VL_STOP_MT("design/cache_controller.sv", 481, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:481: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but multiple matches found for '32'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state));
                        VL_STOP_MT("design/cache_controller.sv", 481, "");
                    }
                }
            }
            if ((1U & (~ VL_ONEHOT_I(((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)) 
                                        << 3U) | ((2U 
                                                   == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)) 
                                                  << 2U)) 
                                      | (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)))))))) {
                if ((0U == ((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)) 
                              << 3U) | ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)) 
                                        << 2U)) | (
                                                   ((1U 
                                                     == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)) 
                                                    << 1U) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:445: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but none matched for '32'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache));
                        VL_STOP_MT("design/cache_controller.sv", 445, "");
                    }
                } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:445: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache));
                    VL_STOP_MT("design/cache_controller.sv", 445, "");
                }
            }
        } else {
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__store_en = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__idle = 1U;
            vlSelfRef.cache_tb__DOT__stall = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_en = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__share_en = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_en = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__insert_en = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I(((2U & ((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req)) 
                                         << 1U)) | (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req)))))) {
            if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____VdfgExtracted_ha4ce45db__0) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:443: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req));
                    VL_STOP_MT("design/cache_controller.sv", 443, "");
                }
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state)))))))) {
        if ((0U == (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:439: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state));
                VL_STOP_MT("design/cache_controller.sv", 439, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:439: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state));
            VL_STOP_MT("design/cache_controller.sv", 439, "");
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o 
        = ((2U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
            [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
            [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag])
            ? (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag]
                ? 1U : 3U) : (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
                              [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                              [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag]
                               ? 2U : 0U));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_found = 0U;
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
         [0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_found = 1U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
         [1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_found = 1U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
         [2U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_found = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en_tag = 0U;
    if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__insert_en)))) {
        if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en) {
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en_tag 
                = (0U == (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                          [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                          [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir] 
                          - (IData)(1U)));
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way = 0U;
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
         [0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way = 0U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
         [1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way = 1U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
         [2U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way = 2U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
         [3U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_found = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way = 3U;
    }
    __VdfgRegularize_hebeb780c_0_0 = (0x0000007fU & 
                                      (VL_SHIFTL_III(7,7,32, 
                                                     ((IData)(1U) 
                                                      - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out)), 6U) 
                                       + (0x0000003fU 
                                          & VL_SHIFTL_III(6,6,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_way_meta_data 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
        [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
        [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way];
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp 
        = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
                            (((IData)(0x0000003fU) 
                              + (0x000000ffU & (VL_SHIFTL_III(8,32,32, 
                                                              ((IData)(1U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U) 
                                                + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data)), 6U))))) 
                             >> 5U)])) << ((0U == (0x0000001fU 
                                                   & (VL_SHIFTL_III(8,32,32, 
                                                                    ((IData)(1U) 
                                                                     - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U) 
                                                      + 
                                                      (0x0000007fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data)), 6U)))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & (VL_SHIFTL_III(8,32,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U) 
                                                     + 
                                                     (0x0000007fU 
                                                      & VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data)), 6U))))))) 
           | (((0U == (0x0000001fU & (VL_SHIFTL_III(8,32,32, 
                                                    ((IData)(1U) 
                                                     - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U) 
                                      + (0x0000007fU 
                                         & VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(1U) 
                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data)), 6U)))))
                ? 0ULL : ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
                                          (((IData)(0x0000001fU) 
                                            + (0x000000ffU 
                                               & (VL_SHIFTL_III(8,32,32, 
                                                                ((IData)(1U) 
                                                                 - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U) 
                                                  + 
                                                  (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data)), 6U))))) 
                                           >> 5U)])) 
                          << ((IData)(0x00000020U) 
                              - (0x0000001fU & (VL_SHIFTL_III(8,32,32, 
                                                              ((IData)(1U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U) 
                                                + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data)), 6U))))))) 
              | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
                                 (7U & ((VL_SHIFTL_III(8,32,32, 
                                                       ((IData)(1U) 
                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U) 
                                         + (0x0000007fU 
                                            & VL_SHIFTL_III(7,32,32, 
                                                            ((IData)(1U) 
                                                             - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data)), 6U))) 
                                        >> 5U))])) 
                 >> (0x0000001fU & (VL_SHIFTL_III(8,32,32, 
                                                  ((IData)(1U) 
                                                   - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U) 
                                    + (0x0000007fU 
                                       & VL_SHIFTL_III(7,32,32, 
                                                       ((IData)(1U) 
                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data)), 6U)))))));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp 
        = ((4U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
            ? ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                ? ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                    ? (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U))))
                    : (((~ (0x00000000000000ffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                       | ((QData)((IData)((0x000000ffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))))
                : ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                    ? (((~ (0x000000000000ffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                       | ((QData)((IData)((0x0000ffffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U))))
                    : (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U))))))
            : ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                ? ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                    ? (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U))))
                    : (((~ (0x00000000000000ffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                       | ((QData)((IData)((0x000000ffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))))
                : ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                    ? (((~ (0x000000000000ffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                       | ((QData)((IData)((0x0000ffffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U))))
                    : (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))))));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__has_re = 0U;
    if (((~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
          [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
          [0U]) & (2U != vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                   [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                   [0U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__has_re = 1U;
    }
    if (((~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
          [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
          [1U]) & (2U != vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                   [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                   [1U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__has_re = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit = 0U;
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
           [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
           [0U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                                               [0U])) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
            [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
            [0U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit = 1U;
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
           [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
           [1U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                                               [1U])) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
            [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
            [1U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory_address 
        = ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
            ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr)
            : ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr)
                : ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                    ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr)
                    : ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                        ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__store_address)
                        : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr)))));
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq)))))))) {
        if ((0U == (((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq)) 
                                << 1U) | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: top.sv:148: Assertion failed in %Ncache_tb.cache: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq));
                VL_STOP_MT("design/top.sv", 148, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: top.sv:148: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq));
            VL_STOP_MT("design/top.sv", 148, "");
        }
    }
    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__insert_en) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_metadata_o 
            = (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir) 
                << 3U) | ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way) 
                          << 1U));
    } else if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_metadata_o 
            = (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                              >> 4U));
    } else if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_en) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_metadata_o 
            = (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir) 
                << 3U) | ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_way) 
                          << 1U));
    }
    __VdfgRegularize_hebeb780c_0_1 = (((0U == (0x0000001fU 
                                               & (IData)(__VdfgRegularize_hebeb780c_0_0)))
                                        ? 0U : (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                                (((IData)(0x0000001fU) 
                                                  + (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & (IData)(__VdfgRegularize_hebeb780c_0_0))))) 
                                      | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                         ((IData)(__VdfgRegularize_hebeb780c_0_0) 
                                          >> 5U)] >> 
                                         (0x0000001fU 
                                          & (IData)(__VdfgRegularize_hebeb780c_0_0))));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache;
    if ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq))) {
        vlSelfRef.cache_tb__DOT__data_valid = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid) 
                                               || (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found) 
                                                    & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op)) 
                                                   && ((1U 
                                                        & (~ 
                                                           ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full) 
                                                            | (2U 
                                                               == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))))) 
                                                       && ((3U 
                                                            == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))
                                                            ? 1U
                                                            : 0U))));
        if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid) {
            vlSelfRef.cache_tb__DOT__cache__DOT__push_data[0U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__push_data[1U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__push_data[2U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__drain_req 
                = (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)));
        } else if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found) 
                    & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op))) {
            if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full) 
                 | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__push_data[0U] = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__push_data[1U] = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__push_data[2U] = 0U;
            } else {
                vlSelfRef.cache_tb__DOT__cache__DOT__push_data[0U] 
                    = (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__temp);
                vlSelfRef.cache_tb__DOT__cache__DOT__push_data[1U] 
                    = (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__temp 
                               >> 0x00000020U));
                vlSelfRef.cache_tb__DOT__cache__DOT__push_data[2U] 
                    = (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr));
            }
            vlSelfRef.cache_tb__DOT__cache__DOT__drain_req 
                = (1U & (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full) 
                          | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))) 
                         && ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full)
                              ? (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)))
                              : 0U)));
        } else {
            vlSelfRef.cache_tb__DOT__cache__DOT__push_data[0U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__push_data[1U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__push_data[2U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__drain_req 
                = (1U & ((1U & (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit) 
                                 & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op)) 
                                | (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op))))
                          ? (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)))
                          : 0U));
        }
        vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__write_finished 
            = ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid))) 
               && (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found) 
                    & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op)) 
                   && (1U & (~ ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full) 
                                | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))))));
    } else if ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq))) {
        vlSelfRef.cache_tb__DOT__data_valid = 0U;
        if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full) 
             | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__push_data[0U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__push_data[1U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__push_data[2U] = 0U;
        } else {
            vlSelfRef.cache_tb__DOT__cache__DOT__push_data[0U] 
                = vlSelfRef.cache_tb__DOT__cache__DOT__buffer_store[0U];
            vlSelfRef.cache_tb__DOT__cache__DOT__push_data[1U] 
                = vlSelfRef.cache_tb__DOT__cache__DOT__buffer_store[1U];
            vlSelfRef.cache_tb__DOT__cache__DOT__push_data[2U] 
                = vlSelfRef.cache_tb__DOT__cache__DOT__buffer_store[2U];
        }
        vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__write_finished 
            = (1U & (~ ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full) 
                        | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))));
        vlSelfRef.cache_tb__DOT__cache__DOT__drain_req 
            = (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full) 
                | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))) 
               && ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full)
                    ? (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)))
                    : 0U));
    } else if ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq))) {
        vlSelfRef.cache_tb__DOT__data_valid = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__push_data[0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__push_data[1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__push_data[2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__write_finished = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__drain_req 
            = (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)));
    }
    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state) {
        if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem) {
            if (vlSelfRef.cache_tb__DOT__cache__DOT__write_finished) {
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 0U;
            } else {
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 1U;
            }
        } else if (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__ready) {
            if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__ready) 
                 & (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_state)))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem = 0U;
            }
        } else {
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 1U;
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem)))))))) {
            if ((0U == (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem) 
                         << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:356: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but none matched for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem));
                    VL_STOP_MT("design/cache_controller.sv", 356, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:356: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem));
                VL_STOP_MT("design/cache_controller.sv", 356, "");
            }
        }
    } else {
        if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req) {
            if ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache))) {
                if (((0x7fU == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                     | ((0x63U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                        & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_done)))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 0U;
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache = 3U;
                } else if ((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit) 
                             | (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found)) 
                            & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_done))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 0U;
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache = 1U;
                } else if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_done) {
                    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dir_hit) {
                        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 0U;
                        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache = 2U;
                    } else {
                        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 1U;
                        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem = 0U;
                        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_flag 
                            = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__has_re)
                                ? 0U : 2U);
                    }
                }
            } else if ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache = 0U;
            } else if ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache = 0U;
            } else if ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache))) {
                if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state) {
                    if ((1U & (~ VL_ONEHOT_I((((0x7fU 
                                                == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                                               << 1U) 
                                              | (0x63U 
                                                 == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))))) {
                        if ((0U == (((0x7fU == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                                     << 1U) | (0x63U 
                                               == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:303: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but none matched for '7'h%x'\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name(),
                                             7,(IData)(vlSelfRef.cache_tb__DOT__opcode_i));
                                VL_STOP_MT("design/cache_controller.sv", 303, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:303: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but multiple matches found for '7'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         7,(IData)(vlSelfRef.cache_tb__DOT__opcode_i));
                            VL_STOP_MT("design/cache_controller.sv", 303, "");
                        }
                    }
                    if ((0x63U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))) {
                        if ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o))) {
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 1U;
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem = 1U;
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache = 0U;
                        } else {
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 0U;
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache = 0U;
                        }
                    } else if ((0x7fU == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))) {
                        if ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o))) {
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 0U;
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache = 0U;
                        } else {
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 1U;
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem = 1U;
                            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache = 0U;
                        }
                    }
                } else {
                    if ((0x63U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))) {
                        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 1U;
                        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem = 1U;
                    } else {
                        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 0U;
                        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem = 0U;
                    }
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache = 0U;
                }
                if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state) 
                                           << 1U) | 
                                          (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state)))))))) {
                    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____VdfgExtracted_h03db6b6c__0) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:295: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but none matched for '32'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state));
                            VL_STOP_MT("design/cache_controller.sv", 295, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:295: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but multiple matches found for '32'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state));
                        VL_STOP_MT("design/cache_controller.sv", 295, "");
                    }
                }
            }
            if ((1U & (~ VL_ONEHOT_I(((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)) 
                                        << 3U) | ((2U 
                                                   == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)) 
                                                  << 2U)) 
                                      | (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)))))))) {
                if ((0U == ((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)) 
                              << 3U) | ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)) 
                                        << 2U)) | (
                                                   ((1U 
                                                     == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)) 
                                                    << 1U) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache)))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:256: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but none matched for '32'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache));
                        VL_STOP_MT("design/cache_controller.sv", 256, "");
                    }
                } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:256: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache));
                    VL_STOP_MT("design/cache_controller.sv", 256, "");
                }
            }
        } else {
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I(((2U & ((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req)) 
                                         << 1U)) | (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req)))))) {
            if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____VdfgExtracted_ha4ce45db__0) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:254: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req));
                    VL_STOP_MT("design/cache_controller.sv", 254, "");
                }
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state)))))))) {
        if ((0U == (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:252: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state));
                VL_STOP_MT("design/cache_controller.sv", 252, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:252: Assertion failed in %Ncache_tb.cache.cache_1: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state));
            VL_STOP_MT("design/cache_controller.sv", 252, "");
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
            ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq)
                ? 1U : (((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq)) 
                         & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__drain_req))
                         ? 2U : 0U)) : ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                                         ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__ready)
                                             ? 0U : 1U)
                                         : ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                                             ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid)
                                                 ? 
                                                ((0x00010000U 
                                                  & vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[2U])
                                                  ? 0U
                                                  : 3U)
                                                 : 
                                                ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__drain_req)
                                                  ? 2U
                                                  : 0U))
                                             : ((3U 
                                                 == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                                                 ? 
                                                ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_finished)
                                                  ? 0U
                                                  : 3U)
                                                 : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_out 
        = ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
            ? ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                ? __VdfgRegularize_hebeb780c_0_1 : 
               (0x000000ffU & (((0U == (0x0000001fU 
                                        & (IData)(__VdfgRegularize_hebeb780c_0_0)))
                                 ? 0U : (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                         (((IData)(7U) 
                                           + (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                          >> 5U)] << 
                                         ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & (IData)(__VdfgRegularize_hebeb780c_0_0))))) 
                               | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                  ((IData)(__VdfgRegularize_hebeb780c_0_0) 
                                   >> 5U)] >> (0x0000001fU 
                                               & (IData)(__VdfgRegularize_hebeb780c_0_0))))))
            : ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                ? (0x0000ffffU & (((0U == (0x0000001fU 
                                           & (IData)(__VdfgRegularize_hebeb780c_0_0)))
                                    ? 0U : (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                            (((IData)(0x0000000fU) 
                                              + (IData)(__VdfgRegularize_hebeb780c_0_0)) 
                                             >> 5U)] 
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & (IData)(__VdfgRegularize_hebeb780c_0_0))))) 
                                  | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                     ((IData)(__VdfgRegularize_hebeb780c_0_0) 
                                      >> 5U)] >> (0x0000001fU 
                                                  & (IData)(__VdfgRegularize_hebeb780c_0_0)))))
                : __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__pop_en = (
                                                   (0U 
                                                    != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                                   && ((1U 
                                                        != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                                       && ((2U 
                                                            == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                                           && ((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid)) 
                                                               & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__drain_req)))));
    if ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq))) {
        if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid) {
            vlSelfRef.cache_tb__DOT__data_out = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_out;
            vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl 
                = (3U & ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__pop_en)
                          ? 2U : 0U));
        } else if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found) 
                    & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op))) {
            if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full) 
                 | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))) {
                vlSelfRef.cache_tb__DOT__data_out = (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data);
                vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl 
                    = (3U & ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__pop_en)
                              ? 2U : 0U));
            } else {
                vlSelfRef.cache_tb__DOT__data_out = (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data);
                vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl 
                    = (3U & ((0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))
                              ? 3U : 0U));
            }
        } else {
            vlSelfRef.cache_tb__DOT__data_out = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_out;
            vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl 
                = (3U & ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__pop_en)
                          ? 2U : 0U));
        }
    } else if ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq))) {
        if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full) 
             | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))) {
            vlSelfRef.cache_tb__DOT__data_out = (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data);
            vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl 
                = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__pop_en)
                    ? 2U : 0U);
        } else {
            vlSelfRef.cache_tb__DOT__data_out = (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data);
            vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq))) {
        vlSelfRef.cache_tb__DOT__data_out = (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data);
        vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl 
            = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__pop_en)
                ? 2U : 0U);
    }
}

void Vcache_tb___024root___eval_act(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_act\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Vcache_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcache_tb___024root___act_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcache_tb___024root___act_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Vcache_tb___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x000000000000005fULL & vlSelfRef.__VactTriggered
         [0U])) {
        Vcache_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
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
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*15:0*/ __Vdly__cache_tb__DOT__addr;
    __Vdly__cache_tb__DOT__addr = 0;
    CData/*6:0*/ __Vdly__cache_tb__DOT__opcode_i;
    __Vdly__cache_tb__DOT__opcode_i = 0;
    CData/*6:0*/ __VdlyMask__cache_tb__DOT__opcode_i;
    __VdlyMask__cache_tb__DOT__opcode_i = 0;
    IData/*31:0*/ __Vdly__cache_tb__DOT__store_data;
    __Vdly__cache_tb__DOT__store_data = 0;
    IData/*31:0*/ __VdlyMask__cache_tb__DOT__store_data;
    __VdlyMask__cache_tb__DOT__store_data = 0;
    CData/*0:0*/ __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way;
    __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way = 0;
    CData/*0:0*/ __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__search_done;
    __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__search_done = 0;
    QData/*63:0*/ __Vdly__cache_tb__DOT__cache__DOT__memory1__DOT__mem_store;
    __Vdly__cache_tb__DOT__cache__DOT__memory1__DOT__mem_store = 0;
    CData/*3:0*/ __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail;
    __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail = 0;
    CData/*3:0*/ __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head;
    __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v0;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v0 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v0;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v0 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v1;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v1 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v1;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v1 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v2;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v2 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v2;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v2 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v3;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v3 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v3;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v3 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v3;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v3 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v4;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v4 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v4;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v4 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v4;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v4 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v5;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v5 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v5;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v5 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v5;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v5 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v6;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v6 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v6;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v6 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v6;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v6 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v7;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v7 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v7;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v7 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v7;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v7 = 0;
    SData/*11:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0 = 0;
    SData/*11:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1 = 0;
    SData/*11:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v0 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v0;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v0 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v1;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v1 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v1;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v1 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v1;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v1 = 0;
    CData/*1:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v1;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v1 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v1;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v1 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v1;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v1 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v0 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v0;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v0 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v1;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v1 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v1;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v1 = 0;
    CData/*1:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v2;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v2 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v2;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v2 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v2;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v2 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v5;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v5 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v5;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v5 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v3;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v3 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v3;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v3 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v3;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v3 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v4;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v4 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v4;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v4 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v4;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v4 = 0;
    SData/*11:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3 = 0;
    CData/*0:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v0 = 0;
    SData/*11:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v0;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v0 = 0;
    SData/*11:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v1;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v1 = 0;
    SData/*11:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v2;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v2 = 0;
    SData/*11:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v3;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v3 = 0;
    SData/*11:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v8;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v8 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v8;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v8 = 0;
    CData/*0:0*/ __VdlyLsb__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8;
    __VdlyLsb__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1 = 0;
    CData/*0:0*/ __VdlyLsb__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9;
    __VdlyLsb__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2 = 0;
    CData/*0:0*/ __VdlyLsb__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10;
    __VdlyLsb__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v9;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v9 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v9;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v9 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v9;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v9 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10 = 0;
    CData/*0:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11;
    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11 = 0;
    CData/*1:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11;
    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11 = 0;
    CData/*0:0*/ __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11;
    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v0;
    __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v0 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v1;
    __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v1 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v1;
    __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v2;
    __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v2 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v2;
    __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v3;
    __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v3 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v3;
    __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v3 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v4;
    __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v4 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v4;
    __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v4 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v5;
    __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v5 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v5;
    __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v5 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v6;
    __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v6 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v6;
    __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v6 = 0;
    CData/*7:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v7;
    __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v7 = 0;
    IData/*21:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v7;
    __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v7 = 0;
    VlWide<3>/*80:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0;
    VL_ZERO_W(81, __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0);
    CData/*2:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0;
    __VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0;
    __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0 = 0;
    CData/*2:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v1;
    __VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v1;
    __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v1 = 0;
    VlWide<3>/*80:0*/ __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2;
    VL_ZERO_W(81, __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2);
    CData/*2:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2;
    __VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2;
    __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2 = 0;
    CData/*2:0*/ __VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v3;
    __VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v3 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v3;
    __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v3 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v4;
    __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v5;
    __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v5 = 0;
    // Body
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v1 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v3 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v4 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v5 = 0U;
    __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail 
        = vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail;
    __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head 
        = vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v3 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v4 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v0 = 0U;
    __Vdly__cache_tb__DOT__cache__DOT__memory1__DOT__mem_store 
        = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v1 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v1 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v2 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v3 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v4 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v5 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v6 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v7 = 0U;
    __Vdly__cache_tb__DOT__addr = vlSelfRef.cache_tb__DOT__addr;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10 = 0U;
    __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__search_done 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_done;
    __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v0 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v1 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v2 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v9 = 0U;
    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0 = 0U;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_en) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk2__DOT__i = 8U;
        __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v0 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store 
                                      >> 0x38U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v0 
            = (0x003fffffU & ((IData)(8U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat));
        __VdlySet__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v0 = 1U;
        __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v1 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store 
                                      >> 0x30U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v1 
            = (0x003fffffU & ((IData)(7U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat));
        __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v2 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store 
                                      >> 0x28U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v2 
            = (0x003fffffU & ((IData)(6U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat));
        __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v3 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store 
                                      >> 0x20U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v3 
            = (0x003fffffU & ((IData)(5U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat));
        __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v4 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store 
                                      >> 0x18U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v4 
            = (0x003fffffU & ((IData)(4U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat));
        __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v5 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store 
                                      >> 0x10U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v5 
            = (0x003fffffU & ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat));
        __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v6 
            = (0x000000ffU & (IData)((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store 
                                      >> 8U)));
        __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v6 
            = (0x003fffffU & ((IData)(2U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat));
        __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v7 
            = (0x000000ffU & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store));
        __VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v7 
            = (0x003fffffU & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat));
    }
    if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__reset)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v0 = 1U;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v0 = 1U;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v0 = 1U;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__idle)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk4__DOT__i = 2U;
        if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag) {
            if (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                  [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                  [0U] < vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                  [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                  [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag]) 
                 & (0U != vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                    [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                    [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag]))) {
                __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v0 
                    = (1U & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                             [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                             [0U]));
                __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v0 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
                __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v0 = 1U;
            }
            __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v2 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
            __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v2 = 1U;
        } else {
            __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v1 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
            __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v1 = 1U;
            if (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                  [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                  [1U] < vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                  [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                  [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag]) 
                 & (0U != vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                    [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                    [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag]))) {
                __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v3 
                    = (1U & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                             [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                             [1U]));
                __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v3 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
                __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v3 = 1U;
            }
        }
    }
    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en_tag) {
        __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_metadata_o;
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3 = 1U;
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v3 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v3 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v3 = 1U;
        if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
            [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
            [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag]) {
            __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
            __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
            __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3 = 1U;
            __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v1 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
            __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v1 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        }
        __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4 
            = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dirty_sig)
                ? 2U : 1U);
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4 = 1U;
    }
    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__enable) {
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v4 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v4 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v4 = 1U;
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v2 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v2 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v2 = 1U;
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v5 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v5 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
    }
    if (vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid) {
        __Vdly__cache_tb__DOT__cache__DOT__memory1__DOT__mem_store 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[0U])));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__store_address 
            = (0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[2U]);
    } else {
        __Vdly__cache_tb__DOT__cache__DOT__memory1__DOT__mem_store 
            = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__store_address 
            = (0x0000ffffU & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__store_address));
    }
    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__insert_en) {
        __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8 
            = (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                              >> 4U));
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8 = 1U;
        __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8 = 1U;
        __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_way));
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
        __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0 
            = (1U & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                     [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                     [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way]));
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0 = 1U;
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v8 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v8 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
        __VdlyLsb__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8 
            = vlSelfRef.cache_tb__DOT__requester;
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__share_en)))) {
            if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en)))) {
                if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_en) {
                    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_rs;
                    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_way;
                    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
                    __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10 = 1U;
                    __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o;
                    __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_way;
                    __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
                }
            }
        }
        if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__share_en) {
            if ((1U & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                          [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                          [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir] 
                          >> (IData)(vlSelfRef.cache_tb__DOT__requester))))) {
                __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1 
                    = (1U & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                             [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                             [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir]));
                __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir;
                __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
                __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1 = 1U;
                __VdlyLsb__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9 
                    = vlSelfRef.cache_tb__DOT__requester;
                __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir;
                __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
            }
        } else if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en) {
            __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2 
                = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir] 
                         - (IData)(1U)));
            __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir;
            __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
            __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2 = 1U;
            __VdlyLsb__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10 
                = vlSelfRef.cache_tb__DOT__requester;
            __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir;
            __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
            if ((0U == (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                        [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                        [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir] 
                        - (IData)(1U)))) {
                __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v9 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir;
                __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v9 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
                __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v9 = 1U;
            }
        }
    }
    if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__insert_en) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__share_en_tag)))) {
        __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0 
            = (1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
                     [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                     [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag]));
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0 = 1U;
        __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_metadata_o;
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0 = 1U;
        if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
             [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
             [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag])) {
            if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag) 
                 & (0U != vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                    [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                    [0U]))) {
                __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v4 
                    = (1U & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                             [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                             [0U]));
                __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v4 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
                __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v4 = 1U;
            }
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk5__DOT__i = 2U;
            if (((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag)) 
                 & (0U != vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                    [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                    [1U]))) {
                __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v5 
                    = (1U & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                             [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                             [1U]));
                __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v5 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
                __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v5 = 1U;
            }
        }
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v0 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v0 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v0 = 1U;
    } else if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__store_en) {
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v1 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v1 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v1 = 1U;
    }
    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__share_en_tag) {
        __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2 
            = (1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
                     [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                     [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag]));
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2 = 1U;
        __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_metadata_o;
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2 = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state 
        = ((IData)(vlSelfRef.cache_tb__DOT__reset) 
           && (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem 
        = ((IData)(vlSelfRef.cache_tb__DOT__reset) 
           && (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem));
    __Vtableidx1 = ((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_en) 
                      << 6U) | ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__read_en) 
                                << 5U)) | (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__delay) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__request)));
    if ((1U & Vcache_tb__ConstPool__TABLE_h65dd285e_0
         [__Vtableidx1])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__ready 
            = Vcache_tb__ConstPool__TABLE_hfc6a6fef_0
            [__Vtableidx1];
    }
    if ((2U & Vcache_tb__ConstPool__TABLE_h65dd285e_0
         [__Vtableidx1])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__delay 
            = Vcache_tb__ConstPool__TABLE_h6fb8f3ff_0
            [__Vtableidx1];
    }
    if ((4U & Vcache_tb__ConstPool__TABLE_h65dd285e_0
         [__Vtableidx1])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_finished 
            = Vcache_tb__ConstPool__TABLE_h11f3b929_0
            [__Vtableidx1];
    }
    if ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_state))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_dir_index 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_way_meta_data));
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_dir_way 
            = (3U & ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_way_meta_data) 
                     >> 1U));
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__valid_ornot 
            = ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o)) 
               | (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o)));
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_block 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                (((IData)(0x0000003fU) 
                                  + (0x0000007fU & 
                                     VL_SHIFTL_III(7,32,32, 
                                                   ((IData)(1U) 
                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out)), 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x0000001fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 ((IData)(1U) 
                                                                  - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out)), 6U)))
                                                ? 0x00000020U
                                                : ((IData)(0x00000040U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    ((IData)(1U) 
                                                                     - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out)), 6U))))) 
               | (((0U == (0x0000001fU & VL_SHIFTL_III(7,32,32, 
                                                       ((IData)(1U) 
                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out)), 6U)))
                    ? 0ULL : ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                              (((IData)(0x0000001fU) 
                                                + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out)), 6U))) 
                                               >> 5U)])) 
                              << ((IData)(0x00000020U) 
                                  - (0x0000001fU & 
                                     VL_SHIFTL_III(7,32,32, 
                                                   ((IData)(1U) 
                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out)), 6U))))) 
                  | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                     (3U & (VL_SHIFTL_III(7,32,32, 
                                                          ((IData)(1U) 
                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out)), 6U) 
                                            >> 5U))])) 
                     >> (0x0000001fU & VL_SHIFTL_III(7,32,32, 
                                                     ((IData)(1U) 
                                                      - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out)), 6U)))));
    }
    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_en_data) {
        VL_ASSIGNSEL_WQ(256, 64, (0x000000ffU & (VL_SHIFTL_III(8,32,32, 
                                                               ((IData)(1U) 
                                                                - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U) 
                                                 + 
                                                 (0x0000007fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(1U) 
                                                                   - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data)), 6U)))), vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array, vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_in);
    }
    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__store_en) {
        VL_ASSIGNSEL_WQ(256, 64, (0x000000ffU & (VL_SHIFTL_III(8,32,32, 
                                                               ((IData)(1U) 
                                                                - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U) 
                                                 + 
                                                 (0x0000007fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(1U) 
                                                                   - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data)), 6U)))), vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array, vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp);
    }
    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_en) {
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v0 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v0 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v0 = 1U;
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v1 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v1 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v1 = 1U;
        __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_metadata_o;
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1 = 1U;
        if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
             [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
             [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way])) {
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk6__DOT__i = 2U;
            if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way) 
                 & (0U != vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                    [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                    [0U]))) {
                __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v6 
                    = (1U & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                             [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                             [0U]));
                __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v6 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
                __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v6 = 1U;
            }
            if (((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way)) 
                 & (0U != vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                    [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                    [1U]))) {
                __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v7 
                    = (1U & ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                             [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                             [1U]));
                __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v7 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
                __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v7 = 1U;
            }
        }
        __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2 
            = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dirty_sig)
                ? 2U : 1U);
        __VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way;
        __VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
        __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2 = 1U;
        VL_ASSIGNSEL_WQ(256, 64, (0x000000ffU & (VL_SHIFTL_III(8,32,32, 
                                                               ((IData)(1U) 
                                                                - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U) 
                                                 + 
                                                 (0x0000007fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  ((IData)(1U) 
                                                                   - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data)), 6U)))), vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array, vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_in);
    }
    if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search) {
        __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way = 0U;
        __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__search_done = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx = 1U;
    } else if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_en) 
                & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_done)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx = 0U;
        if (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dir_hit) {
            __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__search_done = 1U;
        } else {
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk3__DOT__i = 4U;
            __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v0 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                [(3U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way))];
            __VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v0 = 1U;
            __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v1 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                [(3U & ((IData)(1U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))];
            __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v2 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                [(3U & ((IData)(2U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))];
            __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v3 
                = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir]
                [(3U & ((IData)(3U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))];
            if ((4U == ((IData)(4U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way)))) {
                __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way;
                __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__search_done = 1U;
            } else {
                __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way;
            }
        }
    } else {
        __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way;
        __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__search_done 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_done;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store 
        = __Vdly__cache_tb__DOT__cache__DOT__memory1__DOT__mem_store;
    if (__VdlySet__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v0] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v0;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v1] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v1;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v2] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v2;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v3] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v3;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v4] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v4;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v5] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v5;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v6] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v6;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[__VdlyDim0__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v7] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory__v7;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v0;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v1) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v1][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v1] = 1U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v2;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v3) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v3][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v3] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v4) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v4][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array__v4] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v0;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v1;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v2;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array__v3;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v0][0U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v0;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v1) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v1][0U] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v2) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v2][1U] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v3) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v3][1U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v3;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v4) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v4][0U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v4;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v5) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v5][1U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v5;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v6) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v6][0U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v6;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v7) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v7][1U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array__v7;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data[0U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data[0U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data[0U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data[0U][3U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data[1U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data[1U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data[1U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data[1U][3U] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8] 
            = ((1U & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                [__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8]
                [__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8]) 
               | ((IData)(__VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v8) 
                  << 1U));
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9] 
            = ((2U & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                [__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9]
                [__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9]) 
               | (IData)(__VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v9));
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10] 
            = ((1U & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                [__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10]
                [__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10]) 
               | ((IData)(__VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v10) 
                  << 1U));
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11] 
            = ((2U & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                [__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11]
                [__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11]) 
               | (IData)(__VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data__v11));
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v0][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v0] = 1U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v1][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v1] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v0][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v0] = 1U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v1) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v1][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v1] = 2U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v2;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v3] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v4;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v2) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v2][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array__v2] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v5][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array__v5] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array[0U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array[0U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array[0U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array[0U][3U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array[1U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array[1U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array[1U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array[1U][3U] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8] 
            = (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
               [__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8] 
               | (3U & ((IData)(1U) << (IData)(__VdlyLsb__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v8))));
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9] 
            = (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
               [__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9] 
               | (3U & ((IData)(1U) << (IData)(__VdlyLsb__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v9))));
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v1;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10] 
            = ((~ ((IData)(1U) << (IData)(__VdlyLsb__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10))) 
               & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
               [__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10]
               [__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array__v10]);
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v2;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array[0U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array[0U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array[0U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array[0U][3U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array[1U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array[1U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array[1U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array[1U][3U] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v8][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v8] = 1U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v9) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v9][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array__v9] = 0U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_done 
        = __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__search_done;
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array[0U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array[0U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array[0U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array[0U][3U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array[1U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array[1U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array[1U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array[1U][3U] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array[__VdlyDim1__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8][__VdlyDim0__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array__v8;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way 
        = __Vdly__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way;
    if (__VdlySet__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array[0U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v0;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array[1U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v1;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array[2U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v2;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array[3U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array__v3;
    }
    if (vlSelfRef.cache_tb__DOT__reset) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state 
            = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__next_state;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__has_re_pv 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in))) 
                & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__has_re_pv)) 
               | (3U & ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__has_re) 
                        << (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in))));
    } else {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__has_re_pv = 3U;
    }
    if (vlSelfRef.cache_tb__DOT__reset) {
        if ((1U & (~ VL_ONEHOT_I(((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl)) 
                                    << 3U) | ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl)) 
                                              << 2U)) 
                                  | (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl)) 
                                      << 1U) | (0U 
                                                == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl)))))))) {
            if ((0U != ((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl)) 
                          << 3U) | ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl)) 
                                    << 2U)) | (((1U 
                                                 == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl)) 
                                                << 1U) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: writeback_buffer.sv:106: Assertion failed in %Ncache_tb.cache.wb_buffer1: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl));
                    VL_STOP_MT("design/writeback_buffer.sv", 106, "");
                }
            }
        }
        if ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl))) {
            __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail 
                = vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail;
            __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head 
                = vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[0U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[1U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[2U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid = 0U;
        } else if ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl))) {
            if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full)))) {
                __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0[0U] 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__push_data[0U];
                __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0[1U] 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__push_data[1U];
                __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0[2U] 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__push_data[2U];
                __VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0 
                    = (7U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail));
                __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0 = 1U;
                __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail)));
            }
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[0U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[1U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[2U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid = 0U;
        } else if ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl))) {
            if (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty) {
                vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[0U] = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[1U] = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[2U] = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid = 0U;
            } else {
                vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[0U] 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                    [(7U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head))][0U];
                vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[1U] 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                    [(7U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head))][1U];
                vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[2U] 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                    [(7U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head))][2U];
                vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid = 1U;
                __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head)));
                __VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v1 
                    = (7U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head));
                __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v1 = 1U;
            }
        } else if ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl))) {
            if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full)))) {
                __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2[0U] 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__push_data[0U];
                __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2[1U] 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__push_data[1U];
                __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2[2U] 
                    = vlSelfRef.cache_tb__DOT__cache__DOT__push_data[2U];
                __VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2 
                    = (7U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail));
                __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2 = 1U;
                __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail)));
            }
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[0U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[1U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[2U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid = 0U;
            __VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v3 
                = (7U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__found_entry));
            __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v3 = 1U;
        } else {
            __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail 
                = vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail;
            __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head 
                = vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[0U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[1U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[2U] = 0U;
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid = 0U;
        }
    } else {
        __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail = 0U;
        __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head = 0U;
        __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v4 = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__unnamedblk2__DOT__i = 8U;
        __VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v5 = 1U;
    }
    if (((~ (IData)(vlSelfRef.cache_tb__DOT__stall)) 
         & (IData)(vlSelfRef.cache_tb__DOT__start))) {
        if ((0x00000015U == vlSelfRef.cache_tb__DOT__i)) {
            __Vdly__cache_tb__DOT__addr = 0U;
            __Vdly__cache_tb__DOT__opcode_i = 0U;
            __VdlyMask__cache_tb__DOT__opcode_i = 0x7fU;
            __Vdly__cache_tb__DOT__store_data = 0U;
            __VdlyMask__cache_tb__DOT__store_data = 0xffffffffU;
            vlSelfRef.cache_tb__DOT__requester = 0U;
        } else {
            __Vdly__cache_tb__DOT__addr = (0x0000ffffU 
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
            __Vdly__cache_tb__DOT__opcode_i = (0x0000007fU 
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
                                                          >> 0x21U)));
            __VdlyMask__cache_tb__DOT__opcode_i = 0x7fU;
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
        __Vdly__cache_tb__DOT__addr = vlSelfRef.cache_tb__DOT__addr;
    }
    if ((1U & (~ VL_ONEHOT_I(((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                << 3U) | ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                          << 2U)) | 
                              (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                << 1U) | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))))))) {
        if ((0U != ((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                      << 3U) | ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                << 2U)) | (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: memory_controller.sv:87: Assertion failed in %Ncache_tb.cache.memory1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state));
                VL_STOP_MT("design/memory_controller.sv", 87, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                << 3U) | ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                          << 2U)) | 
                              (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                << 1U) | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))))))) {
        if ((0U != ((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                      << 3U) | ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                << 2U)) | (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: memory_controller.sv:160: Assertion failed in %Ncache_tb.cache.memory1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state));
                VL_STOP_MT("design/memory_controller.sv", 160, "");
            }
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_state 
        = ((IData)(vlSelfRef.cache_tb__DOT__reset) ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_flag)
            : 0U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__request 
        = ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
           && ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
               || ((2U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                   && (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_en 
        = ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
           && ((1U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
               && ((2U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                   && (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__read_en 
        = ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
           && (1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_rs = 0U;
    if ((1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__has_re_pv))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_rs = 0U;
    }
    if ((2U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__has_re_pv))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_rs = 1U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[__VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0][0U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0[0U];
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[__VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0][1U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0[1U];
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[__VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0][2U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v0[2U];
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v1) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[__VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v1][2U] 
            = (0x00010000U | vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [__VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v1][2U]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[__VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2][0U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2[0U];
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[__VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2][1U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2[1U];
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[__VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2][2U] 
            = __VdlyVal__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v2[2U];
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v3) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[__VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v3][2U] 
            = (0x00010000U | vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [__VdlyDim0__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v3][2U]);
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v4) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[0U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[0U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[0U][2U] = 0U;
    }
    if (__VdlySet__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer__v5) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[1U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[1U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[1U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[2U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[2U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[2U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[3U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[3U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[3U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[4U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[4U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[4U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[5U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[5U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[5U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[6U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[6U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[6U][2U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[7U][0U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[7U][1U] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[7U][2U] = 0U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail 
        = __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail;
    vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head 
        = __Vdly__cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head;
    vlSelfRef.cache_tb__DOT__store_data = ((__Vdly__cache_tb__DOT__store_data 
                                            & __VdlyMask__cache_tb__DOT__store_data) 
                                           | (vlSelfRef.cache_tb__DOT__store_data 
                                              & (~ __VdlyMask__cache_tb__DOT__store_data)));
    __VdlyMask__cache_tb__DOT__store_data = 0U;
    vlSelfRef.cache_tb__DOT__opcode_i = (((IData)(__Vdly__cache_tb__DOT__opcode_i) 
                                          & (IData)(__VdlyMask__cache_tb__DOT__opcode_i)) 
                                         | ((IData)(vlSelfRef.cache_tb__DOT__opcode_i) 
                                            & (~ (IData)(__VdlyMask__cache_tb__DOT__opcode_i))));
    __VdlyMask__cache_tb__DOT__opcode_i = 0U;
    vlSelfRef.cache_tb__DOT__addr = __Vdly__cache_tb__DOT__addr;
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__data_o = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out = 0ULL;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__read_en) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__data_o 
            = (((0x01000000U <= vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i) 
                & (0x01400000U > ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i)))
                ? (((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                     [(0x003fffffU & ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i))] 
                     << 0x00000018U) | (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                        [(0x003fffffU 
                                          & ((IData)(2U) 
                                             + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i))] 
                                        << 0x00000010U)) 
                   | ((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                       [(0x003fffffU & ((IData)(1U) 
                                        + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i))] 
                       << 8U) | vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                      [(0x003fffffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i)]))
                : 0xdeadbeefU);
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0x00ffffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(8U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000038U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xff00ffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(7U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000030U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffff00ffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(6U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000028U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffff00ffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(5U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000020U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffffff00ffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(4U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000018U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffffffff00ffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(3U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000010U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffffffffff00ffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(2U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 8U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffffffffffff00ULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | (IData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                 [(0x003fffffU & ((IData)(1U) 
                                                  + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])));
    }
    __Vtableidx2 = (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail) 
                     << 4U) | (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head));
    vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty 
        = Vcache_tb__ConstPool__TABLE_h627a7f2d_0[__Vtableidx2];
    vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full 
        = Vcache_tb__ConstPool__TABLE_hfe0ee99c_0[__Vtableidx2];
    vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 0U;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [0U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [0U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 0U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [1U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [1U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [2U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [2U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 2U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [3U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [3U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 3U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [4U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [4U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 4U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [5U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [5U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 5U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data = 0ULL;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [0U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [0U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [0U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [0U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [1U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [1U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [1U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [1U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [2U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [2U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [2U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [2U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [3U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [3U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [3U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [3U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [4U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [4U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [4U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [4U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [5U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [5U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [5U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [5U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [6U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [6U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 6U;
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [6U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [6U][0U])));
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 0U;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [0U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [0U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [1U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [1U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [2U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [2U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [3U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [3U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [4U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [4U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [5U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [5U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [6U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [6U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [7U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [7U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 7U;
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [7U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [7U][0U])));
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
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
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 0U;
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way = 0U;
    if (((~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
          [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
          [0U]) & (2U != vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                   [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                   [0U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way = 0U;
    }
    if (((~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
          [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
          [1U]) & (2U != vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                   [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                   [1U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 0U;
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 0U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 1U;
    }
    __VExpandSel_WordIdx_1 = (7U & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(1U) 
                                                   - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U) 
                                    >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & VL_SHIFTL_III(8,8,32, 
                                                          ((IData)(1U) 
                                                           - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in)), 7U));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[0U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(1U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[__VExpandSel_WordIdx_1] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[1U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(2U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(1U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[2U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(3U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(2U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[3U] 
        = (((((4U <= __VExpandSel_WordIdx_1) ? 0U : 
              vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(4U) + __VExpandSel_WordIdx_1)]) 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(3U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way = 0U;
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
           [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
           [0U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                                               [0U])) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
            [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
            [0U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way = 0U;
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
           [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
           [1U] == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                                               [1U])) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
            [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
            [1U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o 
        = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found)
            ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way)
            : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 0U;
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [0U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 0U;
    }
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [1U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
         [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 1U;
    }
}

void Vcache_tb___024root___eval_nba(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_nba\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcache_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x0000000000000024ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcache_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcache_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000028ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcache_tb___024root___act_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x000000000000006fULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vcache_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
}

void Vcache_tb___024root___timing_resume(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___timing_resume\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered
         [0U])) {
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
