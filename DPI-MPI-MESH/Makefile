SRC_FILES = alu_tile_noc.v calculator.v intermediate.v terminate.v
OBJ_DIR = obj_dir
obj_dir_lib1 ?= obj_dir1
obj_dir_lib2 ?= obj_dir2
obj_dir_lib3 ?= obj_dir3
obj_dir_lib4 ?= obj_dir4
obj_dir_lib5 ?= obj_dir5
obj_dir_lib6 ?= obj_dir6
obj_dir_lib7 ?= obj_dir7
obj_dir_lib8 ?= obj_dir8
obj_dir_lib9 ?= obj_dir9
obj_dir_lib = $(obj_dir_lib1) $(obj_dir_lib2) $(obj_dir_lib3) $(obj_dir_lib4) $(obj_dir_lib5) $(obj_dir_lib6) $(obj_dir_lib7) $(obj_dir_lib8) $(obj_dir_lib9)
TOP = Vcalculator
top_mod ?= calculator
DPI_SOURCES =
CXX_SOURCES = sim.cpp $(DPI_SOURCES)
CXX_MPI_SOURCES = dpi-mpi-sim.cpp metro_mpi.cpp
CLEAN = _build_sim.log adjacency.dot calculator.html  calculator.xml hierarchy.dot 


verilate: clean
	@echo "Verilating design with top module '$(top_mod)'..."
	verilator -Wall -cc $(SRC_FILES) --top-module $(top_mod) --Mdir $(OBJ_DIR) --Wno-fatal



elaborate:clean
	@echo "Elaborating with DPI..."
	verilator -cc $(SRC_FILES) \
		--exe $(CXX_SOURCES) \
		--Mdir $(OBJ_DIR) \
		--top-module $(top_mod) \
		-CFLAGS "-O2 -Wall $(MULTIPLIER_HEADERS)" \
		-LDFLAGS "$(MULTIPLIER_LIB) -lstdc++" \
		--Wno-fatal --timing --trace

build:
	@echo "Building the simulation binary..."
	@make -C $(OBJ_DIR) -f $(TOP).mk $(TOP)

simulate:
	@echo "Running simulation..."
	@./$(OBJ_DIR)/$(TOP)

piton:
	@{ \
		echo "Starting build at $$(date)"; \
		(make elaborate build simulate) > build_sim.log 2>&1; \
		echo "Build finished at $$(date)"; \
	}

clean:
	@echo "Cleaning up..."
	@rm -rf $(OBJ_DIR)
	@rm -rf $(obj_dir_lib)
	@if [ -d xml ]; then rm -rf xml; fi
	@for f in $(CLEAN); do \
		if [ -e "$$f" ]; then rm "$$f"; fi; \
	done
	@clear

clean_mpi:
	@echo "Cleaning up..."
	@rm -rf $(OBJ_DIR)
	@if [ -d xml ]; then rm -rf xml; fi
	@for f in $(CLEAN); do \
		if [ -e "$$f" ]; then rm "$$f"; fi; \
	done
	@clear

xml:
	@if [ -d xml ]; then rm -rf xml; fi
	@if [ ! -d xml ]; then mkdir xml; fi
	verilator -Wall -cc -xml-only -xml-output xml/calculator.xml --top-module $(top_mod) *.v --Wno-fatal

python:
	@python3 _vis.py
	@python3 _metro_mpi.py

mpi:
	@{ \
		echo "Starting build at $$(date)"; \
		(make elaborate_mpi build_mpi simulate_mpi) > _build_sim.log 2>&1; \
		echo "Build finished at $$(date)"; \
	}

# getting errors for defining functions multiple time when using metro_mpi.cpp so moved all of them to the main cpp file

elaborate_mpi:clean_mpi 
	@echo "== == == 1. Elaborating with MPI-DPI..."
	verilator -cc $(SRC_FILES) \
		--exe $(CXX_MPI_SOURCES) \
		--Mdir $(OBJ_DIR) \
		--top-module $(top_mod) \
		-CFLAGS "-O2 -Wall" \
		-LDFLAGS "-lstdc++" \
		--Wno-fatal --timing

build_mpi:
	@echo "== == == 2. Building the simulation binary..."
	make CXX=mpic++ LINK=mpic++ -C $(OBJ_DIR) -f $(TOP).mk $(TOP)

simulate_mpi:
	@echo "== == == 3. Running simulation..."
	@mpirun -np 1 xterm -hold -e ./$(OBJ_DIR)/Vcalculator : -np 1 xterm -hold -e ./$(obj_dir_lib1)/Valu_tile_noc : -np 1 xterm -hold -e ./$(obj_dir_lib2)/Valu_tile_noc : -np 1 xterm -hold -e ./$(obj_dir_lib3)/Valu_tile_noc : -np 1 xterm -hold -e ./$(obj_dir_lib4)/Valu_tile_noc : -np 1 xterm -hold -e ./$(obj_dir_lib5)/Valu_tile_noc : -np 1 xterm -hold -e ./$(obj_dir_lib6)/Valu_tile_noc : -np 1 xterm -hold -e ./$(obj_dir_lib7)/Valu_tile_noc : -np 1 xterm -hold -e ./$(obj_dir_lib8)/Valu_tile_noc : -np 1 xterm -hold -e ./$(obj_dir_lib9)/Valu_tile_noc 
