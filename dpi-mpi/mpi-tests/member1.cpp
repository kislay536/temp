#include <mpi.h>
#include <iostream>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    int send_val = 100 + rank; // arbitrary value
    int recv_val;

    // Send to rank 1, receive from rank 1
    MPI_Send(&send_val, 1, MPI_INT, 1, 0, MPI_COMM_WORLD);
    std::cout << "Member1 (rank " << rank << ") sent: " << send_val << std::endl;

    MPI_Recv(&recv_val, 1, MPI_INT, 1, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    std::cout << "Member1 (rank " << rank << ") received: " << recv_val << std::endl;

    MPI_Finalize();
    return 0;
}
