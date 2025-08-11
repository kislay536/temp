SRC_FILES_LIB = alu_tile_noc.v
obj_dir_lib ?= lib
TOP_lib = Valu_tile_noc
TOP_lib_mod ?= alu_tile_noc
CXX_SOURCE_1_lib = mpi-lib-tile.cpp
CXX_SOURCE_2_lib = metro_mpi.cpp
CXX_SOURCES_lib = mpi-lib-tile.cpp metro_mpi.cpp 
SRC_FILES = alu_tile_noc.v  calculator.v
OBJ_DIR = obj_dir
TOP = Vcalculator
top_mod ?= calculator
DPI_SOURCES =
CXX_SOURCES = sim.cpp $(DPI_SOURCES)
REMOVE = _build_sim.log adjacency.dot build_lib_library.log build_library.log hierarchy.dot tb_calculator.vcd

copy_files:
	@echo "== == == 3. Copying mpi-lib-add.cpp file..."
	@if [ -f $(CXX_SOURCE_1_lib) ]; then rm $(CXX_SOURCE_1_lib); fi
	@if [ -f $(CXX_SOURCE_2_lib) ]; then rm $(CXX_SOURCE_2_lib); fi
	@cp ../$(CXX_SOURCE_1_lib) .
	@cp ../$(CXX_SOURCE_2_lib) .

verilate_lib:
	@echo "== == == 4. Elaborating with MPI..."
	verilator -cc $(SRC_FILES_LIB) \
		--exe $(CXX_SOURCES_lib) \
		--Mdir $(obj_dir_lib) \
		--top-module $(TOP_lib_mod) \
		--Wno-fatal --timing 

copy_folder:
	@echo "Copying $(obj_dir_lib) folder..."
	@if [ -d ../$(obj_dir_lib) ]; then rm -rf ../$(obj_dir_lib); fi
	@cp -r $(obj_dir_lib) ../

build_lib:
	@echo "== == == 5. Making the library..."
	make CXX=mpic++ LINK=mpic++ -C $(obj_dir_lib) -f $(TOP_lib).mk $(TOP_lib)

library: clean_lib
	@{ \
		echo "Starting build_lib at $$(date)"; \
		(make copy_files verilate_lib build_lib copy_folder) > build_lib_library.log 2>&1; \
		echo "build_lib finished at $$(date)"; \
	}

clean_lib:
	@echo "clean_libing build_lib files..."
	@rm -rf $(obj_dir_lib)
	@clear

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
		(make elaborate build simulate) > _build_sim.log 2>&1; \
		echo "Build finished at $$(date)"; \
	}

clean: clean_lib
	@echo "Cleaning up..."
	@rm -rf $(REMOVE)
	@rm -rf $(OBJ_DIR)
	@clear
