#include <mpi.h>
#include <iostream>
using namespace std;

const int nitems_all_req = 9;
int blocklengths_all_req[9] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
MPI_Datatype types_all_req[9] = {MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG};
MPI_Datatype mpi_all_type_req;
MPI_Aint offsets_all_req[9];

const int nitems_all_resp = 5;
int blocklengths_all_resp[5] = {1, 1, 1, 1, 1};
MPI_Datatype types_all_resp[5] = {MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG_LONG};
MPI_Datatype mpi_all_type_resp;
MPI_Aint offsets_all_resp[5];

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

void initialize()
{
    MPI_Init(NULL, NULL);
    // Initialize the struct data&valid
    offsets_all_req[0] = offsetof(mpi_struct_req, data_0);
    offsets_all_req[1] = offsetof(mpi_struct_req, data_1);
    offsets_all_req[2] = offsetof(mpi_struct_req, start);
    offsets_all_req[3] = offsetof(mpi_struct_req, ack1);
    offsets_all_req[4] = offsetof(mpi_struct_req, ack2);
    offsets_all_req[5] = offsetof(mpi_struct_req, ack3);
    offsets_all_req[6] = offsetof(mpi_struct_req, work1);
    offsets_all_req[7] = offsetof(mpi_struct_req, work2);
    offsets_all_req[8] = offsetof(mpi_struct_req, work3);
    offsets_all_resp[0] = offsetof(mpi_struct_resp, ack1);
    offsets_all_resp[1] = offsetof(mpi_struct_resp, ack2);
    offsets_all_resp[2] = offsetof(mpi_struct_resp, ack3);
    offsets_all_resp[3] = offsetof(mpi_struct_resp, working);
    offsets_all_resp[4] = offsetof(mpi_struct_resp, result);

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
    // MPI_Send( const void* buf , MPI_Count count , MPI_Datatype datatype , int dest , int tag , MPI_Comm comm);
    MPI_Send(&dummy, 1, MPI_INT, 1, 199, MPI_COMM_WORLD);
    MPI_Send(&dummy, 1, MPI_INT, 2, 299, MPI_COMM_WORLD);
    MPI_Send(&dummy, 1, MPI_INT, 3, 399, MPI_COMM_WORLD);
    MPI_Send(&dummy, 1, MPI_INT, 4, 499, MPI_COMM_WORLD);
}

void mpi_send_request(mpi_struct_req message, int dest, int rank, int flag)
{
    int message_len = 1;
    MPI_Request request;
    cout << "Sending Message" << endl;
    // MPI_Send( const void* buf , MPI_Count count , MPI_Datatype datatype , int dest , int tag , MPI_Comm comm);
    MPI_Send(&message, message_len, mpi_all_type_req, dest, flag, MPI_COMM_WORLD);
}

mpi_struct_req mpi_receive_request(int origin, int flag)
{
    // cout << "3. Received Request!!!" << endl;
    int message_len = 1;
    MPI_Status status;
    mpi_struct_req message;
    // MPI_Recv( void* buf , MPI_Count count , MPI_Datatype datatype , int source , int tag , MPI_Comm comm , MPI_Status* status);
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
    if(a==0) cout<<"Ending Communication from Calculator!!!"<<endl;
    else if(a==1) cout<<"Ending Communication from Divider!!!"<<endl;
    else if(a==2) cout<<"Ending Communication from Multiplier!!!"<<endl;
    else if(a==3) cout<<"Ending Communication from Adder!!!"<<endl;
    else if(a==4) cout<<"Ending Communication from Subtractor!!!"<<endl;
    // cout << "[DPI CPP] Finalizing" << endl;
    MPI_Finalize();
}
