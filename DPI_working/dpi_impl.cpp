#include <svdpi.h>
#include <iostream>
#include <cstdint>
#include "Vmultiplier.h"
#include "verilated.h"

static Vmultiplier* top = nullptr;
static uint64_t last_result = 0;

extern "C" void dpi_multiplier_init() {
    if (!top) {
        top = new Vmultiplier;
        Verilated::traceEverOn(true);
    }
}

extern "C" void dpi_multiplier_send(uint64_t a, uint64_t b) {
    if (!top) dpi_multiplier_init();
    // std::cout<<"Inside DPI Send\n";
    top->a = a;
    top->b = b;
    // std::cout<<"Returning from DPI Send\n";
    top->eval();  // compute
    // last_result = top->result;  // save result for later fetch
}

extern "C" uint64_t dpi_multiplier_eval() {
    // std::cout<<"Inside DPI eval\n";
    // std::cout<<"Returning from DPI eval\n";
    top->final();
    // delete top;
    return top->result;
}

extern "C" void dpi_multiplier_eval2(unsigned long long a, unsigned long long b, unsigned long long* result) {
    // std::cout<<"Inside DPI eval2\n";
    top->a = a;
    top->b = b;
    // std::cout<<"Returning from DPI eval2\n";
    top->eval();  // compute
    *result = top->result;
    // std::cout <<"From DPI wrapper "<< a<<"*"<<b<<" = "<<top->result<<std::endl; 
    top->final();
    return;
    // delete top;
}
