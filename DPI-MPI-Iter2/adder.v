
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
    // initial
        // $display("*** == *** From RTL->Adder doing adder things");
    // assign result = a + b;
 
    import "DPI-C" function void dpi_adder(input longint unsigned a, input longint unsigned b, input int unsigned start, input int unsigned ack_in_mul, input int unsigned ack_in_sub, input int unsigned ack_in_div, input int unsigned mul_working, input int unsigned sub_working, input int unsigned div_working, output int unsigned ack_to_mul, output int unsigned ack_to_sub, output int unsigned ack_to_div, output int unsigned working,output longint unsigned result);

    always @(*) begin
        dpi_adder(a,b,start, ack_in_mul, ack_in_sub, ack_in_div, mul_working, sub_working, div_working, ack_to_mul, ack_to_sub, ack_to_div, working, result);
    end
endmodule
