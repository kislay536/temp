module divider (
    input  [63:0] a,
    input  [63:0] b,
    output [63:0] result
);
    assign result = b != 0 ? a / b : 64'd0;
endmodule
