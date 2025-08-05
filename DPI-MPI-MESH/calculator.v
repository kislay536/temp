// calculator.v
module calculator (
    input  [63:0] a,
    input  [63:0] b,
    input  [3:0]  mode,
    output [63:0] result
);

    alu_tile alu_inst (
        .a(a),
        .b(b),
        .mode(mode),
        .result(result)
    );

endmodule
