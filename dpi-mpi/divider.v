module divider (
    input  [63:0] a,
    input  [63:0] b,
    output [63:0] result
);
    initial
        $display("*** == *** From RTL->Divider doing Divider things");
    assign result = b != 0 ? a / b : 64'd0;
endmodule
