NVCC=/usr/local/cuda/bin/nvcc
NVCC_FLAGS = -g -G -Xcompiler -Wall

node.exe: node.cpp
	$(NVCC) $(NVCC_FLAGS) $< -o $@