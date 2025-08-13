#include <mpi.h>
#include "metro_mpi.cpp"
#include <iostream>
#include <cstdint>
#include "Valu_tile_noc.h"
#include "verilated.h"
using namespace std;

static Valu_tile_noc *top = nullptr;

void mpi_alu_tile_noc_init()
{
    if (!top)
    {
        top = new Valu_tile_noc;
        Verilated::traceEverOn(true);
    }
}

void dpi_alu_tile_noc_eval(unsigned int TILE_X, unsigned int TILE_Y, unsigned long long in_a_n, unsigned long long in_b_n, unsigned int in_ctrl_n, bool in_valid_n, unsigned long long in_a_e, unsigned long long in_b_e, unsigned int in_ctrl_e, bool in_valid_e, unsigned long long in_a_s, unsigned long long in_b_s, unsigned int in_ctrl_s, bool in_valid_s, unsigned long long in_a_w, unsigned long long in_b_w, unsigned int in_ctrl_w, bool in_valid_w, unsigned long long host_in_a, unsigned long long host_in_b, unsigned int host_in_ctrl, bool host_in_valid, unsigned long long *out_a_n, unsigned long long *out_b_n, unsigned int *out_ctrl_n, bool *out_valid_n, unsigned long long *out_a_e, unsigned long long *out_b_e, unsigned int *out_ctrl_e, bool *out_valid_e, unsigned long long *out_a_s, unsigned long long *out_b_s, unsigned int *out_ctrl_s, bool *out_valid_s, unsigned long long *out_a_w, unsigned long long *out_b_w, unsigned int *out_ctrl_w, bool *out_valid_w, unsigned long long *host_out_a, bool *host_out_valid)
{
    // std::cout<<"Inside DPI eval2\n";
    mpi_alu_tile_noc_init();

    top->TILE_X = TILE_X;
    top->TILE_Y = TILE_Y;
    top->in_a_n = in_a_n;
    top->in_b_n = in_b_n;
    top->in_ctrl_n = in_ctrl_n;
    top->in_valid_n = in_valid_n;
    top->in_a_e = in_a_e;
    top->in_b_e = in_b_e;
    top->in_ctrl_e = in_ctrl_e;
    top->in_valid_e = in_valid_e;
    top->in_a_s = in_a_s;
    top->in_b_s = in_b_s;
    top->in_ctrl_s = in_ctrl_s;
    top->in_valid_s = in_valid_s;
    top->in_a_w = in_a_w;
    top->in_b_w = in_b_w;
    top->in_ctrl_w = in_ctrl_w;
    top->in_valid_w = in_valid_w;
    top->host_in_a = host_in_a;
    top->host_in_b = host_in_b;
    top->host_in_ctrl = host_in_ctrl;
    top->host_in_valid = host_in_valid;

    // std::cout<<"Returning from DPI eval2\n";
    top->eval(); // compute

    *out_a_n = top->out_a_n;
    *out_b_n = top->out_b_n;
    *out_ctrl_n = top->out_ctrl_n;
    *out_valid_n = top->out_valid_n;

    *out_a_e = top->out_a_e;
    *out_b_e = top->out_b_e;
    *out_ctrl_e = top->out_ctrl_e;
    *out_valid_e = top->out_valid_e;

    *out_a_s = top->out_a_s;
    *out_b_s = top->out_b_s;
    *out_ctrl_s = top->out_ctrl_s;
    *out_valid_s = top->out_valid_s;

    *out_a_w = top->out_a_w;
    *out_b_w = top->out_b_w;
    *out_ctrl_w = top->out_ctrl_w;
    *out_valid_w = top->out_valid_w;

    *host_out_a = top->host_out_a;
    *host_out_valid = top->host_out_valid;

    // std::cout <<"From DPI wrapper "<< a<<"*"<<b<<" = "<<top->result<<std::endl;
    top->final();
    return;
    // delete top;
}

void mpi_packet_serve(int flag)
{
    cout << "==== ==== alu_tile_noc Ready to serve any requests!!! ==== ====" << endl;
    mpi_all_req req_input;
    mpi_all_resp resp_output;

    req_input = mpi_receive_request(0, flag);

    dpi_alu_tile_noc_eval(req_input.TILE_X, req_input.TILE_Y, req_input.in_a_n, req_input.in_b_n, req_input.in_ctrl_n, req_input.in_valid_n, req_input.in_a_e, req_input.in_b_e, req_input.in_ctrl_e, req_input.in_valid_e, req_input.in_a_s, req_input.in_b_s, req_input.in_ctrl_s, req_input.in_valid_s, req_input.in_a_w, req_input.in_b_w, req_input.in_ctrl_w, req_input.in_valid_w, req_input.host_in_a, req_input.host_in_b, req_input.host_in_ctrl, req_input.host_in_valid, &resp_output.out_a_n, &resp_output.out_b_n, &resp_output.out_ctrl_n, &resp_output.out_valid_n, &resp_output.out_a_e, &resp_output.out_b_e, &resp_output.out_ctrl_e, &resp_output.out_valid_e, &resp_output.out_a_s, &resp_output.out_b_s, &resp_output.out_ctrl_s, &resp_output.out_valid_s, &resp_output.out_a_w, &resp_output.out_b_w, &resp_output.out_ctrl_w, &resp_output.out_valid_w, &resp_output.host_out_a, &resp_output.host_out_valid);

    mpi_send_response(resp_output, 0, 6, flag);
}

int main()
{
    bool sim_end = false;
    initialize();

    int rank, size, dest;
    rank = getRank();
    size = getSize();

    std::cout << "alu_tile_noc size: " << size << ", rank: " << rank << std::endl;

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
        MPI_Iprobe(0, 699, MPI_COMM_WORLD, &flag, &status);

        if (flag)
        {
            int dummy;
            // MPI_Recv( void* buf , MPI_Count count , MPI_Datatype datatype , int source , int tag , MPI_Comm comm , MPI_Status* status);
            MPI_Recv(&dummy, 1, MPI_INT, 0, 699, MPI_COMM_WORLD, &status);
            std::cout << "Shutdown signal received!" << std::endl;
            sim_end = true;
            break;
        }

        MPI_Iprobe(0, tile5, MPI_COMM_WORLD, &req_available, &status);
        std::cout << "==== ==== alu_tile_noc Waiting for Requests!!! ==== ====" << std::endl;
        if (req_available)
            mpi_packet_serve(tile5); // serve other requests
    }
    // cout << "About to finalise from library!!!" << endl;
    std::cout << "tile "<< rank <<" ran for " << count << " cycles" << endl;
    finalize();
    exit(0);
}