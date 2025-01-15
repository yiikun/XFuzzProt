# 编译器
CXX = g++

# 编译选项
CXXFLAGS = -std=c++14 -Wall # C++ 14 而非 C++ 11

# Verilator 头文件路径
VERILATOR_INCLUDE_PATH = /home/yikun/workspace/xfuzz/verilator/include

# Verilator 库路径
VERILATOR_LIB_PATH = /home/yikun/workspace/xfuzz/verilator/src/obj_opt  # 这里替换为实际的路径

# Verilator 库文件
VERILATOR_LIBS = -lfuzzer # 如果你需要 VCD 输出，还可以添加 -lverilated_vcd /home/yikun/workspace/xfuzz/target/release:

# 源文件和目标文件
# SRC = $(wildcard *.cpp) $(wildcard ../verilog/obj_dir/*.cpp) # include verilog 的 .cpp 文件
# SRC = $(wildcard *.cpp) $(wildcard ./Emu/*.cpp) $(wildcard ./Fuzzer/*.cpp) $(wildcard ./TLAgent/*.cpp) $(wildcard ./Utils/*.cpp) $(wildcard ../verilog-testtop/obj_dir/*.cpp) # include verilog 的 .cpp 文件
SRC = $(wildcard *.cpp) $(wildcard ./*/*.cpp) $(wildcard ../verilog-testtop/obj_dir/*.cpp) # include verilog 的 .cpp 文件
OBJ = $(SRC:.cpp=.o)

# 最终目标
TARGET = tl_test

# 默认目标
all: $(TARGET)

# # 链接目标
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET) -I$(VERILATOR_INCLUDE_PATH) -L$(VERILATOR_LIB_PATH)

# 编译 .cpp 到 .o
%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# $(TARGET): $(SRC)
# 	$(CXX) $(CXXFLAGS) $^ -o $@ -I$(VERILATOR_INCLUDE_PATH) -L$(VERILATOR_LIB_PATH) -lmyverilator

# 清理目标
clean:
	rm -f $(OBJ) $(TARGET)
