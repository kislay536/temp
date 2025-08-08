
// ================= ADDER =================
module adder (
    input  [63:0] a,
    input  [63:0] b,
    input         start,
    input         ack_in_sub,
    input         ack_in_mul,
    input         ack_in_div,
    input         sub_working,
    input         mul_working,
    input         div_working,
    output reg    ack_to_sub,
    output reg    ack_to_mul,
    output reg    ack_to_div,
    output reg    working,
    output reg [63:0] result
);
    always @(*) begin
        // Default
        ack_to_sub = 0; ack_to_mul = 0; ack_to_div = 0;
        working = 0; result = 64'd0;

        if (start) begin
            // Tell others we're starting
            working = 1;

            // Others respond if idle
            ack_to_sub = !working;
            ack_to_mul = !working;
            ack_to_div = !working;

            // Only compute when all acks received
            if (ack_in_sub && ack_in_mul && ack_in_div)
                result = a + b;
        end
        else begin
            // If someone else is working, send ack to them
            if (sub_working) ack_to_sub = 1;
            if (mul_working) ack_to_mul = 1;
            if (div_working) ack_to_div = 1;
        end
    end
endmodule
