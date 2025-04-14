module fp_mul (
    input wire [15:0] floatA,
    input wire [15:0] floatB,
    output reg [15:0] product
);

reg sign;
reg [5:0] exponent;
reg [9:0] mantissa;
reg [10:0] fractionA, fractionB;
reg [21:0] fraction;

always @* begin
    // 设置所有组合逻辑变量默认值以避免 latch
    sign = 0;
    exponent = 0;
    mantissa = 0;
    fractionA = 0;
    fractionB = 0;
    fraction = 0;
    product = 0;

    if (floatA != 0 && floatB != 0) begin
        sign = floatA[15] ^ floatB[15];
        exponent = floatA[14:10] + floatB[14:10] - 5'd15 + 5'd2;
        fractionA = {1'b1, floatA[9:0]};
        fractionB = {1'b1, floatB[9:0]};
        fraction = fractionA * fractionB;

        if (fraction[21])      begin fraction = fraction << 1; exponent = exponent - 1; end
        else if (fraction[20]) begin fraction = fraction << 2; exponent = exponent - 2; end
        else if (fraction[19]) begin fraction = fraction << 3; exponent = exponent - 3; end
        else if (fraction[18]) begin fraction = fraction << 4; exponent = exponent - 4; end
        else if (fraction[17]) begin fraction = fraction << 5; exponent = exponent - 5; end
        else if (fraction[16]) begin fraction = fraction << 6; exponent = exponent - 6; end
        else if (fraction[15]) begin fraction = fraction << 7; exponent = exponent - 7; end
        else if (fraction[14]) begin fraction = fraction << 8; exponent = exponent - 8; end
        else if (fraction[13]) begin fraction = fraction << 9; exponent = exponent - 9; end
        else if (fraction[12]) begin fraction = fraction << 10; exponent = exponent - 10; end

        mantissa = fraction[21:12];

        if (exponent[5])  // 若 exponent 为负数则置零
            product = 16'b0;
        else
            product = {sign, exponent[4:0], mantissa};
    end
end

endmodule

