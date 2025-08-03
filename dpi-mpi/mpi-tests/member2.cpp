#include <mpi.h>
#include <iostream>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    int send_val = 200 + rank; // arbitrary value
    int recv_val;

    // Receive from rank 0, then send to rank 0
    MPI_Recv(&recv_val, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    std::cout << "Member2 (rank " << rank << ") received: " << recv_val << std::endl;

    MPI_Send(&send_val, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
    std::cout << "Member2 (rank " << rank << ") sent: " << send_val << std::endl;

    MPI_Finalize();
    return 0;
}
