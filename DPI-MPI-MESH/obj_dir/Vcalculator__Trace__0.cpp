// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcalculator__Syms.h"


void Vcalculator___024root__trace_chg_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcalculator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_chg_0\n"); );
    // Init
    Vcalculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalculator___024root*>(voidSelf);
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcalculator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcalculator___024root__trace_chg_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_chg_0_sub_0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgQData(oldp+0,(vlSelfRef.calculator__DOT__host_in_a_wires[0]),64);
        bufp->chgQData(oldp+2,(vlSelfRef.calculator__DOT__host_in_a_wires[1]),64);
        bufp->chgQData(oldp+4,(vlSelfRef.calculator__DOT__host_in_a_wires[2]),64);
        bufp->chgQData(oldp+6,(vlSelfRef.calculator__DOT__host_in_a_wires[3]),64);
        bufp->chgQData(oldp+8,(vlSelfRef.calculator__DOT__host_in_a_wires[4]),64);
        bufp->chgQData(oldp+10,(vlSelfRef.calculator__DOT__host_in_a_wires[5]),64);
        bufp->chgQData(oldp+12,(vlSelfRef.calculator__DOT__host_in_a_wires[6]),64);
        bufp->chgQData(oldp+14,(vlSelfRef.calculator__DOT__host_in_a_wires[7]),64);
        bufp->chgQData(oldp+16,(vlSelfRef.calculator__DOT__host_in_a_wires[8]),64);
        bufp->chgQData(oldp+18,(vlSelfRef.calculator__DOT__host_in_b_wires[0]),64);
        bufp->chgQData(oldp+20,(vlSelfRef.calculator__DOT__host_in_b_wires[1]),64);
        bufp->chgQData(oldp+22,(vlSelfRef.calculator__DOT__host_in_b_wires[2]),64);
        bufp->chgQData(oldp+24,(vlSelfRef.calculator__DOT__host_in_b_wires[3]),64);
        bufp->chgQData(oldp+26,(vlSelfRef.calculator__DOT__host_in_b_wires[4]),64);
        bufp->chgQData(oldp+28,(vlSelfRef.calculator__DOT__host_in_b_wires[5]),64);
        bufp->chgQData(oldp+30,(vlSelfRef.calculator__DOT__host_in_b_wires[6]),64);
        bufp->chgQData(oldp+32,(vlSelfRef.calculator__DOT__host_in_b_wires[7]),64);
        bufp->chgQData(oldp+34,(vlSelfRef.calculator__DOT__host_in_b_wires[8]),64);
        bufp->chgSData(oldp+36,(vlSelfRef.calculator__DOT__host_in_ctrl_wires[0]),16);
        bufp->chgSData(oldp+37,(vlSelfRef.calculator__DOT__host_in_ctrl_wires[1]),16);
        bufp->chgSData(oldp+38,(vlSelfRef.calculator__DOT__host_in_ctrl_wires[2]),16);
        bufp->chgSData(oldp+39,(vlSelfRef.calculator__DOT__host_in_ctrl_wires[3]),16);
        bufp->chgSData(oldp+40,(vlSelfRef.calculator__DOT__host_in_ctrl_wires[4]),16);
        bufp->chgSData(oldp+41,(vlSelfRef.calculator__DOT__host_in_ctrl_wires[5]),16);
        bufp->chgSData(oldp+42,(vlSelfRef.calculator__DOT__host_in_ctrl_wires[6]),16);
        bufp->chgSData(oldp+43,(vlSelfRef.calculator__DOT__host_in_ctrl_wires[7]),16);
        bufp->chgSData(oldp+44,(vlSelfRef.calculator__DOT__host_in_ctrl_wires[8]),16);
        bufp->chgBit(oldp+45,(vlSelfRef.calculator__DOT__host_in_valid_wires[0]));
        bufp->chgBit(oldp+46,(vlSelfRef.calculator__DOT__host_in_valid_wires[1]));
        bufp->chgBit(oldp+47,(vlSelfRef.calculator__DOT__host_in_valid_wires[2]));
        bufp->chgBit(oldp+48,(vlSelfRef.calculator__DOT__host_in_valid_wires[3]));
        bufp->chgBit(oldp+49,(vlSelfRef.calculator__DOT__host_in_valid_wires[4]));
        bufp->chgBit(oldp+50,(vlSelfRef.calculator__DOT__host_in_valid_wires[5]));
        bufp->chgBit(oldp+51,(vlSelfRef.calculator__DOT__host_in_valid_wires[6]));
        bufp->chgBit(oldp+52,(vlSelfRef.calculator__DOT__host_in_valid_wires[7]));
        bufp->chgBit(oldp+53,(vlSelfRef.calculator__DOT__host_in_valid_wires[8]));
        bufp->chgQData(oldp+54,(vlSelfRef.calculator__DOT__host_in_a_reg),64);
        bufp->chgQData(oldp+56,(vlSelfRef.calculator__DOT__host_in_b_reg),64);
        bufp->chgSData(oldp+58,(vlSelfRef.calculator__DOT__host_in_ctrl_reg),16);
        bufp->chgBit(oldp+59,(vlSelfRef.calculator__DOT__host_in_valid_reg));
        bufp->chgIData(oldp+60,(vlSelfRef.calculator__DOT__unnamedblk1__DOT__k),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgQData(oldp+61,(vlSelfRef.calculator__DOT__in_a[0]),64);
        bufp->chgQData(oldp+63,(vlSelfRef.calculator__DOT__in_a[1]),64);
        bufp->chgQData(oldp+65,(vlSelfRef.calculator__DOT__in_a[2]),64);
        bufp->chgQData(oldp+67,(vlSelfRef.calculator__DOT__in_a[3]),64);
        bufp->chgQData(oldp+69,(vlSelfRef.calculator__DOT__in_a[4]),64);
        bufp->chgQData(oldp+71,(vlSelfRef.calculator__DOT__in_a[5]),64);
        bufp->chgQData(oldp+73,(vlSelfRef.calculator__DOT__in_a[6]),64);
        bufp->chgQData(oldp+75,(vlSelfRef.calculator__DOT__in_a[7]),64);
        bufp->chgQData(oldp+77,(vlSelfRef.calculator__DOT__in_a[8]),64);
        bufp->chgQData(oldp+79,(vlSelfRef.calculator__DOT__in_b[0]),64);
        bufp->chgQData(oldp+81,(vlSelfRef.calculator__DOT__in_b[1]),64);
        bufp->chgQData(oldp+83,(vlSelfRef.calculator__DOT__in_b[2]),64);
        bufp->chgQData(oldp+85,(vlSelfRef.calculator__DOT__in_b[3]),64);
        bufp->chgQData(oldp+87,(vlSelfRef.calculator__DOT__in_b[4]),64);
        bufp->chgQData(oldp+89,(vlSelfRef.calculator__DOT__in_b[5]),64);
        bufp->chgQData(oldp+91,(vlSelfRef.calculator__DOT__in_b[6]),64);
        bufp->chgQData(oldp+93,(vlSelfRef.calculator__DOT__in_b[7]),64);
        bufp->chgQData(oldp+95,(vlSelfRef.calculator__DOT__in_b[8]),64);
        bufp->chgSData(oldp+97,(vlSelfRef.calculator__DOT__in_ctrl[0]),16);
        bufp->chgSData(oldp+98,(vlSelfRef.calculator__DOT__in_ctrl[1]),16);
        bufp->chgSData(oldp+99,(vlSelfRef.calculator__DOT__in_ctrl[2]),16);
        bufp->chgSData(oldp+100,(vlSelfRef.calculator__DOT__in_ctrl[3]),16);
        bufp->chgSData(oldp+101,(vlSelfRef.calculator__DOT__in_ctrl[4]),16);
        bufp->chgSData(oldp+102,(vlSelfRef.calculator__DOT__in_ctrl[5]),16);
        bufp->chgSData(oldp+103,(vlSelfRef.calculator__DOT__in_ctrl[6]),16);
        bufp->chgSData(oldp+104,(vlSelfRef.calculator__DOT__in_ctrl[7]),16);
        bufp->chgSData(oldp+105,(vlSelfRef.calculator__DOT__in_ctrl[8]),16);
        bufp->chgBit(oldp+106,(vlSelfRef.calculator__DOT__in_valid[0]));
        bufp->chgBit(oldp+107,(vlSelfRef.calculator__DOT__in_valid[1]));
        bufp->chgBit(oldp+108,(vlSelfRef.calculator__DOT__in_valid[2]));
        bufp->chgBit(oldp+109,(vlSelfRef.calculator__DOT__in_valid[3]));
        bufp->chgBit(oldp+110,(vlSelfRef.calculator__DOT__in_valid[4]));
        bufp->chgBit(oldp+111,(vlSelfRef.calculator__DOT__in_valid[5]));
        bufp->chgBit(oldp+112,(vlSelfRef.calculator__DOT__in_valid[6]));
        bufp->chgBit(oldp+113,(vlSelfRef.calculator__DOT__in_valid[7]));
        bufp->chgBit(oldp+114,(vlSelfRef.calculator__DOT__in_valid[8]));
        bufp->chgQData(oldp+115,(vlSelfRef.calculator__DOT__out_a_n[0]),64);
        bufp->chgQData(oldp+117,(vlSelfRef.calculator__DOT__out_a_n[1]),64);
        bufp->chgQData(oldp+119,(vlSelfRef.calculator__DOT__out_a_n[2]),64);
        bufp->chgQData(oldp+121,(vlSelfRef.calculator__DOT__out_a_n[3]),64);
        bufp->chgQData(oldp+123,(vlSelfRef.calculator__DOT__out_a_n[4]),64);
        bufp->chgQData(oldp+125,(vlSelfRef.calculator__DOT__out_a_n[5]),64);
        bufp->chgQData(oldp+127,(vlSelfRef.calculator__DOT__out_a_n[6]),64);
        bufp->chgQData(oldp+129,(vlSelfRef.calculator__DOT__out_a_n[7]),64);
        bufp->chgQData(oldp+131,(vlSelfRef.calculator__DOT__out_a_n[8]),64);
        bufp->chgQData(oldp+133,(vlSelfRef.calculator__DOT__out_b_n[0]),64);
        bufp->chgQData(oldp+135,(vlSelfRef.calculator__DOT__out_b_n[1]),64);
        bufp->chgQData(oldp+137,(vlSelfRef.calculator__DOT__out_b_n[2]),64);
        bufp->chgQData(oldp+139,(vlSelfRef.calculator__DOT__out_b_n[3]),64);
        bufp->chgQData(oldp+141,(vlSelfRef.calculator__DOT__out_b_n[4]),64);
        bufp->chgQData(oldp+143,(vlSelfRef.calculator__DOT__out_b_n[5]),64);
        bufp->chgQData(oldp+145,(vlSelfRef.calculator__DOT__out_b_n[6]),64);
        bufp->chgQData(oldp+147,(vlSelfRef.calculator__DOT__out_b_n[7]),64);
        bufp->chgQData(oldp+149,(vlSelfRef.calculator__DOT__out_b_n[8]),64);
        bufp->chgSData(oldp+151,(vlSelfRef.calculator__DOT__out_ctrl_n[0]),16);
        bufp->chgSData(oldp+152,(vlSelfRef.calculator__DOT__out_ctrl_n[1]),16);
        bufp->chgSData(oldp+153,(vlSelfRef.calculator__DOT__out_ctrl_n[2]),16);
        bufp->chgSData(oldp+154,(vlSelfRef.calculator__DOT__out_ctrl_n[3]),16);
        bufp->chgSData(oldp+155,(vlSelfRef.calculator__DOT__out_ctrl_n[4]),16);
        bufp->chgSData(oldp+156,(vlSelfRef.calculator__DOT__out_ctrl_n[5]),16);
        bufp->chgSData(oldp+157,(vlSelfRef.calculator__DOT__out_ctrl_n[6]),16);
        bufp->chgSData(oldp+158,(vlSelfRef.calculator__DOT__out_ctrl_n[7]),16);
        bufp->chgSData(oldp+159,(vlSelfRef.calculator__DOT__out_ctrl_n[8]),16);
        bufp->chgBit(oldp+160,(vlSelfRef.calculator__DOT__out_valid_n[0]));
        bufp->chgBit(oldp+161,(vlSelfRef.calculator__DOT__out_valid_n[1]));
        bufp->chgBit(oldp+162,(vlSelfRef.calculator__DOT__out_valid_n[2]));
        bufp->chgBit(oldp+163,(vlSelfRef.calculator__DOT__out_valid_n[3]));
        bufp->chgBit(oldp+164,(vlSelfRef.calculator__DOT__out_valid_n[4]));
        bufp->chgBit(oldp+165,(vlSelfRef.calculator__DOT__out_valid_n[5]));
        bufp->chgBit(oldp+166,(vlSelfRef.calculator__DOT__out_valid_n[6]));
        bufp->chgBit(oldp+167,(vlSelfRef.calculator__DOT__out_valid_n[7]));
        bufp->chgBit(oldp+168,(vlSelfRef.calculator__DOT__out_valid_n[8]));
        bufp->chgQData(oldp+169,(vlSelfRef.calculator__DOT__out_a_e[0]),64);
        bufp->chgQData(oldp+171,(vlSelfRef.calculator__DOT__out_a_e[1]),64);
        bufp->chgQData(oldp+173,(vlSelfRef.calculator__DOT__out_a_e[2]),64);
        bufp->chgQData(oldp+175,(vlSelfRef.calculator__DOT__out_a_e[3]),64);
        bufp->chgQData(oldp+177,(vlSelfRef.calculator__DOT__out_a_e[4]),64);
        bufp->chgQData(oldp+179,(vlSelfRef.calculator__DOT__out_a_e[5]),64);
        bufp->chgQData(oldp+181,(vlSelfRef.calculator__DOT__out_a_e[6]),64);
        bufp->chgQData(oldp+183,(vlSelfRef.calculator__DOT__out_a_e[7]),64);
        bufp->chgQData(oldp+185,(vlSelfRef.calculator__DOT__out_a_e[8]),64);
        bufp->chgQData(oldp+187,(vlSelfRef.calculator__DOT__out_b_e[0]),64);
        bufp->chgQData(oldp+189,(vlSelfRef.calculator__DOT__out_b_e[1]),64);
        bufp->chgQData(oldp+191,(vlSelfRef.calculator__DOT__out_b_e[2]),64);
        bufp->chgQData(oldp+193,(vlSelfRef.calculator__DOT__out_b_e[3]),64);
        bufp->chgQData(oldp+195,(vlSelfRef.calculator__DOT__out_b_e[4]),64);
        bufp->chgQData(oldp+197,(vlSelfRef.calculator__DOT__out_b_e[5]),64);
        bufp->chgQData(oldp+199,(vlSelfRef.calculator__DOT__out_b_e[6]),64);
        bufp->chgQData(oldp+201,(vlSelfRef.calculator__DOT__out_b_e[7]),64);
        bufp->chgQData(oldp+203,(vlSelfRef.calculator__DOT__out_b_e[8]),64);
        bufp->chgSData(oldp+205,(vlSelfRef.calculator__DOT__out_ctrl_e[0]),16);
        bufp->chgSData(oldp+206,(vlSelfRef.calculator__DOT__out_ctrl_e[1]),16);
        bufp->chgSData(oldp+207,(vlSelfRef.calculator__DOT__out_ctrl_e[2]),16);
        bufp->chgSData(oldp+208,(vlSelfRef.calculator__DOT__out_ctrl_e[3]),16);
        bufp->chgSData(oldp+209,(vlSelfRef.calculator__DOT__out_ctrl_e[4]),16);
        bufp->chgSData(oldp+210,(vlSelfRef.calculator__DOT__out_ctrl_e[5]),16);
        bufp->chgSData(oldp+211,(vlSelfRef.calculator__DOT__out_ctrl_e[6]),16);
        bufp->chgSData(oldp+212,(vlSelfRef.calculator__DOT__out_ctrl_e[7]),16);
        bufp->chgSData(oldp+213,(vlSelfRef.calculator__DOT__out_ctrl_e[8]),16);
        bufp->chgBit(oldp+214,(vlSelfRef.calculator__DOT__out_valid_e[0]));
        bufp->chgBit(oldp+215,(vlSelfRef.calculator__DOT__out_valid_e[1]));
        bufp->chgBit(oldp+216,(vlSelfRef.calculator__DOT__out_valid_e[2]));
        bufp->chgBit(oldp+217,(vlSelfRef.calculator__DOT__out_valid_e[3]));
        bufp->chgBit(oldp+218,(vlSelfRef.calculator__DOT__out_valid_e[4]));
        bufp->chgBit(oldp+219,(vlSelfRef.calculator__DOT__out_valid_e[5]));
        bufp->chgBit(oldp+220,(vlSelfRef.calculator__DOT__out_valid_e[6]));
        bufp->chgBit(oldp+221,(vlSelfRef.calculator__DOT__out_valid_e[7]));
        bufp->chgBit(oldp+222,(vlSelfRef.calculator__DOT__out_valid_e[8]));
        bufp->chgQData(oldp+223,(vlSelfRef.calculator__DOT__out_a_s[0]),64);
        bufp->chgQData(oldp+225,(vlSelfRef.calculator__DOT__out_a_s[1]),64);
        bufp->chgQData(oldp+227,(vlSelfRef.calculator__DOT__out_a_s[2]),64);
        bufp->chgQData(oldp+229,(vlSelfRef.calculator__DOT__out_a_s[3]),64);
        bufp->chgQData(oldp+231,(vlSelfRef.calculator__DOT__out_a_s[4]),64);
        bufp->chgQData(oldp+233,(vlSelfRef.calculator__DOT__out_a_s[5]),64);
        bufp->chgQData(oldp+235,(vlSelfRef.calculator__DOT__out_a_s[6]),64);
        bufp->chgQData(oldp+237,(vlSelfRef.calculator__DOT__out_a_s[7]),64);
        bufp->chgQData(oldp+239,(vlSelfRef.calculator__DOT__out_a_s[8]),64);
        bufp->chgQData(oldp+241,(vlSelfRef.calculator__DOT__out_b_s[0]),64);
        bufp->chgQData(oldp+243,(vlSelfRef.calculator__DOT__out_b_s[1]),64);
        bufp->chgQData(oldp+245,(vlSelfRef.calculator__DOT__out_b_s[2]),64);
        bufp->chgQData(oldp+247,(vlSelfRef.calculator__DOT__out_b_s[3]),64);
        bufp->chgQData(oldp+249,(vlSelfRef.calculator__DOT__out_b_s[4]),64);
        bufp->chgQData(oldp+251,(vlSelfRef.calculator__DOT__out_b_s[5]),64);
        bufp->chgQData(oldp+253,(vlSelfRef.calculator__DOT__out_b_s[6]),64);
        bufp->chgQData(oldp+255,(vlSelfRef.calculator__DOT__out_b_s[7]),64);
        bufp->chgQData(oldp+257,(vlSelfRef.calculator__DOT__out_b_s[8]),64);
        bufp->chgSData(oldp+259,(vlSelfRef.calculator__DOT__out_ctrl_s[0]),16);
        bufp->chgSData(oldp+260,(vlSelfRef.calculator__DOT__out_ctrl_s[1]),16);
        bufp->chgSData(oldp+261,(vlSelfRef.calculator__DOT__out_ctrl_s[2]),16);
        bufp->chgSData(oldp+262,(vlSelfRef.calculator__DOT__out_ctrl_s[3]),16);
        bufp->chgSData(oldp+263,(vlSelfRef.calculator__DOT__out_ctrl_s[4]),16);
        bufp->chgSData(oldp+264,(vlSelfRef.calculator__DOT__out_ctrl_s[5]),16);
        bufp->chgSData(oldp+265,(vlSelfRef.calculator__DOT__out_ctrl_s[6]),16);
        bufp->chgSData(oldp+266,(vlSelfRef.calculator__DOT__out_ctrl_s[7]),16);
        bufp->chgSData(oldp+267,(vlSelfRef.calculator__DOT__out_ctrl_s[8]),16);
        bufp->chgBit(oldp+268,(vlSelfRef.calculator__DOT__out_valid_s[0]));
        bufp->chgBit(oldp+269,(vlSelfRef.calculator__DOT__out_valid_s[1]));
        bufp->chgBit(oldp+270,(vlSelfRef.calculator__DOT__out_valid_s[2]));
        bufp->chgBit(oldp+271,(vlSelfRef.calculator__DOT__out_valid_s[3]));
        bufp->chgBit(oldp+272,(vlSelfRef.calculator__DOT__out_valid_s[4]));
        bufp->chgBit(oldp+273,(vlSelfRef.calculator__DOT__out_valid_s[5]));
        bufp->chgBit(oldp+274,(vlSelfRef.calculator__DOT__out_valid_s[6]));
        bufp->chgBit(oldp+275,(vlSelfRef.calculator__DOT__out_valid_s[7]));
        bufp->chgBit(oldp+276,(vlSelfRef.calculator__DOT__out_valid_s[8]));
        bufp->chgQData(oldp+277,(vlSelfRef.calculator__DOT__out_a_w[0]),64);
        bufp->chgQData(oldp+279,(vlSelfRef.calculator__DOT__out_a_w[1]),64);
        bufp->chgQData(oldp+281,(vlSelfRef.calculator__DOT__out_a_w[2]),64);
        bufp->chgQData(oldp+283,(vlSelfRef.calculator__DOT__out_a_w[3]),64);
        bufp->chgQData(oldp+285,(vlSelfRef.calculator__DOT__out_a_w[4]),64);
        bufp->chgQData(oldp+287,(vlSelfRef.calculator__DOT__out_a_w[5]),64);
        bufp->chgQData(oldp+289,(vlSelfRef.calculator__DOT__out_a_w[6]),64);
        bufp->chgQData(oldp+291,(vlSelfRef.calculator__DOT__out_a_w[7]),64);
        bufp->chgQData(oldp+293,(vlSelfRef.calculator__DOT__out_a_w[8]),64);
        bufp->chgQData(oldp+295,(vlSelfRef.calculator__DOT__out_b_w[0]),64);
        bufp->chgQData(oldp+297,(vlSelfRef.calculator__DOT__out_b_w[1]),64);
        bufp->chgQData(oldp+299,(vlSelfRef.calculator__DOT__out_b_w[2]),64);
        bufp->chgQData(oldp+301,(vlSelfRef.calculator__DOT__out_b_w[3]),64);
        bufp->chgQData(oldp+303,(vlSelfRef.calculator__DOT__out_b_w[4]),64);
        bufp->chgQData(oldp+305,(vlSelfRef.calculator__DOT__out_b_w[5]),64);
        bufp->chgQData(oldp+307,(vlSelfRef.calculator__DOT__out_b_w[6]),64);
        bufp->chgQData(oldp+309,(vlSelfRef.calculator__DOT__out_b_w[7]),64);
        bufp->chgQData(oldp+311,(vlSelfRef.calculator__DOT__out_b_w[8]),64);
        bufp->chgSData(oldp+313,(vlSelfRef.calculator__DOT__out_ctrl_w[0]),16);
        bufp->chgSData(oldp+314,(vlSelfRef.calculator__DOT__out_ctrl_w[1]),16);
        bufp->chgSData(oldp+315,(vlSelfRef.calculator__DOT__out_ctrl_w[2]),16);
        bufp->chgSData(oldp+316,(vlSelfRef.calculator__DOT__out_ctrl_w[3]),16);
        bufp->chgSData(oldp+317,(vlSelfRef.calculator__DOT__out_ctrl_w[4]),16);
        bufp->chgSData(oldp+318,(vlSelfRef.calculator__DOT__out_ctrl_w[5]),16);
        bufp->chgSData(oldp+319,(vlSelfRef.calculator__DOT__out_ctrl_w[6]),16);
        bufp->chgSData(oldp+320,(vlSelfRef.calculator__DOT__out_ctrl_w[7]),16);
        bufp->chgSData(oldp+321,(vlSelfRef.calculator__DOT__out_ctrl_w[8]),16);
        bufp->chgBit(oldp+322,(vlSelfRef.calculator__DOT__out_valid_w[0]));
        bufp->chgBit(oldp+323,(vlSelfRef.calculator__DOT__out_valid_w[1]));
        bufp->chgBit(oldp+324,(vlSelfRef.calculator__DOT__out_valid_w[2]));
        bufp->chgBit(oldp+325,(vlSelfRef.calculator__DOT__out_valid_w[3]));
        bufp->chgBit(oldp+326,(vlSelfRef.calculator__DOT__out_valid_w[4]));
        bufp->chgBit(oldp+327,(vlSelfRef.calculator__DOT__out_valid_w[5]));
        bufp->chgBit(oldp+328,(vlSelfRef.calculator__DOT__out_valid_w[6]));
        bufp->chgBit(oldp+329,(vlSelfRef.calculator__DOT__out_valid_w[7]));
        bufp->chgBit(oldp+330,(vlSelfRef.calculator__DOT__out_valid_w[8]));
        bufp->chgQData(oldp+331,(vlSelfRef.calculator__DOT__host_out_a[0]),64);
        bufp->chgQData(oldp+333,(vlSelfRef.calculator__DOT__host_out_a[1]),64);
        bufp->chgQData(oldp+335,(vlSelfRef.calculator__DOT__host_out_a[2]),64);
        bufp->chgQData(oldp+337,(vlSelfRef.calculator__DOT__host_out_a[3]),64);
        bufp->chgQData(oldp+339,(vlSelfRef.calculator__DOT__host_out_a[4]),64);
        bufp->chgQData(oldp+341,(vlSelfRef.calculator__DOT__host_out_a[5]),64);
        bufp->chgQData(oldp+343,(vlSelfRef.calculator__DOT__host_out_a[6]),64);
        bufp->chgQData(oldp+345,(vlSelfRef.calculator__DOT__host_out_a[7]),64);
        bufp->chgQData(oldp+347,(vlSelfRef.calculator__DOT__host_out_a[8]),64);
        bufp->chgBit(oldp+349,(vlSelfRef.calculator__DOT__host_out_valid[0]));
        bufp->chgBit(oldp+350,(vlSelfRef.calculator__DOT__host_out_valid[1]));
        bufp->chgBit(oldp+351,(vlSelfRef.calculator__DOT__host_out_valid[2]));
        bufp->chgBit(oldp+352,(vlSelfRef.calculator__DOT__host_out_valid[3]));
        bufp->chgBit(oldp+353,(vlSelfRef.calculator__DOT__host_out_valid[4]));
        bufp->chgBit(oldp+354,(vlSelfRef.calculator__DOT__host_out_valid[5]));
        bufp->chgBit(oldp+355,(vlSelfRef.calculator__DOT__host_out_valid[6]));
        bufp->chgBit(oldp+356,(vlSelfRef.calculator__DOT__host_out_valid[7]));
        bufp->chgBit(oldp+357,(vlSelfRef.calculator__DOT__host_out_valid[8]));
        bufp->chgQData(oldp+358,(vlSelfRef.calculator__DOT__result_r),64);
        bufp->chgBit(oldp+360,(vlSelfRef.calculator__DOT__valid_r));
        bufp->chgIData(oldp+361,(vlSelfRef.calculator__DOT__any),32);
        bufp->chgQData(oldp+362,(vlSelfRef.calculator__DOT__in_a
                                 [1U]),64);
        bufp->chgQData(oldp+364,(vlSelfRef.calculator__DOT__in_b
                                 [1U]),64);
        bufp->chgSData(oldp+366,(vlSelfRef.calculator__DOT__in_ctrl
                                 [1U]),16);
        bufp->chgBit(oldp+367,(vlSelfRef.calculator__DOT__in_valid
                               [1U]));
        bufp->chgQData(oldp+368,(vlSelfRef.calculator__DOT__in_a
                                 [3U]),64);
        bufp->chgQData(oldp+370,(vlSelfRef.calculator__DOT__in_b
                                 [3U]),64);
        bufp->chgSData(oldp+372,(vlSelfRef.calculator__DOT__in_ctrl
                                 [3U]),16);
        bufp->chgBit(oldp+373,(vlSelfRef.calculator__DOT__in_valid
                               [3U]));
        bufp->chgQData(oldp+374,(vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_e),64);
        bufp->chgQData(oldp+376,(vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_e),64);
        bufp->chgSData(oldp+378,(vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_e),16);
        bufp->chgBit(oldp+379,(vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_e));
        bufp->chgQData(oldp+380,(vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_s),64);
        bufp->chgQData(oldp+382,(vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_s),64);
        bufp->chgSData(oldp+384,(vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_s),16);
        bufp->chgBit(oldp+385,(vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_s));
        bufp->chgQData(oldp+386,(vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_a),64);
        bufp->chgBit(oldp+388,(vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_valid));
        bufp->chgBit(oldp+389,((vlSelfRef.calculator__DOT__in_valid
                                [1U] | vlSelfRef.calculator__DOT__in_valid
                                [3U])));
        bufp->chgQData(oldp+390,(vlSelfRef.calculator__DOT__t0_0__DOT__sel_a),64);
        bufp->chgQData(oldp+392,(vlSelfRef.calculator__DOT__t0_0__DOT__sel_b),64);
        bufp->chgSData(oldp+394,(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+395,(vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid));
        bufp->chgBit(oldp+396,((1U & ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+397,((3U & ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+398,((3U & ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+399,((0xfU & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+400,(vlSelfRef.calculator__DOT__t0_0__DOT__am_dest));
        bufp->chgQData(oldp+401,(vlSelfRef.calculator__DOT__t0_0__DOT__op_result),64);
        bufp->chgSData(oldp+403,(vlSelfRef.calculator__DOT__t0_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+404,(vlSelfRef.calculator__DOT__in_a
                                 [2U]),64);
        bufp->chgQData(oldp+406,(vlSelfRef.calculator__DOT__in_b
                                 [2U]),64);
        bufp->chgSData(oldp+408,(vlSelfRef.calculator__DOT__in_ctrl
                                 [2U]),16);
        bufp->chgBit(oldp+409,(vlSelfRef.calculator__DOT__in_valid
                               [2U]));
        bufp->chgQData(oldp+410,(vlSelfRef.calculator__DOT__in_a
                                 [4U]),64);
        bufp->chgQData(oldp+412,(vlSelfRef.calculator__DOT__in_b
                                 [4U]),64);
        bufp->chgSData(oldp+414,(vlSelfRef.calculator__DOT__in_ctrl
                                 [4U]),16);
        bufp->chgBit(oldp+415,(vlSelfRef.calculator__DOT__in_valid
                               [4U]));
        bufp->chgQData(oldp+416,(vlSelfRef.calculator__DOT__in_a
                                 [0U]),64);
        bufp->chgQData(oldp+418,(vlSelfRef.calculator__DOT__in_b
                                 [0U]),64);
        bufp->chgSData(oldp+420,(vlSelfRef.calculator__DOT__in_ctrl
                                 [0U]),16);
        bufp->chgBit(oldp+421,(vlSelfRef.calculator__DOT__in_valid
                               [0U]));
        bufp->chgQData(oldp+422,(vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_e),64);
        bufp->chgQData(oldp+424,(vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_e),64);
        bufp->chgSData(oldp+426,(vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_e),16);
        bufp->chgBit(oldp+427,(vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_e));
        bufp->chgQData(oldp+428,(vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_s),64);
        bufp->chgQData(oldp+430,(vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_s),64);
        bufp->chgSData(oldp+432,(vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_s),16);
        bufp->chgBit(oldp+433,(vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_s));
        bufp->chgQData(oldp+434,(vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_w),64);
        bufp->chgQData(oldp+436,(vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_w),64);
        bufp->chgSData(oldp+438,(vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_w),16);
        bufp->chgBit(oldp+439,(vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_w));
        bufp->chgBit(oldp+440,((vlSelfRef.calculator__DOT__in_valid
                                [2U] | (vlSelfRef.calculator__DOT__in_valid
                                        [4U] | vlSelfRef.calculator__DOT__in_valid
                                        [0U]))));
        bufp->chgQData(oldp+441,(vlSelfRef.calculator__DOT__t0_1__DOT__sel_a),64);
        bufp->chgQData(oldp+443,(vlSelfRef.calculator__DOT__t0_1__DOT__sel_b),64);
        bufp->chgSData(oldp+445,(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+446,(vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid));
        bufp->chgBit(oldp+447,((1U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+448,((3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+449,((3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+450,((0xfU & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+451,(vlSelfRef.calculator__DOT__t0_1__DOT__am_dest));
        bufp->chgQData(oldp+452,(vlSelfRef.calculator__DOT__t0_1__DOT__op_result),64);
        bufp->chgSData(oldp+454,(vlSelfRef.calculator__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+455,(vlSelfRef.calculator__DOT__in_a
                                 [5U]),64);
        bufp->chgQData(oldp+457,(vlSelfRef.calculator__DOT__in_b
                                 [5U]),64);
        bufp->chgSData(oldp+459,(vlSelfRef.calculator__DOT__in_ctrl
                                 [5U]),16);
        bufp->chgBit(oldp+460,(vlSelfRef.calculator__DOT__in_valid
                               [5U]));
        bufp->chgQData(oldp+461,(vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_e),64);
        bufp->chgQData(oldp+463,(vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_e),64);
        bufp->chgSData(oldp+465,(vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_e),16);
        bufp->chgBit(oldp+466,(vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_e));
        bufp->chgQData(oldp+467,(vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_s),64);
        bufp->chgQData(oldp+469,(vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_s),64);
        bufp->chgSData(oldp+471,(vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_s),16);
        bufp->chgBit(oldp+472,(vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_s));
        bufp->chgQData(oldp+473,(vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_w),64);
        bufp->chgQData(oldp+475,(vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_w),64);
        bufp->chgSData(oldp+477,(vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_w),16);
        bufp->chgBit(oldp+478,(vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_w));
        bufp->chgBit(oldp+479,((vlSelfRef.calculator__DOT__in_valid
                                [5U] | vlSelfRef.calculator__DOT__in_valid
                                [1U])));
        bufp->chgQData(oldp+480,(vlSelfRef.calculator__DOT__t0_2__DOT__sel_a),64);
        bufp->chgQData(oldp+482,(vlSelfRef.calculator__DOT__t0_2__DOT__sel_b),64);
        bufp->chgSData(oldp+484,(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+485,(vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid));
        bufp->chgBit(oldp+486,((1U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+487,((3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+488,((3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+489,((0xfU & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+490,(vlSelfRef.calculator__DOT__t0_2__DOT__am_dest));
        bufp->chgQData(oldp+491,(vlSelfRef.calculator__DOT__t0_2__DOT__op_result),64);
        bufp->chgSData(oldp+493,(vlSelfRef.calculator__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+494,(vlSelfRef.calculator__DOT__in_a
                                 [6U]),64);
        bufp->chgQData(oldp+496,(vlSelfRef.calculator__DOT__in_b
                                 [6U]),64);
        bufp->chgSData(oldp+498,(vlSelfRef.calculator__DOT__in_ctrl
                                 [6U]),16);
        bufp->chgBit(oldp+499,(vlSelfRef.calculator__DOT__in_valid
                               [6U]));
        bufp->chgQData(oldp+500,(vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_n),64);
        bufp->chgQData(oldp+502,(vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_n),64);
        bufp->chgSData(oldp+504,(vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_n),16);
        bufp->chgBit(oldp+505,(vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_n));
        bufp->chgQData(oldp+506,(vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_e),64);
        bufp->chgQData(oldp+508,(vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_e),64);
        bufp->chgSData(oldp+510,(vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_e),16);
        bufp->chgBit(oldp+511,(vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_e));
        bufp->chgQData(oldp+512,(vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_s),64);
        bufp->chgQData(oldp+514,(vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_s),64);
        bufp->chgSData(oldp+516,(vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_s),16);
        bufp->chgBit(oldp+517,(vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_s));
        bufp->chgBit(oldp+518,((vlSelfRef.calculator__DOT__in_valid
                                [4U] | (vlSelfRef.calculator__DOT__in_valid
                                        [0U] | vlSelfRef.calculator__DOT__in_valid
                                        [6U]))));
        bufp->chgQData(oldp+519,(vlSelfRef.calculator__DOT__t1_0__DOT__sel_a),64);
        bufp->chgQData(oldp+521,(vlSelfRef.calculator__DOT__t1_0__DOT__sel_b),64);
        bufp->chgSData(oldp+523,(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+524,(vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid));
        bufp->chgBit(oldp+525,((1U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+526,((3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+527,((3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+528,((0xfU & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+529,(vlSelfRef.calculator__DOT__t1_0__DOT__am_dest));
        bufp->chgQData(oldp+530,(vlSelfRef.calculator__DOT__t1_0__DOT__op_result),64);
        bufp->chgSData(oldp+532,(vlSelfRef.calculator__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+533,(vlSelfRef.calculator__DOT__in_a
                                 [7U]),64);
        bufp->chgQData(oldp+535,(vlSelfRef.calculator__DOT__in_b
                                 [7U]),64);
        bufp->chgSData(oldp+537,(vlSelfRef.calculator__DOT__in_ctrl
                                 [7U]),16);
        bufp->chgBit(oldp+538,(vlSelfRef.calculator__DOT__in_valid
                               [7U]));
        bufp->chgQData(oldp+539,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_n),64);
        bufp->chgQData(oldp+541,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_n),64);
        bufp->chgSData(oldp+543,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_n),16);
        bufp->chgBit(oldp+544,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_n));
        bufp->chgQData(oldp+545,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_e),64);
        bufp->chgQData(oldp+547,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_e),64);
        bufp->chgSData(oldp+549,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_e),16);
        bufp->chgBit(oldp+550,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_e));
        bufp->chgQData(oldp+551,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_s),64);
        bufp->chgQData(oldp+553,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_s),64);
        bufp->chgSData(oldp+555,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_s),16);
        bufp->chgBit(oldp+556,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_s));
        bufp->chgQData(oldp+557,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_w),64);
        bufp->chgQData(oldp+559,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_w),64);
        bufp->chgSData(oldp+561,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_w),16);
        bufp->chgBit(oldp+562,(vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_w));
        bufp->chgBit(oldp+563,((vlSelfRef.calculator__DOT__in_valid
                                [5U] | (vlSelfRef.calculator__DOT__in_valid
                                        [1U] | (vlSelfRef.calculator__DOT__in_valid
                                                [7U] 
                                                | vlSelfRef.calculator__DOT__in_valid
                                                [3U])))));
        bufp->chgQData(oldp+564,(vlSelfRef.calculator__DOT__t1_1__DOT__sel_a),64);
        bufp->chgQData(oldp+566,(vlSelfRef.calculator__DOT__t1_1__DOT__sel_b),64);
        bufp->chgSData(oldp+568,(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+569,(vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid));
        bufp->chgBit(oldp+570,((1U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+571,((3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+572,((3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+573,((0xfU & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+574,(vlSelfRef.calculator__DOT__t1_1__DOT__am_dest));
        bufp->chgQData(oldp+575,(vlSelfRef.calculator__DOT__t1_1__DOT__op_result),64);
        bufp->chgSData(oldp+577,(vlSelfRef.calculator__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+578,(vlSelfRef.calculator__DOT__in_a
                                 [8U]),64);
        bufp->chgQData(oldp+580,(vlSelfRef.calculator__DOT__in_b
                                 [8U]),64);
        bufp->chgSData(oldp+582,(vlSelfRef.calculator__DOT__in_ctrl
                                 [8U]),16);
        bufp->chgBit(oldp+583,(vlSelfRef.calculator__DOT__in_valid
                               [8U]));
        bufp->chgQData(oldp+584,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_n),64);
        bufp->chgQData(oldp+586,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_n),64);
        bufp->chgSData(oldp+588,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_n),16);
        bufp->chgBit(oldp+589,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_n));
        bufp->chgQData(oldp+590,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_e),64);
        bufp->chgQData(oldp+592,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_e),64);
        bufp->chgSData(oldp+594,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_e),16);
        bufp->chgBit(oldp+595,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_e));
        bufp->chgQData(oldp+596,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_s),64);
        bufp->chgQData(oldp+598,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_s),64);
        bufp->chgSData(oldp+600,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_s),16);
        bufp->chgBit(oldp+601,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_s));
        bufp->chgQData(oldp+602,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_w),64);
        bufp->chgQData(oldp+604,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_w),64);
        bufp->chgSData(oldp+606,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_w),16);
        bufp->chgBit(oldp+607,(vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_w));
        bufp->chgBit(oldp+608,((vlSelfRef.calculator__DOT__in_valid
                                [2U] | (vlSelfRef.calculator__DOT__in_valid
                                        [8U] | vlSelfRef.calculator__DOT__in_valid
                                        [4U]))));
        bufp->chgQData(oldp+609,(vlSelfRef.calculator__DOT__t1_2__DOT__sel_a),64);
        bufp->chgQData(oldp+611,(vlSelfRef.calculator__DOT__t1_2__DOT__sel_b),64);
        bufp->chgSData(oldp+613,(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+614,(vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid));
        bufp->chgBit(oldp+615,((1U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+616,((3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+617,((3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+618,((0xfU & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+619,(vlSelfRef.calculator__DOT__t1_2__DOT__am_dest));
        bufp->chgQData(oldp+620,(vlSelfRef.calculator__DOT__t1_2__DOT__op_result),64);
        bufp->chgSData(oldp+622,(vlSelfRef.calculator__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+623,(vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_n),64);
        bufp->chgQData(oldp+625,(vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_n),64);
        bufp->chgSData(oldp+627,(vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_n),16);
        bufp->chgBit(oldp+628,(vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_n));
        bufp->chgQData(oldp+629,(vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_e),64);
        bufp->chgQData(oldp+631,(vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_e),64);
        bufp->chgSData(oldp+633,(vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_e),16);
        bufp->chgBit(oldp+634,(vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_e));
        bufp->chgQData(oldp+635,(vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_s),64);
        bufp->chgQData(oldp+637,(vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_s),64);
        bufp->chgSData(oldp+639,(vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_s),16);
        bufp->chgBit(oldp+640,(vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_s));
        bufp->chgBit(oldp+641,((vlSelfRef.calculator__DOT__in_valid
                                [7U] | vlSelfRef.calculator__DOT__in_valid
                                [3U])));
        bufp->chgQData(oldp+642,(vlSelfRef.calculator__DOT__t2_0__DOT__sel_a),64);
        bufp->chgQData(oldp+644,(vlSelfRef.calculator__DOT__t2_0__DOT__sel_b),64);
        bufp->chgSData(oldp+646,(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+647,(vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid));
        bufp->chgBit(oldp+648,((1U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+649,((3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+650,((3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+651,((0xfU & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+652,(vlSelfRef.calculator__DOT__t2_0__DOT__am_dest));
        bufp->chgQData(oldp+653,(vlSelfRef.calculator__DOT__t2_0__DOT__op_result),64);
        bufp->chgSData(oldp+655,(vlSelfRef.calculator__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+656,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_n),64);
        bufp->chgQData(oldp+658,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_n),64);
        bufp->chgSData(oldp+660,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_n),16);
        bufp->chgBit(oldp+661,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_n));
        bufp->chgQData(oldp+662,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_e),64);
        bufp->chgQData(oldp+664,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_e),64);
        bufp->chgSData(oldp+666,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_e),16);
        bufp->chgBit(oldp+667,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_e));
        bufp->chgQData(oldp+668,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_s),64);
        bufp->chgQData(oldp+670,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_s),64);
        bufp->chgSData(oldp+672,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_s),16);
        bufp->chgBit(oldp+673,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_s));
        bufp->chgQData(oldp+674,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_w),64);
        bufp->chgQData(oldp+676,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_w),64);
        bufp->chgSData(oldp+678,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_w),16);
        bufp->chgBit(oldp+679,(vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_w));
        bufp->chgBit(oldp+680,((vlSelfRef.calculator__DOT__in_valid
                                [8U] | (vlSelfRef.calculator__DOT__in_valid
                                        [4U] | vlSelfRef.calculator__DOT__in_valid
                                        [6U]))));
        bufp->chgQData(oldp+681,(vlSelfRef.calculator__DOT__t2_1__DOT__sel_a),64);
        bufp->chgQData(oldp+683,(vlSelfRef.calculator__DOT__t2_1__DOT__sel_b),64);
        bufp->chgSData(oldp+685,(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+686,(vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid));
        bufp->chgBit(oldp+687,((1U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+688,((3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+689,((3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+690,((0xfU & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+691,(vlSelfRef.calculator__DOT__t2_1__DOT__am_dest));
        bufp->chgQData(oldp+692,(vlSelfRef.calculator__DOT__t2_1__DOT__op_result),64);
        bufp->chgSData(oldp+694,(vlSelfRef.calculator__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+695,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_n),64);
        bufp->chgQData(oldp+697,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_n),64);
        bufp->chgSData(oldp+699,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_n),16);
        bufp->chgBit(oldp+700,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_n));
        bufp->chgQData(oldp+701,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_e),64);
        bufp->chgQData(oldp+703,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_e),64);
        bufp->chgSData(oldp+705,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_e),16);
        bufp->chgBit(oldp+706,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_e));
        bufp->chgQData(oldp+707,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_s),64);
        bufp->chgQData(oldp+709,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_s),64);
        bufp->chgSData(oldp+711,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_s),16);
        bufp->chgBit(oldp+712,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_s));
        bufp->chgQData(oldp+713,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_w),64);
        bufp->chgQData(oldp+715,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_w),64);
        bufp->chgSData(oldp+717,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_w),16);
        bufp->chgBit(oldp+718,(vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_w));
        bufp->chgBit(oldp+719,((vlSelfRef.calculator__DOT__in_valid
                                [5U] | vlSelfRef.calculator__DOT__in_valid
                                [7U])));
        bufp->chgQData(oldp+720,(vlSelfRef.calculator__DOT__t2_2__DOT__sel_a),64);
        bufp->chgQData(oldp+722,(vlSelfRef.calculator__DOT__t2_2__DOT__sel_b),64);
        bufp->chgSData(oldp+724,(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+725,(vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid));
        bufp->chgBit(oldp+726,((1U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+727,((3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+728,((3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+729,((0xfU & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+730,(vlSelfRef.calculator__DOT__t2_2__DOT__am_dest));
        bufp->chgQData(oldp+731,(vlSelfRef.calculator__DOT__t2_2__DOT__op_result),64);
        bufp->chgSData(oldp+733,(vlSelfRef.calculator__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgIData(oldp+734,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__idx_h),32);
        bufp->chgIData(oldp+735,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__i),32);
        bufp->chgQData(oldp+736,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[0]),64);
        bufp->chgQData(oldp+738,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[1]),64);
        bufp->chgQData(oldp+740,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[2]),64);
        bufp->chgQData(oldp+742,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[3]),64);
        bufp->chgQData(oldp+744,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[4]),64);
        bufp->chgQData(oldp+746,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[5]),64);
        bufp->chgQData(oldp+748,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[6]),64);
        bufp->chgQData(oldp+750,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[7]),64);
        bufp->chgQData(oldp+752,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[8]),64);
        bufp->chgQData(oldp+754,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[0]),64);
        bufp->chgQData(oldp+756,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[1]),64);
        bufp->chgQData(oldp+758,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[2]),64);
        bufp->chgQData(oldp+760,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[3]),64);
        bufp->chgQData(oldp+762,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[4]),64);
        bufp->chgQData(oldp+764,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[5]),64);
        bufp->chgQData(oldp+766,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[6]),64);
        bufp->chgQData(oldp+768,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[7]),64);
        bufp->chgQData(oldp+770,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[8]),64);
        bufp->chgSData(oldp+772,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[0]),16);
        bufp->chgSData(oldp+773,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[1]),16);
        bufp->chgSData(oldp+774,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[2]),16);
        bufp->chgSData(oldp+775,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[3]),16);
        bufp->chgSData(oldp+776,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[4]),16);
        bufp->chgSData(oldp+777,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[5]),16);
        bufp->chgSData(oldp+778,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[6]),16);
        bufp->chgSData(oldp+779,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[7]),16);
        bufp->chgSData(oldp+780,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[8]),16);
        bufp->chgBit(oldp+781,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0]));
        bufp->chgBit(oldp+782,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1]));
        bufp->chgBit(oldp+783,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2]));
        bufp->chgBit(oldp+784,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3]));
        bufp->chgBit(oldp+785,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4]));
        bufp->chgBit(oldp+786,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5]));
        bufp->chgBit(oldp+787,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6]));
        bufp->chgBit(oldp+788,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7]));
        bufp->chgBit(oldp+789,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8]));
        bufp->chgIData(oldp+790,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some),32);
        bufp->chgSData(oldp+791,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c),16);
        bufp->chgBit(oldp+792,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r));
        bufp->chgCData(oldp+793,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx),2);
        bufp->chgCData(oldp+794,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy),2);
        bufp->chgCData(oldp+795,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md),4);
        bufp->chgIData(oldp+796,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx),32);
        bufp->chgIData(oldp+797,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty),32);
        bufp->chgIData(oldp+798,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx),32);
        bufp->chgIData(oldp+799,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx),32);
        bufp->chgQData(oldp+800,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res),64);
        bufp->chgIData(oldp+802,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx),32);
        bufp->chgIData(oldp+803,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx),32);
        bufp->chgIData(oldp+804,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx),32);
        bufp->chgIData(oldp+805,(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx),32);
    }
    bufp->chgQData(oldp+806,(vlSelfRef.a),64);
    bufp->chgQData(oldp+808,(vlSelfRef.b),64);
    bufp->chgCData(oldp+810,(vlSelfRef.mode),4);
    bufp->chgQData(oldp+811,(vlSelfRef.result),64);
    bufp->chgBit(oldp+813,(vlSelfRef.valid));
}

void Vcalculator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_cleanup\n"); );
    // Init
    Vcalculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalculator___024root*>(voidSelf);
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
