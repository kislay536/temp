// 3x3 ALU Grid with simple XY store-and-forward NoC (instantiated tiles)
// Corrected version: alu_tile_noc is instantiated 9 times and the top-level
// progresses a single packet through the network (single-packet-at-a-time).
// Top-level calculator port signature is unchanged.
//
// WARNING: This is a behavioral, simulation-oriented single-packet NoC.
// - No per-link FIFOs / ready signals
// - Only one packet should be in-flight at a time (calculator waits for valid)
// - All internal buses respect your 64-bit limit (a,b are 64b; ctrl is 16b)
//
`timescale 1ns/1ps

// ---------------------------
// Tile (combinational router + ALU)
// ---------------------------
module alu_tile_noc #(
    parameter integer TILE_X = 0,
    parameter integer TILE_Y = 0
)(
    // inputs from neighbors (one cycle atomic flit: a,b,ctrl,valid)
    input  wire [63:0] in_a_n,
    input  wire [63:0] in_b_n,
    input  wire [15:0] in_ctrl_n,
    input  wire        in_valid_n,

    input  wire [63:0] in_a_e,
    input  wire [63:0] in_b_e,
    input  wire [15:0] in_ctrl_e,
    input  wire        in_valid_e,

    input  wire [63:0] in_a_s,
    input  wire [63:0] in_b_s,
    input  wire [15:0] in_ctrl_s,
    input  wire        in_valid_s,

    input  wire [63:0] in_a_w,
    input  wire [63:0] in_b_w,
    input  wire [15:0] in_ctrl_w,
    input  wire        in_valid_w,

    // optional host injection (only used by tile(0,0) in our top-level)
    input  wire [63:0] host_in_a,
    input  wire [63:0] host_in_b,
    input  wire [15:0] host_in_ctrl,
    input  wire        host_in_valid,

    // outputs towards neighbors (one of these will be asserted when tile forwards)
    output reg  [63:0] out_a_n,
    output reg  [63:0] out_b_n,
    output reg  [15:0] out_ctrl_n,
    output reg         out_valid_n,

    output reg  [63:0] out_a_e,
    output reg  [63:0] out_b_e,
    output reg  [15:0] out_ctrl_e,
    output reg         out_valid_e,

    output reg  [63:0] out_a_s,
    output reg  [63:0] out_b_s,
    output reg  [15:0] out_ctrl_s,
    output reg         out_valid_s,

    output reg  [63:0] out_a_w,
    output reg  [63:0] out_b_w,
    output reg  [15:0] out_ctrl_w,
    output reg         out_valid_w,

    // optional host output (for delivery to calculator at (0,0))
    output reg  [63:0] host_out_a,
    output reg         host_out_valid
);

    //Also Include PARAMETERS---Imp.

    import "DPI-C" function void dpi_tile(
        input  longint in_a_n,
        input  longint in_b_n,
        input  int     in_ctrl_n,
        input  bit     in_valid_n,

        input  longint in_a_e,
        input  longint in_b_e,
        input  int     in_ctrl_e,
        input  bit     in_valid_e,

        input  longint in_a_s,
        input  longint in_b_s,
        input  int     in_ctrl_s,
        input  bit     in_valid_s,

        input  longint in_a_w,
        input  longint in_b_w,
        input  int     in_ctrl_w,
        input  bit     in_valid_w,

        input  longint host_in_a,
        input  longint host_in_b,
        input  int     host_in_ctrl,
        input  bit     host_in_valid,

        output longint out_a_n,
        output longint out_b_n,
        output int     out_ctrl_n,
        output bit     out_valid_n,

        output longint out_a_e,
        output longint out_b_e,
        output int     out_ctrl_e,
        output bit     out_valid_e,

        output longint out_a_s,
        output longint out_b_s,
        output int     out_ctrl_s,
        output bit     out_valid_s,

        output longint out_a_w,
        output longint out_b_w,
        output int     out_ctrl_w,
        output bit     out_valid_w,

        output longint host_out_a,
        output bit     host_out_valid
    );


    always @(*) begin
        dpi_tile(
                in_a_n,
                in_b_n,
                in_ctrl_n,
                in_valid_n,

                in_a_e,
                in_b_e,
                in_ctrl_e,
                in_valid_e,

                in_a_s,
                in_b_s,
                in_ctrl_s,
                in_valid_s,

                in_a_w,
                in_b_w,
                in_ctrl_w,
                in_valid_w,

                host_in_a,
                host_in_b,
                host_in_ctrl,
                host_in_valid,

                out_a_n,
                out_b_n,
                out_ctrl_n,
                out_valid_n,

                out_a_e,
                out_b_e,
                out_ctrl_e,
                out_valid_e,

                out_a_s,
                out_b_s,
                out_ctrl_s,
                out_valid_s,

                out_a_w,
                out_b_w,
                out_ctrl_w,
                out_valid_w,

                host_out_a,
                host_out_valid
            );
    end

endmodule

