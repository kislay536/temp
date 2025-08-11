// ================= SUBTRACTOR =================
module subtractor (
    input  [63:0] a,
    input  [63:0] b,
    input         start,
    input         ack_in_add,
    input         ack_in_mul,
    input         ack_in_div,
    input         add_working,
    input         mul_working,
    input         div_working,
    output reg    ack_to_add,
    output reg    ack_to_mul,
    output reg    ack_to_div,
    output reg    working,
    output reg [63:0] result
);
    always @(*) begin
        ack_to_add = 0; ack_to_mul = 0; ack_to_div = 0;
        working = 0; result = 64'd0;

        if (start) begin
            working = 1;
            ack_to_add = !working;
            ack_to_mul = !working;
            ack_to_div = !working;
            if (ack_in_add && ack_in_mul && ack_in_div)
                result = a - b;
        end
        else begin
            if (add_working) ack_to_add = 1;
            if (mul_working) ack_to_mul = 1;
            if (div_working) ack_to_div = 1;
        end
    end
endmodule
