#include <mpi.h>
#include "Vcalculator.h"
#include "verilated.h"
#include <svdpi.h>
#include <cstdint>
#include <iostream>
using namespace std;

typedef struct
{
    unsigned long long data_0;
    unsigned long long data_1;

} mpi_struct_req;

typedef struct
{
    unsigned long long result;

} mpi_struct_resp;

void initialize();
void mpi_send_request(mpi_struct_req message, int dest, int rank, int flag);
mpi_struct_resp mpi_receive_response(int origin, int flag);
int getRank();
int getSize();
void finalize(int a);
void mpi_send_finish();

int req_flag = 2;
int resp_flag = 4;

// === MPI Functions ===
void mpi_request(unsigned long long a, unsigned long long b)
{
    mpi_struct_req message;
    message.data_0 = a;
    message.data_1 = b;
    // cout << "2. Sending the operands from mpi-dpi-sim.cpp to mpi-lib-mul.cpp" << endl;
    mpi_send_request(message, 1, 0, req_flag); // have to figure out
}

int mpi_response()
{
    mpi_struct_resp message;
    message = mpi_receive_response(1, resp_flag);
    return message.result;
}

// === DPI-MPI Conversion ===
extern "C" void dpi_multiplier(unsigned long long a, unsigned long long b, unsigned long long *result)
{
    // cout << "1. Entered DPI-MPI interface!" << endl;
    mpi_request(a, b);
    *result = mpi_response();
    return;
}

// === Sim + MPI ===
int main(int argc, char **argv, char **env)
{
    Verilated::commandArgs(argc, argv);
    Vcalculator *top = new Vcalculator;
    initialize();

    int rank, size, dest;
    rank = getRank();
    size = getSize();

    // std::cout << "Calculator size: " << size << ", rank: " << rank << std::endl;

    // Test: a = 10, b = 5
    top->a = 30;
    top->b = 21;

    for (int mode = 0; mode <= 3; mode++)
    {
        top->mode = mode;
        // cout << "Inside Sim+MPI+DPI" << endl;
        top->eval(); // this is calling Vmultiplier, Idk why
        printf("Mode %d", mode);
        if (mode == 0)
            printf(" (Add)");
        else if (mode == 1)
            printf(" (Sub)");
        else if (mode == 2)
            printf(" (Mul)");
        else if (mode == 3)
            printf(" (Div)");
        printf(" -> Result: %lu\n", top->result);
    }
    mpi_send_finish();
    finalize(1);

    delete top;
    exit(0);
    return 0;
}
