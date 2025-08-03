#include <mpi.h>
#include "Vcalculator.h"
#include "verilated.h"
#include <svdpi.h>
#include <cstdint>
#include <iostream>
// #include "metro_mpi.cpp"
using namespace std;

const int nitems_all_req = 2;
int blocklengths_all_req[2] = {1, 1};
MPI_Datatype types_all_req[2] = {MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG};
MPI_Datatype mpi_all_type_req;
MPI_Aint offsets_all_req[2];

const int nitems_all_resp = 1;
int blocklengths_all_resp[1] = {1};
MPI_Datatype types_all_resp[1] = {MPI_UNSIGNED_LONG_LONG};
MPI_Datatype mpi_all_type_resp;
MPI_Aint offsets_all_resp[1];

typedef struct
{
    unsigned long long data_0;
    unsigned long long data_1;

} mpi_struct_req;

typedef struct
{
    unsigned long long result;

} mpi_struct_resp;

void initialize()
{
    MPI_Init(NULL, NULL);
    // Initialize the struct data&valid
    offsets_all_req[0] = offsetof(mpi_struct_req, data_0);
    offsets_all_req[1] = offsetof(mpi_struct_req, data_1);
    offsets_all_resp[0] = offsetof(mpi_struct_resp, result);

    MPI_Type_create_struct(nitems_all_req, blocklengths_all_req, offsets_all_req, types_all_req, &mpi_all_type_req);
    MPI_Type_commit(&mpi_all_type_req);
    MPI_Type_create_struct(nitems_all_resp, blocklengths_all_resp, offsets_all_resp, types_all_resp, &mpi_all_type_resp);
    MPI_Type_commit(&mpi_all_type_resp);
}

// MPI finish functions
unsigned short mpi_receive_finish()
{
    unsigned short message;
    int message_len = 1;
    // cout << "[DPI CPP] Block Receive finish from rank: " << origin << endl << std::flush;
    //  MPI_Bcast( void* buffer , MPI_Count count , MPI_Datatype datatype , int root(sender) , MPI_Comm comm);
    MPI_Bcast(&message, message_len, MPI_UNSIGNED_SHORT, 0, MPI_COMM_WORLD);

    return message;
}

void mpi_send_finish()
{
    int dummy = 0;
    MPI_Send(&dummy, 1, MPI_INT, 1, 99, MPI_COMM_WORLD);
}

void mpi_send_request(mpi_struct_req message, int dest, int rank, int flag)
{
    int message_len = 1;
    MPI_Request request;

    // MPI_Send( const void* buf , MPI_Count count , MPI_Datatype datatype , int dest , int tag , MPI_Comm comm);
    MPI_Send(&message, message_len, mpi_all_type_req, dest, flag, MPI_COMM_WORLD);
}

mpi_struct_req mpi_receive_request(int origin, int flag)
{
    int message_len = 1;
    MPI_Status status;
    mpi_struct_req message;

    MPI_Recv(&message, message_len, mpi_all_type_req, origin, flag, MPI_COMM_WORLD, &status);

    return message;
}

void mpi_send_response(mpi_struct_resp message, int dest, int rank, int flag)
{
    int message_len = 1;
    MPI_Request request;

    // MPI_Send( const void* buf , MPI_Count count , MPI_Datatype datatype , int dest , int tag , MPI_Comm comm);
    MPI_Send(&message, message_len, mpi_all_type_resp, dest, flag, MPI_COMM_WORLD);
}

mpi_struct_resp mpi_receive_response(int origin, int flag)
{
    int message_len = 1;
    MPI_Status status;
    mpi_struct_resp message;

    MPI_Recv(&message, message_len, mpi_all_type_resp, origin, flag, MPI_COMM_WORLD, &status);

    return message;
}

int getRank()
{
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    return rank;
}

int getSize()
{
    int size;
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    return size;
}

void finalize(int a)
{
    if (a == 0)
        cout << "Ending Communication from Multiplier!!!" << endl;
    else if (a == 1)
        cout << "Ending Communication from Calculator!!!" << endl;
    // cout << "[DPI CPP] Finalizing" << endl;
    MPI_Finalize();
}

int req_flag = 2;
int resp_flag = 4;

// === MPI Functions ===
void mpi_request(unsigned long long a, unsigned long long b)
{
    mpi_struct_req message;
    message.data_0 = a;
    message.data_1 = b;
    cout << "2. Sending the operands from mpi-dpi-sim.cpp to mpi-lib-mul.cpp" << endl;
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
    cout << "1. Entered DPI-MPI interface!" << endl;
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

    std::cout << "Calculator size: " << size << ", rank: " << rank << std::endl;

    // Test: a = 10, b = 5
    top->a = 10;
    top->b = 3;

    for (int mode = 0; mode <= 3; mode++)
    {
        top->mode = mode;
        cout << "Inside Sim+MPI+DPI" << endl;
        top->eval(); // this is calling Vmultiplier, Idk why
        printf("Mode %d -> Result: %lu\n", mode, top->result);
    }
    mpi_send_finish();
    finalize(1);

    delete top;
    exit(0);
    return 0;
}
