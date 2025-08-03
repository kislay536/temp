// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmultiplier__pch.h"

//============================================================
// Constructors

Vmultiplier::Vmultiplier(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmultiplier__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , result{vlSymsp->TOP.result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmultiplier::Vmultiplier(const char* _vcname__)
    : Vmultiplier(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmultiplier::~Vmultiplier() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmultiplier___024root___eval_debug_assertions(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG
void Vmultiplier___024root___eval_static(Vmultiplier___024root* vlSelf);
void Vmultiplier___024root___eval_initial(Vmultiplier___024root* vlSelf);
void Vmultiplier___024root___eval_settle(Vmultiplier___024root* vlSelf);
void Vmultiplier___024root___eval(Vmultiplier___024root* vlSelf);

void Vmultiplier::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmultiplier::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmultiplier___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmultiplier___024root___eval_static(&(vlSymsp->TOP));
        Vmultiplier___024root___eval_initial(&(vlSymsp->TOP));
        Vmultiplier___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmultiplier___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmultiplier::eventsPending() { return false; }

uint64_t Vmultiplier::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmultiplier::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmultiplier___024root___eval_final(Vmultiplier___024root* vlSelf);

VL_ATTR_COLD void Vmultiplier::final() {
    Vmultiplier___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmultiplier::hierName() const { return vlSymsp->name(); }
const char* Vmultiplier::modelName() const { return "Vmultiplier"; }
unsigned Vmultiplier::threads() const { return 1; }
void Vmultiplier::prepareClone() const { contextp()->prepareClone(); }
void Vmultiplier::atClone() const {
    contextp()->threadPoolpOnClone();
}
