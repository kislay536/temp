module divider (
    input  [63:0] a,
    input  [63:0] b,
    output [63:0] result
);
    // initial
        // $display("*** == *** From RTL->Divider doing Divider things");
    // assign result = b != 0 ? a / b : 64'd0;
    import "DPI-C" function void dpi_divider(input longint unsigned a, input longint unsigned b, output longint unsigned result);

    always @(*) begin
        dpi_divider(a,b,result);
    end
endmodule
