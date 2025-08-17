// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcalculator__Syms.h"


VL_ATTR_COLD void Vcalculator___024root__trace_init_sub__TOP__0(Vcalculator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_init_sub__TOP__0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1375,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1377,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1379,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1380,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1382,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("calculator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1375,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1377,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1379,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1380,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1382,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("int_con", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1374,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1375,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1377,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1379,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1380,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1382,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("out_a_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+56+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_b_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+74+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_ctrl_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+92+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+101+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_a_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+110+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_b_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+128+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_ctrl_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+146+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+155+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_a_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+164+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_b_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+182+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_ctrl_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+200+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+209+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_a_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+218+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_b_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+236+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_ctrl_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+254+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+263+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_out_a", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+272+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_out_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+290+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_a_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+299+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_b_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+317+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_ctrl_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+335+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_valid_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+344+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_a_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+353+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_b_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+371+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_ctrl_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+389+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_valid_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+398+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_a_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+407+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_b_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+425+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_ctrl_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+443+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_valid_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+452+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_a_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+461+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_b_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+479+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_ctrl_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+497+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_valid_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+506+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_in_a", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+515+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_in_b", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+533+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_in_ctrl", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+551+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_in_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+560+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_a_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+569+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_b_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+587+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_ctrl_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+605+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_valid_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+614+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_a_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+623+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_b_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+641+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_ctrl_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+659+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_valid_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+668+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_a_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+677+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_b_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+695+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_ctrl_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+713+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_valid_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+722+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_a_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+731+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_b_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+749+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_ctrl_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+767+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_valid_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+776+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_host_in_a", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+1+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_host_in_b", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+19+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_host_in_ctrl", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+37+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_host_in_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+46+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+785,0,"is_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"next_is_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("t0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1383,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1383,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+786,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+788,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+790,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+791,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+792,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+794,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+796,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+797,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+798,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+800,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+802,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+803,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+804,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+806,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+808,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+809,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+810,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+812,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+814,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+815,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1384,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1386,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1387,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+816,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+818,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+820,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+821,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+822,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+824,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+826,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+827,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1384,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1386,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1387,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+828,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+830,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+832,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+834,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+836,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+837,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+840,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+841,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1388,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1388,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+842,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+843,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1387,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+845,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1389,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1383,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+846,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+848,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+850,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+851,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+852,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+854,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+856,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+857,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+858,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+860,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+862,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+863,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+864,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+866,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+868,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+869,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+870,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+872,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+874,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+875,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1384,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1386,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1387,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+876,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+878,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+880,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+881,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+882,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+884,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+886,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+887,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+888,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+890,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+892,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+893,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1387,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+895,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+897,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+899,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+900,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+902,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+903,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+904,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1390,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1388,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+905,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+906,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1387,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+908,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t0_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1391,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1383,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+909,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+911,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+913,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+914,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+915,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+917,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+919,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+920,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+921,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+923,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+925,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+926,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+927,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+929,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+931,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+932,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+933,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+935,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+937,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+938,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1384,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1386,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1387,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+939,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+941,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+943,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+944,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+945,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+947,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+949,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+950,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+951,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+953,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+955,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+956,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1387,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+958,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+960,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+962,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+963,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+964,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+965,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+966,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+967,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1392,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1388,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+968,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+969,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1387,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+971,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1383,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1389,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+972,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+974,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+976,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+977,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+978,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+980,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+982,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+983,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+984,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+986,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+988,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+989,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+990,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+992,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+994,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+995,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+996,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+998,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1000,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1001,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1002,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1004,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1006,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1007,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1008,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1010,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1012,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1013,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1014,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1016,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1018,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1019,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1384,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1386,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1387,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1387,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1020,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1021,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1023,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1025,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1026,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1027,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1028,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1029,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1030,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1388,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1390,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1031,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1032,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1387,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1034,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1389,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1389,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1035,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1037,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1039,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1040,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1041,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1043,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1045,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1046,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1047,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1049,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1051,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1052,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1053,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1055,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1057,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1058,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1059,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1061,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1063,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1064,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1065,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1067,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1069,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1070,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1071,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1073,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1075,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1076,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1077,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1079,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1081,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1082,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1083,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1085,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1087,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1088,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1387,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1089,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1090,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1092,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1094,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1095,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1096,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1097,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1098,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1099,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1390,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1390,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1100,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1101,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1387,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1103,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t1_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1391,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1389,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1104,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1106,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1108,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1109,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1110,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1112,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1114,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1115,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1116,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1118,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1120,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1121,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1122,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1124,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1126,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1127,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1128,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1130,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1132,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1133,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1134,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1136,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1138,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1139,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1140,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1142,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1144,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1145,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1146,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1148,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1150,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1151,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1152,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1154,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1156,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1157,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1387,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1158,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1159,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1161,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1163,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1164,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1165,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1166,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1167,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1168,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1392,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1390,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1169,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1170,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1387,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1172,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1383,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1391,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1173,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1175,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1177,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1178,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1179,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1181,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1183,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1184,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1185,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1187,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1189,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1190,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1191,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1193,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1195,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1196,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1197,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1199,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1201,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1202,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1203,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1205,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1207,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1208,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1209,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1211,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1213,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1214,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1215,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1217,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1219,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1220,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1384,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1386,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1387,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1387,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1221,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1222,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1224,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1226,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1227,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1228,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1229,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1230,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1231,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1388,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1392,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1232,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1233,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1387,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1235,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1389,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1391,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1236,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1238,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1240,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1241,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1242,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1244,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1246,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1247,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1248,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1250,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1252,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1253,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1254,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1256,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1258,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1259,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1260,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1262,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1264,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1265,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1266,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1268,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1270,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1271,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1272,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1274,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1276,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1277,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1278,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1280,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1282,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1283,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1284,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1286,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1288,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1289,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1387,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1290,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1291,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1293,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1295,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1296,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1297,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1298,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1299,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1300,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1390,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1392,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1301,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1302,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1387,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1304,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1391,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1391,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1305,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1307,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1309,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1310,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1311,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1313,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1315,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1316,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1317,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1319,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1321,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1322,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1323,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1325,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1327,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1328,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1329,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1331,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1333,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1334,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1335,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1337,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1339,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1340,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1341,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1343,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1345,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1346,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1347,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1349,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1351,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1352,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1353,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1355,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1357,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1358,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1384,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1387,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1359,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1360,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1362,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1364,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1365,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1366,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1367,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1368,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1369,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1392,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1392,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1370,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1371,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1387,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1373,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcalculator___024root__trace_init_top(Vcalculator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_init_top\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcalculator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcalculator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcalculator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcalculator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcalculator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcalculator___024root__trace_register(Vcalculator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_register\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcalculator___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcalculator___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcalculator___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcalculator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcalculator___024root__trace_const_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcalculator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_const_0\n"); );
    // Init
    Vcalculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalculator___024root*>(voidSelf);
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcalculator___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcalculator___024root__trace_const_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_const_0_sub_0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1383,(0U),8);
    bufp->fullQData(oldp+1384,(0ULL),64);
    bufp->fullSData(oldp+1386,(0U),16);
    bufp->fullBit(oldp+1387,(0U));
    bufp->fullCData(oldp+1388,(0U),2);
    bufp->fullCData(oldp+1389,(1U),8);
    bufp->fullCData(oldp+1390,(1U),2);
    bufp->fullCData(oldp+1391,(2U),8);
    bufp->fullCData(oldp+1392,(2U),2);
}

VL_ATTR_COLD void Vcalculator___024root__trace_full_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcalculator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_full_0\n"); );
    // Init
    Vcalculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalculator___024root*>(voidSelf);
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcalculator___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcalculator___024root__trace_full_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_full_0_sub_0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[0]),64);
    bufp->fullQData(oldp+3,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[1]),64);
    bufp->fullQData(oldp+5,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[2]),64);
    bufp->fullQData(oldp+7,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[3]),64);
    bufp->fullQData(oldp+9,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[4]),64);
    bufp->fullQData(oldp+11,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[5]),64);
    bufp->fullQData(oldp+13,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[6]),64);
    bufp->fullQData(oldp+15,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[7]),64);
    bufp->fullQData(oldp+17,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[8]),64);
    bufp->fullQData(oldp+19,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[0]),64);
    bufp->fullQData(oldp+21,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[1]),64);
    bufp->fullQData(oldp+23,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[2]),64);
    bufp->fullQData(oldp+25,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[3]),64);
    bufp->fullQData(oldp+27,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[4]),64);
    bufp->fullQData(oldp+29,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[5]),64);
    bufp->fullQData(oldp+31,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[6]),64);
    bufp->fullQData(oldp+33,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[7]),64);
    bufp->fullQData(oldp+35,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[8]),64);
    bufp->fullSData(oldp+37,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[0]),16);
    bufp->fullSData(oldp+38,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[1]),16);
    bufp->fullSData(oldp+39,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[2]),16);
    bufp->fullSData(oldp+40,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[3]),16);
    bufp->fullSData(oldp+41,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[4]),16);
    bufp->fullSData(oldp+42,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[5]),16);
    bufp->fullSData(oldp+43,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[6]),16);
    bufp->fullSData(oldp+44,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[7]),16);
    bufp->fullSData(oldp+45,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[8]),16);
    bufp->fullBit(oldp+46,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[0]));
    bufp->fullBit(oldp+47,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[1]));
    bufp->fullBit(oldp+48,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[2]));
    bufp->fullBit(oldp+49,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[3]));
    bufp->fullBit(oldp+50,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[4]));
    bufp->fullBit(oldp+51,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[5]));
    bufp->fullBit(oldp+52,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[6]));
    bufp->fullBit(oldp+53,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[7]));
    bufp->fullBit(oldp+54,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[8]));
    bufp->fullBit(oldp+55,(vlSelfRef.calculator__DOT__int_con__DOT__next_is_busy));
    bufp->fullQData(oldp+56,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[0]),64);
    bufp->fullQData(oldp+58,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[1]),64);
    bufp->fullQData(oldp+60,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[2]),64);
    bufp->fullQData(oldp+62,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[3]),64);
    bufp->fullQData(oldp+64,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[4]),64);
    bufp->fullQData(oldp+66,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[5]),64);
    bufp->fullQData(oldp+68,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[6]),64);
    bufp->fullQData(oldp+70,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[7]),64);
    bufp->fullQData(oldp+72,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[8]),64);
    bufp->fullQData(oldp+74,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[0]),64);
    bufp->fullQData(oldp+76,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[1]),64);
    bufp->fullQData(oldp+78,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[2]),64);
    bufp->fullQData(oldp+80,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[3]),64);
    bufp->fullQData(oldp+82,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[4]),64);
    bufp->fullQData(oldp+84,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[5]),64);
    bufp->fullQData(oldp+86,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[6]),64);
    bufp->fullQData(oldp+88,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[7]),64);
    bufp->fullQData(oldp+90,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[8]),64);
    bufp->fullSData(oldp+92,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[0]),16);
    bufp->fullSData(oldp+93,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[1]),16);
    bufp->fullSData(oldp+94,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[2]),16);
    bufp->fullSData(oldp+95,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[3]),16);
    bufp->fullSData(oldp+96,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[4]),16);
    bufp->fullSData(oldp+97,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[5]),16);
    bufp->fullSData(oldp+98,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[6]),16);
    bufp->fullSData(oldp+99,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[7]),16);
    bufp->fullSData(oldp+100,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[8]),16);
    bufp->fullBit(oldp+101,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[0]));
    bufp->fullBit(oldp+102,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[1]));
    bufp->fullBit(oldp+103,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[2]));
    bufp->fullBit(oldp+104,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[3]));
    bufp->fullBit(oldp+105,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[4]));
    bufp->fullBit(oldp+106,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[5]));
    bufp->fullBit(oldp+107,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[6]));
    bufp->fullBit(oldp+108,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[7]));
    bufp->fullBit(oldp+109,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[8]));
    bufp->fullQData(oldp+110,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[0]),64);
    bufp->fullQData(oldp+112,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[1]),64);
    bufp->fullQData(oldp+114,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[2]),64);
    bufp->fullQData(oldp+116,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[3]),64);
    bufp->fullQData(oldp+118,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[4]),64);
    bufp->fullQData(oldp+120,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[5]),64);
    bufp->fullQData(oldp+122,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[6]),64);
    bufp->fullQData(oldp+124,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[7]),64);
    bufp->fullQData(oldp+126,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[8]),64);
    bufp->fullQData(oldp+128,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[0]),64);
    bufp->fullQData(oldp+130,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[1]),64);
    bufp->fullQData(oldp+132,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[2]),64);
    bufp->fullQData(oldp+134,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[3]),64);
    bufp->fullQData(oldp+136,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[4]),64);
    bufp->fullQData(oldp+138,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[5]),64);
    bufp->fullQData(oldp+140,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[6]),64);
    bufp->fullQData(oldp+142,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[7]),64);
    bufp->fullQData(oldp+144,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[8]),64);
    bufp->fullSData(oldp+146,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[0]),16);
    bufp->fullSData(oldp+147,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[1]),16);
    bufp->fullSData(oldp+148,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[2]),16);
    bufp->fullSData(oldp+149,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[3]),16);
    bufp->fullSData(oldp+150,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[4]),16);
    bufp->fullSData(oldp+151,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[5]),16);
    bufp->fullSData(oldp+152,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[6]),16);
    bufp->fullSData(oldp+153,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[7]),16);
    bufp->fullSData(oldp+154,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[8]),16);
    bufp->fullBit(oldp+155,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[0]));
    bufp->fullBit(oldp+156,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[1]));
    bufp->fullBit(oldp+157,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[2]));
    bufp->fullBit(oldp+158,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[3]));
    bufp->fullBit(oldp+159,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[4]));
    bufp->fullBit(oldp+160,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[5]));
    bufp->fullBit(oldp+161,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[6]));
    bufp->fullBit(oldp+162,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[7]));
    bufp->fullBit(oldp+163,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[8]));
    bufp->fullQData(oldp+164,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[0]),64);
    bufp->fullQData(oldp+166,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[1]),64);
    bufp->fullQData(oldp+168,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[2]),64);
    bufp->fullQData(oldp+170,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[3]),64);
    bufp->fullQData(oldp+172,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[4]),64);
    bufp->fullQData(oldp+174,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[5]),64);
    bufp->fullQData(oldp+176,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[6]),64);
    bufp->fullQData(oldp+178,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[7]),64);
    bufp->fullQData(oldp+180,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[8]),64);
    bufp->fullQData(oldp+182,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[0]),64);
    bufp->fullQData(oldp+184,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[1]),64);
    bufp->fullQData(oldp+186,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[2]),64);
    bufp->fullQData(oldp+188,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[3]),64);
    bufp->fullQData(oldp+190,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[4]),64);
    bufp->fullQData(oldp+192,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[5]),64);
    bufp->fullQData(oldp+194,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[6]),64);
    bufp->fullQData(oldp+196,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[7]),64);
    bufp->fullQData(oldp+198,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[8]),64);
    bufp->fullSData(oldp+200,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[0]),16);
    bufp->fullSData(oldp+201,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[1]),16);
    bufp->fullSData(oldp+202,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[2]),16);
    bufp->fullSData(oldp+203,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[3]),16);
    bufp->fullSData(oldp+204,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[4]),16);
    bufp->fullSData(oldp+205,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[5]),16);
    bufp->fullSData(oldp+206,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[6]),16);
    bufp->fullSData(oldp+207,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[7]),16);
    bufp->fullSData(oldp+208,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[8]),16);
    bufp->fullBit(oldp+209,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[0]));
    bufp->fullBit(oldp+210,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[1]));
    bufp->fullBit(oldp+211,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[2]));
    bufp->fullBit(oldp+212,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[3]));
    bufp->fullBit(oldp+213,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[4]));
    bufp->fullBit(oldp+214,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[5]));
    bufp->fullBit(oldp+215,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[6]));
    bufp->fullBit(oldp+216,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[7]));
    bufp->fullBit(oldp+217,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[8]));
    bufp->fullQData(oldp+218,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[0]),64);
    bufp->fullQData(oldp+220,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[1]),64);
    bufp->fullQData(oldp+222,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[2]),64);
    bufp->fullQData(oldp+224,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[3]),64);
    bufp->fullQData(oldp+226,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[4]),64);
    bufp->fullQData(oldp+228,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[5]),64);
    bufp->fullQData(oldp+230,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[6]),64);
    bufp->fullQData(oldp+232,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[7]),64);
    bufp->fullQData(oldp+234,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[8]),64);
    bufp->fullQData(oldp+236,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[0]),64);
    bufp->fullQData(oldp+238,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[1]),64);
    bufp->fullQData(oldp+240,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[2]),64);
    bufp->fullQData(oldp+242,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[3]),64);
    bufp->fullQData(oldp+244,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[4]),64);
    bufp->fullQData(oldp+246,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[5]),64);
    bufp->fullQData(oldp+248,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[6]),64);
    bufp->fullQData(oldp+250,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[7]),64);
    bufp->fullQData(oldp+252,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[8]),64);
    bufp->fullSData(oldp+254,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[0]),16);
    bufp->fullSData(oldp+255,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[1]),16);
    bufp->fullSData(oldp+256,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[2]),16);
    bufp->fullSData(oldp+257,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[3]),16);
    bufp->fullSData(oldp+258,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[4]),16);
    bufp->fullSData(oldp+259,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[5]),16);
    bufp->fullSData(oldp+260,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[6]),16);
    bufp->fullSData(oldp+261,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[7]),16);
    bufp->fullSData(oldp+262,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[8]),16);
    bufp->fullBit(oldp+263,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[0]));
    bufp->fullBit(oldp+264,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[1]));
    bufp->fullBit(oldp+265,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[2]));
    bufp->fullBit(oldp+266,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[3]));
    bufp->fullBit(oldp+267,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[4]));
    bufp->fullBit(oldp+268,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[5]));
    bufp->fullBit(oldp+269,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[6]));
    bufp->fullBit(oldp+270,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[7]));
    bufp->fullBit(oldp+271,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[8]));
    bufp->fullQData(oldp+272,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[0]),64);
    bufp->fullQData(oldp+274,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[1]),64);
    bufp->fullQData(oldp+276,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[2]),64);
    bufp->fullQData(oldp+278,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[3]),64);
    bufp->fullQData(oldp+280,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[4]),64);
    bufp->fullQData(oldp+282,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[5]),64);
    bufp->fullQData(oldp+284,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[6]),64);
    bufp->fullQData(oldp+286,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[7]),64);
    bufp->fullQData(oldp+288,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[8]),64);
    bufp->fullBit(oldp+290,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[0]));
    bufp->fullBit(oldp+291,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[1]));
    bufp->fullBit(oldp+292,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[2]));
    bufp->fullBit(oldp+293,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[3]));
    bufp->fullBit(oldp+294,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[4]));
    bufp->fullBit(oldp+295,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[5]));
    bufp->fullBit(oldp+296,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[6]));
    bufp->fullBit(oldp+297,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[7]));
    bufp->fullBit(oldp+298,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[8]));
    bufp->fullQData(oldp+299,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[0]),64);
    bufp->fullQData(oldp+301,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[1]),64);
    bufp->fullQData(oldp+303,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[2]),64);
    bufp->fullQData(oldp+305,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[3]),64);
    bufp->fullQData(oldp+307,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[4]),64);
    bufp->fullQData(oldp+309,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[5]),64);
    bufp->fullQData(oldp+311,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[6]),64);
    bufp->fullQData(oldp+313,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[7]),64);
    bufp->fullQData(oldp+315,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[8]),64);
    bufp->fullQData(oldp+317,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[0]),64);
    bufp->fullQData(oldp+319,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[1]),64);
    bufp->fullQData(oldp+321,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[2]),64);
    bufp->fullQData(oldp+323,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[3]),64);
    bufp->fullQData(oldp+325,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[4]),64);
    bufp->fullQData(oldp+327,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[5]),64);
    bufp->fullQData(oldp+329,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[6]),64);
    bufp->fullQData(oldp+331,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[7]),64);
    bufp->fullQData(oldp+333,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[8]),64);
    bufp->fullSData(oldp+335,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[0]),16);
    bufp->fullSData(oldp+336,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[1]),16);
    bufp->fullSData(oldp+337,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[2]),16);
    bufp->fullSData(oldp+338,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[3]),16);
    bufp->fullSData(oldp+339,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[4]),16);
    bufp->fullSData(oldp+340,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[5]),16);
    bufp->fullSData(oldp+341,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[6]),16);
    bufp->fullSData(oldp+342,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[7]),16);
    bufp->fullSData(oldp+343,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[8]),16);
    bufp->fullBit(oldp+344,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[0]));
    bufp->fullBit(oldp+345,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[1]));
    bufp->fullBit(oldp+346,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[2]));
    bufp->fullBit(oldp+347,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[3]));
    bufp->fullBit(oldp+348,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[4]));
    bufp->fullBit(oldp+349,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[5]));
    bufp->fullBit(oldp+350,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[6]));
    bufp->fullBit(oldp+351,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[7]));
    bufp->fullBit(oldp+352,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[8]));
    bufp->fullQData(oldp+353,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[0]),64);
    bufp->fullQData(oldp+355,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[1]),64);
    bufp->fullQData(oldp+357,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[2]),64);
    bufp->fullQData(oldp+359,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[3]),64);
    bufp->fullQData(oldp+361,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[4]),64);
    bufp->fullQData(oldp+363,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[5]),64);
    bufp->fullQData(oldp+365,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[6]),64);
    bufp->fullQData(oldp+367,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[7]),64);
    bufp->fullQData(oldp+369,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[8]),64);
    bufp->fullQData(oldp+371,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[0]),64);
    bufp->fullQData(oldp+373,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[1]),64);
    bufp->fullQData(oldp+375,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[2]),64);
    bufp->fullQData(oldp+377,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[3]),64);
    bufp->fullQData(oldp+379,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[4]),64);
    bufp->fullQData(oldp+381,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[5]),64);
    bufp->fullQData(oldp+383,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[6]),64);
    bufp->fullQData(oldp+385,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[7]),64);
    bufp->fullQData(oldp+387,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[8]),64);
    bufp->fullSData(oldp+389,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[0]),16);
    bufp->fullSData(oldp+390,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[1]),16);
    bufp->fullSData(oldp+391,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[2]),16);
    bufp->fullSData(oldp+392,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[3]),16);
    bufp->fullSData(oldp+393,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[4]),16);
    bufp->fullSData(oldp+394,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[5]),16);
    bufp->fullSData(oldp+395,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[6]),16);
    bufp->fullSData(oldp+396,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[7]),16);
    bufp->fullSData(oldp+397,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[8]),16);
    bufp->fullBit(oldp+398,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[0]));
    bufp->fullBit(oldp+399,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[1]));
    bufp->fullBit(oldp+400,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[2]));
    bufp->fullBit(oldp+401,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[3]));
    bufp->fullBit(oldp+402,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[4]));
    bufp->fullBit(oldp+403,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[5]));
    bufp->fullBit(oldp+404,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[6]));
    bufp->fullBit(oldp+405,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[7]));
    bufp->fullBit(oldp+406,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[8]));
    bufp->fullQData(oldp+407,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[0]),64);
    bufp->fullQData(oldp+409,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[1]),64);
    bufp->fullQData(oldp+411,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[2]),64);
    bufp->fullQData(oldp+413,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[3]),64);
    bufp->fullQData(oldp+415,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[4]),64);
    bufp->fullQData(oldp+417,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[5]),64);
    bufp->fullQData(oldp+419,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[6]),64);
    bufp->fullQData(oldp+421,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[7]),64);
    bufp->fullQData(oldp+423,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[8]),64);
    bufp->fullQData(oldp+425,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[0]),64);
    bufp->fullQData(oldp+427,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[1]),64);
    bufp->fullQData(oldp+429,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[2]),64);
    bufp->fullQData(oldp+431,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[3]),64);
    bufp->fullQData(oldp+433,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[4]),64);
    bufp->fullQData(oldp+435,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[5]),64);
    bufp->fullQData(oldp+437,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[6]),64);
    bufp->fullQData(oldp+439,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[7]),64);
    bufp->fullQData(oldp+441,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[8]),64);
    bufp->fullSData(oldp+443,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[0]),16);
    bufp->fullSData(oldp+444,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[1]),16);
    bufp->fullSData(oldp+445,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[2]),16);
    bufp->fullSData(oldp+446,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[3]),16);
    bufp->fullSData(oldp+447,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[4]),16);
    bufp->fullSData(oldp+448,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[5]),16);
    bufp->fullSData(oldp+449,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[6]),16);
    bufp->fullSData(oldp+450,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[7]),16);
    bufp->fullSData(oldp+451,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[8]),16);
    bufp->fullBit(oldp+452,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[0]));
    bufp->fullBit(oldp+453,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[1]));
    bufp->fullBit(oldp+454,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[2]));
    bufp->fullBit(oldp+455,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[3]));
    bufp->fullBit(oldp+456,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[4]));
    bufp->fullBit(oldp+457,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[5]));
    bufp->fullBit(oldp+458,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[6]));
    bufp->fullBit(oldp+459,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[7]));
    bufp->fullBit(oldp+460,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[8]));
    bufp->fullQData(oldp+461,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[0]),64);
    bufp->fullQData(oldp+463,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[1]),64);
    bufp->fullQData(oldp+465,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[2]),64);
    bufp->fullQData(oldp+467,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[3]),64);
    bufp->fullQData(oldp+469,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[4]),64);
    bufp->fullQData(oldp+471,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[5]),64);
    bufp->fullQData(oldp+473,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[6]),64);
    bufp->fullQData(oldp+475,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[7]),64);
    bufp->fullQData(oldp+477,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[8]),64);
    bufp->fullQData(oldp+479,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[0]),64);
    bufp->fullQData(oldp+481,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[1]),64);
    bufp->fullQData(oldp+483,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[2]),64);
    bufp->fullQData(oldp+485,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[3]),64);
    bufp->fullQData(oldp+487,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[4]),64);
    bufp->fullQData(oldp+489,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[5]),64);
    bufp->fullQData(oldp+491,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[6]),64);
    bufp->fullQData(oldp+493,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[7]),64);
    bufp->fullQData(oldp+495,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[8]),64);
    bufp->fullSData(oldp+497,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[0]),16);
    bufp->fullSData(oldp+498,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[1]),16);
    bufp->fullSData(oldp+499,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[2]),16);
    bufp->fullSData(oldp+500,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[3]),16);
    bufp->fullSData(oldp+501,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[4]),16);
    bufp->fullSData(oldp+502,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[5]),16);
    bufp->fullSData(oldp+503,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[6]),16);
    bufp->fullSData(oldp+504,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[7]),16);
    bufp->fullSData(oldp+505,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[8]),16);
    bufp->fullBit(oldp+506,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[0]));
    bufp->fullBit(oldp+507,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[1]));
    bufp->fullBit(oldp+508,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[2]));
    bufp->fullBit(oldp+509,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[3]));
    bufp->fullBit(oldp+510,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[4]));
    bufp->fullBit(oldp+511,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[5]));
    bufp->fullBit(oldp+512,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[6]));
    bufp->fullBit(oldp+513,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[7]));
    bufp->fullBit(oldp+514,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[8]));
    bufp->fullQData(oldp+515,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[0]),64);
    bufp->fullQData(oldp+517,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[1]),64);
    bufp->fullQData(oldp+519,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[2]),64);
    bufp->fullQData(oldp+521,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[3]),64);
    bufp->fullQData(oldp+523,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[4]),64);
    bufp->fullQData(oldp+525,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[5]),64);
    bufp->fullQData(oldp+527,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[6]),64);
    bufp->fullQData(oldp+529,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[7]),64);
    bufp->fullQData(oldp+531,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[8]),64);
    bufp->fullQData(oldp+533,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[0]),64);
    bufp->fullQData(oldp+535,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[1]),64);
    bufp->fullQData(oldp+537,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[2]),64);
    bufp->fullQData(oldp+539,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[3]),64);
    bufp->fullQData(oldp+541,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[4]),64);
    bufp->fullQData(oldp+543,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[5]),64);
    bufp->fullQData(oldp+545,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[6]),64);
    bufp->fullQData(oldp+547,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[7]),64);
    bufp->fullQData(oldp+549,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[8]),64);
    bufp->fullSData(oldp+551,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[0]),16);
    bufp->fullSData(oldp+552,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[1]),16);
    bufp->fullSData(oldp+553,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[2]),16);
    bufp->fullSData(oldp+554,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[3]),16);
    bufp->fullSData(oldp+555,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[4]),16);
    bufp->fullSData(oldp+556,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[5]),16);
    bufp->fullSData(oldp+557,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[6]),16);
    bufp->fullSData(oldp+558,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[7]),16);
    bufp->fullSData(oldp+559,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[8]),16);
    bufp->fullBit(oldp+560,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[0]));
    bufp->fullBit(oldp+561,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[1]));
    bufp->fullBit(oldp+562,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[2]));
    bufp->fullBit(oldp+563,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[3]));
    bufp->fullBit(oldp+564,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[4]));
    bufp->fullBit(oldp+565,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[5]));
    bufp->fullBit(oldp+566,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[6]));
    bufp->fullBit(oldp+567,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[7]));
    bufp->fullBit(oldp+568,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[8]));
    bufp->fullQData(oldp+569,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[0]),64);
    bufp->fullQData(oldp+571,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[1]),64);
    bufp->fullQData(oldp+573,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[2]),64);
    bufp->fullQData(oldp+575,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[3]),64);
    bufp->fullQData(oldp+577,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[4]),64);
    bufp->fullQData(oldp+579,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[5]),64);
    bufp->fullQData(oldp+581,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[6]),64);
    bufp->fullQData(oldp+583,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[7]),64);
    bufp->fullQData(oldp+585,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[8]),64);
    bufp->fullQData(oldp+587,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[0]),64);
    bufp->fullQData(oldp+589,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[1]),64);
    bufp->fullQData(oldp+591,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[2]),64);
    bufp->fullQData(oldp+593,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[3]),64);
    bufp->fullQData(oldp+595,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[4]),64);
    bufp->fullQData(oldp+597,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[5]),64);
    bufp->fullQData(oldp+599,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[6]),64);
    bufp->fullQData(oldp+601,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[7]),64);
    bufp->fullQData(oldp+603,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[8]),64);
    bufp->fullSData(oldp+605,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[0]),16);
    bufp->fullSData(oldp+606,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[1]),16);
    bufp->fullSData(oldp+607,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[2]),16);
    bufp->fullSData(oldp+608,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[3]),16);
    bufp->fullSData(oldp+609,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[4]),16);
    bufp->fullSData(oldp+610,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[5]),16);
    bufp->fullSData(oldp+611,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[6]),16);
    bufp->fullSData(oldp+612,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[7]),16);
    bufp->fullSData(oldp+613,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[8]),16);
    bufp->fullBit(oldp+614,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[0]));
    bufp->fullBit(oldp+615,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[1]));
    bufp->fullBit(oldp+616,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[2]));
    bufp->fullBit(oldp+617,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[3]));
    bufp->fullBit(oldp+618,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[4]));
    bufp->fullBit(oldp+619,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[5]));
    bufp->fullBit(oldp+620,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[6]));
    bufp->fullBit(oldp+621,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[7]));
    bufp->fullBit(oldp+622,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[8]));
    bufp->fullQData(oldp+623,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[0]),64);
    bufp->fullQData(oldp+625,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[1]),64);
    bufp->fullQData(oldp+627,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[2]),64);
    bufp->fullQData(oldp+629,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[3]),64);
    bufp->fullQData(oldp+631,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[4]),64);
    bufp->fullQData(oldp+633,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[5]),64);
    bufp->fullQData(oldp+635,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[6]),64);
    bufp->fullQData(oldp+637,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[7]),64);
    bufp->fullQData(oldp+639,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[8]),64);
    bufp->fullQData(oldp+641,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[0]),64);
    bufp->fullQData(oldp+643,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[1]),64);
    bufp->fullQData(oldp+645,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[2]),64);
    bufp->fullQData(oldp+647,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[3]),64);
    bufp->fullQData(oldp+649,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[4]),64);
    bufp->fullQData(oldp+651,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[5]),64);
    bufp->fullQData(oldp+653,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[6]),64);
    bufp->fullQData(oldp+655,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[7]),64);
    bufp->fullQData(oldp+657,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[8]),64);
    bufp->fullSData(oldp+659,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[0]),16);
    bufp->fullSData(oldp+660,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[1]),16);
    bufp->fullSData(oldp+661,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[2]),16);
    bufp->fullSData(oldp+662,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[3]),16);
    bufp->fullSData(oldp+663,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[4]),16);
    bufp->fullSData(oldp+664,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[5]),16);
    bufp->fullSData(oldp+665,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[6]),16);
    bufp->fullSData(oldp+666,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[7]),16);
    bufp->fullSData(oldp+667,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[8]),16);
    bufp->fullBit(oldp+668,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[0]));
    bufp->fullBit(oldp+669,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[1]));
    bufp->fullBit(oldp+670,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[2]));
    bufp->fullBit(oldp+671,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[3]));
    bufp->fullBit(oldp+672,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[4]));
    bufp->fullBit(oldp+673,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[5]));
    bufp->fullBit(oldp+674,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[6]));
    bufp->fullBit(oldp+675,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[7]));
    bufp->fullBit(oldp+676,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[8]));
    bufp->fullQData(oldp+677,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[0]),64);
    bufp->fullQData(oldp+679,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[1]),64);
    bufp->fullQData(oldp+681,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[2]),64);
    bufp->fullQData(oldp+683,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[3]),64);
    bufp->fullQData(oldp+685,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[4]),64);
    bufp->fullQData(oldp+687,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[5]),64);
    bufp->fullQData(oldp+689,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[6]),64);
    bufp->fullQData(oldp+691,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[7]),64);
    bufp->fullQData(oldp+693,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[8]),64);
    bufp->fullQData(oldp+695,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[0]),64);
    bufp->fullQData(oldp+697,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[1]),64);
    bufp->fullQData(oldp+699,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[2]),64);
    bufp->fullQData(oldp+701,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[3]),64);
    bufp->fullQData(oldp+703,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[4]),64);
    bufp->fullQData(oldp+705,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[5]),64);
    bufp->fullQData(oldp+707,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[6]),64);
    bufp->fullQData(oldp+709,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[7]),64);
    bufp->fullQData(oldp+711,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[8]),64);
    bufp->fullSData(oldp+713,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[0]),16);
    bufp->fullSData(oldp+714,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[1]),16);
    bufp->fullSData(oldp+715,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[2]),16);
    bufp->fullSData(oldp+716,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[3]),16);
    bufp->fullSData(oldp+717,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[4]),16);
    bufp->fullSData(oldp+718,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[5]),16);
    bufp->fullSData(oldp+719,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[6]),16);
    bufp->fullSData(oldp+720,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[7]),16);
    bufp->fullSData(oldp+721,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[8]),16);
    bufp->fullBit(oldp+722,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[0]));
    bufp->fullBit(oldp+723,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[1]));
    bufp->fullBit(oldp+724,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[2]));
    bufp->fullBit(oldp+725,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[3]));
    bufp->fullBit(oldp+726,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[4]));
    bufp->fullBit(oldp+727,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[5]));
    bufp->fullBit(oldp+728,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[6]));
    bufp->fullBit(oldp+729,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[7]));
    bufp->fullBit(oldp+730,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[8]));
    bufp->fullQData(oldp+731,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[0]),64);
    bufp->fullQData(oldp+733,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[1]),64);
    bufp->fullQData(oldp+735,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[2]),64);
    bufp->fullQData(oldp+737,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[3]),64);
    bufp->fullQData(oldp+739,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[4]),64);
    bufp->fullQData(oldp+741,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[5]),64);
    bufp->fullQData(oldp+743,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[6]),64);
    bufp->fullQData(oldp+745,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[7]),64);
    bufp->fullQData(oldp+747,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[8]),64);
    bufp->fullQData(oldp+749,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[0]),64);
    bufp->fullQData(oldp+751,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[1]),64);
    bufp->fullQData(oldp+753,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[2]),64);
    bufp->fullQData(oldp+755,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[3]),64);
    bufp->fullQData(oldp+757,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[4]),64);
    bufp->fullQData(oldp+759,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[5]),64);
    bufp->fullQData(oldp+761,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[6]),64);
    bufp->fullQData(oldp+763,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[7]),64);
    bufp->fullQData(oldp+765,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[8]),64);
    bufp->fullSData(oldp+767,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[0]),16);
    bufp->fullSData(oldp+768,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[1]),16);
    bufp->fullSData(oldp+769,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[2]),16);
    bufp->fullSData(oldp+770,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[3]),16);
    bufp->fullSData(oldp+771,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[4]),16);
    bufp->fullSData(oldp+772,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[5]),16);
    bufp->fullSData(oldp+773,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[6]),16);
    bufp->fullSData(oldp+774,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[7]),16);
    bufp->fullSData(oldp+775,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[8]),16);
    bufp->fullBit(oldp+776,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[0]));
    bufp->fullBit(oldp+777,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[1]));
    bufp->fullBit(oldp+778,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[2]));
    bufp->fullBit(oldp+779,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[3]));
    bufp->fullBit(oldp+780,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[4]));
    bufp->fullBit(oldp+781,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[5]));
    bufp->fullBit(oldp+782,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[6]));
    bufp->fullBit(oldp+783,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[7]));
    bufp->fullBit(oldp+784,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[8]));
    bufp->fullBit(oldp+785,(vlSelfRef.calculator__DOT__int_con__DOT__is_busy));
    bufp->fullQData(oldp+786,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                              [0U]),64);
    bufp->fullQData(oldp+788,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                              [0U]),64);
    bufp->fullSData(oldp+790,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                              [0U]),16);
    bufp->fullBit(oldp+791,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                            [0U]));
    bufp->fullQData(oldp+792,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                              [0U]),64);
    bufp->fullQData(oldp+794,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                              [0U]),64);
    bufp->fullSData(oldp+796,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                              [0U]),16);
    bufp->fullBit(oldp+797,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                            [0U]));
    bufp->fullQData(oldp+798,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                              [0U]),64);
    bufp->fullQData(oldp+800,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                              [0U]),64);
    bufp->fullSData(oldp+802,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                              [0U]),16);
    bufp->fullBit(oldp+803,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                            [0U]));
    bufp->fullQData(oldp+804,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                              [0U]),64);
    bufp->fullQData(oldp+806,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                              [0U]),64);
    bufp->fullSData(oldp+808,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                              [0U]),16);
    bufp->fullBit(oldp+809,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                            [0U]));
    bufp->fullQData(oldp+810,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                              [0U]),64);
    bufp->fullQData(oldp+812,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                              [0U]),64);
    bufp->fullSData(oldp+814,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                              [0U]),16);
    bufp->fullBit(oldp+815,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                            [0U]));
    bufp->fullQData(oldp+816,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_e),64);
    bufp->fullQData(oldp+818,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_e),64);
    bufp->fullSData(oldp+820,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_e),16);
    bufp->fullBit(oldp+821,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_e));
    bufp->fullQData(oldp+822,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_s),64);
    bufp->fullQData(oldp+824,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_s),64);
    bufp->fullSData(oldp+826,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_s),16);
    bufp->fullBit(oldp+827,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_s));
    bufp->fullQData(oldp+828,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_a),64);
    bufp->fullBit(oldp+830,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid));
    bufp->fullBit(oldp+831,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [0U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                     [0U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                             [0U] | 
                                             (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                              [0U] 
                                              | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                              [0U]))))));
    bufp->fullQData(oldp+832,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a),64);
    bufp->fullQData(oldp+834,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b),64);
    bufp->fullSData(oldp+836,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+837,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid));
    bufp->fullBit(oldp+838,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                   >> 8U))));
    bufp->fullCData(oldp+839,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+840,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+841,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+842,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest));
    bufp->fullQData(oldp+843,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__op_result),64);
    bufp->fullSData(oldp+845,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+846,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                              [1U]),64);
    bufp->fullQData(oldp+848,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                              [1U]),64);
    bufp->fullSData(oldp+850,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                              [1U]),16);
    bufp->fullBit(oldp+851,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                            [1U]));
    bufp->fullQData(oldp+852,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                              [1U]),64);
    bufp->fullQData(oldp+854,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                              [1U]),64);
    bufp->fullSData(oldp+856,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                              [1U]),16);
    bufp->fullBit(oldp+857,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                            [1U]));
    bufp->fullQData(oldp+858,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                              [1U]),64);
    bufp->fullQData(oldp+860,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                              [1U]),64);
    bufp->fullSData(oldp+862,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                              [1U]),16);
    bufp->fullBit(oldp+863,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                            [1U]));
    bufp->fullQData(oldp+864,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                              [1U]),64);
    bufp->fullQData(oldp+866,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                              [1U]),64);
    bufp->fullSData(oldp+868,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                              [1U]),16);
    bufp->fullBit(oldp+869,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                            [1U]));
    bufp->fullQData(oldp+870,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                              [1U]),64);
    bufp->fullQData(oldp+872,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                              [1U]),64);
    bufp->fullSData(oldp+874,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                              [1U]),16);
    bufp->fullBit(oldp+875,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                            [1U]));
    bufp->fullQData(oldp+876,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_e),64);
    bufp->fullQData(oldp+878,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_e),64);
    bufp->fullSData(oldp+880,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_e),16);
    bufp->fullBit(oldp+881,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_e));
    bufp->fullQData(oldp+882,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_s),64);
    bufp->fullQData(oldp+884,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_s),64);
    bufp->fullSData(oldp+886,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_s),16);
    bufp->fullBit(oldp+887,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_s));
    bufp->fullQData(oldp+888,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_w),64);
    bufp->fullQData(oldp+890,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_w),64);
    bufp->fullSData(oldp+892,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_w),16);
    bufp->fullBit(oldp+893,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_w));
    bufp->fullBit(oldp+894,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [1U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                     [1U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                             [1U] | 
                                             (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                              [1U] 
                                              | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                              [1U]))))));
    bufp->fullQData(oldp+895,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a),64);
    bufp->fullQData(oldp+897,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b),64);
    bufp->fullSData(oldp+899,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+900,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid));
    bufp->fullBit(oldp+901,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                   >> 8U))));
    bufp->fullCData(oldp+902,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+903,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+904,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+905,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest));
    bufp->fullQData(oldp+906,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__op_result),64);
    bufp->fullSData(oldp+908,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+909,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                              [2U]),64);
    bufp->fullQData(oldp+911,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                              [2U]),64);
    bufp->fullSData(oldp+913,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                              [2U]),16);
    bufp->fullBit(oldp+914,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                            [2U]));
    bufp->fullQData(oldp+915,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                              [2U]),64);
    bufp->fullQData(oldp+917,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                              [2U]),64);
    bufp->fullSData(oldp+919,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                              [2U]),16);
    bufp->fullBit(oldp+920,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                            [2U]));
    bufp->fullQData(oldp+921,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                              [2U]),64);
    bufp->fullQData(oldp+923,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                              [2U]),64);
    bufp->fullSData(oldp+925,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                              [2U]),16);
    bufp->fullBit(oldp+926,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                            [2U]));
    bufp->fullQData(oldp+927,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                              [2U]),64);
    bufp->fullQData(oldp+929,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                              [2U]),64);
    bufp->fullSData(oldp+931,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                              [2U]),16);
    bufp->fullBit(oldp+932,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                            [2U]));
    bufp->fullQData(oldp+933,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                              [2U]),64);
    bufp->fullQData(oldp+935,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                              [2U]),64);
    bufp->fullSData(oldp+937,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                              [2U]),16);
    bufp->fullBit(oldp+938,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                            [2U]));
    bufp->fullQData(oldp+939,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_e),64);
    bufp->fullQData(oldp+941,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_e),64);
    bufp->fullSData(oldp+943,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_e),16);
    bufp->fullBit(oldp+944,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_e));
    bufp->fullQData(oldp+945,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_s),64);
    bufp->fullQData(oldp+947,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_s),64);
    bufp->fullSData(oldp+949,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_s),16);
    bufp->fullBit(oldp+950,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_s));
    bufp->fullQData(oldp+951,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_w),64);
    bufp->fullQData(oldp+953,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_w),64);
    bufp->fullSData(oldp+955,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_w),16);
    bufp->fullBit(oldp+956,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_w));
    bufp->fullBit(oldp+957,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [2U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                     [2U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                             [2U] | 
                                             (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                              [2U] 
                                              | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                              [2U]))))));
    bufp->fullQData(oldp+958,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a),64);
    bufp->fullQData(oldp+960,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b),64);
    bufp->fullSData(oldp+962,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+963,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid));
    bufp->fullBit(oldp+964,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                   >> 8U))));
    bufp->fullCData(oldp+965,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+966,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+967,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+968,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest));
    bufp->fullQData(oldp+969,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__op_result),64);
    bufp->fullSData(oldp+971,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+972,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                              [3U]),64);
    bufp->fullQData(oldp+974,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                              [3U]),64);
    bufp->fullSData(oldp+976,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                              [3U]),16);
    bufp->fullBit(oldp+977,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                            [3U]));
    bufp->fullQData(oldp+978,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                              [3U]),64);
    bufp->fullQData(oldp+980,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                              [3U]),64);
    bufp->fullSData(oldp+982,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                              [3U]),16);
    bufp->fullBit(oldp+983,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                            [3U]));
    bufp->fullQData(oldp+984,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                              [3U]),64);
    bufp->fullQData(oldp+986,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                              [3U]),64);
    bufp->fullSData(oldp+988,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                              [3U]),16);
    bufp->fullBit(oldp+989,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                            [3U]));
    bufp->fullQData(oldp+990,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                              [3U]),64);
    bufp->fullQData(oldp+992,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                              [3U]),64);
    bufp->fullSData(oldp+994,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                              [3U]),16);
    bufp->fullBit(oldp+995,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                            [3U]));
    bufp->fullQData(oldp+996,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                              [3U]),64);
    bufp->fullQData(oldp+998,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                              [3U]),64);
    bufp->fullSData(oldp+1000,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                               [3U]),16);
    bufp->fullBit(oldp+1001,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [3U]));
    bufp->fullQData(oldp+1002,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_n),64);
    bufp->fullQData(oldp+1004,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_n),64);
    bufp->fullSData(oldp+1006,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_n),16);
    bufp->fullBit(oldp+1007,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_n));
    bufp->fullQData(oldp+1008,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_e),64);
    bufp->fullQData(oldp+1010,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_e),64);
    bufp->fullSData(oldp+1012,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_e),16);
    bufp->fullBit(oldp+1013,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_e));
    bufp->fullQData(oldp+1014,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_s),64);
    bufp->fullQData(oldp+1016,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_s),64);
    bufp->fullSData(oldp+1018,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_s),16);
    bufp->fullBit(oldp+1019,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_s));
    bufp->fullBit(oldp+1020,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                              [3U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                      [3U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                              [3U] 
                                              | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                 [3U] 
                                                 | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                 [3U]))))));
    bufp->fullQData(oldp+1021,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a),64);
    bufp->fullQData(oldp+1023,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b),64);
    bufp->fullSData(oldp+1025,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+1026,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid));
    bufp->fullBit(oldp+1027,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                    >> 8U))));
    bufp->fullCData(oldp+1028,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1029,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1030,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+1031,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest));
    bufp->fullQData(oldp+1032,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__op_result),64);
    bufp->fullSData(oldp+1034,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+1035,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                               [4U]),64);
    bufp->fullQData(oldp+1037,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                               [4U]),64);
    bufp->fullSData(oldp+1039,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                               [4U]),16);
    bufp->fullBit(oldp+1040,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                             [4U]));
    bufp->fullQData(oldp+1041,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                               [4U]),64);
    bufp->fullQData(oldp+1043,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                               [4U]),64);
    bufp->fullSData(oldp+1045,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                               [4U]),16);
    bufp->fullBit(oldp+1046,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                             [4U]));
    bufp->fullQData(oldp+1047,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                               [4U]),64);
    bufp->fullQData(oldp+1049,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                               [4U]),64);
    bufp->fullSData(oldp+1051,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                               [4U]),16);
    bufp->fullBit(oldp+1052,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                             [4U]));
    bufp->fullQData(oldp+1053,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                               [4U]),64);
    bufp->fullQData(oldp+1055,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                               [4U]),64);
    bufp->fullSData(oldp+1057,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                               [4U]),16);
    bufp->fullBit(oldp+1058,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                             [4U]));
    bufp->fullQData(oldp+1059,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                               [4U]),64);
    bufp->fullQData(oldp+1061,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                               [4U]),64);
    bufp->fullSData(oldp+1063,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                               [4U]),16);
    bufp->fullBit(oldp+1064,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [4U]));
    bufp->fullQData(oldp+1065,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_n),64);
    bufp->fullQData(oldp+1067,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_n),64);
    bufp->fullSData(oldp+1069,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_n),16);
    bufp->fullBit(oldp+1070,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_n));
    bufp->fullQData(oldp+1071,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_e),64);
    bufp->fullQData(oldp+1073,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_e),64);
    bufp->fullSData(oldp+1075,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_e),16);
    bufp->fullBit(oldp+1076,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_e));
    bufp->fullQData(oldp+1077,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_s),64);
    bufp->fullQData(oldp+1079,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_s),64);
    bufp->fullSData(oldp+1081,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_s),16);
    bufp->fullBit(oldp+1082,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_s));
    bufp->fullQData(oldp+1083,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_w),64);
    bufp->fullQData(oldp+1085,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_w),64);
    bufp->fullSData(oldp+1087,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_w),16);
    bufp->fullBit(oldp+1088,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_w));
    bufp->fullBit(oldp+1089,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                              [4U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                      [4U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                              [4U] 
                                              | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                 [4U] 
                                                 | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                 [4U]))))));
    bufp->fullQData(oldp+1090,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a),64);
    bufp->fullQData(oldp+1092,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b),64);
    bufp->fullSData(oldp+1094,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+1095,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid));
    bufp->fullBit(oldp+1096,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                    >> 8U))));
    bufp->fullCData(oldp+1097,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1098,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1099,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+1100,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest));
    bufp->fullQData(oldp+1101,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__op_result),64);
    bufp->fullSData(oldp+1103,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+1104,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                               [5U]),64);
    bufp->fullQData(oldp+1106,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                               [5U]),64);
    bufp->fullSData(oldp+1108,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                               [5U]),16);
    bufp->fullBit(oldp+1109,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                             [5U]));
    bufp->fullQData(oldp+1110,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                               [5U]),64);
    bufp->fullQData(oldp+1112,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                               [5U]),64);
    bufp->fullSData(oldp+1114,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                               [5U]),16);
    bufp->fullBit(oldp+1115,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                             [5U]));
    bufp->fullQData(oldp+1116,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                               [5U]),64);
    bufp->fullQData(oldp+1118,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                               [5U]),64);
    bufp->fullSData(oldp+1120,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                               [5U]),16);
    bufp->fullBit(oldp+1121,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                             [5U]));
    bufp->fullQData(oldp+1122,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                               [5U]),64);
    bufp->fullQData(oldp+1124,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                               [5U]),64);
    bufp->fullSData(oldp+1126,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                               [5U]),16);
    bufp->fullBit(oldp+1127,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                             [5U]));
    bufp->fullQData(oldp+1128,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                               [5U]),64);
    bufp->fullQData(oldp+1130,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                               [5U]),64);
    bufp->fullSData(oldp+1132,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                               [5U]),16);
    bufp->fullBit(oldp+1133,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [5U]));
    bufp->fullQData(oldp+1134,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_n),64);
    bufp->fullQData(oldp+1136,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_n),64);
    bufp->fullSData(oldp+1138,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_n),16);
    bufp->fullBit(oldp+1139,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_n));
    bufp->fullQData(oldp+1140,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_e),64);
    bufp->fullQData(oldp+1142,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_e),64);
    bufp->fullSData(oldp+1144,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_e),16);
    bufp->fullBit(oldp+1145,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_e));
    bufp->fullQData(oldp+1146,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_s),64);
    bufp->fullQData(oldp+1148,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_s),64);
    bufp->fullSData(oldp+1150,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_s),16);
    bufp->fullBit(oldp+1151,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_s));
    bufp->fullQData(oldp+1152,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_w),64);
    bufp->fullQData(oldp+1154,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_w),64);
    bufp->fullSData(oldp+1156,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_w),16);
    bufp->fullBit(oldp+1157,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_w));
    bufp->fullBit(oldp+1158,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                              [5U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                      [5U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                              [5U] 
                                              | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                 [5U] 
                                                 | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                 [5U]))))));
    bufp->fullQData(oldp+1159,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a),64);
    bufp->fullQData(oldp+1161,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b),64);
    bufp->fullSData(oldp+1163,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+1164,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid));
    bufp->fullBit(oldp+1165,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                    >> 8U))));
    bufp->fullCData(oldp+1166,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1167,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1168,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+1169,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest));
    bufp->fullQData(oldp+1170,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__op_result),64);
    bufp->fullSData(oldp+1172,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+1173,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                               [6U]),64);
    bufp->fullQData(oldp+1175,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                               [6U]),64);
    bufp->fullSData(oldp+1177,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                               [6U]),16);
    bufp->fullBit(oldp+1178,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                             [6U]));
    bufp->fullQData(oldp+1179,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                               [6U]),64);
    bufp->fullQData(oldp+1181,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                               [6U]),64);
    bufp->fullSData(oldp+1183,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                               [6U]),16);
    bufp->fullBit(oldp+1184,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                             [6U]));
    bufp->fullQData(oldp+1185,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                               [6U]),64);
    bufp->fullQData(oldp+1187,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                               [6U]),64);
    bufp->fullSData(oldp+1189,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                               [6U]),16);
    bufp->fullBit(oldp+1190,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                             [6U]));
    bufp->fullQData(oldp+1191,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                               [6U]),64);
    bufp->fullQData(oldp+1193,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                               [6U]),64);
    bufp->fullSData(oldp+1195,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                               [6U]),16);
    bufp->fullBit(oldp+1196,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                             [6U]));
    bufp->fullQData(oldp+1197,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                               [6U]),64);
    bufp->fullQData(oldp+1199,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                               [6U]),64);
    bufp->fullSData(oldp+1201,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                               [6U]),16);
    bufp->fullBit(oldp+1202,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [6U]));
    bufp->fullQData(oldp+1203,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_n),64);
    bufp->fullQData(oldp+1205,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_n),64);
    bufp->fullSData(oldp+1207,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_n),16);
    bufp->fullBit(oldp+1208,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_n));
    bufp->fullQData(oldp+1209,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_e),64);
    bufp->fullQData(oldp+1211,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_e),64);
    bufp->fullSData(oldp+1213,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_e),16);
    bufp->fullBit(oldp+1214,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_e));
    bufp->fullQData(oldp+1215,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_s),64);
    bufp->fullQData(oldp+1217,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_s),64);
    bufp->fullSData(oldp+1219,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_s),16);
    bufp->fullBit(oldp+1220,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_s));
    bufp->fullBit(oldp+1221,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                              [6U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                      [6U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                              [6U] 
                                              | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                 [6U] 
                                                 | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                 [6U]))))));
    bufp->fullQData(oldp+1222,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a),64);
    bufp->fullQData(oldp+1224,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b),64);
    bufp->fullSData(oldp+1226,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+1227,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid));
    bufp->fullBit(oldp+1228,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                    >> 8U))));
    bufp->fullCData(oldp+1229,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1230,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1231,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+1232,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest));
    bufp->fullQData(oldp+1233,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__op_result),64);
    bufp->fullSData(oldp+1235,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+1236,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                               [7U]),64);
    bufp->fullQData(oldp+1238,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                               [7U]),64);
    bufp->fullSData(oldp+1240,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                               [7U]),16);
    bufp->fullBit(oldp+1241,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                             [7U]));
    bufp->fullQData(oldp+1242,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                               [7U]),64);
    bufp->fullQData(oldp+1244,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                               [7U]),64);
    bufp->fullSData(oldp+1246,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                               [7U]),16);
    bufp->fullBit(oldp+1247,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                             [7U]));
    bufp->fullQData(oldp+1248,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                               [7U]),64);
    bufp->fullQData(oldp+1250,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                               [7U]),64);
    bufp->fullSData(oldp+1252,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                               [7U]),16);
    bufp->fullBit(oldp+1253,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                             [7U]));
    bufp->fullQData(oldp+1254,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                               [7U]),64);
    bufp->fullQData(oldp+1256,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                               [7U]),64);
    bufp->fullSData(oldp+1258,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                               [7U]),16);
    bufp->fullBit(oldp+1259,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                             [7U]));
    bufp->fullQData(oldp+1260,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                               [7U]),64);
    bufp->fullQData(oldp+1262,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                               [7U]),64);
    bufp->fullSData(oldp+1264,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                               [7U]),16);
    bufp->fullBit(oldp+1265,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [7U]));
    bufp->fullQData(oldp+1266,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_n),64);
    bufp->fullQData(oldp+1268,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_n),64);
    bufp->fullSData(oldp+1270,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_n),16);
    bufp->fullBit(oldp+1271,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_n));
    bufp->fullQData(oldp+1272,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_e),64);
    bufp->fullQData(oldp+1274,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_e),64);
    bufp->fullSData(oldp+1276,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_e),16);
    bufp->fullBit(oldp+1277,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_e));
    bufp->fullQData(oldp+1278,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_s),64);
    bufp->fullQData(oldp+1280,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_s),64);
    bufp->fullSData(oldp+1282,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_s),16);
    bufp->fullBit(oldp+1283,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_s));
    bufp->fullQData(oldp+1284,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_w),64);
    bufp->fullQData(oldp+1286,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_w),64);
    bufp->fullSData(oldp+1288,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_w),16);
    bufp->fullBit(oldp+1289,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_w));
    bufp->fullBit(oldp+1290,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                              [7U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                      [7U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                              [7U] 
                                              | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                 [7U] 
                                                 | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                 [7U]))))));
    bufp->fullQData(oldp+1291,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a),64);
    bufp->fullQData(oldp+1293,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b),64);
    bufp->fullSData(oldp+1295,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+1296,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid));
    bufp->fullBit(oldp+1297,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                    >> 8U))));
    bufp->fullCData(oldp+1298,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1299,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1300,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+1301,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest));
    bufp->fullQData(oldp+1302,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__op_result),64);
    bufp->fullSData(oldp+1304,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+1305,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                               [8U]),64);
    bufp->fullQData(oldp+1307,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                               [8U]),64);
    bufp->fullSData(oldp+1309,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                               [8U]),16);
    bufp->fullBit(oldp+1310,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                             [8U]));
    bufp->fullQData(oldp+1311,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                               [8U]),64);
    bufp->fullQData(oldp+1313,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                               [8U]),64);
    bufp->fullSData(oldp+1315,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                               [8U]),16);
    bufp->fullBit(oldp+1316,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                             [8U]));
    bufp->fullQData(oldp+1317,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                               [8U]),64);
    bufp->fullQData(oldp+1319,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                               [8U]),64);
    bufp->fullSData(oldp+1321,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                               [8U]),16);
    bufp->fullBit(oldp+1322,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                             [8U]));
    bufp->fullQData(oldp+1323,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                               [8U]),64);
    bufp->fullQData(oldp+1325,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                               [8U]),64);
    bufp->fullSData(oldp+1327,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                               [8U]),16);
    bufp->fullBit(oldp+1328,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                             [8U]));
    bufp->fullQData(oldp+1329,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                               [8U]),64);
    bufp->fullQData(oldp+1331,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                               [8U]),64);
    bufp->fullSData(oldp+1333,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                               [8U]),16);
    bufp->fullBit(oldp+1334,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [8U]));
    bufp->fullQData(oldp+1335,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_n),64);
    bufp->fullQData(oldp+1337,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_n),64);
    bufp->fullSData(oldp+1339,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_n),16);
    bufp->fullBit(oldp+1340,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_n));
    bufp->fullQData(oldp+1341,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_e),64);
    bufp->fullQData(oldp+1343,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_e),64);
    bufp->fullSData(oldp+1345,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_e),16);
    bufp->fullBit(oldp+1346,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_e));
    bufp->fullQData(oldp+1347,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_s),64);
    bufp->fullQData(oldp+1349,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_s),64);
    bufp->fullSData(oldp+1351,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_s),16);
    bufp->fullBit(oldp+1352,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_s));
    bufp->fullQData(oldp+1353,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_w),64);
    bufp->fullQData(oldp+1355,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_w),64);
    bufp->fullSData(oldp+1357,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_w),16);
    bufp->fullBit(oldp+1358,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_w));
    bufp->fullBit(oldp+1359,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                              [8U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                      [8U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                              [8U] 
                                              | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                 [8U] 
                                                 | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                 [8U]))))));
    bufp->fullQData(oldp+1360,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a),64);
    bufp->fullQData(oldp+1362,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b),64);
    bufp->fullSData(oldp+1364,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+1365,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid));
    bufp->fullBit(oldp+1366,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                    >> 8U))));
    bufp->fullCData(oldp+1367,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1368,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1369,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+1370,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest));
    bufp->fullQData(oldp+1371,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__op_result),64);
    bufp->fullSData(oldp+1373,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullBit(oldp+1374,(vlSelfRef.clk));
    bufp->fullQData(oldp+1375,(vlSelfRef.a),64);
    bufp->fullQData(oldp+1377,(vlSelfRef.b),64);
    bufp->fullCData(oldp+1379,(vlSelfRef.mode),4);
    bufp->fullQData(oldp+1380,(vlSelfRef.result),64);
    bufp->fullBit(oldp+1382,(vlSelfRef.valid));
}
