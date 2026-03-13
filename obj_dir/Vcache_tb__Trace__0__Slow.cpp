// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcache_tb__Syms.h"


VL_ATTR_COLD void Vcache_tb___024root__trace_init_sub__TOP____024unit__0(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcache_tb___024root__trace_init_sub__TOP__0(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_init_sub__TOP__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vcache_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("cache_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+98,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+99,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+100,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+93,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"opcode_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+95,0,"funct3_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+96,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("test_addresses", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 21,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+15,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+97,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+98,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+93,0,"store_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+95,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+96,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+100,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+18,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+24,0,"memory_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+19,0,"read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+20,0,"replace_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+103,0,"CACHE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"MAIN_MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"curr_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"READING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"WRITE_BACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"curr_state_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"next_state_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"HIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"MISS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+29,0,"mem_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+104,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"write_finished",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+43,0,"mem_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+45,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"replace_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"hit_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"replace_way_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+32,0,"replace_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"store_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+48,0,"set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 191,0);
    tracep->pushPrefix("cache_data_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+105,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+106,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+107,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+99,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+108,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+107,0,"WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+98,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"index_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+109,0,"offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"replace_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"hit_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+29,0,"cache_line_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+93,0,"store_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+32,0,"replace_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"store_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+48,0,"set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 191,0);
    tracep->declArray(c+54,0,"data_array",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 383,0);
    tracep->declQuad(c+34,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("cache_tag_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+97,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+105,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+106,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+99,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+107,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"idle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+17,0,"index_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+32,0,"replace_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"store_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"hit_way_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,0,"replace_way_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"replace_way_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"replace_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+107,0,"WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("tag_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+66,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+67,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+68,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+69,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+70,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+71,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+72,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+74,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+75,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LRU_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+78,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+79,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+81,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+47,0,"hit_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"empty_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+85,0,"empty_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"oldest_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"reset_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,0,"replace_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+110,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+110,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+110,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+87,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+88,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("memory1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+98,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+98,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+111,0,"BASE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"addr_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+43,0,"data_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+27,0,"read_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"read_en_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"write_en_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+42,0,"write_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+29,0,"data_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+112,0,"MEM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+90,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"address_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+39,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+91,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcache_tb___024root__trace_init_sub__TOP____024unit__0(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+113,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"OP_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+115,0,"OP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+116,0,"OP_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+117,0,"OP_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+118,0,"OP_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+119,0,"OP_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+120,0,"OP_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+121,0,"OP_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+122,0,"OP_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+123,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+125,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+126,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+127,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+128,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+130,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+131,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+132,0,"ALU_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+133,0,"ALU_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+134,0,"ALU_NOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_init_top(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_init_top\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcache_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcache_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcache_tb___024root__trace_register(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_register\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcache_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vcache_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vcache_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vcache_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_const_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcache_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_const_0\n"); );
    // Body
    Vcache_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_tb___024root*>(voidSelf);
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcache_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_const_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_const_0_sub_0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+97,(0x0000000eU),32);
    bufp->fullIData(oldp+98,(0x00000020U),32);
    bufp->fullIData(oldp+99,(2U),32);
    bufp->fullIData(oldp+100,(3U),32);
    bufp->fullIData(oldp+101,(1U),32);
    bufp->fullIData(oldp+102,(0x0000000aU),32);
    bufp->fullIData(oldp+103,(0U),32);
    bufp->fullBit(oldp+104,(1U));
    bufp->fullIData(oldp+105,(0x0000000aU),32);
    bufp->fullIData(oldp+106,(1U),32);
    bufp->fullIData(oldp+107,(3U),32);
    bufp->fullIData(oldp+108,(8U),32);
    bufp->fullCData(oldp+109,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__offset),3);
    bufp->fullIData(oldp+110,(3U),32);
    bufp->fullIData(oldp+111,(0x01000000U),32);
    bufp->fullIData(oldp+112,(0x0009ca00U),32);
    bufp->fullIData(oldp+113,(0U),32);
    bufp->fullCData(oldp+114,(0x33U),7);
    bufp->fullCData(oldp+115,(0x13U),7);
    bufp->fullCData(oldp+116,(3U),7);
    bufp->fullCData(oldp+117,(0x23U),7);
    bufp->fullCData(oldp+118,(0x63U),7);
    bufp->fullCData(oldp+119,(0x67U),7);
    bufp->fullCData(oldp+120,(0x6fU),7);
    bufp->fullCData(oldp+121,(0x37U),7);
    bufp->fullCData(oldp+122,(0x17U),7);
    bufp->fullCData(oldp+123,(0U),4);
    bufp->fullCData(oldp+124,(1U),4);
    bufp->fullCData(oldp+125,(2U),4);
    bufp->fullCData(oldp+126,(3U),4);
    bufp->fullCData(oldp+127,(4U),4);
    bufp->fullCData(oldp+128,(5U),4);
    bufp->fullCData(oldp+129,(6U),4);
    bufp->fullCData(oldp+130,(7U),4);
    bufp->fullCData(oldp+131,(8U),4);
    bufp->fullCData(oldp+132,(9U),4);
    bufp->fullCData(oldp+133,(0x0aU),4);
    bufp->fullCData(oldp+134,(0x0fU),4);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_full_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcache_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_full_0\n"); );
    // Body
    Vcache_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_tb___024root*>(voidSelf);
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcache_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_full_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_full_0_sub_0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.cache_tb__DOT__reset));
    bufp->fullIData(oldp+2,(vlSelfRef.cache_tb__DOT__test_addresses[0]),22);
    bufp->fullIData(oldp+3,(vlSelfRef.cache_tb__DOT__test_addresses[1]),22);
    bufp->fullIData(oldp+4,(vlSelfRef.cache_tb__DOT__test_addresses[2]),22);
    bufp->fullIData(oldp+5,(vlSelfRef.cache_tb__DOT__test_addresses[3]),22);
    bufp->fullIData(oldp+6,(vlSelfRef.cache_tb__DOT__test_addresses[4]),22);
    bufp->fullIData(oldp+7,(vlSelfRef.cache_tb__DOT__test_addresses[5]),22);
    bufp->fullIData(oldp+8,(vlSelfRef.cache_tb__DOT__test_addresses[6]),22);
    bufp->fullIData(oldp+9,(vlSelfRef.cache_tb__DOT__test_addresses[7]),22);
    bufp->fullIData(oldp+10,(vlSelfRef.cache_tb__DOT__test_addresses[8]),22);
    bufp->fullIData(oldp+11,(vlSelfRef.cache_tb__DOT__test_addresses[9]),22);
    bufp->fullIData(oldp+12,(vlSelfRef.cache_tb__DOT__test_addresses[10]),22);
    bufp->fullIData(oldp+13,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i),32);
    bufp->fullSData(oldp+14,(vlSelfRef.cache_tb__DOT__address),14);
    bufp->fullIData(oldp+15,(vlSelfRef.cache_tb__DOT__i),32);
    bufp->fullCData(oldp+16,((7U & (IData)(vlSelfRef.cache_tb__DOT__address))),3);
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))));
    bufp->fullSData(oldp+18,((0x000003ffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                             >> 4U))),10);
    bufp->fullSData(oldp+19,((0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__address))),14);
    bufp->fullSData(oldp+20,(((((2U >= (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way))
                                 ? vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                                [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                        >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way]
                                 : 0U) << 4U) | (8U 
                                                 & (IData)(vlSelfRef.cache_tb__DOT__address)))),14);
    bufp->fullCData(oldp+21,(((2U >= (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way))
                               ? vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                              [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                      >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way]
                               : 0U)),2);
    bufp->fullBit(oldp+22,(vlSelfRef.cache_tb__DOT__stall));
    bufp->fullBit(oldp+23,(vlSelfRef.cache_tb__DOT__data_valid));
    bufp->fullSData(oldp+24,(vlSelfRef.cache_tb__DOT__cache__DOT__memory_address),14);
    bufp->fullBit(oldp+25,(vlSelfRef.cache_tb__DOT__cache__DOT__next_state));
    bufp->fullBit(oldp+26,(vlSelfRef.cache_tb__DOT__cache__DOT__next_state_mem));
    bufp->fullBit(oldp+27,(vlSelfRef.cache_tb__DOT__cache__DOT__read_en));
    bufp->fullBit(oldp+28,(vlSelfRef.cache_tb__DOT__cache__DOT__write_en));
    bufp->fullQData(oldp+29,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_out),64);
    bufp->fullBit(oldp+31,(vlSelfRef.cache_tb__DOT__cache__DOT__idle));
    bufp->fullBit(oldp+32,(vlSelfRef.cache_tb__DOT__cache__DOT__replace_en));
    bufp->fullBit(oldp+33,(vlSelfRef.cache_tb__DOT__cache__DOT__store_en));
    bufp->fullQData(oldp+34,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__temp),64);
    bufp->fullIData(oldp+36,(vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat),32);
    bufp->fullIData(oldp+37,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__data_o),32);
    bufp->fullIData(oldp+38,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat),32);
    bufp->fullIData(oldp+39,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+40,(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
    bufp->fullBit(oldp+41,(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state_mem));
    bufp->fullBit(oldp+42,(vlSelfRef.cache_tb__DOT__cache__DOT__write_finished));
    bufp->fullQData(oldp+43,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_store),64);
    bufp->fullBit(oldp+45,(vlSelfRef.cache_tb__DOT__cache__DOT__hit));
    bufp->fullCData(oldp+46,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way),2);
    bufp->fullCData(oldp+47,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way),2);
    bufp->fullWData(oldp+48,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o),192);
    bufp->fullWData(oldp+54,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array),384);
    bufp->fullSData(oldp+66,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [0U][0U]),10);
    bufp->fullSData(oldp+67,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [0U][1U]),10);
    bufp->fullSData(oldp+68,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [0U][2U]),10);
    bufp->fullSData(oldp+69,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [1U][0U]),10);
    bufp->fullSData(oldp+70,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [1U][1U]),10);
    bufp->fullSData(oldp+71,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [1U][2U]),10);
    bufp->fullCData(oldp+72,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                             [0U][0U]),2);
    bufp->fullCData(oldp+73,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                             [0U][1U]),2);
    bufp->fullCData(oldp+74,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                             [0U][2U]),2);
    bufp->fullCData(oldp+75,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                             [1U][0U]),2);
    bufp->fullCData(oldp+76,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                             [1U][1U]),2);
    bufp->fullCData(oldp+77,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                             [1U][2U]),2);
    bufp->fullCData(oldp+78,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                             [0U][0U]),2);
    bufp->fullCData(oldp+79,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                             [0U][1U]),2);
    bufp->fullCData(oldp+80,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                             [0U][2U]),2);
    bufp->fullCData(oldp+81,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                             [1U][0U]),2);
    bufp->fullCData(oldp+82,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                             [1U][1U]),2);
    bufp->fullCData(oldp+83,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                             [1U][2U]),2);
    bufp->fullCData(oldp+84,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way),2);
    bufp->fullBit(oldp+85,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found));
    bufp->fullCData(oldp+86,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way),2);
    bufp->fullIData(oldp+87,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+88,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+89,(vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i),32);
    bufp->fullIData(oldp+90,((vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i 
                              - (IData)(0x01000000U))),32);
    bufp->fullIData(oldp+91,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+92,(vlSelfRef.cache_tb__DOT__clk));
    bufp->fullIData(oldp+93,(vlSelfRef.cache_tb__DOT__store_data),32);
    bufp->fullCData(oldp+94,(vlSelfRef.cache_tb__DOT__opcode_i),7);
    bufp->fullCData(oldp+95,(vlSelfRef.cache_tb__DOT__funct3_i),3);
    bufp->fullIData(oldp+96,(((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                               ? ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                   ? vlSelfRef.__VdfgRegularize_hebeb780c_0_2
                                   : ((0xbfU >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                                       ? (0x000000ffU 
                                          & (((0U == 
                                               (0x0000001fU 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                                               ? 0U
                                               : (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                  (((IData)(7U) 
                                                    + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))))) 
                                             | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                 >> 5U)] 
                                                >> 
                                                (0x0000001fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))))
                                       : 0U)) : ((1U 
                                                  & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                  ? 
                                                 ((0xbfU 
                                                   >= (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                                                   ? 
                                                  (0x0000ffffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                        (((IData)(0x0000000fU) 
                                                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))))) 
                                                      | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o[
                                                         ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))))
                                                   : 0U)
                                                  : vlSelfRef.__VdfgRegularize_hebeb780c_0_2))),32);
}
