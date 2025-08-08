SRC_FILES = adder.v  calculator.v  divider.v  multiplier.v  subtractor.v
obj_dir ?= obj_dir
TOP = Vcalculator
top_mod ?= calculator
DPI_SOURCES = dpi_impl.cpp
CXX_SOURCES = sim_main.cpp $(DPI_SOURCES)

# If 'flag' is set, prefix with '-- ', otherwise empty
ifndef flag
    FLAGS := 
else
    FLAGS := --hierarchical
endif

# make library top_mod=multiplier obj_dir=obj_dir_mul

verilate: clean
	@echo "Verilating design with top module '$(top_mod)'..."
	verilator -Wall -cc *.v --top-module $(top_mod) $(FLAGS) --Mdir $(obj_dir) --Wno-fatal

library: verilate
	@echo "Making the library..."
	make -C obj_dir_mul -f Vmultiplier.mk

xml:
	verilator -Wall -cc -xml-only -xml-output design.xml --top-module aes_main *.v --Wno-fatal

test:
	@verilator --cc *.v --Wno-fatal > verilate.log 2>&1

elaborate: clean
	@echo "Running elaboration $(if $(flag),with flags: $(flag),without extra flags)..."
	@verilator --cc $(SRC_FILES) \
		--exe $(CXX_SOURCES) \
		--Wno-fatal $(FLAGS) \
		--Mdir $(obj_dir) \
		--top-module $(top_mod) \
		-CFLAGS "-O2 -Wall" \
		-LDFLAGS "-lstdc++" > verilate.log 2>&1

# -Wall shows all kind of warnings

build:
	@echo "Building $(if $(flag),with flags: $(flag),without extra flags)..."
	@make -C $(obj_dir) -f $(TOP).mk $(TOP) $(flag)

simulate:
	@echo "Simulating..."
	@./$(obj_dir)/$(TOP)

clean:
	@echo "Cleaning build files..."
	@rm -rf $(obj_dir)
	@clear
 