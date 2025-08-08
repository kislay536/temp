#include <mpi.h>
#include "metro_mpi.cpp"
#include <iostream>
#include <cstdint>
#include "Vsubtractor.h"
#include "verilated.h"

static Vsubtractor *top_sub = nullptr;

int req_flag = 2;
int resp_flag = 4;

void mpi_subtractor_init()
{
    if (!top_sub)
    {
        top_sub = new Vsubtractor;
        Verilated::traceEverOn(true);
    }
}

void dpi_subtractor_eval2(unsigned long long a, unsigned long long b, unsigned long long *result)
{
    // std::cout<<"Inside DPI eval2\n";
    mpi_subtractor_init();

    top_sub->a = a;
    top_sub->b = b;
    // std::cout<<"Returning from DPI eval2\n";
    top_sub->eval(); // compute
    *result = top_sub->result;
    // std::cout <<"From DPI wrapper "<< a<<"*"<<b<<" = "<<top_sub->result<<std::endl;
    top_sub->final();
    return;
    // delete top_sub;
}

void mpi_req_serve()
{
    cout << "==== ==== Ready to serve any requests!!! ==== ====" << endl;
    mpi_struct_req message;
    mpi_struct_resp response;
    message = mpi_receive_request(0, req_flag);
    dpi_subtractor_eval2(message.data_0, message.data_1, &response.result);
    mpi_send_response(response, 0, 1, resp_flag);
}

int main()
{
    bool sim_end = false;
    initialize();

    int rank, size, dest;
    rank = getRank();
    size = getSize();

    std::cout << "subtractor size: " << size << ", rank: " << rank << std::endl;

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
        MPI_Iprobe(0, 499, MPI_COMM_WORLD, &flag, &status);

        if (flag)
        {
            int dummy;
            MPI_Recv(&dummy, 1, MPI_INT, 0, 499, MPI_COMM_WORLD, &status);
            std::cout << "Shutdown signal received!" << std::endl;
            sim_end = true;
            break;
        }

        MPI_Iprobe(0, req_flag, MPI_COMM_WORLD, &req_available, &status);
        std::cout << "==== ====Subtractor Waiting for Requests!!! ==== ====" << std::endl;
        if (req_available)
            mpi_req_serve(); // serve other requests
    }
    // cout << "About to finalise from library!!!" << endl;
    std::cout<<"Subtractor ran for "<<count<<" cycles"<<endl;
    finalize(4);
    exit(0);
}