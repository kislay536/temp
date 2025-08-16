// [file: calculator.v]
module calculator(
    input  wire        clk,
    input  wire [63:0] a,
    input  wire [63:0] b,
    input  wire [3:0]  mode,
    output wire [63:0] result,
    output wire        valid
    );

    intermediate int_con(
        .clk(clk), 
        .a(a), 
        .b(b), 
        .mode(mode), 
        .result(result), 
        .valid(valid)
    );

endmodule