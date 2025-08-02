module calculator (
    input  [63:0] a,
    input  [63:0] b,
    input  [3:0]  mode,
    output [63:0] result
);

    import "DPI-C" function void dpi_multiplier_init();
    import "DPI-C" function void dpi_multiplier_send(input longint unsigned a, input longint unsigned b);
    // import "DPI-C" function void dpi_multiplier_eval(output longint unsigned r);
    import "DPI-C" function longint dpi_multiplier_eval();


    reg [63:0] add_out, sub_out, mul_out, div_out;
    
    // Instantiate arithmetic modules
    adder      u_add (.a(a), .b(b), .result(add_out));
    subtractor u_sub (.a(a), .b(b), .result(sub_out));
    // initial begin
    //     $display("Hello1");
    //     dpi_multiplier_init();  // only once
    //     $display("Hello2");
    // end
    // always @(*) begin
    //     $display("Hello3");
    //     $display("Hello4");
    //     dpi_multiplier_send(a, b);
    //     mul_out = dpi_multiplier_eval();
    //     $display("Hello5");
    //     // #500;
    // end
    multiplier u_mul (.a(a), .b(b), .result(mul_out));
    divider    u_div (.a(a), .b(b), .result(div_out));

    // Select result based on mode
    assign result =
        (mode == 4'd0) ? add_out :
        (mode == 4'd1) ? sub_out :
        (mode == 4'd2) ? mul_out :
        (mode == 4'd3) ? div_out :
        64'd0; // default value if mode invalid

endmodule
