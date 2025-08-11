module calculator(
    input  wire [63:0] a,
    input  wire [63:0] b,
    input  wire [3:0]  mode,
    output wire [63:0] result,
    output wire        valid
    );

    intermediate int_con(.a(a), .b(b), .mode(mode), .result(result), .valid(valid));


endmodule