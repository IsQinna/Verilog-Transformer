#include "verilated_vcd_c.h" // 引入 VCD 追踪类-波形图 
#include "Vtransformer.h"
#include "verilated.h"
#include <iostream>
#include <cmath>
#include <cstdint>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cstring>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

// 半精度转 float（16-bit float -> 32-bit float）
float half_to_float(uint16_t h) {
    uint16_t h_exp = (h & 0x7C00) >> 10;  // 提取指数
    uint16_t h_frac = h & 0x03FF;         // 提取尾数
    uint16_t h_sign = (h & 0x8000) >> 15; // 提取符号

    uint32_t f_sign = ((uint32_t)h_sign) << 31;
    uint32_t f_exp, f_frac;

    if (h_exp == 0) {
        if (h_frac == 0) {
            // 零
            f_exp = 0;
            f_frac = 0;
        } else {
            // 非正规数（subnormal），先转为正规数
            int shift = 0;
            while ((h_frac & 0x0400) == 0) {
                h_frac <<= 1;
                shift++;
            }
            h_frac &= 0x03FF;
            f_exp = (127 - 15 - shift) << 23;
            f_frac = ((uint32_t)h_frac) << 13;
        }
    } else if (h_exp == 0x1F) {
        // Inf 或 NaN
        f_exp = 0xFF << 23;
        f_frac = ((uint32_t)h_frac) << 13;
    } else {
        // 正规数
        f_exp = ((uint32_t)(h_exp + (127 - 15))) << 23;
        f_frac = ((uint32_t)h_frac) << 13;
    }

    uint32_t f = f_sign | f_exp | f_frac;
    float result;
    memcpy(&result, &f, sizeof(result));
    return result;
}

// 打印半精度矩阵
void print_matrix_2x2(const char* name, uint16_t m00, uint16_t m01, uint16_t m10, uint16_t m11) {
    std::cout << name << " (float):\n";
    std::cout << "  [" << std::dec << half_to_float(m00) << ", " << half_to_float(m01) << "]\n";
    std::cout << "  [" << half_to_float(m10) << ", " << half_to_float(m11) << "]\n\n";
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vtransformer* top = new Vtransformer;
    
    VerilatedVcdC* tfp = new VerilatedVcdC;//波形图
    Verilated::traceEverOn(true);      // 开启追踪
    top->trace(tfp, 99);               // 设置追踪层级
    tfp->open("wave.vcd");             // 设置输出文件名
    
    // 示例 Q/K/V：每个 2×2
    uint16_t q00 = 0x3C00, q01 = 0x0000; // Q = [[1.0, 0.0],
    uint16_t q10 = 0x0000, q11 = 0x3C00; //      [0.0, 1.0]]

    uint16_t k00 = 0x3C00, k01 = 0x0000; // K = [[1.0, 0.0],
    uint16_t k10 = 0x0000, k11 = 0x3C00; //      [0.0, 1.0]]

    uint16_t v00 = 0x3C00, v01 = 0x4000; // V = [[1.0, 2.0],
    uint16_t v10 = 0x4200, v11 = 0x4400; //      [3.0, 4.0]]

    // 设置输入
    top->q00 = q00; top->q01 = q01;
    top->q10 = q10; top->q11 = q11;

    top->k00 = k00; top->k01 = k01;
    top->k10 = k10; top->k11 = k11;

    top->v00 = v00; top->v01 = v01;
    top->v10 = v10; top->v11 = v11;

    // 记录仿真开始时间
    auto start = std::chrono::high_resolution_clock::now();

    // 运行仿真步骤
    for (int i = 0; i < 20; i++) {
        top->clk = (main_time % 2 == 0); // 使用 main_time 控制时钟的上升沿和下降沿
        top->eval();
        tfp->dump(main_time); // 波形图
        main_time++;
    }

    // 记录仿真结束时间
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();

    // 打印输入矩阵
    print_matrix_2x2("Q", q00, q01, q10, q11);
    print_matrix_2x2("K", k00, k01, k10, k11);
    print_matrix_2x2("V", v00, v01, v10, v11);

    // 打印输出结果
    print_matrix_2x2("Attention Output",
                     top->out00, top->out01,
                     top->out10, top->out11);

    // 假设每次操作涉及 10 次浮点运算，20 步仿真需要 20 * 10 = 200 次浮点运算
    long total_flops = 200; // 计算 FLOPs
    double performance = total_flops / (duration / 1e9) / 1e9; // GFLOPS

    // 输出执行时间和性能
    std::cout << "Total execution time: " << duration / 1e9 << " s" << std::endl;
    std::cout << "Total FLOPs: " << total_flops << std::endl;
    std::cout << "Performance: " << performance << " GFLOPS" << std::endl;

    tfp->close();  // 关闭 VCD 文件
    delete top;
    return 0;
}

