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

void dpi_multiplier_eval2(unsigned long long a, unsigned long long b, unsigned int start, unsigned int ack_in_add, unsigned int ack_in_sub, unsigned int ack_in_div, unsigned int add_working, unsigned int sub_working, unsigned int div_working, unsigned int *ack_to_add, unsigned int *ack_to_sub, unsigned int *ack_to_div, unsigned int *working, unsigned long long *result)
{
    // std::cout<<"Inside DPI eval2\n";
    mpi_multiplier_init();

    top_mul->a = a;
    top_mul->b = b;
    top_mul->start = start;
    top_mul->ack_in_add = ack_in_add;
    top_mul->ack_in_sub = ack_in_sub;
    top_mul->ack_in_div = ack_in_div;
    top_mul->add_working = add_working;
    top_mul->sub_working = sub_working;
    top_mul->div_working = div_working;
    // std::cout<<"Returning from DPI eval2\n";
    top_mul->eval(); // compute
    *ack_to_add = top_mul->ack_to_add;
    *ack_to_sub = top_mul->ack_to_sub;
    *ack_to_div = top_mul->ack_to_div;
    *working = top_mul->working;
    *result = top_mul->result;
    // std::cout <<"From DPI wrapper "<< a<<"*"<<b<<" = "<<top_mul->result<<std::endl;
    top_mul->final();
    return;
    // delete top_mul;
}

void mpi_req_serve()
{
    cout << "==== ==== Multiplier Ready to serve any requests!!! ==== ====" << endl;
    mpi_struct_req message;
    mpi_struct_resp response;
    message = mpi_receive_request(0, req_flag);
    dpi_multiplier_eval2(message.data_0, message.data_1, message.start, message.ack1, message.ack2, message.ack3, message.work1, message.work2, message.work3, &response.ack1, &response.ack2, &response.ack3, &response.working, &response.result);
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
    int count = 0;
    while (!sim_end)
    {
        count++;
        int flag = 0;
        int req_available = 0;
        MPI_Status status;

        // Non-blocking check for shutdown message from rank 0
        // MPI_Iprobe( int source , int tag , MPI_Comm comm , int* flag , MPI_Status* status);
        MPI_Iprobe(0, 299, MPI_COMM_WORLD, &flag, &status);

        if (flag)
        {
            int dummy;
            // MPI_Recv( void* buf , MPI_Count count , MPI_Datatype datatype , int source , int tag , MPI_Comm comm , MPI_Status* status);
            MPI_Recv(&dummy, 1, MPI_INT, 0, 299, MPI_COMM_WORLD, &status);
            std::cout << "Shutdown signal received!" << std::endl;
            sim_end = true;
            break;
        }

        MPI_Iprobe(0, req_flag, MPI_COMM_WORLD, &req_available, &status);
        std::cout << "==== ==== Multiplier Waiting for Requests!!! ==== ====" << std::endl;
        if (req_available)
            mpi_req_serve(); // serve other requests
    }
    // cout << "About to finalise from library!!!" << endl;
    std::cout<<"Multipler ran for "<<count<<" cycles"<<endl;
    finalize(2);
    exit(0);
}