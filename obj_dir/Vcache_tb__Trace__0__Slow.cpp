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
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+118,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+119,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+120,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+123,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"opcode_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+125,0,"funct3_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+126,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+127,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+117,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+118,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+123,0,"store_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+125,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+126,0,"offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+127,0,"index",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+120,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"CACHE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"MAIN_MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"curr_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"mem_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"replace_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+40,0,"replace_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+41,0,"set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("cache_data_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+133,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+134,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+119,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+117,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+119,0,"WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"index_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"replace_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+4,0,"cache_line_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+40,0,"replace_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+45,0,"set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+53,0,"data_array",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->popPrefix();
    tracep->pushPrefix("cache_tag_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+133,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+134,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+119,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"idle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+127,0,"index_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+38,0,"hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"replace_way_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+134,0,"WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("tag_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+85,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+86,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+87,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+88,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+89,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+90,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+91,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+92,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+93,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+95,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+97,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+99,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LRU_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+101,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+102,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+103,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+104,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+105,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+106,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+107,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+108,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+109,0,"hit_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+110,0,"empty_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+111,0,"empty_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"oldest_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+113,0,"replace_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2,0,"reset_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+135,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+135,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+135,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("memory1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+118,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+118,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+136,0,"BASE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"addr_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"data_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,0,"read_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"read_en_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"write_en_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+131,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"data_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"size_encoded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+137,0,"MEM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("temp_memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 21; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+9,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"address_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    tracep->declBus(c+138,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"OP_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+140,0,"OP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+141,0,"OP_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+142,0,"OP_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+143,0,"OP_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+144,0,"OP_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+145,0,"OP_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+146,0,"OP_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+147,0,"OP_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+148,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+149,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+151,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+152,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+153,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+154,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+155,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+156,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+157,0,"ALU_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+158,0,"ALU_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+159,0,"ALU_NOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
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
    bufp->fullBit(oldp+115,(vlSelfRef.cache_tb__DOT__clk));
    bufp->fullBit(oldp+116,(vlSelfRef.cache_tb__DOT__reset));
    bufp->fullIData(oldp+117,(8U),32);
    bufp->fullIData(oldp+118,(0x00000020U),32);
    bufp->fullIData(oldp+119,(4U),32);
    bufp->fullIData(oldp+120,(3U),32);
    bufp->fullIData(oldp+121,(2U),32);
    bufp->fullCData(oldp+122,(vlSelfRef.cache_tb__DOT__address),8);
    bufp->fullIData(oldp+123,(vlSelfRef.cache_tb__DOT__store_data),32);
    bufp->fullCData(oldp+124,(vlSelfRef.cache_tb__DOT__opcode_i),7);
    bufp->fullCData(oldp+125,(vlSelfRef.cache_tb__DOT__funct3_i),3);
    bufp->fullCData(oldp+126,((7U & (IData)(vlSelfRef.cache_tb__DOT__address))),3);
    bufp->fullCData(oldp+127,((3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                     >> 3U))),2);
    bufp->fullCData(oldp+128,((7U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                     >> 5U))),3);
    bufp->fullIData(oldp+129,(0U),32);
    bufp->fullIData(oldp+130,(1U),32);
    bufp->fullBit(oldp+131,(1U));
    bufp->fullBit(oldp+132,(0U));
    bufp->fullIData(oldp+133,(3U),32);
    bufp->fullIData(oldp+134,(2U),32);
    bufp->fullIData(oldp+135,(2U),32);
    bufp->fullIData(oldp+136,(0x01000000U),32);
    bufp->fullIData(oldp+137,(0x00000400U),32);
    bufp->fullIData(oldp+138,(0U),32);
    bufp->fullCData(oldp+139,(0x33U),7);
    bufp->fullCData(oldp+140,(0x13U),7);
    bufp->fullCData(oldp+141,(3U),7);
    bufp->fullCData(oldp+142,(0x23U),7);
    bufp->fullCData(oldp+143,(0x63U),7);
    bufp->fullCData(oldp+144,(0x67U),7);
    bufp->fullCData(oldp+145,(0x6fU),7);
    bufp->fullCData(oldp+146,(0x37U),7);
    bufp->fullCData(oldp+147,(0x17U),7);
    bufp->fullCData(oldp+148,(0U),4);
    bufp->fullCData(oldp+149,(1U),4);
    bufp->fullCData(oldp+150,(2U),4);
    bufp->fullCData(oldp+151,(3U),4);
    bufp->fullCData(oldp+152,(4U),4);
    bufp->fullCData(oldp+153,(5U),4);
    bufp->fullCData(oldp+154,(6U),4);
    bufp->fullCData(oldp+155,(7U),4);
    bufp->fullCData(oldp+156,(8U),4);
    bufp->fullCData(oldp+157,(9U),4);
    bufp->fullCData(oldp+158,(0x0aU),4);
    bufp->fullCData(oldp+159,(0x0fU),4);
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
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_2;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_LoShift_2;
    CData/*0:0*/ __VExpandSel_Aligned_2;
    IData/*31:0*/ __VExpandSel_HiShift_2;
    IData/*31:0*/ __VExpandSel_HiMask_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_out),32);
    bufp->fullBit(oldp+2,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way));
    bufp->fullCData(oldp+3,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way),2);
    bufp->fullQData(oldp+4,((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_out))),64);
    bufp->fullIData(oldp+6,(vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i),32);
    bufp->fullIData(oldp+7,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__data_o),32);
    bufp->fullCData(oldp+8,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__size_encoded),2);
    bufp->fullIData(oldp+9,((vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i 
                             - (IData)(0x01000000U))),32);
    bufp->fullIData(oldp+10,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address_dat),32);
    bufp->fullIData(oldp+11,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[0]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[1]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[2]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[3]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[4]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[5]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[6]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[7]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[8]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[9]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[10]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[11]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[12]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[13]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[14]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[15]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[16]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[17]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[18]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[19]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[20]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i),32);
    bufp->fullIData(oldp+33,(vlSelfRef.cache_tb__DOT__data_out),32);
    bufp->fullBit(oldp+34,(vlSelfRef.cache_tb__DOT__stall));
    bufp->fullBit(oldp+35,(vlSelfRef.cache_tb__DOT__data_valid));
    bufp->fullBit(oldp+36,(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
    bufp->fullBit(oldp+37,(vlSelfRef.cache_tb__DOT__cache__DOT__next_state));
    bufp->fullBit(oldp+38,(vlSelfRef.cache_tb__DOT__cache__DOT__hit));
    bufp->fullBit(oldp+39,(vlSelfRef.cache_tb__DOT__cache__DOT__idle));
    bufp->fullBit(oldp+40,(vlSelfRef.cache_tb__DOT__cache__DOT__replace_en));
    __VExpandSel_WordIdx_1 = (0x0000001fU & (VL_SHIFTL_III(10,10,32, 
                                                           ((IData)(3U) 
                                                            - 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                >> 3U))), 8U) 
                                             >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & VL_SHIFTL_III(10,10,32, 
                                                          ((IData)(3U) 
                                                           - 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                               >> 3U))), 8U));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    __Vtemp_1[0U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                       ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                       << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[__VExpandSel_WordIdx_1] 
                        >> __VExpandSel_LoShift_1));
    __Vtemp_1[1U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                       ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                       << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                        ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                        >> __VExpandSel_LoShift_1));
    __Vtemp_1[2U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                       ((IData)(3U) + __VExpandSel_WordIdx_1)] 
                       << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                        ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                        >> __VExpandSel_LoShift_1));
    __Vtemp_1[3U] = (((((0x0000001cU <= __VExpandSel_WordIdx_1)
                         ? 0U : vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                        ((IData)(4U) + __VExpandSel_WordIdx_1)]) 
                       << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                        ((IData)(3U) + __VExpandSel_WordIdx_1)] 
                        >> __VExpandSel_LoShift_1));
    bufp->fullWData(oldp+41,(__Vtemp_1),128);
    __VExpandSel_WordIdx_2 = (0x0000001fU & (VL_SHIFTL_III(10,10,32, 
                                                           ((IData)(3U) 
                                                            - 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                                >> 3U))), 8U) 
                                             >> 5U));
    __VExpandSel_LoShift_2 = (0x0000001fU & VL_SHIFTL_III(10,10,32, 
                                                          ((IData)(3U) 
                                                           - 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                               >> 3U))), 8U));
    __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
    if (__VExpandSel_Aligned_2) {
        __VExpandSel_HiShift_2 = 0U;
        __VExpandSel_HiMask_2 = 0U;
    } else {
        __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_2);
        __VExpandSel_HiMask_2 = 0xffffffffU;
    }
    __Vtemp_2[0U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                       ((IData)(1U) + __VExpandSel_WordIdx_2)] 
                       << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[__VExpandSel_WordIdx_2] 
                        >> __VExpandSel_LoShift_2));
    __Vtemp_2[1U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                       ((IData)(2U) + __VExpandSel_WordIdx_2)] 
                       << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                        ((IData)(1U) + __VExpandSel_WordIdx_2)] 
                        >> __VExpandSel_LoShift_2));
    __Vtemp_2[2U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                       ((IData)(3U) + __VExpandSel_WordIdx_2)] 
                       << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                        ((IData)(2U) + __VExpandSel_WordIdx_2)] 
                        >> __VExpandSel_LoShift_2));
    __Vtemp_2[3U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                       ((IData)(4U) + __VExpandSel_WordIdx_2)] 
                       << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                        ((IData)(3U) + __VExpandSel_WordIdx_2)] 
                        >> __VExpandSel_LoShift_2));
    __Vtemp_2[4U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                       ((IData)(5U) + __VExpandSel_WordIdx_2)] 
                       << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                        ((IData)(4U) + __VExpandSel_WordIdx_2)] 
                        >> __VExpandSel_LoShift_2));
    __Vtemp_2[5U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                       ((IData)(6U) + __VExpandSel_WordIdx_2)] 
                       << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                        ((IData)(5U) + __VExpandSel_WordIdx_2)] 
                        >> __VExpandSel_LoShift_2));
    __Vtemp_2[6U] = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                       ((IData)(7U) + __VExpandSel_WordIdx_2)] 
                       << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                        ((IData)(6U) + __VExpandSel_WordIdx_2)] 
                        >> __VExpandSel_LoShift_2));
    __Vtemp_2[7U] = (((((0x00000018U <= __VExpandSel_WordIdx_2)
                         ? 0U : vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                        ((IData)(8U) + __VExpandSel_WordIdx_2)]) 
                       << __VExpandSel_HiShift_2) & __VExpandSel_HiMask_2) 
                     | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array[
                        ((IData)(7U) + __VExpandSel_WordIdx_2)] 
                        >> __VExpandSel_LoShift_2));
    bufp->fullWData(oldp+45,(__Vtemp_2),256);
    bufp->fullWData(oldp+53,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array),1024);
    bufp->fullCData(oldp+85,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [0U][0U]),3);
    bufp->fullCData(oldp+86,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [0U][1U]),3);
    bufp->fullCData(oldp+87,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [1U][0U]),3);
    bufp->fullCData(oldp+88,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [1U][1U]),3);
    bufp->fullCData(oldp+89,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [2U][0U]),3);
    bufp->fullCData(oldp+90,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [2U][1U]),3);
    bufp->fullCData(oldp+91,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [3U][0U]),3);
    bufp->fullCData(oldp+92,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
                             [3U][1U]),3);
    bufp->fullBit(oldp+93,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                           [0U][0U]));
    bufp->fullBit(oldp+94,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                           [0U][1U]));
    bufp->fullBit(oldp+95,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                           [1U][0U]));
    bufp->fullBit(oldp+96,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                           [1U][1U]));
    bufp->fullBit(oldp+97,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                           [2U][0U]));
    bufp->fullBit(oldp+98,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                           [2U][1U]));
    bufp->fullBit(oldp+99,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                           [3U][0U]));
    bufp->fullBit(oldp+100,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
                            [3U][1U]));
    bufp->fullBit(oldp+101,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                            [0U][0U]));
    bufp->fullBit(oldp+102,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                            [0U][1U]));
    bufp->fullBit(oldp+103,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                            [1U][0U]));
    bufp->fullBit(oldp+104,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                            [1U][1U]));
    bufp->fullBit(oldp+105,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                            [2U][0U]));
    bufp->fullBit(oldp+106,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                            [2U][1U]));
    bufp->fullBit(oldp+107,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                            [3U][0U]));
    bufp->fullBit(oldp+108,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
                            [3U][1U]));
    bufp->fullBit(oldp+109,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way));
    bufp->fullBit(oldp+110,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way));
    bufp->fullBit(oldp+111,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found));
    bufp->fullBit(oldp+112,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way));
    bufp->fullBit(oldp+113,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__replace_way));
    bufp->fullIData(oldp+114,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__unnamedblk4__DOT__i),32);
}
