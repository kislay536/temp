module adder (
    input  [63:0] a,
    input  [63:0] b,
    output [63:0] result
);
    // initial
        // $display("*** == *** From RTL->Adder doing adder things");
    // assign result = a + b;
 
    import "DPI-C" function void dpi_adder(input longint unsigned a, input longint unsigned b, output longint unsigned result);

    always @(*) begin
        dpi_adder(a,b,result);
    end
endmodule
