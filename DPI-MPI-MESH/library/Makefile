SRC_FILES_LIB = alu_tile_noc.v terminate.v
obj_dir_lib1 ?= obj_dir1
obj_dir_lib2 ?= obj_dir2
obj_dir_lib3 ?= obj_dir3
obj_dir_lib4 ?= obj_dir4
obj_dir_lib5 ?= obj_dir5
obj_dir_lib6 ?= obj_dir6
obj_dir_lib7 ?= obj_dir7
obj_dir_lib8 ?= obj_dir8
obj_dir_lib9 ?= obj_dir9
TOP_lib = Valu_tile_noc
TOP_lib_mod ?= alu_tile_noc
CXX_SOURCE_1_lib = mpi-lib-tile0.cpp
CXX_SOURCE_2_lib = mpi-lib-tile1.cpp
CXX_SOURCE_3_lib = mpi-lib-tile2.cpp
CXX_SOURCE_4_lib = mpi-lib-tile3.cpp
CXX_SOURCE_5_lib = mpi-lib-tile4.cpp
CXX_SOURCE_6_lib = mpi-lib-tile5.cpp
CXX_SOURCE_7_lib = mpi-lib-tile6.cpp
CXX_SOURCE_8_lib = mpi-lib-tile7.cpp
CXX_SOURCE_9_lib = mpi-lib-tile8.cpp
CXX_SOURCE_0_lib = metro_mpi.cpp
CXX_SOURCES_lib1 = $(CXX_SOURCE_1_lib) 
CXX_SOURCES_lib2 = $(CXX_SOURCE_2_lib) 
CXX_SOURCES_lib3 = $(CXX_SOURCE_3_lib) 
CXX_SOURCES_lib4 = $(CXX_SOURCE_4_lib) 
CXX_SOURCES_lib5 = $(CXX_SOURCE_5_lib) 
CXX_SOURCES_lib6 = $(CXX_SOURCE_6_lib)
CXX_SOURCES_lib7 = $(CXX_SOURCE_7_lib) 
CXX_SOURCES_lib8 = $(CXX_SOURCE_8_lib)
CXX_SOURCES_lib9 = $(CXX_SOURCE_9_lib) 
SRC_FILES = alu_tile_noc.v calculator.v intermediate.v terminate.v
OBJ_DIR = obj_dir
TOP = Vcalculator
top_mod ?= calculator
DPI_SOURCES =
CXX_SOURCES = sim.cpp $(DPI_SOURCES)
REMOVE = _build_sim.log adjacency.dot build_lib_library.log build_library.log hierarchy.dot tb_calculator.vcd calculator.html  calculator.xml _partition_ports_data.txt module_hierarchy.svg module_hierarchy.html module_hierarchy.html tile_mapped_graph.html _wires.txt _dtype_map.txt mpi-lib-tile0.cpp mpi-lib-tile1.cpp mpi-lib-tile2.cpp mpi-lib-tile3.cpp mpi-lib-tile4.cpp mpi-lib-tile5.cpp mpi-lib-tile6.cpp mpi-lib-tile7.cpp mpi-lib-tile8.cpp mpi-lib-tile9.cpp _elaborate.log
mmpi ?= 

copy_files:
	@echo "== == == 3. Copying mpi-lib-add.cpp file..."
# 	@if [ -f $(CXX_SOURCE_0_lib) ]; then rm $(CXX_SOURCE_0_lib); fi
	@if [ -f $(CXX_SOURCE_1_lib) ]; then rm $(CXX_SOURCE_1_lib); fi
	@if [ -f $(CXX_SOURCE_2_lib) ]; then rm $(CXX_SOURCE_2_lib); fi
	@if [ -f $(CXX_SOURCE_3_lib) ]; then rm $(CXX_SOURCE_3_lib); fi
	@if [ -f $(CXX_SOURCE_4_lib) ]; then rm $(CXX_SOURCE_4_lib); fi
	@if [ -f $(CXX_SOURCE_5_lib) ]; then rm $(CXX_SOURCE_5_lib); fi
	@if [ -f $(CXX_SOURCE_6_lib) ]; then rm $(CXX_SOURCE_6_lib); fi
	@if [ -f $(CXX_SOURCE_7_lib) ]; then rm $(CXX_SOURCE_7_lib); fi
	@if [ -f $(CXX_SOURCE_8_lib) ]; then rm $(CXX_SOURCE_8_lib); fi
	@if [ -f $(CXX_SOURCE_9_lib) ]; then rm $(CXX_SOURCE_9_lib); fi
# 	@cp ../$(CXX_SOURCE_0_lib) .
	@cp ../$(CXX_SOURCE_1_lib) .
	@cp ../$(CXX_SOURCE_2_lib) .
	@cp ../$(CXX_SOURCE_3_lib) .
	@cp ../$(CXX_SOURCE_4_lib) .
	@cp ../$(CXX_SOURCE_5_lib) .
	@cp ../$(CXX_SOURCE_6_lib) .
	@cp ../$(CXX_SOURCE_7_lib) .
	@cp ../$(CXX_SOURCE_8_lib) .
	@cp ../$(CXX_SOURCE_9_lib) .

