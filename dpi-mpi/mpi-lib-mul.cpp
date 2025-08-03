#include <mpi.h>
#include "metro_mpi.cpp"
#include <iostream>
#include <cstdint>
#include "Vmultiplier.h"
#include "verilated.h"

static Vmultiplier* top = nullptr;

int req_flag = 2;
int resp_flag = 4;

void mpi_multiplier_init() {
    if (!top) {
        top = new Vmultiplier;
        Verilated::traceEverOn(true);
    }
}

void dpi_multiplier_eval2(unsigned long long a, unsigned long long b, unsigned long long* result) {
    // std::cout<<"Inside DPI eval2\n";
    mpi_multiplier_init();
    
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

void mpi_req_serve(){
    mpi_struct_req message;
    mpi_struct_resp response;
    message = mpi_receive_request(0, req_flag);
    dpi_multiplier_eval2(message.data_0, message.data_1, &response.result);
    mpi_send_response(response, 0, 1, resp_flag);
}

int main(){
    bool sim_end = false;
    initialize();

    int rank, size, dest;
    rank = getRank();
    size = getSize();

    std::cout << "multiplier size: " << size << ", rank: " << rank <<  std::endl;

    while(!sim_end){
        if(mpi_receive_finish() != 0) sim_end = true;
        mpi_req_serve();
    }



}