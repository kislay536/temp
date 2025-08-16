// sim.cpp
#include "Vcalculator.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <string>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vcalculator *top = new Vcalculator;

    Verilated::traceEverOn(true);
    VerilatedVcdC *trace = new VerilatedVcdC;
    top->trace(trace, 99);
    trace->open("tb_calculator.vcd");

    const std::string op_names[] = {
        "ADD", "SUB", "MUL", "DIV", "AND", "OR", "XOR", "SLL", "SRL"
    };

    uint64_t a_vals[] = {20, 8, 7};
    uint64_t b_vals[] = {3,  4, 2};

    vluint64_t sim_time = 0;

    // Tick the clock
    auto tick = [&](int n_ticks = 1) {
        for (int i = 0; i < n_ticks; ++i) {
            top->clk = 0;
            top->eval();
            trace->dump(sim_time++);
            top->clk = 1;
            top->eval();
            trace->dump(sim_time++);
        }
    };

    for (int i = 0; i < 3; i++) {
        for (uint8_t mode = 0; mode <= 8; mode++) {
            top->a = a_vals[i];
            top->b = b_vals[i];
            top->mode = mode;
            top->eval(); // Apply new inputs

            // A request can take max 4 hops (2S, 2E), and response max 4 hops (2N, 2W).
            // Let's simulate for 20 cycles to be safe.
            for (int cycle = 0; cycle < 20; ++cycle) {
                tick();
                if (top->valid) {
                    break; // Exit early if result is valid
                }
            }
            
            std::cout << "[test " << i
                      << "] a=" << top->a
                      << " b=" << top->b
                      << " mode=" << int(top->mode)
                      << " (" << op_names[mode] << ")"
                      << " valid=" << int(top->valid)
                      << " result=" << top->result
                      << std::endl;

            // Reset inputs for next test
            top->a = 0;
            top->b = 0;
            top->mode = 0;
            tick(2); // let signals settle
        }
    }

    top->final();
    trace->close();
    delete top;
    delete trace;
    return 0;
}