#include <mpi.h>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    cout << "Rank = " << rank << ", Size = " << size << endl;

    if (size < 2) {
        cerr << "Need at least 2 ranks.\n";
        MPI_Abort(MPI_COMM_WORLD, 1);
    }

    if (rank == 0) {
        int data[] = {10, 20, 30, 40, 50};
        int count = sizeof(data) / sizeof(data[0]);

        for (int i = 0; i < count; ++i) {
            MPI_Send(&data[i], 1, MPI_INT, 1, 0, MPI_COMM_WORLD);
            cout << "[Sender] Sent: " << data[i] << endl;
        }

        int end_signal = -1;
        MPI_Send(&end_signal, 1, MPI_INT, 1, 0, MPI_COMM_WORLD);
        cout << "[Sender] Sent end signal." << endl;
    }
    else if (rank == 1) {
        int recv_data;
        while (true) {
            MPI_Recv(&recv_data, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
            if (recv_data == -1) {
                cout << "[Receiver] Received end signal. Exiting..." << endl;
                break;
            }
            cout << "[Receiver] Received: " << recv_data << endl;
        }
    }

    MPI_Finalize();
    return 0;
}
