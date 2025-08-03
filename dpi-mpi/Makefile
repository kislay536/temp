SRC_FILES = adder.v  calculator.v  divider.v  multiplier.v  subtractor.v
OBJ_DIR = obj_dir
TOP = Vcalculator
Top_lib = Vmultiplier
top_mod ?= calculator
DPI_SOURCES = dpi_impl.cpp
CXX_SOURCES = sim_main.cpp $(DPI_SOURCES)
CXX_MPI_SOURCES = metro_mpi.cpp mpi-dpi-sim.cpp mpi-lib-mul.cpp

# Path to your previously compiled Vmultiplier model
MULTIPLIER_OBJ_DIR = obj_dir_mul
MULTIPLIER_LIB = ../$(MULTIPLIER_OBJ_DIR)/libVmultiplier.a
MULTIPLIER_HEADERS = -I../$(MULTIPLIER_OBJ_DIR)

verilate: clean
	@echo "Verilating design with top module '$(top_mod)'..."
	verilator -Wall -cc $(SRC_FILES) --top-module $(top_mod) --Mdir $(OBJ_DIR) --Wno-fatal

dpi: elaborate_dpi build_dpi simulate_dpi

elaborate_dpi:clean
	@echo "Elaborating with DPI..."
	verilator -cc $(SRC_FILES) \
		--exe $(CXX_SOURCES) \
		--Mdir $(OBJ_DIR) \
		--top-module $(top_mod) \
		-CFLAGS "-O2 -Wall $(MULTIPLIER_HEADERS)" \
		-LDFLAGS "$(MULTIPLIER_LIB) -lstdc++" \
		--Wno-fatal --timing > _dpi_elaborate.log 2>&1

build_dpi:
	@echo "Building the simulation binary..."
	@make -C $(OBJ_DIR) -f $(TOP).mk $(TOP) --CXX mpic++ > _dpi_build.log 2>&1

simulate_dpi:
	@echo "Running simulation..."
	@./$(OBJ_DIR)/$(TOP) > _dpi_sim.log 2>&1

mpi: elaborate_mpi build_mpi simulate_mpi

elaborate_mpi:clean
	@echo "Elaborating with DPI..."
	verilator -cc $(SRC_FILES) \
		--exe $(CXX_MPI_SOURCES) \
		--Mdir $(OBJ_DIR) \
		--top-module $(top_mod) \
		-CFLAGS "-O2 -Wall $(MULTIPLIER_HEADERS)" \
		-LDFLAGS "$(MULTIPLIER_LIB) -lstdc++" \
		--Wno-fatal --timing > _mpi_elaborate.log 2>&1

build_mpi_lib:
	@echo "Building the simulation binary..."
	@make -C $(MULTIPLIER_OBJ_DIR) -f $(Top_lib).mk $(TOP)  > _mpi_lib_build.log 2>&1

simulate_mpi:
	@echo "Running simulation..."
	@./$(OBJ_DIR)/$(TOP) > _mpi_sim.log 2>&1

clean:
	@echo "Cleaning up..."
	@rm -rf $(OBJ_DIR)
	@clear
