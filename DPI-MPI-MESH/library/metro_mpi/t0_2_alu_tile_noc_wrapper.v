module t0_2_alu_tile_noc_wrapper (
  TILE_X,
  TILE_Y,
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

  input logic [7:0] TILE_X;
  input logic [7:0] TILE_Y;
  input logic [63:0] in_a_n;
  input logic [63:0] in_b_n;
  input logic [15:0] in_ctrl_n;
  input logic in_valid_n;
  input logic [63:0] in_a_e;
  input logic [63:0] in_b_e;
  input logic [15:0] in_ctrl_e;
  input logic in_valid_e;
  input logic [63:0] in_a_s;
  input logic [63:0] in_b_s;
  input logic [15:0] in_ctrl_s;
  input logic in_valid_s;
  input logic [63:0] in_a_w;
  input logic [63:0] in_b_w;
  input logic [15:0] in_ctrl_w;
  input logic in_valid_w;
  input logic [63:0] host_in_a;
  input logic [63:0] host_in_b;
  input logic [15:0] host_in_ctrl;
  input logic host_in_valid;
  output logic [63:0] out_a_n;
  output logic [63:0] out_b_n;
  output logic [15:0] out_ctrl_n;
  output logic out_valid_n;
  output logic [63:0] out_a_e;
  output logic [63:0] out_b_e;
  output logic [15:0] out_ctrl_e;
  output logic out_valid_e;
  output logic [63:0] out_a_s;
  output logic [63:0] out_b_s;
  output logic [15:0] out_ctrl_s;
  output logic out_valid_s;
  output logic [63:0] out_a_w;
  output logic [63:0] out_b_w;
  output logic [15:0] out_ctrl_w;
  output logic out_valid_w;
  output logic [63:0] host_out_a;
  output logic host_out_valid;

  modified_alu_tile_noc #(
    .PARTITION_ID(3)
  ) inst (
    .TILE_X(TILE_X),
    .TILE_Y(TILE_Y),
    .in_a_n(in_a_n),
    .in_b_n(in_b_n),
    .in_ctrl_n(in_ctrl_n),
    .in_valid_n(in_valid_n),
    .in_a_e(in_a_e),
    .in_b_e(in_b_e),
    .in_ctrl_e(in_ctrl_e),
    .in_valid_e(in_valid_e),
    .in_a_s(in_a_s),
    .in_b_s(in_b_s),
    .in_ctrl_s(in_ctrl_s),
    .in_valid_s(in_valid_s),
    .in_a_w(in_a_w),
    .in_b_w(in_b_w),
    .in_ctrl_w(in_ctrl_w),
    .in_valid_w(in_valid_w),
    .host_in_a(host_in_a),
    .host_in_b(host_in_b),
    .host_in_ctrl(host_in_ctrl),
    .host_in_valid(host_in_valid),
    .out_a_n(out_a_n),
    .out_b_n(out_b_n),
    .out_ctrl_n(out_ctrl_n),
    .out_valid_n(out_valid_n),
    .out_a_e(out_a_e),
    .out_b_e(out_b_e),
    .out_ctrl_e(out_ctrl_e),
    .out_valid_e(out_valid_e),
    .out_a_s(out_a_s),
    .out_b_s(out_b_s),
    .out_ctrl_s(out_ctrl_s),
    .out_valid_s(out_valid_s),
    .out_a_w(out_a_w),
    .out_b_w(out_b_w),
    .out_ctrl_w(out_ctrl_w),
    .out_valid_w(out_valid_w),
    .host_out_a(host_out_a),
    .host_out_valid(host_out_valid)
  );
endmodule
