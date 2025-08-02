module multiplier (
    input  logic [63:0] a,
    input  logic [63:0] b,
    output logic [63:0] result
);

    import "DPI-C" function void dpi_multiplier_init();
    import "DPI-C" function void dpi_multiplier_send(input longint unsigned a, input longint unsigned b);
    import "DPI-C" function longint dpi_multiplier_eval();
    import "DPI-C" function void dpi_multiplier_eval2(input longint unsigned a, input longint unsigned b, output longint unsigned result);
    initial begin
        // $display("Hello1");
        dpi_multiplier_init();  // only once
        // $display("Hello2");
        // dpi_multiplier_send(a, b);
    end

    // assign result = dpi_multiplier_eval();

    always @(*) begin
        // $display("Hello3");
        // $display("Hello4");
        // dpi_multiplier_send(a, b);
        // result = dpi_multiplier_eval();
        dpi_multiplier_eval2(a,b,result);
        // $display("Hello5");
        // #500;
    end

endmodule

//can't use timing in always block with everything in sensitivity list

// module multiplier (
//     input  [63:0] a,
//     input  [63:0] b,
//     output [63:0] result
// );
//     assign result = a * b;
// endmodule