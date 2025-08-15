#include <mpi.h>
#include <iostream>
using namespace std;

// int tile0 = 10;
// int tile1 = 11;
// int tile2 = 12;
// int tile3 = 13;
// int tile4 = 14;
// int tile5 = 15;
// int tile6 = 16;
// int tile7 = 17;
// int tile8 = 18;

/*
Let's have tileid and x, y coordinate in the initialisation of the tiile model
* It would be better if I broadcast the messages and control it using tags instead of point to point communication
*/

const int nitems_packet = 4;
int blocklengths_packet[4] = {1, 1, 1, 1};
MPI_Datatype types_packet[4] = {MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL};
MPI_Datatype mpi_packet_common;
MPI_Aint offsets_packet[4];

const int nitems_init = 2;
int blocklengths_init[2] = {1, 1};
MPI_Datatype types_init[2] = {MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG};
MPI_Datatype mpi_init_common;
MPI_Aint offsets_init[2];

const int nitems_all = 40;
int blocklengths_all[40] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
MPI_Datatype types_all[40] = {MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_C_BOOL};
MPI_Datatype mpi_all_common;
MPI_Aint offsets_all[40];

const int nitems_all_req = 22;
int blocklengths_all_req[22] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
MPI_Datatype types_all_req[22] = {MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL};
MPI_Datatype mpi_all_req_common;
MPI_Aint offsets_all_req[22];

const int nitems_all_resp = 18;
int blocklengths_all_resp[18] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
MPI_Datatype types_all_resp[18] = {
    MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG_LONG, MPI_UNSIGNED_LONG, MPI_C_BOOL, MPI_UNSIGNED_LONG_LONG, MPI_C_BOOL};
MPI_Datatype mpi_all_resp_common;
MPI_Aint offsets_all_resp[18];

typedef struct
{
    unsigned long long a;
    unsigned long long b;
    unsigned int ctrl;
    bool valid;

} mpi_packet;

typedef struct
{
    unsigned int tile_x;
    unsigned int tile_y;

} mpi_init;

typedef struct
{
    unsigned int TILE_X;
    unsigned int TILE_Y;
    unsigned long long in_a_n;
    unsigned long long in_b_n;
    unsigned int in_ctrl_n;
    bool in_valid_n;
    unsigned long long in_a_e;
    unsigned long long in_b_e;
    unsigned int in_ctrl_e;
    bool in_valid_e;
    unsigned long long in_a_s;
    unsigned long long in_b_s;
    unsigned int in_ctrl_s;
    bool in_valid_s;
    unsigned long long in_a_w;
    unsigned long long in_b_w;
    unsigned int in_ctrl_w;
    bool in_valid_w;
    unsigned long long host_in_a;
    unsigned long long host_in_b;
    unsigned int host_in_ctrl;
    bool host_in_valid;
    unsigned long long out_a_n;
    unsigned long long out_b_n;
    unsigned int out_ctrl_n;
    bool out_valid_n;
    unsigned long long out_a_e;
    unsigned long long out_b_e;
    unsigned int out_ctrl_e;
    bool out_valid_e;
    unsigned long long out_a_s;
    unsigned long long out_b_s;
    unsigned int out_ctrl_s;
    bool out_valid_s;
    unsigned long long out_a_w;
    unsigned long long out_b_w;
    unsigned int out_ctrl_w;
    bool out_valid_w;
    unsigned long long host_out_a;
    bool host_out_valid;

} mpi_all;

typedef struct
{
    unsigned int TILE_X;
    unsigned int TILE_Y;
    unsigned long long in_a_n;
    unsigned long long in_b_n;
    unsigned int in_ctrl_n;
    bool in_valid_n;
    unsigned long long in_a_e;
    unsigned long long in_b_e;
    unsigned int in_ctrl_e;
    bool in_valid_e;
    unsigned long long in_a_s;
    unsigned long long in_b_s;
    unsigned int in_ctrl_s;
    bool in_valid_s;
    unsigned long long in_a_w;
    unsigned long long in_b_w;
    unsigned int in_ctrl_w;
    bool in_valid_w;
    unsigned long long host_in_a;
    unsigned long long host_in_b;
    unsigned int host_in_ctrl;
    bool host_in_valid;
} mpi_all_req;

typedef struct
{
    unsigned long long out_a_n;
    unsigned long long out_b_n;
    unsigned int out_ctrl_n;
    bool out_valid_n;
    unsigned long long out_a_e;
    unsigned long long out_b_e;
    unsigned int out_ctrl_e;
    bool out_valid_e;
    unsigned long long out_a_s;
    unsigned long long out_b_s;
    unsigned int out_ctrl_s;
    bool out_valid_s;
    unsigned long long out_a_w;
    unsigned long long out_b_w;
    unsigned int out_ctrl_w;
    bool out_valid_w;
    unsigned long long host_out_a;
    bool host_out_valid;

} mpi_all_resp;

