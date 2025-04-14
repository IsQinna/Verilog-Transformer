module transformer(
    // 输入：Q, K, V 是 2×2 半精度矩阵
    input  logic [15:0] q00, q01, q10, q11,
    input  logic [15:0] k00, k01, k10, k11,
    input  logic [15:0] v00, v01, v10, v11,
    input clk,  // 添加时钟输入信号
    // 输出：最终 Attention 输出
    output logic [15:0] out00, out01,
    output logic [15:0] out10, out11
);

    // === Stage 1: Q × K^T ===
    logic [15:0] qk00_raw, qk01_raw, qk10_raw, qk11_raw;

    mma u_mma (
        .a00(q00), .a01(q01),
        .a10(q10), .a11(q11),

        .b00(k00), .b01(k01), // K^T
        .b10(k10), .b11(k11),

        .out00(qk00_raw), .out01(qk01_raw),
        .out10(qk10_raw), .out11(qk11_raw)
    );

    // === Stage 2: 缩放 Attention Scores ===
    // 缩放因子 = 0.5 (IEEE 754 half: 0x3800)
    localparam logic [15:0] SCALE = 16'h3800;

    logic [15:0] qk00, qk01, qk10, qk11;

    fp_mul u_mul00 (.floatA(qk00_raw), .floatB(SCALE), .product(qk00));
    fp_mul u_mul01 (.floatA(qk01_raw), .floatB(SCALE), .product(qk01));
    fp_mul u_mul10 (.floatA(qk10_raw), .floatB(SCALE), .product(qk10));
    fp_mul u_mul11 (.floatA(qk11_raw), .floatB(SCALE), .product(qk11));

    // === Stage 3: (0.5 × QK^T) × V ===
    mmd u_mmd (
        .a00(qk00), .a01(qk01),
        .a10(qk10), .a11(qk11),

        .v00(v00), .v01(v01),
        .v10(v10), .v11(v11),

        .out00(out00), .out01(out01),
        .out10(out10), .out11(out11)
    );

    // 使用中间信号避免阻塞和非阻塞赋值冲突
    logic [15:0] out00_reg, out01_reg, out10_reg, out11_reg;

    // 时序逻辑，确保所有的计算在时钟的上升沿同步
    always @(posedge clk) begin
        out00_reg <= out00;
        out01_reg <= out01;
        out10_reg <= out10;
        out11_reg <= out11;
    end

    // 将中间信号赋值给输出信号
    assign out00 = out00_reg;
    assign out01 = out01_reg;
    assign out10 = out10_reg;
    assign out11 = out11_reg;

endmodule

