module subtractor (
    input  [63:0] a,
    input  [63:0] b,
    output [63:0] result
);
    // initial
        // $display("*** == *** From RTL->Subtractor doing Subtractor things");
        
    // assign result = a - b;

    import "DPI-C" function void dpi_subtractor(input longint unsigned a, input longint unsigned b, output longint unsigned result);

    always @(*) begin
        dpi_subtractor(a,b,result);
    end
endmodule
