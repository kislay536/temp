
#include "Vcalculator.h"
#include "verilated.h"
#include <svdpi.h>
#include <cstdint>
#include <iostream>
#include "metro_mpi.cpp"
using namespace std;

int req_flag = 2;
int resp_flag = 4;

// === MPI Functions ===
void mpi_request(unsigned long long a, unsigned long long b){
    mpi_struct_req message;
    message.data_0 = a;
    message.data_1 = b;
    cout<<"Sending the operands!!"<<endl;
    mpi_send_request(message, 1, 0, req_flag); // have to figure out
}

int mpi_response(){
    mpi_struct_resp message;
    message = mpi_receive_response(1, resp_flag);
    return message.result;
}

// === DPI-MPI Conversion ===
extern "C" void dpi_multiplier(unsigned long long a, unsigned long long b, unsigned long long* result) {
    cout<<"Entered DPI-MPI interface!"<<endl;
    mpi_request(a,b);
    *result = mpi_response();
    return;
}

// === Sim + MPI ===
int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vcalculator* top = new Vcalculator;
    initialize();

    int rank, size, dest;
    rank = getRank();
    size = getSize();

    std::cout << "Calculator size: " << size << ", rank: " << rank <<  std::endl;

    // Test: a = 10, b = 5
    top->a = 10;
    top->b = 3;

    for (int mode = 0; mode <= 3; mode++) {
        top->mode = mode;
        top->eval();
        printf("Mode %d -> Result: %lu\n", mode, top->result);
    }
    mpi_send_finish(1, rank);
    finalize();

    delete top;
    return 0;
}
