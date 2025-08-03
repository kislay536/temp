module subtractor (
    input  [63:0] a,
    input  [63:0] b,
    output [63:0] result
);
    initial
        $display("*** == *** From RTL->Subtractor doing Subtractor things");
        
    assign result = a - b;
endmodule
