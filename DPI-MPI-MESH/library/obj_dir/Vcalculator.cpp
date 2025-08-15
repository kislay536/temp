// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcalculator__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcalculator::Vcalculator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcalculator__Syms(contextp(), _vcname__, this)}
    , mode{vlSymsp->TOP.mode}
    , valid{vlSymsp->TOP.valid}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , result{vlSymsp->TOP.result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcalculator::Vcalculator(const char* _vcname__)
    : Vcalculator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcalculator::~Vcalculator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcalculator___024root___eval_debug_assertions(Vcalculator___024root* vlSelf);
#endif  // VL_DEBUG
void Vcalculator___024root___eval_static(Vcalculator___024root* vlSelf);
void Vcalculator___024root___eval_initial(Vcalculator___024root* vlSelf);
void Vcalculator___024root___eval_settle(Vcalculator___024root* vlSelf);
void Vcalculator___024root___eval(Vcalculator___024root* vlSelf);

void Vcalculator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcalculator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcalculator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcalculator___024root___eval_static(&(vlSymsp->TOP));
        Vcalculator___024root___eval_initial(&(vlSymsp->TOP));
        Vcalculator___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcalculator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcalculator::eventsPending() { return false; }

uint64_t Vcalculator::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcalculator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcalculator___024root___eval_final(Vcalculator___024root* vlSelf);

VL_ATTR_COLD void Vcalculator::final() {
    Vcalculator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcalculator::hierName() const { return vlSymsp->name(); }
const char* Vcalculator::modelName() const { return "Vcalculator"; }
unsigned Vcalculator::threads() const { return 1; }
void Vcalculator::prepareClone() const { contextp()->prepareClone(); }
void Vcalculator::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcalculator::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcalculator___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcalculator___024root__trace_init_top(Vcalculator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcalculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalculator___024root*>(voidSelf);
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcalculator___024root__trace_decl_types(tracep);
    Vcalculator___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcalculator___024root__trace_register(Vcalculator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcalculator::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcalculator::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcalculator___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
