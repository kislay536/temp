#include <iostream>
#include <mpi.h>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);  // This will be 1
    MPI_Comm_size(MPI_COMM_WORLD, &size);  // This will be 2

    while (1) {
        if (rank == 0) {
            int data = 42;
            std::cout << "Sender (rank 0) sending data...\n";
            MPI_Send(&data, 1, MPI_INT, 1, 0, MPI_COMM_WORLD);  // send to rank 1
        }

        else if (rank == 1) {
            int data;
            //MPI_Recv( void* buf , MPI_Count count , MPI_Datatype datatype , int source , int tag , MPI_Comm comm , MPI_Status* status);
            MPI_Recv(&data, 1, MPI_INT, 0, 5, MPI_COMM_WORLD,
                     MPI_STATUS_IGNORE);  // receive from rank 0
            std::cout << "Receiver (rank 1) received data: " << data << std::endl;
        }
    }

    MPI_Finalize();
    return 0;
}