verilate_lib:
	@echo "== == == 4. Elaborating with MPI..."
	@echo "Doing for tile0"
	verilator -cc $(SRC_FILES_LIB) \
		--exe $(CXX_SOURCES_lib1) \
		--Mdir $(obj_dir_lib1) \
		--top-module $(TOP_lib_mod) \
		--Wno-fatal --timing 
	@echo "Doing for tile1"
	verilator -cc $(SRC_FILES_LIB) \
		--exe $(CXX_SOURCES_lib2) \
		--Mdir $(obj_dir_lib2) \
		--top-module $(TOP_lib_mod) \
		--Wno-fatal --timing 
	@echo "Doing for tile2"
	verilator -cc $(SRC_FILES_LIB) \
		--exe $(CXX_SOURCES_lib3) \
		--Mdir $(obj_dir_lib3) \
		--top-module $(TOP_lib_mod) \
		--Wno-fatal --timing 
	@echo "Doing for tile3"
	verilator -cc $(SRC_FILES_LIB) \
		--exe $(CXX_SOURCES_lib4) \
		--Mdir $(obj_dir_lib4) \
		--top-module $(TOP_lib_mod) \
		--Wno-fatal --timing 
	@echo "Doing for tile4"
	verilator -cc $(SRC_FILES_LIB) \
		--exe $(CXX_SOURCES_lib5) \
		--Mdir $(obj_dir_lib5) \
		--top-module $(TOP_lib_mod) \
		--Wno-fatal --timing 
	@echo "Doing for tile5"
	verilator -cc $(SRC_FILES_LIB) \
		--exe $(CXX_SOURCES_lib6) \
		--Mdir $(obj_dir_lib6) \
		--top-module $(TOP_lib_mod) \
		--Wno-fatal --timing 
	@echo "Doing for tile6"
	verilator -cc $(SRC_FILES_LIB) \
		--exe $(CXX_SOURCES_lib7) \
		--Mdir $(obj_dir_lib7) \
		--top-module $(TOP_lib_mod) \
		--Wno-fatal --timing 
	@echo "Doing for tile7"
	verilator -cc $(SRC_FILES_LIB) \
		--exe $(CXX_SOURCES_lib8) \
		--Mdir $(obj_dir_lib8) \
		--top-module $(TOP_lib_mod) \
		--Wno-fatal --timing 
	@echo "Doing for tile8"
	verilator -cc $(SRC_FILES_LIB) \
		--exe $(CXX_SOURCES_lib9) \
		--Mdir $(obj_dir_lib9) \
		--top-module $(TOP_lib_mod) \
		--Wno-fatal --timing 

copy_folder:
	@echo "Copying $(obj_dir_lib1) folder..."
	@if [ -d ../$(obj_dir_lib1) ]; then rm -rf ../$(obj_dir_lib1); fi
	@cp -r $(obj_dir_lib1) ../
	@echo "Copying $(obj_dir_lib2) folder..."
	@if [ -d ../$(obj_dir_lib2) ]; then rm -rf ../$(obj_dir_lib2); fi
	@cp -r $(obj_dir_lib2) ../
	@echo "Copying $(obj_dir_lib3) folder..."
	@if [ -d ../$(obj_dir_lib3) ]; then rm -rf ../$(obj_dir_lib3); fi
	@cp -r $(obj_dir_lib3) ../
	@echo "Copying $(obj_dir_lib4) folder..."
	@if [ -d ../$(obj_dir_lib4) ]; then rm -rf ../$(obj_dir_lib4); fi
	@cp -r $(obj_dir_lib4) ../
	@echo "Copying $(obj_dir_lib5) folder..."
	@if [ -d ../$(obj_dir_lib5) ]; then rm -rf ../$(obj_dir_lib5); fi
	@cp -r $(obj_dir_lib5) ../
	@echo "Copying $(obj_dir_lib6) folder..."
	@if [ -d ../$(obj_dir_lib6) ]; then rm -rf ../$(obj_dir_lib6); fi
	@cp -r $(obj_dir_lib6) ../
	@echo "Copying $(obj_dir_lib7) folder..."
	@if [ -d ../$(obj_dir_lib7) ]; then rm -rf ../$(obj_dir_lib7); fi
	@cp -r $(obj_dir_lib7) ../
	@echo "Copying $(obj_dir_lib8) folder..."
	@if [ -d ../$(obj_dir_lib8) ]; then rm -rf ../$(obj_dir_lib8); fi
	@cp -r $(obj_dir_lib8) ../
	@echo "Copying $(obj_dir_lib9) folder..."
	@if [ -d ../$(obj_dir_lib9) ]; then rm -rf ../$(obj_dir_lib9); fi
	@cp -r $(obj_dir_lib9) ../

