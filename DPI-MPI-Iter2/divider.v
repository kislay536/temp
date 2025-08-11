// ================= DIVIDER =================
module divider (
    input  [63:0] a,
    input  [63:0] b,
    input         start,
    input         ack_in_add,
    input         ack_in_sub,
    input         ack_in_mul,
    input         add_working,
    input         sub_working,
    input         mul_working,
    output reg    ack_to_add,
    output reg    ack_to_sub,
    output reg    ack_to_mul,
    output reg    working,
    output reg [63:0] result
);
    // initial
        // $display("*** == *** From RTL->Divider doing Divider things");
    // assign result = b != 0 ? a / b : 64'd0;
    import "DPI-C" function void dpi_divider(input longint unsigned a, input longint unsigned b, input int unsigned start, input int unsigned ack_in_add, input int unsigned ack_in_sub, input int unsigned ack_in_mul, input int unsigned add_working, input int unsigned sub_working, input int unsigned mul_working, output int unsigned ack_to_add, output int unsigned ack_to_sub, output int unsigned ack_to_mul, output int unsigned working,output longint unsigned result);

    always @(*) begin
        dpi_divider(a,b,start, ack_in_add, ack_in_sub, ack_in_mul, add_working, sub_working, mul_working, ack_to_add, ack_to_sub, ack_to_mul, working, result);
    end
endmodule
