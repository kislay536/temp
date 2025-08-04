SRC_FILES = adder.v  calculator.v  divider.v  multiplier.v  subtractor.v
OBJ_DIR = obj_dir
TOP = Vcalculator
top_mod ?= calculator
CXX = mpic++
CXXFLAGS = -O2 -Wall
DPI_SOURCES = dpi_impl.cpp
CXX_SOURCES = sim_main.cpp $(DPI_SOURCES)
CXX_MPI_SOURCES = mpi-dpi-sim.cpp metro_mpi.cpp
CXX_MPI_OBJECTS = mpi-dpi-sim.cpp

# Rule to compile each .cpp into .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o: %.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Path to your previously compiled Vmultiplier model
MULTIPLIER_OBJ_DIR = 
MULTIPLIER_LIB = 
MULTIPLIER_HEADERS = 

MULTIPLIER_OBJ_DIR = obj_dir_mul
# MULTIPLIER_LIB = ../$(MULTIPLIER_OBJ_DIR)/libVmultiplier.a
# MULTIPLIER_HEADERS = -I../$(MULTIPLIER_OBJ_DIR)

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

mpi:
	@{ \
		echo "Starting build at $$(date)"; \
		(make elaborate_mpi build_mpi simulate_mpi) > _build_sim.log 2>&1; \
		echo "Build finished at $$(date)"; \
	}

# getting errors for defining functions multiple time when using metro_mpi.cpp so moved all of them to the main cpp file

elaborate_mpi:clean 
	@echo "== == == 1. Elaborating with MPI-DPI..."
	verilator -cc $(SRC_FILES) \
		--exe $(CXX_MPI_SOURCES) \
		--Mdir $(OBJ_DIR) \
		--top-module $(top_mod) \
		-CFLAGS "-O2 -Wall $(MULTIPLIER_HEADERS)" \
		-LDFLAGS "$(MULTIPLIER_LIB) -lstdc++" \
		--Wno-fatal --timing

build_mpi:
	@echo "== == == 2. Building the simulation binary..."
	make CXX=mpic++ LINK=mpic++ -C $(OBJ_DIR) -f $(TOP).mk $(TOP)

simulate_mpi:
	@echo "== == == 3. Running simulation..."
	@mpirun -np 1 xterm -hold -e ./$(OBJ_DIR)/Vcalculator : -np 1 xterm -hold -e ./$(MULTIPLIER_OBJ_DIR)/Vmultiplier

clean:
	@echo "Cleaning up..."
	@rm -rf $(OBJ_DIR)
	@clear

hello:
	g++ -o hello hello.cpp