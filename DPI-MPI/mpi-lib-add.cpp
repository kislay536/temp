#include <mpi.h>
#include "metro_mpi.cpp"
#include <iostream>
#include <cstdint>
#include "Vadder.h"
#include "verilated.h"

static Vadder *top_add = nullptr;

int req_flag = 2;
int resp_flag = 4;

void mpi_adder_init()
{
    if (!top_add)
    {
        top_add = new Vadder;
        Verilated::traceEverOn(true);
    }
}

void dpi_adder_eval2(unsigned long long a, unsigned long long b, unsigned long long *result)
{
    // std::cout<<"Inside DPI eval2\n";
    mpi_adder_init();

    top_add->a = a;
    top_add->b = b;
    // std::cout<<"Returning from DPI eval2\n";
    top_add->eval(); // compute
    *result = top_add->result;
    // std::cout <<"From DPI wrapper "<< a<<"*"<<b<<" = "<<top_add->result<<std::endl;
    top_add->final();
    return;
    // delete top_add;
}

void mpi_req_serve()
{
    cout << "==== ==== Ready to serve any requests!!! ==== ====" << endl;
    mpi_struct_req message;
    mpi_struct_resp response;
    message = mpi_receive_request(0, req_flag);
    dpi_adder_eval2(message.data_0, message.data_1, &response.result);
    mpi_send_response(response, 0, 1, resp_flag);
}

int main()
{
    bool sim_end = false;
    initialize();

    int rank, size, dest;
    rank = getRank();
    size = getSize();

    std::cout << "adder size: " << size << ", rank: " << rank << std::endl;

    MPI_Status status;
    int flag = 0;
    int count = 0;

    while (!sim_end)
    {
        count++;
        int flag = 0;
        int req_available = 0;
        MPI_Status status;

        // Non-blocking check for shutdown message from rank 0
        // MPI_Iprobe( int source , int tag , MPI_Comm comm , int* flag , MPI_Status* status);
        MPI_Iprobe(0, 399, MPI_COMM_WORLD, &flag, &status);

        if (flag)
        {
            int dummy;
            MPI_Recv(&dummy, 1, MPI_INT, 0, 399, MPI_COMM_WORLD, &status);
            std::cout << "Shutdown signal received!" << std::endl;
            sim_end = true;
            break;
        }

        MPI_Iprobe(0, req_flag, MPI_COMM_WORLD, &req_available, &status);
        std::cout << "==== ==== Adder Waiting for Requests!!! ==== ====" << std::endl;
        if (req_available)
            mpi_req_serve(); // serve other requests
    }
    // cout << "About to finalise from library!!!" << endl;
    std::cout<<"Adder ran for "<<count<<" cycles"<<endl;
    finalize(3);
    exit(0);
}