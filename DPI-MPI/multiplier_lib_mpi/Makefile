SRC_FILES = multiplier.v  
obj_dir ?= obj_dir_mul
TOP = Vmultiplier
top_mod ?= multiplier
CXX_SOURCES = mpi-lib-mul.cpp

# make library top_mod=multiplier obj_dir=obj_dir_mul

verilate_for_lib_include: clean
	@echo "== == == 1. Verilating design with top module '$(top_mod)' for .a files..."
	verilator -Wall -cc *.v --top-module $(top_mod) --Mdir $(obj_dir) --Wno-fatal

library_for_lib_include: verilate_for_lib_include
	@echo "== == ==  2. Making the library_for_lib_include..."
	make -C obj_dir_mul -f Vmultiplier.mk

get_lib: library_for_lib_include
	@cp obj_dir_mul/*.a .
	@rm -rf obj_dir_mul

copy_files:
	@echo "== == == 3. Copying mpi-lib-mul.cpp file..."
	@if [ -f mpi-lib-mul.cpp ]; then rm mpi-lib-mul.cpp; fi
	@if [ -f metro_mpi.cpp ]; then rm metro_mpi.cpp; fi
	@cp ../mpi-lib-mul.cpp .
	@cp ../metro_mpi.cpp .

verilate:
	@echo "== == == 4. Elaborating with MPI..."
	verilator -cc $(SRC_FILES) \
		--exe $(CXX_SOURCES) \
		--Mdir $(obj_dir) \
		--top-module $(top_mod) \
		--Wno-fatal --timing 

copy_folder:
	@cp *.a obj_dir_mul/.
	@rm -rf *.a
	@echo "Copying obj_dir_mul folder..."
	@if [ -d ../obj_dir_mul ]; then rm -rf ../obj_dir_mul; fi
	@cp -r obj_dir_mul ../

build:
	@echo "== == == 5. Making the library..."
	make CXX=mpic++ LINK=mpic++ -C obj_dir_mul -f Vmultiplier.mk $(TOP)

library:
	@{ \
		echo "Starting build at $$(date)"; \
		(make get_lib copy_files verilate build copy_folder) > build_library.log 2>&1; \
		echo "Build finished at $$(date)"; \
	}

clean:
	@echo "Cleaning build files..."
	@rm -rf $(obj_dir)
	@clear
 