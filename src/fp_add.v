module fp_add (
    input  wire [15:0] floatA,
    input  wire [15:0] floatB,
    output reg [15:0] sum
);

reg sign; // 输出结果的正负标志位
reg signed [5:0] exponent; // 输出数据的指数，扩展为 6 位
reg [9:0] mantissa; // 输出数据的尾数
reg [5:0] exponentA, exponentB; // 输入数据的阶数，扩展为 6 位
reg [10:0] fractionA, fractionB, fraction; // 计算暂存位
reg [7:0] shiftAmount; // 移位寄存器，为了计算加法时配平阶数
reg cout;

always @ (floatA or floatB) 
begin
    exponentA = {1'b0, floatA[14:10]};  // 扩展为 6 位
    exponentB = {1'b0, floatB[14:10]};  // 扩展为 6 位
    fractionA = {1'b1, floatA[9:0]};
    fractionB = {1'b1, floatB[9:0]}; 
    shiftAmount = 0; // 默认值
    cout = 0;         // 默认值
    fraction = 0;     // 默认值
    sign = 0;         // 默认值
    mantissa = 0;     // 默认值

    exponent = exponentA;

    if (floatA == 0) 		// 特殊情况A为0
    begin						
        sum = floatB;
    end 
    else if (floatB == 0)  // 特殊情况B为0
    begin					
        sum = floatA;
    end 
    else if (floatA[14:0] == floatB[14:0] && floatA[15]^floatB[15]==1'b1) //特殊情况互为相反数
    begin
        sum=0;
    end 
    else 
    begin
        if (exponentB > exponentA)  // 配平阶数使得相加两数在同一阶数上
        begin
            //shiftAmount = exponentB - exponentA;
            shiftAmount = {2'b00, exponentB} - {2'b00, exponentA}; // 将它们扩展为 8 位
            fractionA = fractionA >> (shiftAmount);
            exponent = exponentB;
        end 
        else if (exponentA > exponentB) 
        begin 
            //shiftAmount = exponentA - exponentB;
            shiftAmount = {2'b00, exponentB} - {2'b00, exponentA}; // 将它们扩展为 8 位
            fractionB = fractionB >> (shiftAmount);
            exponent = exponentA;
        end
        if (floatA[15] == floatB[15]) 	// 两数同号
        begin							
            {cout,fraction} = fractionA + fractionB;
            if (cout == 1'b1) 
            begin
                {cout,fraction} = {cout,fraction} >> 1;
                exponent = exponent + 1;
            end
            sign = floatA[15];
        end 
        else 
        begin						//两数异号
            if (floatA[15] == 1'b1) // A 为负数
            begin
                {cout,fraction} = fractionB - fractionA;	// B-A
            end 
            else 
            begin
                {cout,fraction} = fractionA - fractionB;	// A-B
            end
            sign = cout;
            if (cout == 1'b1) 
                fraction = -fraction; // 0-负数可求出此数的绝对值
            // 对franction进行阶数配平求出尾数
            if (fraction [10] == 0) begin
                if (fraction[9] == 1'b1) begin
                    fraction = fraction << 1;
                    exponent = exponent - 1;
                end else if (fraction[8] == 1'b1) begin
                    fraction = fraction << 2;
                    exponent = exponent - 2;
                end else if (fraction[7] == 1'b1) begin
                    fraction = fraction << 3;
                    exponent = exponent - 3;
                end else if (fraction[6] == 1'b1) begin
                    fraction = fraction << 4;
                    exponent = exponent - 4;
                end else if (fraction[5] == 1'b1) begin
                    fraction = fraction << 5;
                    exponent = exponent - 5;
                end else if (fraction[4] == 1'b1) begin
                    fraction = fraction << 6;
                    exponent = exponent - 6;
                end else if (fraction[3] == 1'b1) begin
                    fraction = fraction << 7;
                    exponent = exponent - 7;
                end else if (fraction[2] == 1'b1) begin
                    fraction = fraction << 8;
                    exponent = exponent - 8;
                end else if (fraction[1] == 1'b1) begin
                    fraction = fraction << 9;
                    exponent = exponent - 9;
                end else if (fraction[0] == 1'b1) begin
                    fraction = fraction << 10;
                    exponent = exponent - 10;
                end 
            end
        end
        mantissa = fraction[9:0];
        if(exponent[5]==1'b1) begin //太小了输出全0太小了
            sum = 16'b0000000000000000;
        end
        else begin
            sum = {sign,exponent[4:0],mantissa}; // 组合数据
        end		
    end		
end

endmodule

