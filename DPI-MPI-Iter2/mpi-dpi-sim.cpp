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
    unsigned int start;
    unsigned int ack1;
    unsigned int ack2;
    unsigned int ack3;
    unsigned int work1;
    unsigned int work2;
    unsigned int work3;

} mpi_struct_req;

typedef struct
{
    unsigned int ack1;
    unsigned int ack2;
    unsigned int ack3;
    unsigned int working;
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
void mpi_request(unsigned long long a, unsigned long long b, unsigned int start, unsigned int ack_in_add, unsigned int ack_in_sub, unsigned int ack_in_div, unsigned int add_working, unsigned int sub_working, unsigned int div_working, int dest)
{
    mpi_struct_req message;
    message.data_0 = a;
    message.data_1 = b;
    message.start = start;
    message.ack1 = ack_in_add;
    message.ack2 = ack_in_sub;
    message.ack3 = ack_in_div;
    message.work1 = add_working;
    message.work2 = sub_working;
    message.work3 = div_working;
    cout << "2. Sending the operands from mpi-dpi-sim.cpp to mpi-lib-mul.cpp" << endl;
    mpi_send_request(message, dest, 0, req_flag); // have to figure out
}

mpi_struct_resp mpi_response(int origin)
{
    mpi_struct_resp message;
    message = mpi_receive_response(origin, resp_flag);
    return message;
}

// === DPI-MPI Conversion ===
extern "C" void dpi_multiplier(unsigned long long a, unsigned long long b, unsigned int start, unsigned int ack_in_add, unsigned int ack_in_sub, unsigned int ack_in_div, unsigned int add_working, unsigned int sub_working, unsigned int div_working, unsigned int *ack_to_add, unsigned int *ack_to_sub, unsigned int *ack_to_div, unsigned int *working, unsigned long long *result)
{
    mpi_struct_resp resp_message;
    cout << "1. Entered DPI-MPI interface for multiplier!" << endl;
    mpi_request(a, b, start, ack_in_add, ack_in_sub, ack_in_div, add_working, sub_working, div_working, 2);
    resp_message = mpi_response(2);
    *ack_to_add = resp_message.ack1;
    *ack_to_sub = resp_message.ack2;
    *ack_to_div = resp_message.ack3;
    *working = resp_message.working;
    *result = resp_message.working;
    return;
}

extern "C" void dpi_divider(unsigned long long a, unsigned long long b, unsigned long long *result)
{
    // cout << "1. Entered DPI-MPI interface!" << endl;
    // mpi_request(a, b, 1);
    // *result = mpi_response(1);
    return;
}

extern "C" void dpi_adder(unsigned long long a, unsigned long long b, unsigned long long *result)
{
    // cout << "1. Entered DPI-MPI interface!" << endl;
    // mpi_request(a, b, 3);
    // *result = mpi_response(3);
    return;
}

extern "C" void dpi_subtractor(unsigned long long a, unsigned long long b, unsigned long long *result)
{
    // cout << "1. Entered DPI-MPI interface!" << endl;
    // mpi_request(a, b, 4);
    // *result = mpi_response(4);
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

    std::cout << "Calculator size: " << size << ", rank: " << rank << std::endl;

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
    finalize(0);

    delete top;
    exit(0);
    return 0;
}
