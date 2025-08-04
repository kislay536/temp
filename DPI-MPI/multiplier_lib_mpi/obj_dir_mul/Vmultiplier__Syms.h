// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMULTIPLIER__SYMS_H_
#define VERILATED_VMULTIPLIER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmultiplier.h"

// INCLUDE MODULE CLASSES
#include "Vmultiplier___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmultiplier__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmultiplier* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmultiplier___024root          TOP;

    // CONSTRUCTORS
    Vmultiplier__Syms(VerilatedContext* contextp, const char* namep, Vmultiplier* modelp);
    ~Vmultiplier__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
