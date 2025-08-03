#include <mpi.h>
#include "metro_mpi.cpp"
#include <iostream>
#include <cstdint>
#include "Vmultiplier.h"
#include "verilated.h"

static Vmultiplier *top_mul = nullptr;

int req_flag = 2;
int resp_flag = 4;

void mpi_multiplier_init()
{
    if (!top_mul)
    {
        top_mul = new Vmultiplier;
        Verilated::traceEverOn(true);
    }
}

void dpi_multiplier_eval2(unsigned long long a, unsigned long long b, unsigned long long *result)
{
    // std::cout<<"Inside DPI eval2\n";
    mpi_multiplier_init();

    top_mul->a = a;
    top_mul->b = b;
    // std::cout<<"Returning from DPI eval2\n";
    top_mul->eval(); // compute
    *result = top_mul->result;
    // std::cout <<"From DPI wrapper "<< a<<"*"<<b<<" = "<<top_mul->result<<std::endl;
    top_mul->final();
    return;
    // delete top_mul;
}

void mpi_req_serve()
{
    cout << "==== ==== Ready to serve any requests!!! ==== ====" << endl;
    mpi_struct_req message;
    mpi_struct_resp response;
    message = mpi_receive_request(0, req_flag);
    dpi_multiplier_eval2(message.data_0, message.data_1, &response.result);
    mpi_send_response(response, 0, 1, resp_flag);
}

int main()
{
    bool sim_end = false;
    initialize();

    int rank, size, dest;
    rank = getRank();
    size = getSize();

    std::cout << "multiplier size: " << size << ", rank: " << rank << std::endl;

    MPI_Status status;
    int flag = 0;

    while (!sim_end)
    {

        // Check if a message is available on any source with tag 99 (for shutdown)
        // MPI_Iprobe( int source , int tag , MPI_Comm comm , int* flag , MPI_Status* status);
        MPI_Iprobe(0, 99, MPI_COMM_WORLD, &flag, &status);
        // if(mpi_receive_finish() != 0) sim_end = true;  //potentially wrong; have to do something for this

        if (flag)
        {
            int dummy;
            // MPI_Recv( void* buf , MPI_Count count , MPI_Datatype datatype , int source , int tag , MPI_Comm comm , MPI_Status* status);
            MPI_Recv(&dummy, 1, MPI_INT, 0, 99, MPI_COMM_WORLD, &status);
            std::cout << "Shutdown signal received!" << std::endl;
            sim_end = true;
            break;
        }

        cout << "==== ==== Waiting for Requests!!! ==== ====" << endl;
        mpi_req_serve();
    }
    cout << "About to finalise from library!!!" << endl;
    finalize(0);
    exit(0);
}