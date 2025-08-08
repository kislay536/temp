// ================= CALCULATOR (just starts modules and takes result) =================
module calculator (
    input  [63:0] a,
    input  [63:0] b,
    input  [3:0]  mode,
    output [63:0] result
);

    // Start signals
    reg start_add, start_sub, start_mul, start_div;

    // Working signals from modules
    wire add_working, sub_working, mul_working, div_working;

    // Acknowledgment signals between modules
    wire add_ack_from_sub, add_ack_from_mul, add_ack_from_div;
    wire sub_ack_from_add, sub_ack_from_mul, sub_ack_from_div;
    wire mul_ack_from_add, mul_ack_from_sub, mul_ack_from_div;
    wire div_ack_from_add, div_ack_from_sub, div_ack_from_mul;

    // Results
    wire [63:0] add_out, sub_out, mul_out, div_out;

    // Instantiate modules
    adder u_add (
        .a(a), .b(b),
        .start(start_add),
        .ack_in_sub(add_ack_from_sub),
        .ack_in_mul(add_ack_from_mul),
        .ack_in_div(add_ack_from_div),
        .sub_working(sub_working),
        .mul_working(mul_working),
        .div_working(div_working),
        .ack_to_sub(sub_ack_from_add),
        .ack_to_mul(mul_ack_from_add),
        .ack_to_div(div_ack_from_add),
        .working(add_working),
        .result(add_out)
    );

    subtractor u_sub (
        .a(a), .b(b),
        .start(start_sub),
        .ack_in_add(sub_ack_from_add),
        .ack_in_mul(sub_ack_from_mul),
        .ack_in_div(sub_ack_from_div),
        .add_working(add_working),
        .mul_working(mul_working),
        .div_working(div_working),
        .ack_to_add(add_ack_from_sub),
        .ack_to_mul(mul_ack_from_sub),
        .ack_to_div(div_ack_from_sub),
        .working(sub_working),
        .result(sub_out)
    );

    multiplier u_mul (
        .a(a), .b(b),
        .start(start_mul),
        .ack_in_add(mul_ack_from_add),
        .ack_in_sub(mul_ack_from_sub),
        .ack_in_div(mul_ack_from_div),
        .add_working(add_working),
        .sub_working(sub_working),
        .div_working(div_working),
        .ack_to_add(add_ack_from_mul),
        .ack_to_sub(sub_ack_from_mul),
        .ack_to_div(div_ack_from_mul),
        .working(mul_working),
        .result(mul_out)
    );

    divider u_div (
        .a(a), .b(b),
        .start(start_div),
        .ack_in_add(div_ack_from_add),
        .ack_in_sub(div_ack_from_sub),
        .ack_in_mul(div_ack_from_mul),
        .add_working(add_working),
        .sub_working(sub_working),
        .mul_working(mul_working),
        .ack_to_add(add_ack_from_div),
        .ack_to_sub(sub_ack_from_div),
        .ack_to_mul(mul_ack_from_div),
        .working(div_working),
        .result(div_out)
    );

    // Calculator start control
    always @(*) begin
        start_add = (mode == 4'd0);
        start_sub = (mode == 4'd1);
        start_mul = (mode == 4'd2);
        start_div = (mode == 4'd3);
    end

    // Output result from the module that was started
    assign result =
        (mode == 4'd0) ? add_out :
        (mode == 4'd1) ? sub_out :
        (mode == 4'd2) ? mul_out :
        (mode == 4'd3) ? div_out :
        64'd0;

endmodule
