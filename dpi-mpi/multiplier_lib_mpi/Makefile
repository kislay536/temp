SRC_FILES = multiplier.v  
obj_dir ?= obj_dir_mul
TOP = Vmultiplier
top_mod ?= multiplier
CXX_SOURCES = mpi-lib-mul.cpp

# make library top_mod=multiplier obj_dir=obj_dir_mul

copy_files:
	@echo "Copying mpi-lib-mul.cpp file..."
	@if [ -f mpi-lib-mul.cpp ]; then rm mpi-lib-mul.cpp; fi
	@if [ -f metro_mpi.cpp ]; then rm metro_mpi.cpp; fi
	@cp ../mpi-lib-mul.cpp .
	@cp ../metro_mpi.cpp .

verilate:
	@echo "Elaborating with DPI..."
	verilator -cc $(SRC_FILES) \
		--exe $(CXX_SOURCES) \
		--Mdir $(obj_dir) \
		--top-module $(top_mod) \
		--Wno-fatal --timing 

copy_folder:
	@echo "Copying obj_dir_mul folder..."
	@if [ -d ../obj_dir_mul ]; then rm -rf ../obj_dir_mul; fi
	@cp -r obj_dir_mul ../

build:
	@echo "Making the library..."
	make CXX=mpic++ LINK=mpic++ -C obj_dir_mul -f Vmultiplier.mk $(TOP) > _multiplier_lib_mpi.log 2>&1

library: clean copy_files verilate build copy_folder

clean:
	@echo "Cleaning build files..."
	@rm -rf $(obj_dir)
	@clear
 