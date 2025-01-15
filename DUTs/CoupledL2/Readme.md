原有收集的资料：
    RocketChip difftest 中的 binding 接口文件和 verilator 激励文件；
    tltest 中的 emulator 模拟器；
    CoupledL2 由 Scala 编译出来的 Verilog 文件。


1、在 Verilog 目录中，通过 verilator 将 .sv 文件编译为 .cpp 文件：
    ```
    verilator -cc --exe VerifyTop.sv ClockGate.v LogPerfHelper.v ResetCounter.sv 
    ```
    
    ```
    verilator -cc TestTop_L2L3L2.sv *.v --exe ../tltest/*.cpp ../tltest/*/*.cpp --build
    ```

    只编译 top 模块，且自己 build，可以编译通过
    ```
    verilator -cc TestTop_L2L3L2.sv --exe ../tltest/main.cpp
    ```
    其中，LogPerfHelper 的 SimTop 定义暂时被注释。

    g++ Emu.o CFuzzer.o ULFuzzer.o CAgent.o ULAgent.o main.o verilated.o verilated_threads.o VTestTop_L2L3L2__ALL.a    -pthread -lpthread -latomic -lfuzzer -o VTestTop_L2L3L2

2、在 xfuzz 目录下 git clone 并且 build verilator 项目，以便 emu 模块可以 include verilated.h 文件
    编译 main.cpp 时，链接的环境变量配置:
    export CPLUS_INCLUDE_PATH=/home/yikun/workspace/xfuzz/verilator/build/include:$CPLUS_INCLUDE_PATH
    export CPLUS_INCLUDE_PATH=/home/yikun/workspace/xfuzz/verilator/include:$CPLUS_INCLUDE_PATH
    export CPLUS_INCLUDE_PATH=/home/yikun/workspace/xfuzz/verilator/include/vltstd:$CPLUS_INCLUDE_PATH

    export LIBRARY_PATH=/home/yikun/workspace/xfuzz/verilator/src/obj_opt:$LIBRARY_PATH
    export LIBRARY_PATH=/home/yikun/workspace/xfuzz/target/release:$LIBRARY_PATH