extern void initialize()
{
    MPI_Init(NULL, NULL);
    // Initialize the struct data&valid
    offsets_packet[0] = offsetof(mpi_packet, a);
    offsets_packet[1] = offsetof(mpi_packet, b);
    offsets_packet[2] = offsetof(mpi_packet, ctrl);
    offsets_packet[3] = offsetof(mpi_packet, valid);

    MPI_Type_create_struct(nitems_packet, blocklengths_packet, offsets_packet, types_packet, &mpi_packet_common);
    MPI_Type_commit(&mpi_packet_common);

    // Initialize the struct data&valid
    offsets_init[0] = offsetof(mpi_init, tile_x);
    offsets_init[1] = offsetof(mpi_init, tile_y);

    MPI_Type_create_struct(nitems_init, blocklengths_init, offsets_init, types_init, &mpi_init_common);
    MPI_Type_commit(&mpi_init_common);

    // Initialize the struct data&valid
    offsets_all[0] = offsetof(mpi_all, TILE_X);
    offsets_all[1] = offsetof(mpi_all, TILE_Y);

    offsets_all[2] = offsetof(mpi_all, in_a_n);
    offsets_all[3] = offsetof(mpi_all, in_b_n);
    offsets_all[4] = offsetof(mpi_all, in_ctrl_n);
    offsets_all[5] = offsetof(mpi_all, in_valid_n);

    offsets_all[6] = offsetof(mpi_all, in_a_e);
    offsets_all[7] = offsetof(mpi_all, in_b_e);
    offsets_all[8] = offsetof(mpi_all, in_ctrl_e);
    offsets_all[9] = offsetof(mpi_all, in_valid_e);

    offsets_all[10] = offsetof(mpi_all, in_a_s);
    offsets_all[11] = offsetof(mpi_all, in_b_s);
    offsets_all[12] = offsetof(mpi_all, in_ctrl_s);
    offsets_all[13] = offsetof(mpi_all, in_valid_s);

    offsets_all[14] = offsetof(mpi_all, in_a_w);
    offsets_all[15] = offsetof(mpi_all, in_b_w);
    offsets_all[16] = offsetof(mpi_all, in_ctrl_w);
    offsets_all[17] = offsetof(mpi_all, in_valid_w);

    offsets_all[18] = offsetof(mpi_all, host_in_a);
    offsets_all[19] = offsetof(mpi_all, host_in_b);
    offsets_all[20] = offsetof(mpi_all, host_in_ctrl);
    offsets_all[21] = offsetof(mpi_all, host_in_valid);

    offsets_all[22] = offsetof(mpi_all, out_a_n);
    offsets_all[23] = offsetof(mpi_all, out_b_n);
    offsets_all[24] = offsetof(mpi_all, out_ctrl_n);
    offsets_all[25] = offsetof(mpi_all, out_ctrl_n);

    offsets_all[26] = offsetof(mpi_all, out_a_e);
    offsets_all[27] = offsetof(mpi_all, out_b_e);
    offsets_all[28] = offsetof(mpi_all, out_ctrl_e);
    offsets_all[29] = offsetof(mpi_all, out_ctrl_e);

    offsets_all[30] = offsetof(mpi_all, out_a_s);
    offsets_all[31] = offsetof(mpi_all, out_b_s);
    offsets_all[32] = offsetof(mpi_all, out_ctrl_s);
    offsets_all[33] = offsetof(mpi_all, out_ctrl_s);

    offsets_all[34] = offsetof(mpi_all, out_a_w);
    offsets_all[35] = offsetof(mpi_all, out_b_w);
    offsets_all[36] = offsetof(mpi_all, out_ctrl_w);
    offsets_all[37] = offsetof(mpi_all, out_ctrl_w);
    
    offsets_all[38] = offsetof(mpi_all, host_out_a);
    offsets_all[39] = offsetof(mpi_all, host_out_valid);

    MPI_Type_create_struct(nitems_all, blocklengths_all, offsets_all, types_all, &mpi_all_common);
    MPI_Type_commit(&mpi_all_common);

    // Initialize the struct data&valid
    offsets_all_req[0] = offsetof(mpi_all_req, TILE_X);
    offsets_all_req[1] = offsetof(mpi_all_req, TILE_Y);

    offsets_all_req[2] = offsetof(mpi_all_req, in_a_n);
    offsets_all_req[3] = offsetof(mpi_all_req, in_b_n);
    offsets_all_req[4] = offsetof(mpi_all_req, in_ctrl_n);
    offsets_all_req[5] = offsetof(mpi_all_req, in_valid_n);

    offsets_all_req[6] = offsetof(mpi_all_req, in_a_e);
    offsets_all_req[7] = offsetof(mpi_all_req, in_b_e);
    offsets_all_req[8] = offsetof(mpi_all_req, in_ctrl_e);
    offsets_all_req[9] = offsetof(mpi_all_req, in_valid_e);

    offsets_all_req[10] = offsetof(mpi_all_req, in_a_s);
    offsets_all_req[11] = offsetof(mpi_all_req, in_b_s);
    offsets_all_req[12] = offsetof(mpi_all_req, in_ctrl_s);
    offsets_all_req[13] = offsetof(mpi_all_req, in_valid_s);

    offsets_all_req[14] = offsetof(mpi_all_req, in_a_w);
    offsets_all_req[15] = offsetof(mpi_all_req, in_b_w);
    offsets_all_req[16] = offsetof(mpi_all_req, in_ctrl_w);
    offsets_all_req[17] = offsetof(mpi_all_req, in_valid_w);

    offsets_all_req[18] = offsetof(mpi_all_req, host_in_a);
    offsets_all_req[19] = offsetof(mpi_all_req, host_in_b);
    offsets_all_req[20] = offsetof(mpi_all_req, host_in_ctrl);
    offsets_all_req[21] = offsetof(mpi_all_req, host_in_valid);

    MPI_Type_create_struct(nitems_all_req, blocklengths_all_req, offsets_all_req, types_all_req, &mpi_all_req_common);
    MPI_Type_commit(&mpi_all_req_common);

    // Initialize the struct data&valid
    offsets_all_resp[0] = offsetof(mpi_all_resp, out_a_n);
    offsets_all_resp[1] = offsetof(mpi_all_resp, out_b_n);
    offsets_all_resp[2] = offsetof(mpi_all_resp, out_ctrl_n);
    offsets_all_resp[3] = offsetof(mpi_all_resp, out_ctrl_n);

    offsets_all_resp[4] = offsetof(mpi_all_resp, out_a_e);
    offsets_all_resp[5] = offsetof(mpi_all_resp, out_b_e);
    offsets_all_resp[6] = offsetof(mpi_all_resp, out_ctrl_e);
    offsets_all_resp[7] = offsetof(mpi_all_resp, out_ctrl_e);

    offsets_all_resp[8] = offsetof(mpi_all_resp, out_a_s);
    offsets_all_resp[9] = offsetof(mpi_all_resp, out_b_s);
    offsets_all_resp[10] = offsetof(mpi_all_resp, out_ctrl_s);
    offsets_all_resp[11] = offsetof(mpi_all_resp, out_ctrl_s);

    offsets_all_resp[12] = offsetof(mpi_all_resp, out_a_w);
    offsets_all_resp[13] = offsetof(mpi_all_resp, out_b_w);
    offsets_all_resp[14] = offsetof(mpi_all_resp, out_ctrl_w);
    offsets_all_resp[15] = offsetof(mpi_all_resp, out_ctrl_w);
    
    offsets_all_resp[16] = offsetof(mpi_all_resp, host_out_a);
    offsets_all_resp[17] = offsetof(mpi_all_resp, host_out_valid);

    MPI_Type_create_struct(nitems_all_resp, blocklengths_all_resp, offsets_all_resp, types_all_resp, &mpi_all_resp_common);
    MPI_Type_commit(&mpi_all_resp_common);
}

