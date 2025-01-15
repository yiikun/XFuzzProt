
按以下步骤运行 xfuzz 工具：

1、将 DUT 与 testbench 联合编译：
```
verilator --x-initial unique -cc mutual.sv --exe testbench.cpp --build
```

将 DUT 与 sim_main 联合编译：
```
verilator --x-initial unique -cc mutual.sv --exe *.cpp --build
```

2、将 Vmutual 与 libfuzz 链接：

export LIBRARY_PATH=/home/yikun/workspace/xfuzz/target/release:$LIBRARY_PATH

```
g++ common.o coverage.o dut.o sim_main.o verilated.o verilated_threads.o Vmutual__ALL.a -pthread -lpthread -latomic -lfuzzer -lrt -o Vmutual
```

3、运行 xfuzz shell：
```
./xfuzz -f --max-runs 20 --max-iters 100 --corpus-input ./corpus --elf ./DUTs/MutualEx/fuzzing/obj_dir/Vmutual --coverage firrtl
```
