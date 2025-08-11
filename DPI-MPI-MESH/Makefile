SRC_FILES = alu_tile_noc.v  calculator.v
OBJ_DIR = obj_dir
TOP = Vcalculator
top_mod ?= calculator
DPI_SOURCES =
CXX_SOURCES = sim.cpp $(DPI_SOURCES)

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

clean:
	@echo "Cleaning up..."
	@rm -rf $(OBJ_DIR)
	@clear
