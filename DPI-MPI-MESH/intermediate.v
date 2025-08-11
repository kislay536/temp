// ---------------------------
// Top-level calculator: instantiates 3x3 alu_tile_noc and manages injection/collection
// Single-packet at a time. No port changes — same top-level signature you requested.
// ---------------------------
module intermediate(
    input  wire [63:0] a,
    input  wire [63:0] b,
    input  wire [3:0]  mode,
    output wire [63:0] result,
    output wire        valid
);

    // helper: build ctrl
    function [15:0] make_ctrl(input bit resp, input [1:0] dx, input [1:0] dy, input [3:0] md);
        begin
            make_ctrl = {7'd0, resp, dx, dy, md};
        end
    endfunction

    // Indexing: idx = y*3 + x  (x=0..2, y=0..2)

    // Per-tile input registers (the simulated network state)
    reg [63:0] in_a  [0:8];
    reg [63:0] in_b  [0:8];
    reg [15:0] in_ctrl [0:8];
    reg        in_valid[0:8];

    // Wires for module outputs (each tile provides four directional outputs + host_out)
    wire [63:0] out_a_n [0:8]; wire [63:0] out_b_n [0:8]; wire [15:0] out_ctrl_n [0:8]; wire out_valid_n [0:8];
    wire [63:0] out_a_e [0:8]; wire [63:0] out_b_e [0:8]; wire [15:0] out_ctrl_e [0:8]; wire out_valid_e [0:8];
    wire [63:0] out_a_s [0:8]; wire [63:0] out_b_s [0:8]; wire [15:0] out_ctrl_s [0:8]; wire out_valid_s [0:8];
    wire [63:0] out_a_w [0:8]; wire [63:0] out_b_w [0:8]; wire [15:0] out_ctrl_w [0:8]; wire out_valid_w [0:8];
    wire [63:0] host_out_a [0:8]; wire host_out_valid [0:8];

    // host injection wires (we only drive tile(0,0).host_in_*)
    wire [63:0] host_in_a_wires [0:8]; wire [63:0] host_in_b_wires [0:8]; wire [15:0] host_in_ctrl_wires [0:8]; wire host_in_valid_wires [0:8];
    // default all host_in_* to zero; we'll drive index 0 from regs.
    genvar gi;
    generate
        for (gi = 0; gi < 9; gi = gi + 1) begin : host_in_defaults
            assign host_in_a_wires[gi] = 64'd0;
            assign host_in_b_wires[gi] = 64'd0;
            assign host_in_ctrl_wires[gi] = 16'd0;
            assign host_in_valid_wires[gi] = 1'b0;
        end
    endgenerate

    // instantiate 9 tiles (x=0..2, y=0..2)
    // connect each tile's inputs to in_* array (we'll update those regs in the behavioral loop)
    // For host injection, we will override host_in_* for tile 0 (index 0) later by continuous assigns from regs.

    // helper macro for wiring calculation of neighbor indexes
    function integer idx_of(input integer x, input integer y);
        begin idx_of = y*3 + x; end
    endfunction

    // instantiate tiles
    // Declare genvars outside
    genvar x, y;

    alu_tile_noc #(.TILE_X(0), .TILE_Y(0)) t0_0 (
        .in_a_n(64'd0),
        .in_b_n(64'd0),
        .in_ctrl_n(16'd0),
        .in_valid_n(1'b0),

        .in_a_e(in_a[idx_of(1,0)]),
        .in_b_e(in_b[idx_of(1,0)]),
        .in_ctrl_e(in_ctrl[idx_of(1,0)]),
        .in_valid_e(in_valid[idx_of(1,0)]),

        .in_a_s(in_a[idx_of(0,1)]),
        .in_b_s(in_b[idx_of(0,1)]),
        .in_ctrl_s(in_ctrl[idx_of(0,1)]),
        .in_valid_s(in_valid[idx_of(0,1)]),

        .in_a_w(64'd0),
        .in_b_w(64'd0),
        .in_ctrl_w(16'd0),
        .in_valid_w(1'b0),

        .host_in_a(host_in_a_wires[0]),
        .host_in_b(host_in_b_wires[0]),
        .host_in_ctrl(host_in_ctrl_wires[0]),
        .host_in_valid(host_in_valid_wires[0]),

        .out_a_n(out_a_n[0]), .out_b_n(out_b_n[0]), .out_ctrl_n(out_ctrl_n[0]), .out_valid_n(out_valid_n[0]),
        .out_a_e(out_a_e[0]), .out_b_e(out_b_e[0]), .out_ctrl_e(out_ctrl_e[0]), .out_valid_e(out_valid_e[0]),
        .out_a_s(out_a_s[0]), .out_b_s(out_b_s[0]), .out_ctrl_s(out_ctrl_s[0]), .out_valid_s(out_valid_s[0]),
        .out_a_w(out_a_w[0]), .out_b_w(out_b_w[0]), .out_ctrl_w(out_ctrl_w[0]), .out_valid_w(out_valid_w[0]),

        .host_out_a(host_out_a[0]),
        .host_out_valid(host_out_valid[0])
    );

    alu_tile_noc #(.TILE_X(1), .TILE_Y(0)) t0_1 (
        .in_a_n(64'd0),
        .in_b_n(64'd0),
        .in_ctrl_n(16'd0),
        .in_valid_n(1'b0),

        .in_a_e(in_a[idx_of(2,0)]),
        .in_b_e(in_b[idx_of(2,0)]),
        .in_ctrl_e(in_ctrl[idx_of(2,0)]),
        .in_valid_e(in_valid[idx_of(2,0)]),

        .in_a_s(in_a[idx_of(1,1)]),
        .in_b_s(in_b[idx_of(1,1)]),
        .in_ctrl_s(in_ctrl[idx_of(1,1)]),
        .in_valid_s(in_valid[idx_of(1,1)]),

        .in_a_w(in_a[idx_of(0,0)]),
        .in_b_w(in_b[idx_of(0,0)]),
        .in_ctrl_w(in_ctrl[idx_of(0,0)]),
        .in_valid_w(in_valid[idx_of(0,0)]),

        .host_in_a(host_in_a_wires[1]),
        .host_in_b(host_in_b_wires[1]),
        .host_in_ctrl(host_in_ctrl_wires[1]),
        .host_in_valid(host_in_valid_wires[1]),

        .out_a_n(out_a_n[1]), .out_b_n(out_b_n[1]), .out_ctrl_n(out_ctrl_n[1]), .out_valid_n(out_valid_n[1]),
        .out_a_e(out_a_e[1]), .out_b_e(out_b_e[1]), .out_ctrl_e(out_ctrl_e[1]), .out_valid_e(out_valid_e[1]),
        .out_a_s(out_a_s[1]), .out_b_s(out_b_s[1]), .out_ctrl_s(out_ctrl_s[1]), .out_valid_s(out_valid_s[1]),
        .out_a_w(out_a_w[1]), .out_b_w(out_b_w[1]), .out_ctrl_w(out_ctrl_w[1]), .out_valid_w(out_valid_w[1]),

        .host_out_a(host_out_a[1]),
        .host_out_valid(host_out_valid[1])
    );

    alu_tile_noc #(.TILE_X(2), .TILE_Y(0)) t0_2 (
        .in_a_n(64'd0),
        .in_b_n(64'd0),
        .in_ctrl_n(16'd0),
        .in_valid_n(1'b0),

        .in_a_e(64'd0),
        .in_b_e(64'd0),
        .in_ctrl_e(16'd0),
        .in_valid_e(1'b0),

        .in_a_s(in_a[idx_of(2,1)]),
        .in_b_s(in_b[idx_of(2,1)]),
        .in_ctrl_s(in_ctrl[idx_of(2,1)]),
        .in_valid_s(in_valid[idx_of(2,1)]),

        .in_a_w(in_a[idx_of(1,0)]),
        .in_b_w(in_b[idx_of(1,0)]),
        .in_ctrl_w(in_ctrl[idx_of(1,0)]),
        .in_valid_w(in_valid[idx_of(1,0)]),

        .host_in_a(host_in_a_wires[2]),
        .host_in_b(host_in_b_wires[2]),
        .host_in_ctrl(host_in_ctrl_wires[2]),
        .host_in_valid(host_in_valid_wires[2]),

        .out_a_n(out_a_n[2]), .out_b_n(out_b_n[2]), .out_ctrl_n(out_ctrl_n[2]), .out_valid_n(out_valid_n[2]),
        .out_a_e(out_a_e[2]), .out_b_e(out_b_e[2]), .out_ctrl_e(out_ctrl_e[2]), .out_valid_e(out_valid_e[2]),
        .out_a_s(out_a_s[2]), .out_b_s(out_b_s[2]), .out_ctrl_s(out_ctrl_s[2]), .out_valid_s(out_valid_s[2]),
        .out_a_w(out_a_w[2]), .out_b_w(out_b_w[2]), .out_ctrl_w(out_ctrl_w[2]), .out_valid_w(out_valid_w[2]),

        .host_out_a(host_out_a[2]),
        .host_out_valid(host_out_valid[2])
    );

    // Row 1
    alu_tile_noc #(.TILE_X(0), .TILE_Y(1)) t1_0 (
        .in_a_n(in_a[idx_of(0,0)]),
        .in_b_n(in_b[idx_of(0,0)]),
        .in_ctrl_n(in_ctrl[idx_of(0,0)]),
        .in_valid_n(in_valid[idx_of(0,0)]),

        .in_a_e(in_a[idx_of(1,1)]),
        .in_b_e(in_b[idx_of(1,1)]),
        .in_ctrl_e(in_ctrl[idx_of(1,1)]),
        .in_valid_e(in_valid[idx_of(1,1)]),

        .in_a_s(in_a[idx_of(0,2)]),
        .in_b_s(in_b[idx_of(0,2)]),
        .in_ctrl_s(in_ctrl[idx_of(0,2)]),
        .in_valid_s(in_valid[idx_of(0,2)]),

        .in_a_w(64'd0),
        .in_b_w(64'd0),
        .in_ctrl_w(16'd0),
        .in_valid_w(1'b0),

        .host_in_a(host_in_a_wires[3]),
        .host_in_b(host_in_b_wires[3]),
        .host_in_ctrl(host_in_ctrl_wires[3]),
        .host_in_valid(host_in_valid_wires[3]),

        .out_a_n(out_a_n[3]), .out_b_n(out_b_n[3]), .out_ctrl_n(out_ctrl_n[3]), .out_valid_n(out_valid_n[3]),
        .out_a_e(out_a_e[3]), .out_b_e(out_b_e[3]), .out_ctrl_e(out_ctrl_e[3]), .out_valid_e(out_valid_e[3]),
        .out_a_s(out_a_s[3]), .out_b_s(out_b_s[3]), .out_ctrl_s(out_ctrl_s[3]), .out_valid_s(out_valid_s[3]),
        .out_a_w(out_a_w[3]), .out_b_w(out_b_w[3]), .out_ctrl_w(out_ctrl_w[3]), .out_valid_w(out_valid_w[3]),

        .host_out_a(host_out_a[3]),
        .host_out_valid(host_out_valid[3])
    );

    alu_tile_noc #(.TILE_X(1), .TILE_Y(1)) t1_1 (
        .in_a_n(in_a[idx_of(1,0)]),
        .in_b_n(in_b[idx_of(1,0)]),
        .in_ctrl_n(in_ctrl[idx_of(1,0)]),
        .in_valid_n(in_valid[idx_of(1,0)]),

        .in_a_e(in_a[idx_of(2,1)]),
        .in_b_e(in_b[idx_of(2,1)]),
        .in_ctrl_e(in_ctrl[idx_of(2,1)]),
        .in_valid_e(in_valid[idx_of(2,1)]),

        .in_a_s(in_a[idx_of(1,2)]),
        .in_b_s(in_b[idx_of(1,2)]),
        .in_ctrl_s(in_ctrl[idx_of(1,2)]),
        .in_valid_s(in_valid[idx_of(1,2)]),

        .in_a_w(in_a[idx_of(0,1)]),
        .in_b_w(in_b[idx_of(0,1)]),
        .in_ctrl_w(in_ctrl[idx_of(0,1)]),
        .in_valid_w(in_valid[idx_of(0,1)]),

        .host_in_a(host_in_a_wires[4]),
        .host_in_b(host_in_b_wires[4]),
        .host_in_ctrl(host_in_ctrl_wires[4]),
        .host_in_valid(host_in_valid_wires[4]),

        .out_a_n(out_a_n[4]), .out_b_n(out_b_n[4]), .out_ctrl_n(out_ctrl_n[4]), .out_valid_n(out_valid_n[4]),
        .out_a_e(out_a_e[4]), .out_b_e(out_b_e[4]), .out_ctrl_e(out_ctrl_e[4]), .out_valid_e(out_valid_e[4]),
        .out_a_s(out_a_s[4]), .out_b_s(out_b_s[4]), .out_ctrl_s(out_ctrl_s[4]), .out_valid_s(out_valid_s[4]),
        .out_a_w(out_a_w[4]), .out_b_w(out_b_w[4]), .out_ctrl_w(out_ctrl_w[4]), .out_valid_w(out_valid_w[4]),

        .host_out_a(host_out_a[4]),
        .host_out_valid(host_out_valid[4])
    );

    alu_tile_noc #(.TILE_X(2), .TILE_Y(1)) t1_2 (
        .in_a_n(in_a[idx_of(2,0)]),
        .in_b_n(in_b[idx_of(2,0)]),
        .in_ctrl_n(in_ctrl[idx_of(2,0)]),
        .in_valid_n(in_valid[idx_of(2,0)]),

        .in_a_e(64'd0),
        .in_b_e(64'd0),
        .in_ctrl_e(16'd0),
        .in_valid_e(1'b0),

        .in_a_s(in_a[idx_of(2,2)]),
        .in_b_s(in_b[idx_of(2,2)]),
        .in_ctrl_s(in_ctrl[idx_of(2,2)]),
        .in_valid_s(in_valid[idx_of(2,2)]),

        .in_a_w(in_a[idx_of(1,1)]),
        .in_b_w(in_b[idx_of(1,1)]),
        .in_ctrl_w(in_ctrl[idx_of(1,1)]),
        .in_valid_w(in_valid[idx_of(1,1)]),

        .host_in_a(host_in_a_wires[5]),
        .host_in_b(host_in_b_wires[5]),
        .host_in_ctrl(host_in_ctrl_wires[5]),
        .host_in_valid(host_in_valid_wires[5]),

        .out_a_n(out_a_n[5]), .out_b_n(out_b_n[5]), .out_ctrl_n(out_ctrl_n[5]), .out_valid_n(out_valid_n[5]),
        .out_a_e(out_a_e[5]), .out_b_e(out_b_e[5]), .out_ctrl_e(out_ctrl_e[5]), .out_valid_e(out_valid_e[5]),
        .out_a_s(out_a_s[5]), .out_b_s(out_b_s[5]), .out_ctrl_s(out_ctrl_s[5]), .out_valid_s(out_valid_s[5]),
        .out_a_w(out_a_w[5]), .out_b_w(out_b_w[5]), .out_ctrl_w(out_ctrl_w[5]), .out_valid_w(out_valid_w[5]),

        .host_out_a(host_out_a[5]),
        .host_out_valid(host_out_valid[5])
    );

    // Row 2
    alu_tile_noc #(.TILE_X(0), .TILE_Y(2)) t2_0 (
        .in_a_n(in_a[idx_of(0,1)]),
        .in_b_n(in_b[idx_of(0,1)]),
        .in_ctrl_n(in_ctrl[idx_of(0,1)]),
        .in_valid_n(in_valid[idx_of(0,1)]),

        .in_a_e(in_a[idx_of(1,2)]),
        .in_b_e(in_b[idx_of(1,2)]),
        .in_ctrl_e(in_ctrl[idx_of(1,2)]),
        .in_valid_e(in_valid[idx_of(1,2)]),

        .in_a_s(64'd0),
        .in_b_s(64'd0),
        .in_ctrl_s(16'd0),
        .in_valid_s(1'b0),

        .in_a_w(64'd0),
        .in_b_w(64'd0),
        .in_ctrl_w(16'd0),
        .in_valid_w(1'b0),

        .host_in_a(host_in_a_wires[6]),
        .host_in_b(host_in_b_wires[6]),
        .host_in_ctrl(host_in_ctrl_wires[6]),
        .host_in_valid(host_in_valid_wires[6]),

        .out_a_n(out_a_n[6]), .out_b_n(out_b_n[6]), .out_ctrl_n(out_ctrl_n[6]), .out_valid_n(out_valid_n[6]),
        .out_a_e(out_a_e[6]), .out_b_e(out_b_e[6]), .out_ctrl_e(out_ctrl_e[6]), .out_valid_e(out_valid_e[6]),
        .out_a_s(out_a_s[6]), .out_b_s(out_b_s[6]), .out_ctrl_s(out_ctrl_s[6]), .out_valid_s(out_valid_s[6]),
        .out_a_w(out_a_w[6]), .out_b_w(out_b_w[6]), .out_ctrl_w(out_ctrl_w[6]), .out_valid_w(out_valid_w[6]),

        .host_out_a(host_out_a[6]),
        .host_out_valid(host_out_valid[6])
    );

    alu_tile_noc #(.TILE_X(1), .TILE_Y(2)) t2_1 (
        .in_a_n(in_a[idx_of(1,1)]),
        .in_b_n(in_b[idx_of(1,1)]),
        .in_ctrl_n(in_ctrl[idx_of(1,1)]),
        .in_valid_n(in_valid[idx_of(1,1)]),

        .in_a_e(in_a[idx_of(2,2)]),
        .in_b_e(in_b[idx_of(2,2)]),
        .in_ctrl_e(in_ctrl[idx_of(2,2)]),
        .in_valid_e(in_valid[idx_of(2,2)]),

        .in_a_s(64'd0),
        .in_b_s(64'd0),
        .in_ctrl_s(16'd0),
        .in_valid_s(1'b0),

        .in_a_w(in_a[idx_of(0,2)]),
        .in_b_w(in_b[idx_of(0,2)]),
        .in_ctrl_w(in_ctrl[idx_of(0,2)]),
        .in_valid_w(in_valid[idx_of(0,2)]),

        .host_in_a(host_in_a_wires[7]),
        .host_in_b(host_in_b_wires[7]),
        .host_in_ctrl(host_in_ctrl_wires[7]),
        .host_in_valid(host_in_valid_wires[7]),

        .out_a_n(out_a_n[7]), .out_b_n(out_b_n[7]), .out_ctrl_n(out_ctrl_n[7]), .out_valid_n(out_valid_n[7]),
        .out_a_e(out_a_e[7]), .out_b_e(out_b_e[7]), .out_ctrl_e(out_ctrl_e[7]), .out_valid_e(out_valid_e[7]),
        .out_a_s(out_a_s[7]), .out_b_s(out_b_s[7]), .out_ctrl_s(out_ctrl_s[7]), .out_valid_s(out_valid_s[7]),
        .out_a_w(out_a_w[7]), .out_b_w(out_b_w[7]), .out_ctrl_w(out_ctrl_w[7]), .out_valid_w(out_valid_w[7]),

        .host_out_a(host_out_a[7]),
        .host_out_valid(host_out_valid[7])
    );

    alu_tile_noc #(.TILE_X(2), .TILE_Y(2)) t2_2 (
        .in_a_n(in_a[idx_of(2,1)]),
        .in_b_n(in_b[idx_of(2,1)]),
        .in_ctrl_n(in_ctrl[idx_of(2,1)]),
        .in_valid_n(in_valid[idx_of(2,1)]),

        .in_a_e(64'd0),
        .in_b_e(64'd0),
        .in_ctrl_e(16'd0),
        .in_valid_e(1'b0),

        .in_a_s(64'd0),
        .in_b_s(64'd0),
        .in_ctrl_s(16'd0),
        .in_valid_s(1'b0),

        .in_a_w(in_a[idx_of(1,2)]),
        .in_b_w(in_b[idx_of(1,2)]),
        .in_ctrl_w(in_ctrl[idx_of(1,2)]),
        .in_valid_w(in_valid[idx_of(1,2)]),

        .host_in_a(host_in_a_wires[8]),
        .host_in_b(host_in_b_wires[8]),
        .host_in_ctrl(host_in_ctrl_wires[8]),
        .host_in_valid(host_in_valid_wires[8]),

        .out_a_n(out_a_n[8]), .out_b_n(out_b_n[8]), .out_ctrl_n(out_ctrl_n[8]), .out_valid_n(out_valid_n[8]),
        .out_a_e(out_a_e[8]), .out_b_e(out_b_e[8]), .out_ctrl_e(out_ctrl_e[8]), .out_valid_e(out_valid_e[8]),
        .out_a_s(out_a_s[8]), .out_b_s(out_b_s[8]), .out_ctrl_s(out_ctrl_s[8]), .out_valid_s(out_valid_s[8]),
        .out_a_w(out_a_w[8]), .out_b_w(out_b_w[8]), .out_ctrl_w(out_ctrl_w[8]), .out_valid_w(out_valid_w[8]),

        .host_out_a(host_out_a[8]),
        .host_out_valid(host_out_valid[8])
    );

    // -------------------------------------------------------------------------------------



    // We'll drive tile(0,0) host_in from these regs when injecting
    reg [63:0] host_in_a_reg; reg [63:0] host_in_b_reg; reg [15:0] host_in_ctrl_reg; reg host_in_valid_reg;
    // hook them up
    assign host_in_a_wires[0] = host_in_a_reg;
    assign host_in_b_wires[0] = host_in_b_reg;
    assign host_in_ctrl_wires[0] = host_in_ctrl_reg;
    assign host_in_valid_wires[0] = host_in_valid_reg;

    // Simulation state registers
    initial begin
        integer k;
        for (k = 0; k < 9; k = k + 1) begin
            in_a[k] = 64'd0; in_b[k] = 64'd0; in_ctrl[k] = 16'd0; in_valid[k] = 1'b0;
        end
        host_in_a_reg = 64'd0; host_in_b_reg = 64'd0; host_in_ctrl_reg = 16'd0; host_in_valid_reg = 1'b0;
    end

    // internal result capture
    reg [63:0] result_r; reg valid_r;
    initial begin result_r = 64'd0; valid_r = 1'b0; end

    integer any;
    // injection and hop-by-hop progression (behavioral sequential model)
    always @(*) begin
        integer idx_h;
        integer i,j;

        // temporary working copies
        reg [63:0] tmp_a [0:8];
        reg [63:0] tmp_b [0:8];
        reg [15:0] tmp_ctrl [0:8];
        reg        tmp_valid[0:8];

        // copy existing network state to temp
        for (i = 0; i < 9; i = i + 1) begin
            tmp_a[i] = in_a[i];
            tmp_b[i] = in_b[i];
            tmp_ctrl[i] = in_ctrl[i];
            tmp_valid[i] = in_valid[i];
        end

        // default outputs
        result_r = 64'd0; valid_r = 1'b0;

        // If tile(0,0) is idle (no valid) and no packet in network, inject the new request
        // Simple network idle check: no in_valid anywhere
        any = 0;
        for (i = 0; i < 9; i = i + 1) if (tmp_valid[i]) any = any + 1;

        if (any == 0) begin
            // inject from top-level inputs
            tmp_a[0] = a;
            tmp_b[0] = b;
            // compute dst from mode: dst_y = mode / 3; dst_x = mode % 3
            tmp_ctrl[0] = make_ctrl(1'b0, (mode % 3), (mode / 3), mode);
            tmp_valid[0] = 1'b1;
        end

        // progress the single packet through the network hop-by-hop; limit number of hops
        for (idx_h = 0; idx_h < 20; idx_h = idx_h + 1) begin
            // check if any flits exist; if none, break
            integer some;
            some = 0;
            for (i = 0; i < 9; i = i + 1) if (tmp_valid[i]) some = some + 1;
            if (some == 0) begin
                break; // no more work
            end

            // inspect each tile's combinational outputs and move flit one hop using the instantiated tiles
            for (i = 0; i < 9; i = i + 1) begin
                if (tmp_valid[i]) begin
                    // For tile i, we need to know what its instantiated module would output given tmp_* as its inputs.
                    // We have instantiated each tile and its outputs are available on wires out_...[] which reflect
                    // the tile behaviour for the current values of its inputs (these inputs are connected to in_a[...] regs
                    // via expressions in the instantiation above). However, because the instantiation reads the top-level in_* regs
                    // and we are using tmp_* for the progression, we will temporarily treat "in_*" as tmp_* by mapping
                    // them through a small redirection: we will mimic the module outputs based on current tmp_*.
                    // To keep code compact and avoid recomputing routing logic here, we'll simply re-implement tile logic
                    // locally (identical to alu_tile_noc) to decide the single-step movement.

                    // decode ctrl
                    reg [15:0] c; 
                    reg r; 
                    reg [1:0] dx; 
                    reg [1:0] dy; 
                    reg [3:0] md; 
                    integer tx, ty; 
                    c = tmp_ctrl[i];
                    r = c[8];
                    dx = c[7:6];
                    dy = c[5:4];
                    md = c[3:0];
                    tx = i % 3; 
                    ty = i / 3;

                    if (!r) begin
                        // request
                        if ((tx == dx) && (ty == dy)) begin
                            // reached destination: compute result and replace flit with response (dst=0,0)
                            reg [63:0] local_res;
                            case (md)
                                4'd0: local_res = tmp_a[i] + tmp_b[i];
                                4'd1: local_res = tmp_a[i] - tmp_b[i];
                                4'd2: local_res = tmp_a[i] * tmp_b[i];
                                4'd3: local_res = (tmp_b[i] == 0) ? 64'd0 : (tmp_a[i] / tmp_b[i]);
                                4'd4: local_res = tmp_a[i] & tmp_b[i];
                                4'd5: local_res = tmp_a[i] | tmp_b[i];
                                4'd6: local_res = tmp_a[i] ^ tmp_b[i];
                                4'd7: local_res = tmp_a[i] << tmp_b[i][5:0];
                                4'd8: local_res = tmp_a[i] >> tmp_b[i][5:0];
                                default: local_res = 64'd0;
                            endcase
                            // make response flit at same tile
                            tmp_a[i] = local_res; tmp_b[i] = 64'd0; tmp_ctrl[i] = make_ctrl(1'b1, 2'd0, 2'd0, md);
                            // remain at same tile (it becomes a response to be forwarded next iterations)
                        end else begin
                            // forward request: Y-first then X
                            if (ty < dy) begin
                                // move south
                                integer nidx = (ty+1)*3 + tx;
                                if (!tmp_valid[nidx]) begin
                                    tmp_a[nidx] = tmp_a[i]; tmp_b[nidx] = tmp_b[i]; tmp_ctrl[nidx] = tmp_ctrl[i]; tmp_valid[nidx] = 1'b1;
                                    tmp_valid[i] = 1'b0;
                                end
                            end else if (ty > dy) begin
                                // north
                                integer nidx = (ty-1)*3 + tx;
                                if (!tmp_valid[nidx]) begin
                                    tmp_a[nidx] = tmp_a[i]; tmp_b[nidx] = tmp_b[i]; tmp_ctrl[nidx] = tmp_ctrl[i]; tmp_valid[nidx] = 1'b1;
                                    tmp_valid[i] = 1'b0;
                                end
                            end else if (tx < dx) begin
                                // east
                                integer nidx = ty*3 + (tx+1);
                                if (!tmp_valid[nidx]) begin
                                    tmp_a[nidx] = tmp_a[i]; tmp_b[nidx] = tmp_b[i]; tmp_ctrl[nidx] = tmp_ctrl[i]; tmp_valid[nidx] = 1'b1;
                                    tmp_valid[i] = 1'b0;
                                end
                            end else if (tx > dx) begin
                                // west
                                integer nidx = ty*3 + (tx-1);
                                if (!tmp_valid[nidx]) begin
                                    tmp_a[nidx] = tmp_a[i]; tmp_b[nidx] = tmp_b[i]; tmp_ctrl[nidx] = tmp_ctrl[i]; tmp_valid[nidx] = 1'b1;
                                    tmp_valid[i] = 1'b0;
                                end
                            end
                        end
                    end else begin
                        // response routing: north until y==0, then west until x==0
                        if (ty > 0) begin
                            integer nidx = (ty-1)*3 + tx; // north
                            if (!tmp_valid[nidx]) begin
                                tmp_a[nidx] = tmp_a[i]; tmp_b[nidx] = tmp_b[i]; tmp_ctrl[nidx] = tmp_ctrl[i]; tmp_valid[nidx] = 1'b1;
                                tmp_valid[i] = 1'b0;
                            end
                        end else if (tx > 0) begin
                            integer nidx = ty*3 + (tx-1); // west
                            if (!tmp_valid[nidx]) begin
                                tmp_a[nidx] = tmp_a[i]; tmp_b[nidx] = tmp_b[i]; tmp_ctrl[nidx] = tmp_ctrl[i]; tmp_valid[nidx] = 1'b1;
                                tmp_valid[i] = 1'b0;
                            end
                        end else begin
                            // response reached (0,0) deliver to host
                            result_r = tmp_a[i]; valid_r = 1'b1; tmp_valid[i] = 1'b0;
                        end
                    end
                end // if tmp_valid[i]
            end // for i
        end // hop loop

        // finally: copy tmp back to in_* (network state)
        for (i = 0; i < 9; i = i + 1) begin
            in_a[i] = tmp_a[i];
            in_b[i] = tmp_b[i];
            in_ctrl[i] = tmp_ctrl[i];
            in_valid[i] = tmp_valid[i];
        end
    end // always @(*)

    assign result = result_r;
    assign valid  = valid_r;

endmodule

// ---------------------------
// End of file
// ---------------------------
