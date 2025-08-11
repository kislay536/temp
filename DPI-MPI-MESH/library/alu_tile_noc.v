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

    terminate term(.a(1'b0));

    always @(*) if (sel_valid && am_dest && !sel_resp)
        $display("[t=%0t] Tile(%0d,%0d): op=%0d, A=%0d, B=%0d, Res=%0d",
                $time, TILE_X, TILE_Y, sel_mode, sel_a, sel_b, op_result);


    // decode a selected incoming flit (priority: host -> N -> E -> S -> W)
    wire any_in_valid = host_in_valid | in_valid_n | in_valid_e | in_valid_s | in_valid_w;
    reg [63:0] sel_a;
    reg [63:0] sel_b;
    reg [15:0] sel_ctrl;
    reg        sel_valid;

    always @(*) begin
        // default
        sel_a = 64'd0; sel_b = 64'd0; sel_ctrl = 16'd0; sel_valid = 1'b0;
        if (host_in_valid) begin
            sel_a = host_in_a; sel_b = host_in_b; sel_ctrl = host_in_ctrl; sel_valid = 1'b1;
        end else if (in_valid_n) begin
            sel_a = in_a_n; sel_b = in_b_n; sel_ctrl = in_ctrl_n; sel_valid = 1'b1;
        end else if (in_valid_e) begin
            sel_a = in_a_e; sel_b = in_b_e; sel_ctrl = in_ctrl_e; sel_valid = 1'b1;
        end else if (in_valid_s) begin
            sel_a = in_a_s; sel_b = in_b_s; sel_ctrl = in_ctrl_s; sel_valid = 1'b1;
        end else if (in_valid_w) begin
            sel_a = in_a_w; sel_b = in_b_w; sel_ctrl = in_ctrl_w; sel_valid = 1'b1;
        end
    end

    // decode ctrl fields
    wire sel_resp = sel_ctrl[8];
    wire [1:0] sel_dst_x = sel_ctrl[7:6];
    wire [1:0] sel_dst_y = sel_ctrl[5:4];
    wire [3:0] sel_mode  = sel_ctrl[3:0];

    // deduce if this tile is destination
    wire [1:0] cur_x = TILE_X;
    wire [1:0] cur_y = TILE_Y;
    wire am_dest = sel_valid && (sel_dst_x == cur_x) && (sel_dst_y == cur_y);

    // op result (only valid when am_dest && !sel_resp && sel_valid)
    reg [63:0] op_result;
    always @(*) begin
        op_result = 64'd0;
        if (sel_valid && am_dest && !sel_resp) begin
            case (sel_mode)
                4'd0: op_result = sel_a + sel_b;
                4'd1: op_result = sel_a - sel_b;
                4'd2: op_result = sel_a * sel_b;
                4'd3: op_result = (sel_b == 0) ? 64'd0 : (sel_a / sel_b);
                4'd4: op_result = sel_a & sel_b;
                4'd5: op_result = sel_a | sel_b;
                4'd6: op_result = sel_a ^ sel_b;
                4'd7: op_result = sel_a << sel_b[5:0];
                4'd8: op_result = sel_a >> sel_b[5:0];
                default: op_result = 64'd0;
            endcase
        end
    end

    // generate outputs (single-direction) based on routing rules
    always @(*) begin
        // default: no outputs
        out_a_n = 64'd0; out_b_n = 64'd0; out_ctrl_n = 16'd0; out_valid_n = 1'b0;
        out_a_e = 64'd0; out_b_e = 64'd0; out_ctrl_e = 16'd0; out_valid_e = 1'b0;
        out_a_s = 64'd0; out_b_s = 64'd0; out_ctrl_s = 16'd0; out_valid_s = 1'b0;
        out_a_w = 64'd0; out_b_w = 64'd0; out_ctrl_w = 16'd0; out_valid_w = 1'b0;
        host_out_a = 64'd0; host_out_valid = 1'b0;

        if (!sel_valid) begin
            // nothing to forward
        end else begin
            if (!sel_resp) begin
                // Request flit
                if (am_dest) begin
                    // generate response flit containing op_result
                    // response ctrl: resp=1, dst=0,0, keep mode
                    reg [15:0] resp_ctrl;
                    resp_ctrl = {7'd0, 1'b1, 2'd0, 2'd0, sel_mode};
                    // route response back to host using (first Y then X): north if y>0 else west if x>0 else host
                    if (cur_y > 2'd0) begin
                        out_a_n = op_result; out_b_n = 64'd0; out_ctrl_n = resp_ctrl; out_valid_n = 1'b1;
                    end else if (cur_x > 2'd0) begin
                        out_a_w = op_result; out_b_w = 64'd0; out_ctrl_w = resp_ctrl; out_valid_w = 1'b1;
                    end else begin
                        // we are (0,0): deliver directly to host
                        host_out_a = op_result; host_out_valid = 1'b1;
                    end
                end else begin
                    // forward request towards dst (Y-first then X)
                    if (cur_y < sel_dst_y) begin
                        // south
                        out_a_s = sel_a; out_b_s = sel_b; out_ctrl_s = sel_ctrl; out_valid_s = 1'b1;
                    end else if (cur_y > sel_dst_y) begin
                        // north
                        out_a_n = sel_a; out_b_n = sel_b; out_ctrl_n = sel_ctrl; out_valid_n = 1'b1;
                    end else if (cur_x < sel_dst_x) begin
                        // east
                        out_a_e = sel_a; out_b_e = sel_b; out_ctrl_e = sel_ctrl; out_valid_e = 1'b1;
                    end else if (cur_x > sel_dst_x) begin
                        // west
                        out_a_w = sel_a; out_b_w = sel_b; out_ctrl_w = sel_ctrl; out_valid_w = 1'b1;
                    end
                end
            end else begin
                // Response flit: route towards (0,0) (north then west)
                if ((cur_y > 2'd0)) begin
                    // go north
                    out_a_n = sel_a; out_b_n = sel_b; out_ctrl_n = sel_ctrl; out_valid_n = 1'b1;
                end else if ((cur_x > 2'd0)) begin
                    // go west
                    out_a_w = sel_a; out_b_w = sel_b; out_ctrl_w = sel_ctrl; out_valid_w = 1'b1;
                end else begin
                    // at (0,0) -> to host
                    host_out_a = sel_a; host_out_valid = 1'b1;
                end
            end
        end
    end

endmodule

