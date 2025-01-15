#include <iostream>
#include <vector>
#include <cstdlib>
#include "Vmutual.h"

// 模拟被测试模块的功能
void simulateModule(int io_en_a, int& io_n_out_0, int& io_n_out_1, bool& io_x_out) {
    // 根据输入信号设置输出信号
    io_n_out_0 = (io_en_a == 0) ? 1 : 0;
    io_n_out_1 = (io_en_a == 1) ? 2 : 0;
    io_x_out = (io_en_a == 2);
}

int main(int argc, char** argv, char** env){
    Verilated::commandArgs(argc, argv);

    Vmutual *dut = new Vmutual;
    vluint64_t sim_time = 0;
    
    srand(0);

    // 模拟多个时钟周期的测试
    for (int i = 0; i < 1000; i++) {

        // 初始复位
        if (i <= 10){
            dut->reset = 1;
        } else {
            dut->reset = 0;
        }

        // 模拟输入信号变化
        dut->io_en_a = rand() % 8;

        // 调用模拟函数
        dut->clock = 0;
        dut->eval();

        // 上升沿触发
        dut->clock = 1; 
        dut->eval();

        // 输出信号值
        std::cout << "Iteration " << i << ": "
                  << "clock: " << static_cast<int>(dut->clock) << ", "
                  << "reset: " << static_cast<int>(dut->reset) << ", "
                  << "io_en_a: " << static_cast<int>(dut->io_en_a) << ", "
                  << "n[0]: " << static_cast<int>(dut->io_n_out_0) << ", "
                  << "n[1]: " << static_cast<int>(dut->io_n_out_1) << ", "
                  << "x: " << static_cast<int>(dut->io_x_out) << std::endl; 
        
        sim_time ++;
    }

    return 0;
}