extern void mpi_send_response(mpi_all_resp message, int dest, int myRank, int tag)
{
    int message_len = 1;
    cout << "Sending Response" << endl;
    // MPI_Send( const void* buf , MPI_Count count , MPI_Datatype datatype , int dest , int tag , MPI_Comm comm);
    MPI_Send(&message, message_len, mpi_all_resp_common, dest, tag, MPI_COMM_WORLD);
}

mpi_all_req mpi_receive_response(int source, int tag)
{
    // cout << "3. Received Request!!!" << endl;
    int message_len = 1;
    MPI_Status status;
    mpi_all_req message;
    // MPI_Recv( void* buf , MPI_Count count , MPI_Datatype datatype , int source , int tag , MPI_Comm comm , MPI_Status* status);
    MPI_Recv(&message, message_len, mpi_all_req_common, source, tag, MPI_COMM_WORLD, &status);

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

void finalize()
{
    cout << "Ending Communication from Rank " << getRank() << endl;

    MPI_Finalize();
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
    MPI_Send(&dummy, 1, MPI_INT, 5, 599, MPI_COMM_WORLD);
    MPI_Send(&dummy, 1, MPI_INT, 6, 699, MPI_COMM_WORLD);
    MPI_Send(&dummy, 1, MPI_INT, 7, 799, MPI_COMM_WORLD);
    MPI_Send(&dummy, 1, MPI_INT, 8, 899, MPI_COMM_WORLD);
    MPI_Send(&dummy, 1, MPI_INT, 9, 999, MPI_COMM_WORLD);
}

void mpi_send_request(mpi_all_req message, int dest, int rank, int flag)
{
    int message_len = 1;
    MPI_Request request;
    cout << "Sending Message" << endl;
    // MPI_Send( const void* buf , MPI_Count count , MPI_Datatype datatype , int dest , int tag , MPI_Comm comm);
    MPI_Send(&message, message_len, mpi_all_req_common, dest, flag, MPI_COMM_WORLD);
}

mpi_all_req mpi_receive_request(int origin, int flag)
{
    cout << "3. Received Request!!!" << endl;
    int message_len = 1;
    MPI_Status status;
    mpi_all_req message;
    // MPI_Recv( void* buf , MPI_Count count , MPI_Datatype datatype , int source , int tag , MPI_Comm comm , MPI_Status* status);
    MPI_Recv(&message, message_len, mpi_all_req_common, origin, flag, MPI_COMM_WORLD, &status);

    return message;
}
