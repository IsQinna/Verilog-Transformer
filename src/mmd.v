module mmd (
    input  [15:0] a00, a01, // Attention 权重矩阵 A 行 1
    input  [15:0] a10, a11, // Attention 权重矩阵 A 行 2
    input  [15:0] v00, v01, // 值矩阵 V 列 1
    input  [15:0] v10, v11, // 值矩阵 V 列 2
    output [15:0] out00, out01, // 输出矩阵第一行（最终注意力向量 1）
    output [15:0] out10, out11  // 输出矩阵第二行（最终注意力向量 2）
);

    // 中间乘积信号
    wire [15:0] m00_0, m00_1, m01_0, m01_1;
    wire [15:0] m10_0, m10_1, m11_0, m11_1;

    // 元素乘法：row 0
    fp_mul mul00_0 (.floatA(a00), .floatB(v00), .product(m00_0));
    fp_mul mul00_1 (.floatA(a01), .floatB(v10), .product(m00_1));

    fp_mul mul01_0 (.floatA(a00), .floatB(v01), .product(m01_0));
    fp_mul mul01_1 (.floatA(a01), .floatB(v11), .product(m01_1));

    // 元素乘法：row 1
    fp_mul mul10_0 (.floatA(a10), .floatB(v00), .product(m10_0));
    fp_mul mul10_1 (.floatA(a11), .floatB(v10), .product(m10_1));

    fp_mul mul11_0 (.floatA(a10), .floatB(v01), .product(m11_0));
    fp_mul mul11_1 (.floatA(a11), .floatB(v11), .product(m11_1));

    // 加法器输出
    fp_add add00 (.floatA(m00_0), .floatB(m00_1), .sum(out00));
    fp_add add01 (.floatA(m01_0), .floatB(m01_1), .sum(out01));
    fp_add add10 (.floatA(m10_0), .floatB(m10_1), .sum(out10));
    fp_add add11 (.floatA(m11_0), .floatB(m11_1), .sum(out11));

endmodule

