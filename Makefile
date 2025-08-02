SRC_FILES = _add.v calculator.v _div.v _mul.v _sub.v
OBJ_DIR = obj_dir
TOP = Vcalculator
top_mod ?= calculator
DPI_SOURCES = dpi_impl.cpp
CXX_SOURCES = sim_main.cpp $(DPI_SOURCES)

# Path to your previously compiled Vmultiplier model
MULTIPLIER_OBJ_DIR = obj_dir_mul
MULTIPLIER_LIB = ../$(MULTIPLIER_OBJ_DIR)/libVmultiplier.a
MULTIPLIER_HEADERS = -I../$(MULTIPLIER_OBJ_DIR)

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
		--Wno-fatal --timing > _0elaborate.log 2>&1

build:
	@echo "Building the simulation binary..."
	@make -C $(OBJ_DIR) -f $(TOP).mk $(TOP)  > _1build.log 2>&1

simulate:
	@echo "Running simulation..."
	@./$(OBJ_DIR)/$(TOP) > _2sim.log 2>&1

clean:
	@echo "Cleaning up..."
	@rm -rf $(OBJ_DIR)
	@clear
