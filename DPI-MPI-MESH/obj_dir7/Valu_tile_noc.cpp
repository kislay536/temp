// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu_tile_noc__pch.h"

//============================================================
// Constructors

Valu_tile_noc::Valu_tile_noc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valu_tile_noc__Syms(contextp(), _vcname__, this)}
    , TILE_X{vlSymsp->TOP.TILE_X}
    , TILE_Y{vlSymsp->TOP.TILE_Y}
    , in_valid_n{vlSymsp->TOP.in_valid_n}
    , in_valid_e{vlSymsp->TOP.in_valid_e}
    , in_valid_s{vlSymsp->TOP.in_valid_s}
    , in_valid_w{vlSymsp->TOP.in_valid_w}
    , host_in_valid{vlSymsp->TOP.host_in_valid}
    , out_valid_n{vlSymsp->TOP.out_valid_n}
    , out_valid_e{vlSymsp->TOP.out_valid_e}
    , out_valid_s{vlSymsp->TOP.out_valid_s}
    , out_valid_w{vlSymsp->TOP.out_valid_w}
    , host_out_valid{vlSymsp->TOP.host_out_valid}
    , in_ctrl_n{vlSymsp->TOP.in_ctrl_n}
    , in_ctrl_e{vlSymsp->TOP.in_ctrl_e}
    , in_ctrl_s{vlSymsp->TOP.in_ctrl_s}
    , in_ctrl_w{vlSymsp->TOP.in_ctrl_w}
    , host_in_ctrl{vlSymsp->TOP.host_in_ctrl}
    , out_ctrl_n{vlSymsp->TOP.out_ctrl_n}
    , out_ctrl_e{vlSymsp->TOP.out_ctrl_e}
    , out_ctrl_s{vlSymsp->TOP.out_ctrl_s}
    , out_ctrl_w{vlSymsp->TOP.out_ctrl_w}
    , in_a_n{vlSymsp->TOP.in_a_n}
    , in_b_n{vlSymsp->TOP.in_b_n}
    , in_a_e{vlSymsp->TOP.in_a_e}
    , in_b_e{vlSymsp->TOP.in_b_e}
    , in_a_s{vlSymsp->TOP.in_a_s}
    , in_b_s{vlSymsp->TOP.in_b_s}
    , in_a_w{vlSymsp->TOP.in_a_w}
    , in_b_w{vlSymsp->TOP.in_b_w}
    , host_in_a{vlSymsp->TOP.host_in_a}
    , host_in_b{vlSymsp->TOP.host_in_b}
    , out_a_n{vlSymsp->TOP.out_a_n}
    , out_b_n{vlSymsp->TOP.out_b_n}
    , out_a_e{vlSymsp->TOP.out_a_e}
    , out_b_e{vlSymsp->TOP.out_b_e}
    , out_a_s{vlSymsp->TOP.out_a_s}
    , out_b_s{vlSymsp->TOP.out_b_s}
    , out_a_w{vlSymsp->TOP.out_a_w}
    , out_b_w{vlSymsp->TOP.out_b_w}
    , host_out_a{vlSymsp->TOP.host_out_a}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Valu_tile_noc::Valu_tile_noc(const char* _vcname__)
    : Valu_tile_noc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valu_tile_noc::~Valu_tile_noc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Valu_tile_noc___024root___eval_debug_assertions(Valu_tile_noc___024root* vlSelf);
#endif  // VL_DEBUG
void Valu_tile_noc___024root___eval_static(Valu_tile_noc___024root* vlSelf);
void Valu_tile_noc___024root___eval_initial(Valu_tile_noc___024root* vlSelf);
void Valu_tile_noc___024root___eval_settle(Valu_tile_noc___024root* vlSelf);
void Valu_tile_noc___024root___eval(Valu_tile_noc___024root* vlSelf);

void Valu_tile_noc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu_tile_noc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valu_tile_noc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Valu_tile_noc___024root___eval_static(&(vlSymsp->TOP));
        Valu_tile_noc___024root___eval_initial(&(vlSymsp->TOP));
        Valu_tile_noc___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Valu_tile_noc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Valu_tile_noc::eventsPending() { return false; }

uint64_t Valu_tile_noc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Valu_tile_noc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Valu_tile_noc___024root___eval_final(Valu_tile_noc___024root* vlSelf);

VL_ATTR_COLD void Valu_tile_noc::final() {
    Valu_tile_noc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valu_tile_noc::hierName() const { return vlSymsp->name(); }
const char* Valu_tile_noc::modelName() const { return "Valu_tile_noc"; }
unsigned Valu_tile_noc::threads() const { return 1; }
void Valu_tile_noc::prepareClone() const { contextp()->prepareClone(); }
void Valu_tile_noc::atClone() const {
    contextp()->threadPoolpOnClone();
}