build_lib:
	@echo "== == == 5. Making the library..."
	make CXX=mpic++ LINK=mpic++ -C $(obj_dir_lib1) -f $(TOP_lib).mk $(TOP_lib)
	make CXX=mpic++ LINK=mpic++ -C $(obj_dir_lib2) -f $(TOP_lib).mk $(TOP_lib)
	make CXX=mpic++ LINK=mpic++ -C $(obj_dir_lib3) -f $(TOP_lib).mk $(TOP_lib)
	make CXX=mpic++ LINK=mpic++ -C $(obj_dir_lib4) -f $(TOP_lib).mk $(TOP_lib)
	make CXX=mpic++ LINK=mpic++ -C $(obj_dir_lib5) -f $(TOP_lib).mk $(TOP_lib)
	make CXX=mpic++ LINK=mpic++ -C $(obj_dir_lib6) -f $(TOP_lib).mk $(TOP_lib)
	make CXX=mpic++ LINK=mpic++ -C $(obj_dir_lib7) -f $(TOP_lib).mk $(TOP_lib)
	make CXX=mpic++ LINK=mpic++ -C $(obj_dir_lib8) -f $(TOP_lib).mk $(TOP_lib)
	make CXX=mpic++ LINK=mpic++ -C $(obj_dir_lib9) -f $(TOP_lib).mk $(TOP_lib)

library: clean_lib
	@{ \
		echo "Starting build_lib at $$(date)"; \
		make copy_files verilate_lib build_lib copy_folder; \
		echo "build_lib finished at $$(date)"; \
	} 2>&1 | tee build_lib_library.log

clean_lib:
	@echo "clean_libing build_lib files..."
	@if [ -d $(obj_dir_lib1) ]; then rm -rf $(obj_dir_lib1); fi
	@if [ -d $(obj_dir_lib2) ]; then rm -rf $(obj_dir_lib2); fi
	@if [ -d $(obj_dir_lib3) ]; then rm -rf $(obj_dir_lib3); fi
	@if [ -d $(obj_dir_lib4) ]; then rm -rf $(obj_dir_lib4); fi
	@if [ -d $(obj_dir_lib5) ]; then rm -rf $(obj_dir_lib5); fi
	@if [ -d $(obj_dir_lib6) ]; then rm -rf $(obj_dir_lib6); fi
	@if [ -d $(obj_dir_lib7) ]; then rm -rf $(obj_dir_lib7); fi
	@if [ -d $(obj_dir_lib8) ]; then rm -rf $(obj_dir_lib8); fi
	@if [ -d $(obj_dir_lib9) ]; then rm -rf $(obj_dir_lib9); fi
	@clear

verilate: clean
	@echo "Verilating design with top module '$(top_mod)'..."
	verilator -Wall -cc $(SRC_FILES) --top-module $(top_mod) --Mdir $(OBJ_DIR) --Wno-fatal



elaborate_design:
	@echo "Elaborating with DPI..."
	verilator -cc $(SRC_FILES) \
		--exe $(CXX_SOURCES) \
		--Mdir $(OBJ_DIR) \
		--top-module $(top_mod) \
		-CFLAGS "-O2 $(MULTIPLIER_HEADERS)" \
		-LDFLAGS "$(MULTIPLIER_LIB) -lstdc++" \
		--timing --trace --Wall --Wno-fatal --Wno-UNUSED --Wno-lint -Wno-UNOPTFLAT $(mmpi)
		
# --mmpi-o1


build:
	@echo "Building the simulation binary..."
	@make -C $(OBJ_DIR) -f $(TOP).mk $(TOP)

simulate:
	@echo "Running simulation..."
	@./$(OBJ_DIR)/$(TOP)

piton:
	@{ \
		echo "Starting build at $$(date)"; \
		make elaborate_design build simulate; \
		echo "Build finished at $$(date)"; \
	} 2>&1 | tee _build_sim.log

elaborate:
	@{ \
		echo "Starting build at $$(date)"; \
		make elaborate_design; \
		echo "Build finished at $$(date)"; \
	} 2>&1 | tee _elaborate.log

clean: clean_lib
	@echo "Cleaning up..."
	@for f in $(REMOVE); do \
		if [ -e "$$f" ]; then rm "$$f"; fi; \
	done
	@rm -rf $(OBJ_DIR)
	@if [ -d xml ]; then rm -rf xml; fi
	@clear

xml:
	@if [ -d xml ]; then rm -rf xml; fi
	@if [ ! -d xml ]; then mkdir xml; fi
	verilator -Wall -cc -xml-only -xml-output xml/calculator.xml --top-module $(top_mod) *.v --Wno-fatal

python:
	@python3 _vis.py
	@python3 _metro_mpi.py