#include "Vcalculator.h"
#include "verilated.h"

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vcalculator* top = new Vcalculator;

    // Test: a = 10, b = 5
    top->a = 10;
    top->b = 3;

    for (int mode = 0; mode <= 3; mode++) {
        top->mode = mode;
        top->eval();
        printf("Mode %d -> Result: %lu\n", mode, top->result);
    }

    delete top;
    return 0;
}
