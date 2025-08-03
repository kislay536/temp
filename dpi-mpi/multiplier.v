module multiplier (
    input  logic [63:0] a,
    input  logic [63:0] b,
    output logic [63:0] result
);
    import "DPI-C" function void dpi_multiplier(input longint unsigned a, input longint unsigned b, output longint unsigned result);

    always @(*) begin
        dpi_multiplier(a,b,result);
    end

endmodule
