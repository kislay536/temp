// Modified by Metro-MPI to use specialized wrappers

// ---------------------------
// Top-level calculator: instantiates and manages a 3x3 clocked NoC.
//
// FINAL CORRECTED VERSION 2:
// - Added a 'is_busy' state register for one-shot injection. This prevents
//   continuously re-injecting the same request, allowing the response
//   packet to be processed by tile(0,0).
// ---------------------------
module intermediate(
    input  wire        clk,
    input  wire [63:0] a,
    input  wire [63:0] b,
    input  wire [3:0]  mode,
    output wire [63:0] result,
    output wire        valid
);

    // helper: build ctrl packet
    function [15:0] make_ctrl(input bit resp, input [1:0] dx, input [1:0] dy, input [3:0] md);
        begin
            make_ctrl = {7'd0, resp, dx, dy, md};
        end
    endfunction

    // --- Signals representing the outputs of each tile (Wires) ---
    wire [63:0] out_a_n_0, out_a_n_1, out_a_n_2, out_a_n_3, out_a_n_4, out_a_n_5, out_a_n_6, out_a_n_7, out_a_n_8;
    wire [63:0] out_b_n_0, out_b_n_1, out_b_n_2, out_b_n_3, out_b_n_4, out_b_n_5, out_b_n_6, out_b_n_7, out_b_n_8;
    wire [15:0] out_ctrl_n_0, out_ctrl_n_1, out_ctrl_n_2, out_ctrl_n_3, out_ctrl_n_4, out_ctrl_n_5, out_ctrl_n_6, out_ctrl_n_7, out_ctrl_n_8;
    wire out_valid_n_0, out_valid_n_1, out_valid_n_2, out_valid_n_3, out_valid_n_4, out_valid_n_5, out_valid_n_6, out_valid_n_7, out_valid_n_8;

    wire [63:0] out_a_e_0, out_a_e_1, out_a_e_2, out_a_e_3, out_a_e_4, out_a_e_5, out_a_e_6, out_a_e_7, out_a_e_8;
    wire [63:0] out_b_e_0, out_b_e_1, out_b_e_2, out_b_e_3, out_b_e_4, out_b_e_5, out_b_e_6, out_b_e_7, out_b_e_8;
    wire [15:0] out_ctrl_e_0, out_ctrl_e_1, out_ctrl_e_2, out_ctrl_e_3, out_ctrl_e_4, out_ctrl_e_5, out_ctrl_e_6, out_ctrl_e_7, out_ctrl_e_8;
    wire out_valid_e_0, out_valid_e_1, out_valid_e_2, out_valid_e_3, out_valid_e_4, out_valid_e_5, out_valid_e_6, out_valid_e_7, out_valid_e_8;

    wire [63:0] out_a_s_0, out_a_s_1, out_a_s_2, out_a_s_3, out_a_s_4, out_a_s_5, out_a_s_6, out_a_s_7, out_a_s_8;
    wire [63:0] out_b_s_0, out_b_s_1, out_b_s_2, out_b_s_3, out_b_s_4, out_b_s_5, out_b_s_6, out_b_s_7, out_b_s_8;
    wire [15:0] out_ctrl_s_0, out_ctrl_s_1, out_ctrl_s_2, out_ctrl_s_3, out_ctrl_s_4, out_ctrl_s_5, out_ctrl_s_6, out_ctrl_s_7, out_ctrl_s_8;
    wire out_valid_s_0, out_valid_s_1, out_valid_s_2, out_valid_s_3, out_valid_s_4, out_valid_s_5, out_valid_s_6, out_valid_s_7, out_valid_s_8;

    wire [63:0] out_a_w_0, out_a_w_1, out_a_w_2, out_a_w_3, out_a_w_4, out_a_w_5, out_a_w_6, out_a_w_7, out_a_w_8;
    wire [63:0] out_b_w_0, out_b_w_1, out_b_w_2, out_b_w_3, out_b_w_4, out_b_w_5, out_b_w_6, out_b_w_7, out_b_w_8;
    wire [15:0] out_ctrl_w_0, out_ctrl_w_1, out_ctrl_w_2, out_ctrl_w_3, out_ctrl_w_4, out_ctrl_w_5, out_ctrl_w_6, out_ctrl_w_7, out_ctrl_w_8;
    wire out_valid_w_0, out_valid_w_1, out_valid_w_2, out_valid_w_3, out_valid_w_4, out_valid_w_5, out_valid_w_6, out_valid_w_7, out_valid_w_8;

    wire [63:0] host_out_a_0, host_out_a_1, host_out_a_2, host_out_a_3, host_out_a_4, host_out_a_5, host_out_a_6, host_out_a_7, host_out_a_8;
    wire host_out_valid_0, host_out_valid_1, host_out_valid_2, host_out_valid_3, host_out_valid_4, host_out_valid_5, host_out_valid_6, host_out_valid_7, host_out_valid_8;

    // --- State-holding registers for all tile inputs ---
    reg [63:0] in_a_n_0, in_a_n_1, in_a_n_2, in_a_n_3, in_a_n_4, in_a_n_5, in_a_n_6, in_a_n_7, in_a_n_8;
    reg [63:0] in_b_n_0, in_b_n_1, in_b_n_2, in_b_n_3, in_b_n_4, in_b_n_5, in_b_n_6, in_b_n_7, in_b_n_8;
    reg [15:0] in_ctrl_n_0, in_ctrl_n_1, in_ctrl_n_2, in_ctrl_n_3, in_ctrl_n_4, in_ctrl_n_5, in_ctrl_n_6, in_ctrl_n_7, in_ctrl_n_8;
    reg in_valid_n_0, in_valid_n_1, in_valid_n_2, in_valid_n_3, in_valid_n_4, in_valid_n_5, in_valid_n_6, in_valid_n_7, in_valid_n_8;

    reg [63:0] in_a_e_0, in_a_e_1, in_a_e_2, in_a_e_3, in_a_e_4, in_a_e_5, in_a_e_6, in_a_e_7, in_a_e_8;
    reg [63:0] in_b_e_0, in_b_e_1, in_b_e_2, in_b_e_3, in_b_e_4, in_b_e_5, in_b_e_6, in_b_e_7, in_b_e_8;
    reg [15:0] in_ctrl_e_0, in_ctrl_e_1, in_ctrl_e_2, in_ctrl_e_3, in_ctrl_e_4, in_ctrl_e_5, in_ctrl_e_6, in_ctrl_e_7, in_ctrl_e_8;
    reg in_valid_e_0, in_valid_e_1, in_valid_e_2, in_valid_e_3, in_valid_e_4, in_valid_e_5, in_valid_e_6, in_valid_e_7, in_valid_e_8;

    reg [63:0] in_a_s_0, in_a_s_1, in_a_s_2, in_a_s_3, in_a_s_4, in_a_s_5, in_a_s_6, in_a_s_7, in_a_s_8;
    reg [63:0] in_b_s_0, in_b_s_1, in_b_s_2, in_b_s_3, in_b_s_4, in_b_s_5, in_b_s_6, in_b_s_7, in_b_s_8;
    reg [15:0] in_ctrl_s_0, in_ctrl_s_1, in_ctrl_s_2, in_ctrl_s_3, in_ctrl_s_4, in_ctrl_s_5, in_ctrl_s_6, in_ctrl_s_7, in_ctrl_s_8;
    reg in_valid_s_0, in_valid_s_1, in_valid_s_2, in_valid_s_3, in_valid_s_4, in_valid_s_5, in_valid_s_6, in_valid_s_7, in_valid_s_8;

    reg [63:0] in_a_w_0, in_a_w_1, in_a_w_2, in_a_w_3, in_a_w_4, in_a_w_5, in_a_w_6, in_a_w_7, in_a_w_8;
    reg [63:0] in_b_w_0, in_b_w_1, in_b_w_2, in_b_w_3, in_b_w_4, in_b_w_5, in_b_w_6, in_b_w_7, in_b_w_8;
    reg [15:0] in_ctrl_w_0, in_ctrl_w_1, in_ctrl_w_2, in_ctrl_w_3, in_ctrl_w_4, in_ctrl_w_5, in_ctrl_w_6, in_ctrl_w_7, in_ctrl_w_8;
    reg in_valid_w_0, in_valid_w_1, in_valid_w_2, in_valid_w_3, in_valid_w_4, in_valid_w_5, in_valid_w_6, in_valid_w_7, in_valid_w_8;

    reg [63:0] host_in_a_0, host_in_a_1, host_in_a_2, host_in_a_3, host_in_a_4, host_in_a_5, host_in_a_6, host_in_a_7, host_in_a_8;
    reg [63:0] host_in_b_0, host_in_b_1, host_in_b_2, host_in_b_3, host_in_b_4, host_in_b_5, host_in_b_6, host_in_b_7, host_in_b_8;
    reg [15:0] host_in_ctrl_0, host_in_ctrl_1, host_in_ctrl_2, host_in_ctrl_3, host_in_ctrl_4, host_in_ctrl_5, host_in_ctrl_6, host_in_ctrl_7, host_in_ctrl_8;
    reg host_in_valid_0, host_in_valid_1, host_in_valid_2, host_in_valid_3, host_in_valid_4, host_in_valid_5, host_in_valid_6, host_in_valid_7, host_in_valid_8;

    // --- Next-state logic variables ---
    reg [63:0] next_in_a_n_0, next_in_a_n_1, next_in_a_n_2, next_in_a_n_3, next_in_a_n_4, next_in_a_n_5, next_in_a_n_6, next_in_a_n_7, next_in_a_n_8;
    reg [63:0] next_in_b_n_0, next_in_b_n_1, next_in_b_n_2, next_in_b_n_3, next_in_b_n_4, next_in_b_n_5, next_in_b_n_6, next_in_b_n_7, next_in_b_n_8;
    reg [15:0] next_in_ctrl_n_0, next_in_ctrl_n_1, next_in_ctrl_n_2, next_in_ctrl_n_3, next_in_ctrl_n_4, next_in_ctrl_n_5, next_in_ctrl_n_6, next_in_ctrl_n_7, next_in_ctrl_n_8;
    reg next_in_valid_n_0, next_in_valid_n_1, next_in_valid_n_2, next_in_valid_n_3, next_in_valid_n_4, next_in_valid_n_5, next_in_valid_n_6, next_in_valid_n_7, next_in_valid_n_8;

    reg [63:0] next_in_a_e_0, next_in_a_e_1, next_in_a_e_2, next_in_a_e_3, next_in_a_e_4, next_in_a_e_5, next_in_a_e_6, next_in_a_e_7, next_in_a_e_8;
    reg [63:0] next_in_b_e_0, next_in_b_e_1, next_in_b_e_2, next_in_b_e_3, next_in_b_e_4, next_in_b_e_5, next_in_b_e_6, next_in_b_e_7, next_in_b_e_8;
    reg [15:0] next_in_ctrl_e_0, next_in_ctrl_e_1, next_in_ctrl_e_2, next_in_ctrl_e_3, next_in_ctrl_e_4, next_in_ctrl_e_5, next_in_ctrl_e_6, next_in_ctrl_e_7, next_in_ctrl_e_8;
    reg next_in_valid_e_0, next_in_valid_e_1, next_in_valid_e_2, next_in_valid_e_3, next_in_valid_e_4, next_in_valid_e_5, next_in_valid_e_6, next_in_valid_e_7, next_in_valid_e_8;

    reg [63:0] next_in_a_s_0, next_in_a_s_1, next_in_a_s_2, next_in_a_s_3, next_in_a_s_4, next_in_a_s_5, next_in_a_s_6, next_in_a_s_7, next_in_a_s_8;
    reg [63:0] next_in_b_s_0, next_in_b_s_1, next_in_b_s_2, next_in_b_s_3, next_in_b_s_4, next_in_b_s_5, next_in_b_s_6, next_in_b_s_7, next_in_b_s_8;
    reg [15:0] next_in_ctrl_s_0, next_in_ctrl_s_1, next_in_ctrl_s_2, next_in_ctrl_s_3, next_in_ctrl_s_4, next_in_ctrl_s_5, next_in_ctrl_s_6, next_in_ctrl_s_7, next_in_ctrl_s_8;
    reg next_in_valid_s_0, next_in_valid_s_1, next_in_valid_s_2, next_in_valid_s_3, next_in_valid_s_4, next_in_valid_s_5, next_in_valid_s_6, next_in_valid_s_7, next_in_valid_s_8;

    reg [63:0] next_in_a_w_0, next_in_a_w_1, next_in_a_w_2, next_in_a_w_3, next_in_a_w_4, next_in_a_w_5, next_in_a_w_6, next_in_a_w_7, next_in_a_w_8;
    reg [63:0] next_in_b_w_0, next_in_b_w_1, next_in_b_w_2, next_in_b_w_3, next_in_b_w_4, next_in_b_w_5, next_in_b_w_6, next_in_b_w_7, next_in_b_w_8;
    reg [15:0] next_in_ctrl_w_0, next_in_ctrl_w_1, next_in_ctrl_w_2, next_in_ctrl_w_3, next_in_ctrl_w_4, next_in_ctrl_w_5, next_in_ctrl_w_6, next_in_ctrl_w_7, next_in_ctrl_w_8;
    reg next_in_valid_w_0, next_in_valid_w_1, next_in_valid_w_2, next_in_valid_w_3, next_in_valid_w_4, next_in_valid_w_5, next_in_valid_w_6, next_in_valid_w_7, next_in_valid_w_8;

    reg [63:0] next_host_in_a_0, next_host_in_a_1, next_host_in_a_2, next_host_in_a_3, next_host_in_a_4, next_host_in_a_5, next_host_in_a_6, next_host_in_a_7, next_host_in_a_8;
    reg [63:0] next_host_in_b_0, next_host_in_b_1, next_host_in_b_2, next_host_in_b_3, next_host_in_b_4, next_host_in_b_5, next_host_in_b_6, next_host_in_b_7, next_host_in_b_8;
    reg [15:0] next_host_in_ctrl_0, next_host_in_ctrl_1, next_host_in_ctrl_2, next_host_in_ctrl_3, next_host_in_ctrl_4, next_host_in_ctrl_5, next_host_in_ctrl_6, next_host_in_ctrl_7, next_host_in_ctrl_8;
    reg next_host_in_valid_0, next_host_in_valid_1, next_host_in_valid_2, next_host_in_valid_3, next_host_in_valid_4, next_host_in_valid_5, next_host_in_valid_6, next_host_in_valid_7, next_host_in_valid_8;

    // --- State for one-shot injection logic ---
    reg is_busy;
    reg next_is_busy;

    // --- Next-State Logic (Combinational) ---
    always @(*) begin
        // By default, the next state of the links is determined by the tile outputs

        // (x=0, y=0) -> idx=0
        next_in_a_n_0     = 64'd0;
        next_in_b_n_0     = 64'd0;
        next_in_ctrl_n_0  = 16'd0;
        next_in_valid_n_0 = 1'b0;
        next_in_a_w_0     = 64'd0;
        next_in_b_w_0     = 64'd0;
        next_in_ctrl_w_0  = 16'd0;
        next_in_valid_w_0 = 1'b0;

        next_in_a_s_0     = out_a_n_3;
        next_in_b_s_0     = out_b_n_3;
        next_in_ctrl_s_0  = out_ctrl_n_3;
        next_in_valid_s_0 = out_valid_n_3;

        next_in_a_e_0     = out_a_w_1;
        next_in_b_e_0     = out_b_w_1;
        next_in_ctrl_e_0  = out_ctrl_w_1;
        next_in_valid_e_0 = out_valid_w_1;
        // (x=1, y=0) -> idx=1
        next_in_a_n_1     = 64'd0;
        next_in_b_n_1     = 64'd0;
        next_in_ctrl_n_1  = 16'd0;
        next_in_valid_n_1 = 1'b0;
        next_in_a_w_1     = out_a_e_0;
        next_in_b_w_1     = out_b_e_0;
        next_in_ctrl_w_1  = out_ctrl_e_0;
        next_in_valid_w_1 = out_valid_e_0;

        next_in_a_s_1     = out_a_n_4;
        next_in_b_s_1     = out_b_n_4;
        next_in_ctrl_s_1  = out_ctrl_n_4;
        next_in_valid_s_1 = out_valid_n_4;

        next_in_a_e_1     = out_a_w_2;
        next_in_b_e_1     = out_b_w_2;
        next_in_ctrl_e_1  = out_ctrl_w_2;
        next_in_valid_e_1 = out_valid_w_2;
        // (x=2, y=0) -> idx=2
        next_in_a_n_2     = 64'd0;
        next_in_b_n_2     = 64'd0;
        next_in_ctrl_n_2  = 16'd0;
        next_in_valid_n_2 = 1'b0;
        next_in_a_w_2     = out_a_e_1;
        next_in_b_w_2     = out_b_e_1;
        next_in_ctrl_w_2  = out_ctrl_e_1;
        next_in_valid_w_2 = out_valid_e_1;

        next_in_a_s_2     = out_a_n_5;
        next_in_b_s_2     = out_b_n_5;
        next_in_ctrl_s_2  = out_ctrl_n_5;
        next_in_valid_s_2 = out_valid_n_5;

        next_in_a_e_2     = 64'd0;
        next_in_b_e_2     = 64'd0;
        next_in_ctrl_e_2  = 16'd0;
        next_in_valid_e_2 = 1'b0;
        // (x=0, y=1) -> idx=3
        next_in_a_n_3     = out_a_s_0;
        next_in_b_n_3     = out_b_s_0;
        next_in_ctrl_n_3  = out_ctrl_s_0;
        next_in_valid_n_3 = out_valid_s_0;
        next_in_a_w_3     = 64'd0;
        next_in_b_w_3     = 64'd0;
        next_in_ctrl_w_3  = 16'd0;
        next_in_valid_w_3 = 1'b0;

        next_in_a_s_3     = out_a_n_6;
        next_in_b_s_3     = out_b_n_6;
        next_in_ctrl_s_3  = out_ctrl_n_6;
        next_in_valid_s_3 = out_valid_n_6;

        next_in_a_e_3     = out_a_w_4;
        next_in_b_e_3     = out_b_w_4;
        next_in_ctrl_e_3  = out_ctrl_w_4;
        next_in_valid_e_3 = out_valid_w_4;
        // (x=1, y=1) -> idx=4
        next_in_a_n_4     = out_a_s_1;
        next_in_b_n_4     = out_b_s_1;
        next_in_ctrl_n_4  = out_ctrl_s_1;
        next_in_valid_n_4 = out_valid_s_1;
        next_in_a_w_4     = out_a_e_3;
        next_in_b_w_4     = out_b_e_3;
        next_in_ctrl_w_4  = out_ctrl_e_3;
        next_in_valid_w_4 = out_valid_e_3;

        next_in_a_s_4     = out_a_n_7;
        next_in_b_s_4     = out_b_n_7;
        next_in_ctrl_s_4  = out_ctrl_n_7;
        next_in_valid_s_4 = out_valid_n_7;

        next_in_a_e_4     = out_a_w_5;
        next_in_b_e_4     = out_b_w_5;
        next_in_ctrl_e_4  = out_ctrl_w_5;
        next_in_valid_e_4 = out_valid_w_5;
        // (x=2, y=1) -> idx=5
        next_in_a_n_5     = out_a_s_2;
        next_in_b_n_5     = out_b_s_2;
        next_in_ctrl_n_5  = out_ctrl_s_2;
        next_in_valid_n_5 = out_valid_s_2;
        next_in_a_w_5     = out_a_e_4;
        next_in_b_w_5     = out_b_e_4;
        next_in_ctrl_w_5  = out_ctrl_e_4;
        next_in_valid_w_5 = out_valid_e_4;

        next_in_a_s_5     = out_a_n_8;
        next_in_b_s_5     = out_b_n_8;
        next_in_ctrl_s_5  = out_ctrl_n_8;
        next_in_valid_s_5 = out_valid_n_8;

        next_in_a_e_5     = 64'd0;
        next_in_b_e_5     = 64'd0;
        next_in_ctrl_e_5  = 16'd0;
        next_in_valid_e_5 = 1'b0;
        // (x=0, y=2) -> idx=6
        next_in_a_n_6     = out_a_s_3;
        next_in_b_n_6     = out_b_s_3;
        next_in_ctrl_n_6  = out_ctrl_s_3;
        next_in_valid_n_6 = out_valid_s_3;
        next_in_a_w_6     = 64'd0;
        next_in_b_w_6     = 64'd0;
        next_in_ctrl_w_6  = 16'd0;
        next_in_valid_w_6 = 1'b0;

        next_in_a_s_6     = 64'd0;
        next_in_b_s_6     = 64'd0;
        next_in_ctrl_s_6  = 16'd0;
        next_in_valid_s_6 = 1'b0;

        next_in_a_e_6     = out_a_w_7;
        next_in_b_e_6     = out_b_w_7;
        next_in_ctrl_e_6  = out_ctrl_w_7;
        next_in_valid_e_6 = out_valid_w_7;
        // (x=1, y=2) -> idx=7
        next_in_a_n_7     = out_a_s_4;
        next_in_b_n_7     = out_b_s_4;
        next_in_ctrl_n_7  = out_ctrl_s_4;
        next_in_valid_n_7 = out_valid_s_4;
        next_in_a_w_7     = out_a_e_6;
        next_in_b_w_7     = out_b_e_6;
        next_in_ctrl_w_7  = out_ctrl_e_6;
        next_in_valid_w_7 = out_valid_e_6;

        next_in_a_s_7     = 64'd0;
        next_in_b_s_7     = 64'd0;
        next_in_ctrl_s_7  = 16'd0;
        next_in_valid_s_7 = 1'b0;

        next_in_a_e_7     = out_a_w_8;
        next_in_b_e_7     = out_b_w_8;
        next_in_ctrl_e_7  = out_ctrl_w_8;
        next_in_valid_e_7 = out_valid_w_8;
        // (x=2, y=2) -> idx=8
        next_in_a_n_8     = out_a_s_5;
        next_in_b_n_8     = out_b_s_5;
        next_in_ctrl_n_8  = out_ctrl_s_5;
        next_in_valid_n_8 = out_valid_s_5;
        next_in_a_w_8     = out_a_e_7;
        next_in_b_w_8     = out_b_e_7;
        next_in_ctrl_w_8  = out_ctrl_e_7;
        next_in_valid_w_8 = out_valid_e_7;

        next_in_a_s_8     = 64'd0;
        next_in_b_s_8     = 64'd0;
        next_in_ctrl_s_8  = 16'd0;
        next_in_valid_s_8 = 1'b0;

        next_in_a_e_8     = 64'd0;
        next_in_b_e_8     = 64'd0;
        next_in_ctrl_e_8  = 16'd0;
        next_in_valid_e_8 = 1'b0;
        // Default host inputs to zero
        next_host_in_a_0 = 64'd0; next_host_in_b_0 = 64'd0; next_host_in_ctrl_0 = 16'd0; next_host_in_valid_0 = 1'b0;
        next_host_in_a_1 = 64'd0; next_host_in_b_1 = 64'd0; next_host_in_ctrl_1 = 16'd0; next_host_in_valid_1 = 1'b0;
        next_host_in_a_2 = 64'd0; next_host_in_b_2 = 64'd0; next_host_in_ctrl_2 = 16'd0; next_host_in_valid_2 = 1'b0;
        next_host_in_a_3 = 64'd0; next_host_in_b_3 = 64'd0; next_host_in_ctrl_3 = 16'd0; next_host_in_valid_3 = 1'b0;
        next_host_in_a_4 = 64'd0; next_host_in_b_4 = 64'd0; next_host_in_ctrl_4 = 16'd0; next_host_in_valid_4 = 1'b0;
        next_host_in_a_5 = 64'd0; next_host_in_b_5 = 64'd0; next_host_in_ctrl_5 = 16'd0; next_host_in_valid_5 = 1'b0;
        next_host_in_a_6 = 64'd0; next_host_in_b_6 = 64'd0; next_host_in_ctrl_6 = 16'd0; next_host_in_valid_6 = 1'b0;
        next_host_in_a_7 = 64'd0; next_host_in_b_7 = 64'd0; next_host_in_ctrl_7 = 16'd0; next_host_in_valid_7 = 1'b0;
        next_host_in_a_8 = 64'd0; next_host_in_b_8 = 64'd0; next_host_in_ctrl_8 = 16'd0; next_host_in_valid_8 = 1'b0;

        // State machine for injection
        next_is_busy = is_busy;
        if (!is_busy) begin
            // STATE: IDLE. Check for new inputs to inject.
            if (a != 0 || b != 0 || mode != 0) begin
                next_host_in_a_0     = a;
                next_host_in_b_0     = b;
                next_host_in_ctrl_0  = make_ctrl(1'b0, (mode % 3), (mode / 3), mode);
                next_host_in_valid_0 = 1'b1;
                next_is_busy         = 1'b1; // Transition to BUSY
            end
        end else begin
            // STATE: BUSY. Wait for the result to come back.
            if (valid) begin
                next_is_busy = 1'b0; // Transition to IDLE
            end
        end
    end

    // --- State Update Logic (Sequential) ---
    always @(posedge clk) begin
        is_busy <= next_is_busy;

        in_a_n_0 <= next_in_a_n_0; in_b_n_0 <= next_in_b_n_0; in_ctrl_n_0 <= next_in_ctrl_n_0; in_valid_n_0 <= next_in_valid_n_0;
        in_a_e_0 <= next_in_a_e_0; in_b_e_0 <= next_in_b_e_0; in_ctrl_e_0 <= next_in_ctrl_e_0; in_valid_e_0 <= next_in_valid_e_0;
        in_a_s_0 <= next_in_a_s_0; in_b_s_0 <= next_in_b_s_0; in_ctrl_s_0 <= next_in_ctrl_s_0; in_valid_s_0 <= next_in_valid_s_0;
        in_a_w_0 <= next_in_a_w_0; in_b_w_0 <= next_in_b_w_0; in_ctrl_w_0 <= next_in_ctrl_w_0; in_valid_w_0 <= next_in_valid_w_0;
        host_in_a_0 <= next_host_in_a_0; host_in_b_0 <= next_host_in_b_0; host_in_ctrl_0 <= next_host_in_ctrl_0; host_in_valid_0 <= next_host_in_valid_0;
        
        in_a_n_1 <= next_in_a_n_1; in_b_n_1 <= next_in_b_n_1; in_ctrl_n_1 <= next_in_ctrl_n_1; in_valid_n_1 <= next_in_valid_n_1;
        in_a_e_1 <= next_in_a_e_1; in_b_e_1 <= next_in_b_e_1; in_ctrl_e_1 <= next_in_ctrl_e_1; in_valid_e_1 <= next_in_valid_e_1;
        in_a_s_1 <= next_in_a_s_1; in_b_s_1 <= next_in_b_s_1; in_ctrl_s_1 <= next_in_ctrl_s_1; in_valid_s_1 <= next_in_valid_s_1;
        in_a_w_1 <= next_in_a_w_1; in_b_w_1 <= next_in_b_w_1; in_ctrl_w_1 <= next_in_ctrl_w_1; in_valid_w_1 <= next_in_valid_w_1;
        host_in_a_1 <= next_host_in_a_1; host_in_b_1 <= next_host_in_b_1; host_in_ctrl_1 <= next_host_in_ctrl_1; host_in_valid_1 <= next_host_in_valid_1;
        
        in_a_n_2 <= next_in_a_n_2; in_b_n_2 <= next_in_b_n_2; in_ctrl_n_2 <= next_in_ctrl_n_2; in_valid_n_2 <= next_in_valid_n_2;
        in_a_e_2 <= next_in_a_e_2; in_b_e_2 <= next_in_b_e_2; in_ctrl_e_2 <= next_in_ctrl_e_2; in_valid_e_2 <= next_in_valid_e_2;
        in_a_s_2 <= next_in_a_s_2; in_b_s_2 <= next_in_b_s_2; in_ctrl_s_2 <= next_in_ctrl_s_2; in_valid_s_2 <= next_in_valid_s_2;
        in_a_w_2 <= next_in_a_w_2; in_b_w_2 <= next_in_b_w_2; in_ctrl_w_2 <= next_in_ctrl_w_2; in_valid_w_2 <= next_in_valid_w_2;
        host_in_a_2 <= next_host_in_a_2; host_in_b_2 <= next_host_in_b_2; host_in_ctrl_2 <= next_host_in_ctrl_2; host_in_valid_2 <= next_host_in_valid_2;

        in_a_n_3 <= next_in_a_n_3; in_b_n_3 <= next_in_b_n_3; in_ctrl_n_3 <= next_in_ctrl_n_3; in_valid_n_3 <= next_in_valid_n_3;
        in_a_e_3 <= next_in_a_e_3; in_b_e_3 <= next_in_b_e_3; in_ctrl_e_3 <= next_in_ctrl_e_3; in_valid_e_3 <= next_in_valid_e_3;
        in_a_s_3 <= next_in_a_s_3; in_b_s_3 <= next_in_b_s_3; in_ctrl_s_3 <= next_in_ctrl_s_3; in_valid_s_3 <= next_in_valid_s_3;
        in_a_w_3 <= next_in_a_w_3; in_b_w_3 <= next_in_b_w_3; in_ctrl_w_3 <= next_in_ctrl_w_3; in_valid_w_3 <= next_in_valid_w_3;
        host_in_a_3 <= next_host_in_a_3; host_in_b_3 <= next_host_in_b_3; host_in_ctrl_3 <= next_host_in_ctrl_3; host_in_valid_3 <= next_host_in_valid_3;
        
        in_a_n_4 <= next_in_a_n_4; in_b_n_4 <= next_in_b_n_4; in_ctrl_n_4 <= next_in_ctrl_n_4; in_valid_n_4 <= next_in_valid_n_4;
        in_a_e_4 <= next_in_a_e_4; in_b_e_4 <= next_in_b_e_4; in_ctrl_e_4 <= next_in_ctrl_e_4; in_valid_e_4 <= next_in_valid_e_4;
        in_a_s_4 <= next_in_a_s_4; in_b_s_4 <= next_in_b_s_4; in_ctrl_s_4 <= next_in_ctrl_s_4; in_valid_s_4 <= next_in_valid_s_4;
        in_a_w_4 <= next_in_a_w_4; in_b_w_4 <= next_in_b_w_4; in_ctrl_w_4 <= next_in_ctrl_w_4; in_valid_w_4 <= next_in_valid_w_4;
        host_in_a_4 <= next_host_in_a_4; host_in_b_4 <= next_host_in_b_4; host_in_ctrl_4 <= next_host_in_ctrl_4; host_in_valid_4 <= next_host_in_valid_4;
        
        in_a_n_5 <= next_in_a_n_5; in_b_n_5 <= next_in_b_n_5; in_ctrl_n_5 <= next_in_ctrl_n_5; in_valid_n_5 <= next_in_valid_n_5;
        in_a_e_5 <= next_in_a_e_5; in_b_e_5 <= next_in_b_e_5; in_ctrl_e_5 <= next_in_ctrl_e_5; in_valid_e_5 <= next_in_valid_e_5;
        in_a_s_5 <= next_in_a_s_5; in_b_s_5 <= next_in_b_s_5; in_ctrl_s_5 <= next_in_ctrl_s_5; in_valid_s_5 <= next_in_valid_s_5;
        in_a_w_5 <= next_in_a_w_5; in_b_w_5 <= next_in_b_w_5; in_ctrl_w_5 <= next_in_ctrl_w_5; in_valid_w_5 <= next_in_valid_w_5;
        host_in_a_5 <= next_host_in_a_5; host_in_b_5 <= next_host_in_b_5; host_in_ctrl_5 <= next_host_in_ctrl_5; host_in_valid_5 <= next_host_in_valid_5;

        in_a_n_6 <= next_in_a_n_6; in_b_n_6 <= next_in_b_n_6; in_ctrl_n_6 <= next_in_ctrl_n_6; in_valid_n_6 <= next_in_valid_n_6;
        in_a_e_6 <= next_in_a_e_6; in_b_e_6 <= next_in_b_e_6; in_ctrl_e_6 <= next_in_ctrl_e_6; in_valid_e_6 <= next_in_valid_e_6;
        in_a_s_6 <= next_in_a_s_6; in_b_s_6 <= next_in_b_s_6; in_ctrl_s_6 <= next_in_ctrl_s_6; in_valid_s_6 <= next_in_valid_s_6;
        in_a_w_6 <= next_in_a_w_6; in_b_w_6 <= next_in_b_w_6; in_ctrl_w_6 <= next_in_ctrl_w_6; in_valid_w_6 <= next_in_valid_w_6;
        host_in_a_6 <= next_host_in_a_6; host_in_b_6 <= next_host_in_b_6; host_in_ctrl_6 <= next_host_in_ctrl_6; host_in_valid_6 <= next_host_in_valid_6;
        
        in_a_n_7 <= next_in_a_n_7; in_b_n_7 <= next_in_b_n_7; in_ctrl_n_7 <= next_in_ctrl_n_7; in_valid_n_7 <= next_in_valid_n_7;
        in_a_e_7 <= next_in_a_e_7; in_b_e_7 <= next_in_b_e_7; in_ctrl_e_7 <= next_in_ctrl_e_7; in_valid_e_7 <= next_in_valid_e_7;
        in_a_s_7 <= next_in_a_s_7; in_b_s_7 <= next_in_b_s_7; in_ctrl_s_7 <= next_in_ctrl_s_7; in_valid_s_7 <= next_in_valid_s_7;
        in_a_w_7 <= next_in_a_w_7; in_b_w_7 <= next_in_b_w_7; in_ctrl_w_7 <= next_in_ctrl_w_7; in_valid_w_7 <= next_in_valid_w_7;
        host_in_a_7 <= next_host_in_a_7; host_in_b_7 <= next_host_in_b_7; host_in_ctrl_7 <= next_host_in_ctrl_7; host_in_valid_7 <= next_host_in_valid_7;
        
        in_a_n_8 <= next_in_a_n_8; in_b_n_8 <= next_in_b_n_8; in_ctrl_n_8 <= next_in_ctrl_n_8; in_valid_n_8 <= next_in_valid_n_8;
        in_a_e_8 <= next_in_a_e_8; in_b_e_8 <= next_in_b_e_8; in_ctrl_e_8 <= next_in_ctrl_e_8; in_valid_e_8 <= next_in_valid_e_8;
        in_a_s_8 <= next_in_a_s_8; in_b_s_8 <= next_in_b_s_8; in_ctrl_s_8 <= next_in_ctrl_s_8; in_valid_s_8 <= next_in_valid_s_8;
        in_a_w_8 <= next_in_a_w_8; in_b_w_8 <= next_in_b_w_8; in_ctrl_w_8 <= next_in_ctrl_w_8; in_valid_w_8 <= next_in_valid_w_8;
        host_in_a_8 <= next_host_in_a_8; host_in_b_8 <= next_host_in_b_8; host_in_ctrl_8 <= next_host_in_ctrl_8; host_in_valid_8 <= next_host_in_valid_8;
    end

    // Initial block to reset all state registers
    initial begin
        is_busy = 1'b0;

        in_a_n_0 = 0; in_b_n_0 = 0; in_ctrl_n_0 = 0; in_valid_n_0 = 0;
        in_a_e_0 = 0; in_b_e_0 = 0; in_ctrl_e_0 = 0; in_valid_e_0 = 0;
        in_a_s_0 = 0; in_b_s_0 = 0; in_ctrl_s_0 = 0; in_valid_s_0 = 0;
        in_a_w_0 = 0; in_b_w_0 = 0; in_ctrl_w_0 = 0; in_valid_w_0 = 0;
        host_in_a_0 = 0; host_in_b_0 = 0; host_in_ctrl_0 = 0; host_in_valid_0 = 0;

        in_a_n_1 = 0; in_b_n_1 = 0; in_ctrl_n_1 = 0; in_valid_n_1 = 0;
        in_a_e_1 = 0; in_b_e_1 = 0; in_ctrl_e_1 = 0; in_valid_e_1 = 0;
        in_a_s_1 = 0; in_b_s_1 = 0; in_ctrl_s_1 = 0; in_valid_s_1 = 0;
        in_a_w_1 = 0; in_b_w_1 = 0; in_ctrl_w_1 = 0; in_valid_w_1 = 0;
        host_in_a_1 = 0; host_in_b_1 = 0; host_in_ctrl_1 = 0; host_in_valid_1 = 0;
        
        in_a_n_2 = 0; in_b_n_2 = 0; in_ctrl_n_2 = 0; in_valid_n_2 = 0;
        in_a_e_2 = 0; in_b_e_2 = 0; in_ctrl_e_2 = 0; in_valid_e_2 = 0;
        in_a_s_2 = 0; in_b_s_2 = 0; in_ctrl_s_2 = 0; in_valid_s_2 = 0;
        in_a_w_2 = 0; in_b_w_2 = 0; in_ctrl_w_2 = 0; in_valid_w_2 = 0;
        host_in_a_2 = 0; host_in_b_2 = 0; host_in_ctrl_2 = 0; host_in_valid_2 = 0;

        in_a_n_3 = 0; in_b_n_3 = 0; in_ctrl_n_3 = 0; in_valid_n_3 = 0;
        in_a_e_3 = 0; in_b_e_3 = 0; in_ctrl_e_3 = 0; in_valid_e_3 = 0;
        in_a_s_3 = 0; in_b_s_3 = 0; in_ctrl_s_3 = 0; in_valid_s_3 = 0;
        in_a_w_3 = 0; in_b_w_3 = 0; in_ctrl_w_3 = 0; in_valid_w_3 = 0;
        host_in_a_3 = 0; host_in_b_3 = 0; host_in_ctrl_3 = 0; host_in_valid_3 = 0;
        
        in_a_n_4 = 0; in_b_n_4 = 0; in_ctrl_n_4 = 0; in_valid_n_4 = 0;
        in_a_e_4 = 0; in_b_e_4 = 0; in_ctrl_e_4 = 0; in_valid_e_4 = 0;
        in_a_s_4 = 0; in_b_s_4 = 0; in_ctrl_s_4 = 0; in_valid_s_4 = 0;
        in_a_w_4 = 0; in_b_w_4 = 0; in_ctrl_w_4 = 0; in_valid_w_4 = 0;
        host_in_a_4 = 0; host_in_b_4 = 0; host_in_ctrl_4 = 0; host_in_valid_4 = 0;
        
        in_a_n_5 = 0; in_b_n_5 = 0; in_ctrl_n_5 = 0; in_valid_n_5 = 0;
        in_a_e_5 = 0; in_b_e_5 = 0; in_ctrl_e_5 = 0; in_valid_e_5 = 0;
        in_a_s_5 = 0; in_b_s_5 = 0; in_ctrl_s_5 = 0; in_valid_s_5 = 0;
        in_a_w_5 = 0; in_b_w_5 = 0; in_ctrl_w_5 = 0; in_valid_w_5 = 0;
        host_in_a_5 = 0; host_in_b_5 = 0; host_in_ctrl_5 = 0; host_in_valid_5 = 0;

        in_a_n_6 = 0; in_b_n_6 = 0; in_ctrl_n_6 = 0; in_valid_n_6 = 0;
        in_a_e_6 = 0; in_b_e_6 = 0; in_ctrl_e_6 = 0; in_valid_e_6 = 0;
        in_a_s_6 = 0; in_b_s_6 = 0; in_ctrl_s_6 = 0; in_valid_s_6 = 0;
        in_a_w_6 = 0; in_b_w_6 = 0; in_ctrl_w_6 = 0; in_valid_w_6 = 0;
        host_in_a_6 = 0; host_in_b_6 = 0; host_in_ctrl_6 = 0; host_in_valid_6 = 0;
        
        in_a_n_7 = 0; in_b_n_7 = 0; in_ctrl_n_7 = 0; in_valid_n_7 = 0;
        in_a_e_7 = 0; in_b_e_7 = 0; in_ctrl_e_7 = 0; in_valid_e_7 = 0;
        in_a_s_7 = 0; in_b_s_7 = 0; in_ctrl_s_7 = 0; in_valid_s_7 = 0;
        in_a_w_7 = 0; in_b_w_7 = 0; in_ctrl_w_7 = 0; in_valid_w_7 = 0;
        host_in_a_7 = 0; host_in_b_7 = 0; host_in_ctrl_7 = 0; host_in_valid_7 = 0;
        
        in_a_n_8 = 0; in_b_n_8 = 0; in_ctrl_n_8 = 0; in_valid_n_8 = 0;
        in_a_e_8 = 0; in_b_e_8 = 0; in_ctrl_e_8 = 0; in_valid_e_8 = 0;
        in_a_s_8 = 0; in_b_s_8 = 0; in_ctrl_s_8 = 0; in_valid_s_8 = 0;
        in_a_w_8 = 0; in_b_w_8 = 0; in_ctrl_w_8 = 0; in_valid_w_8 = 0;
        host_in_a_8 = 0; host_in_b_8 = 0; host_in_ctrl_8 = 0; host_in_valid_8 = 0;
    end

    assign result = host_out_a_0;
    assign valid  = host_out_valid_0;

    // --- Manual Instantiation of 3x3 Tile Mesh ---
    t0_0_alu_tile_noc_wrapper t0_0 (.TILE_X(0), .TILE_Y(0),
        .in_a_n(in_a_n_0), .in_b_n(in_b_n_0), .in_ctrl_n(in_ctrl_n_0), .in_valid_n(in_valid_n_0),
        .in_a_e(in_a_e_0), .in_b_e(in_b_e_0), .in_ctrl_e(in_ctrl_e_0), .in_valid_e(in_valid_e_0),
        .in_a_s(in_a_s_0), .in_b_s(in_b_s_0), .in_ctrl_s(in_ctrl_s_0), .in_valid_s(in_valid_s_0),
        .in_a_w(in_a_w_0), .in_b_w(in_b_w_0), .in_ctrl_w(in_ctrl_w_0), .in_valid_w(in_valid_w_0),
        .host_in_a(host_in_a_0), .host_in_b(host_in_b_0), .host_in_ctrl(host_in_ctrl_0), .host_in_valid(host_in_valid_0),
        .out_a_n(out_a_n_0), .out_b_n(out_b_n_0), .out_ctrl_n(out_ctrl_n_0), .out_valid_n(out_valid_n_0),
        .out_a_e(out_a_e_0), .out_b_e(out_b_e_0), .out_ctrl_e(out_ctrl_e_0), .out_valid_e(out_valid_e_0),
        .out_a_s(out_a_s_0), .out_b_s(out_b_s_0), .out_ctrl_s(out_ctrl_s_0), .out_valid_s(out_valid_s_0),
        .out_a_w(out_a_w_0), .out_b_w(out_b_w_0), .out_ctrl_w(out_ctrl_w_0), .out_valid_w(out_valid_w_0),
        .host_out_a(host_out_a_0), .host_out_valid(host_out_valid_0)
    );
    t0_1_alu_tile_noc_wrapper t0_1 (.TILE_X(1), .TILE_Y(0),
        .in_a_n(in_a_n_1), .in_b_n(in_b_n_1), .in_ctrl_n(in_ctrl_n_1), .in_valid_n(in_valid_n_1),
        .in_a_e(in_a_e_1), .in_b_e(in_b_e_1), .in_ctrl_e(in_ctrl_e_1), .in_valid_e(in_valid_e_1),
        .in_a_s(in_a_s_1), .in_b_s(in_b_s_1), .in_ctrl_s(in_ctrl_s_1), .in_valid_s(in_valid_s_1),
        .in_a_w(in_a_w_1), .in_b_w(in_b_w_1), .in_ctrl_w(in_ctrl_w_1), .in_valid_w(in_valid_w_1),
        .host_in_a(host_in_a_1), .host_in_b(host_in_b_1), .host_in_ctrl(host_in_ctrl_1), .host_in_valid(host_in_valid_1),
        .out_a_n(out_a_n_1), .out_b_n(out_b_n_1), .out_ctrl_n(out_ctrl_n_1), .out_valid_n(out_valid_n_1),
        .out_a_e(out_a_e_1), .out_b_e(out_b_e_1), .out_ctrl_e(out_ctrl_e_1), .out_valid_e(out_valid_e_1),
        .out_a_s(out_a_s_1), .out_b_s(out_b_s_1), .out_ctrl_s(out_ctrl_s_1), .out_valid_s(out_valid_s_1),
        .out_a_w(out_a_w_1), .out_b_w(out_b_w_1), .out_ctrl_w(out_ctrl_w_1), .out_valid_w(out_valid_w_1),
        .host_out_a(host_out_a_1), .host_out_valid(host_out_valid_1)
    );
    t0_2_alu_tile_noc_wrapper t0_2 (.TILE_X(2), .TILE_Y(0),
        .in_a_n(in_a_n_2), .in_b_n(in_b_n_2), .in_ctrl_n(in_ctrl_n_2), .in_valid_n(in_valid_n_2),
        .in_a_e(in_a_e_2), .in_b_e(in_b_e_2), .in_ctrl_e(in_ctrl_e_2), .in_valid_e(in_valid_e_2),
        .in_a_s(in_a_s_2), .in_b_s(in_b_s_2), .in_ctrl_s(in_ctrl_s_2), .in_valid_s(in_valid_s_2),
        .in_a_w(in_a_w_2), .in_b_w(in_b_w_2), .in_ctrl_w(in_ctrl_w_2), .in_valid_w(in_valid_w_2),
        .host_in_a(host_in_a_2), .host_in_b(host_in_b_2), .host_in_ctrl(host_in_ctrl_2), .host_in_valid(host_in_valid_2),
        .out_a_n(out_a_n_2), .out_b_n(out_b_n_2), .out_ctrl_n(out_ctrl_n_2), .out_valid_n(out_valid_n_2),
        .out_a_e(out_a_e_2), .out_b_e(out_b_e_2), .out_ctrl_e(out_ctrl_e_2), .out_valid_e(out_valid_e_2),
        .out_a_s(out_a_s_2), .out_b_s(out_b_s_2), .out_ctrl_s(out_ctrl_s_2), .out_valid_s(out_valid_s_2),
        .out_a_w(out_a_w_2), .out_b_w(out_b_w_2), .out_ctrl_w(out_ctrl_w_2), .out_valid_w(out_valid_w_2),
        .host_out_a(host_out_a_2), .host_out_valid(host_out_valid_2)
    );
    t1_0_alu_tile_noc_wrapper t1_0 (.TILE_X(0), .TILE_Y(1),
        .in_a_n(in_a_n_3), .in_b_n(in_b_n_3), .in_ctrl_n(in_ctrl_n_3), .in_valid_n(in_valid_n_3),
        .in_a_e(in_a_e_3), .in_b_e(in_b_e_3), .in_ctrl_e(in_ctrl_e_3), .in_valid_e(in_valid_e_3),
        .in_a_s(in_a_s_3), .in_b_s(in_b_s_3), .in_ctrl_s(in_ctrl_s_3), .in_valid_s(in_valid_s_3),
        .in_a_w(in_a_w_3), .in_b_w(in_b_w_3), .in_ctrl_w(in_ctrl_w_3), .in_valid_w(in_valid_w_3),
        .host_in_a(host_in_a_3), .host_in_b(host_in_b_3), .host_in_ctrl(host_in_ctrl_3), .host_in_valid(host_in_valid_3),
        .out_a_n(out_a_n_3), .out_b_n(out_b_n_3), .out_ctrl_n(out_ctrl_n_3), .out_valid_n(out_valid_n_3),
        .out_a_e(out_a_e_3), .out_b_e(out_b_e_3), .out_ctrl_e(out_ctrl_e_3), .out_valid_e(out_valid_e_3),
        .out_a_s(out_a_s_3), .out_b_s(out_b_s_3), .out_ctrl_s(out_ctrl_s_3), .out_valid_s(out_valid_s_3),
        .out_a_w(out_a_w_3), .out_b_w(out_b_w_3), .out_ctrl_w(out_ctrl_w_3), .out_valid_w(out_valid_w_3),
        .host_out_a(host_out_a_3), .host_out_valid(host_out_valid_3)
    );
    t1_1_alu_tile_noc_wrapper t1_1 (.TILE_X(1), .TILE_Y(1),
        .in_a_n(in_a_n_4), .in_b_n(in_b_n_4), .in_ctrl_n(in_ctrl_n_4), .in_valid_n(in_valid_n_4),
        .in_a_e(in_a_e_4), .in_b_e(in_b_e_4), .in_ctrl_e(in_ctrl_e_4), .in_valid_e(in_valid_e_4),
        .in_a_s(in_a_s_4), .in_b_s(in_b_s_4), .in_ctrl_s(in_ctrl_s_4), .in_valid_s(in_valid_s_4),
        .in_a_w(in_a_w_4), .in_b_w(in_b_w_4), .in_ctrl_w(in_ctrl_w_4), .in_valid_w(in_valid_w_4),
        .host_in_a(host_in_a_4), .host_in_b(host_in_b_4), .host_in_ctrl(host_in_ctrl_4), .host_in_valid(host_in_valid_4),
        .out_a_n(out_a_n_4), .out_b_n(out_b_n_4), .out_ctrl_n(out_ctrl_n_4), .out_valid_n(out_valid_n_4),
        .out_a_e(out_a_e_4), .out_b_e(out_b_e_4), .out_ctrl_e(out_ctrl_e_4), .out_valid_e(out_valid_e_4),
        .out_a_s(out_a_s_4), .out_b_s(out_b_s_4), .out_ctrl_s(out_ctrl_s_4), .out_valid_s(out_valid_s_4),
        .out_a_w(out_a_w_4), .out_b_w(out_b_w_4), .out_ctrl_w(out_ctrl_w_4), .out_valid_w(out_valid_w_4),
        .host_out_a(host_out_a_4), .host_out_valid(host_out_valid_4)
    );
    t1_2_alu_tile_noc_wrapper t1_2 (.TILE_X(2), .TILE_Y(1),
        .in_a_n(in_a_n_5), .in_b_n(in_b_n_5), .in_ctrl_n(in_ctrl_n_5), .in_valid_n(in_valid_n_5),
        .in_a_e(in_a_e_5), .in_b_e(in_b_e_5), .in_ctrl_e(in_ctrl_e_5), .in_valid_e(in_valid_e_5),
        .in_a_s(in_a_s_5), .in_b_s(in_b_s_5), .in_ctrl_s(in_ctrl_s_5), .in_valid_s(in_valid_s_5),
        .in_a_w(in_a_w_5), .in_b_w(in_b_w_5), .in_ctrl_w(in_ctrl_w_5), .in_valid_w(in_valid_w_5),
        .host_in_a(host_in_a_5), .host_in_b(host_in_b_5), .host_in_ctrl(host_in_ctrl_5), .host_in_valid(host_in_valid_5),
        .out_a_n(out_a_n_5), .out_b_n(out_b_n_5), .out_ctrl_n(out_ctrl_n_5), .out_valid_n(out_valid_n_5),
        .out_a_e(out_a_e_5), .out_b_e(out_b_e_5), .out_ctrl_e(out_ctrl_e_5), .out_valid_e(out_valid_e_5),
        .out_a_s(out_a_s_5), .out_b_s(out_b_s_5), .out_ctrl_s(out_ctrl_s_5), .out_valid_s(out_valid_s_5),
        .out_a_w(out_a_w_5), .out_b_w(out_b_w_5), .out_ctrl_w(out_ctrl_w_5), .out_valid_w(out_valid_w_5),
        .host_out_a(host_out_a_5), .host_out_valid(host_out_valid_5)
    );
    t2_0_alu_tile_noc_wrapper t2_0 (.TILE_X(0), .TILE_Y(2),
        .in_a_n(in_a_n_6), .in_b_n(in_b_n_6), .in_ctrl_n(in_ctrl_n_6), .in_valid_n(in_valid_n_6),
        .in_a_e(in_a_e_6), .in_b_e(in_b_e_6), .in_ctrl_e(in_ctrl_e_6), .in_valid_e(in_valid_e_6),
        .in_a_s(in_a_s_6), .in_b_s(in_b_s_6), .in_ctrl_s(in_ctrl_s_6), .in_valid_s(in_valid_s_6),
        .in_a_w(in_a_w_6), .in_b_w(in_b_w_6), .in_ctrl_w(in_ctrl_w_6), .in_valid_w(in_valid_w_6),
        .host_in_a(host_in_a_6), .host_in_b(host_in_b_6), .host_in_ctrl(host_in_ctrl_6), .host_in_valid(host_in_valid_6),
        .out_a_n(out_a_n_6), .out_b_n(out_b_n_6), .out_ctrl_n(out_ctrl_n_6), .out_valid_n(out_valid_n_6),
        .out_a_e(out_a_e_6), .out_b_e(out_b_e_6), .out_ctrl_e(out_ctrl_e_6), .out_valid_e(out_valid_e_6),
        .out_a_s(out_a_s_6), .out_b_s(out_b_s_6), .out_ctrl_s(out_ctrl_s_6), .out_valid_s(out_valid_s_6),
        .out_a_w(out_a_w_6), .out_b_w(out_b_w_6), .out_ctrl_w(out_ctrl_w_6), .out_valid_w(out_valid_w_6),
        .host_out_a(host_out_a_6), .host_out_valid(host_out_valid_6)
    );
    t2_1_alu_tile_noc_wrapper t2_1 (.TILE_X(1), .TILE_Y(2),
        .in_a_n(in_a_n_7), .in_b_n(in_b_n_7), .in_ctrl_n(in_ctrl_n_7), .in_valid_n(in_valid_n_7),
        .in_a_e(in_a_e_7), .in_b_e(in_b_e_7), .in_ctrl_e(in_ctrl_e_7), .in_valid_e(in_valid_e_7),
        .in_a_s(in_a_s_7), .in_b_s(in_b_s_7), .in_ctrl_s(in_ctrl_s_7), .in_valid_s(in_valid_s_7),
        .in_a_w(in_a_w_7), .in_b_w(in_b_w_7), .in_ctrl_w(in_ctrl_w_7), .in_valid_w(in_valid_w_7),
        .host_in_a(host_in_a_7), .host_in_b(host_in_b_7), .host_in_ctrl(host_in_ctrl_7), .host_in_valid(host_in_valid_7),
        .out_a_n(out_a_n_7), .out_b_n(out_b_n_7), .out_ctrl_n(out_ctrl_n_7), .out_valid_n(out_valid_n_7),
        .out_a_e(out_a_e_7), .out_b_e(out_b_e_7), .out_ctrl_e(out_ctrl_e_7), .out_valid_e(out_valid_e_7),
        .out_a_s(out_a_s_7), .out_b_s(out_b_s_7), .out_ctrl_s(out_ctrl_s_7), .out_valid_s(out_valid_s_7),
        .out_a_w(out_a_w_7), .out_b_w(out_b_w_7), .out_ctrl_w(out_ctrl_w_7), .out_valid_w(out_valid_w_7),
        .host_out_a(host_out_a_7), .host_out_valid(host_out_valid_7)
    );
    t2_2_alu_tile_noc_wrapper t2_2 (.TILE_X(2), .TILE_Y(2),
        .in_a_n(in_a_n_8), .in_b_n(in_b_n_8), .in_ctrl_n(in_ctrl_n_8), .in_valid_n(in_valid_n_8),
        .in_a_e(in_a_e_8), .in_b_e(in_b_e_8), .in_ctrl_e(in_ctrl_e_8), .in_valid_e(in_valid_e_8),
        .in_a_s(in_a_s_8), .in_b_s(in_b_s_8), .in_ctrl_s(in_ctrl_s_8), .in_valid_s(in_valid_s_8),
        .in_a_w(in_a_w_8), .in_b_w(in_b_w_8), .in_ctrl_w(in_ctrl_w_8), .in_valid_w(in_valid_w_8),
        .host_in_a(host_in_a_8), .host_in_b(host_in_b_8), .host_in_ctrl(host_in_ctrl_8), .host_in_valid(host_in_valid_8),
        .out_a_n(out_a_n_8), .out_b_n(out_b_n_8), .out_ctrl_n(out_ctrl_n_8), .out_valid_n(out_valid_n_8),
        .out_a_e(out_a_e_8), .out_b_e(out_b_e_8), .out_ctrl_e(out_ctrl_e_8), .out_valid_e(out_valid_e_8),
        .out_a_s(out_a_s_8), .out_b_s(out_b_s_8), .out_ctrl_s(out_ctrl_s_8), .out_valid_s(out_valid_s_8),
        .out_a_w(out_a_w_8), .out_b_w(out_b_w_8), .out_ctrl_w(out_ctrl_w_8), .out_valid_w(out_valid_w_8),
        .host_out_a(host_out_a_8), .host_out_valid(host_out_valid_8)
    );

endmodule