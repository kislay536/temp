#include "Vcalculator.h"
#include "verilated.h"
#include <string>

const char *mode_desc[] = {
    "add", "sub", "mul", "div", "mod", "and", "or", "xor", "a > b"};

const char *op_symbols[] = {
    "+", "-", "*", "/", "%", "&", "|", "^", ">"};

int main(int argc, char **argv, char **env)
{
    Verilated::commandArgs(argc, argv);
    Vcalculator *top = new Vcalculator;

    // Test inputs
    top->a = 10;
    top->b = 5;

    for (int mode = 0; mode <= 8; mode++)
    {
        top->mode = mode;
        top->eval();

        printf("%lu %s %lu (Mode %d) -> Result: %lu      // %s\n",
               top->a,
               op_symbols[mode],
               top->b,
               mode,
               top->result,
               mode_desc[mode]);
    }

    delete top;
    return 0;
}
