test_all: sender receiver execute_test

sender:
	@mpic++ -o member1 member1.cpp

receiver:
	@mpic++ -o member2 member2.cpp

execute_test:
	@mpirun -np 1 ./member1 : -np 1 ./member2

execute_test_xterm:
	@mpirun -np 1 xterm -hold -e ./member1 : -np 1 xterm -hold -e ./member2