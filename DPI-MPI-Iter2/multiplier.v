// ================= MULTIPLIER =================
module multiplier (
    input  [63:0] a,
    input  [63:0] b,
    input         start,
    input         ack_in_add,
    input         ack_in_sub,
    input         ack_in_div,
    input         add_working,
    input         sub_working,
    input         div_working,
    output reg    ack_to_add,
    output reg    ack_to_sub,
    output reg    ack_to_div,
    output reg    working,
    output reg [63:0] result
);
    // initial
        // $display("*** == *** From RTL->Multiplier doing Multiplier things");

    import "DPI-C" function void dpi_multiplier(input longint unsigned a, input longint unsigned b, input int unsigned start, input int unsigned ack_in_add, input int unsigned ack_in_sub, input int unsigned ack_in_div, input int unsigned add_working, input int unsigned sub_working, input int unsigned div_working, output int unsigned ack_to_add, output int unsigned ack_to_sub, output int unsigned ack_to_div, output int unsigned working,output longint unsigned result);

    always @(*) begin
        dpi_multiplier(a,b,start, ack_in_add, ack_in_sub, ack_in_div, add_working, sub_working, div_working, ack_to_add, ack_to_sub, ack_to_div, working, result);
    end

endmodule
