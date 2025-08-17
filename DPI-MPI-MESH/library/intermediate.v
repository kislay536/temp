// [file: intermediate.v]
// ---------------------------
// Top-level calculator: instantiates and manages a 3x3 clocked NoC.
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
    wire [63:0] out_a_n[0:8], out_b_n[0:8]; wire [15:0] out_ctrl_n[0:8]; wire out_valid_n[0:8];
    wire [63:0] out_a_e[0:8], out_b_e[0:8]; wire [15:0] out_ctrl_e[0:8]; wire out_valid_e[0:8];
    wire [63:0] out_a_s[0:8], out_b_s[0:8]; wire [15:0] out_ctrl_s[0:8]; wire out_valid_s[0:8];
    wire [63:0] out_a_w[0:8], out_b_w[0:8]; wire [15:0] out_ctrl_w[0:8]; wire out_valid_w[0:8];
    wire [63:0] host_out_a[0:8]; wire host_out_valid[0:8];

    // --- State-holding registers for all tile inputs ---
    reg [63:0] in_a_n[0:8], in_b_n[0:8]; reg [15:0] in_ctrl_n[0:8]; reg in_valid_n[0:8];
    reg [63:0] in_a_e[0:8], in_b_e[0:8]; reg [15:0] in_ctrl_e[0:8]; reg in_valid_e[0:8];
    reg [63:0] in_a_s[0:8], in_b_s[0:8]; reg [15:0] in_ctrl_s[0:8]; reg in_valid_s[0:8];
    reg [63:0] in_a_w[0:8], in_b_w[0:8]; reg [15:0] in_ctrl_w[0:8]; reg in_valid_w[0:8];
    reg [63:0] host_in_a[0:8], host_in_b[0:8]; reg [15:0] host_in_ctrl[0:8]; reg host_in_valid[0:8];

    // --- Next-state logic variables ---
    reg [63:0] next_in_a_n[0:8], next_in_b_n[0:8]; reg [15:0] next_in_ctrl_n[0:8]; reg next_in_valid_n[0:8];
    reg [63:0] next_in_a_e[0:8], next_in_b_e[0:8]; reg [15:0] next_in_ctrl_e[0:8]; reg next_in_valid_e[0:8];
    reg [63:0] next_in_a_s[0:8], next_in_b_s[0:8]; reg [15:0] next_in_ctrl_s[0:8]; reg next_in_valid_s[0:8];
    reg [63:0] next_in_a_w[0:8], next_in_b_w[0:8]; reg [15:0] next_in_ctrl_w[0:8]; reg next_in_valid_w[0:8];
    reg [63:0] next_host_in_a[0:8], next_host_in_b[0:8]; reg [15:0] next_host_in_ctrl[0:8]; reg next_host_in_valid[0:8];

    // --- State for one-shot injection logic ---
    reg is_busy;
    reg next_is_busy;

    function integer idx(input integer x, input integer y); begin idx = y*3+x; end endfunction

    // --- Next-State Logic (Combinational) ---
    always @(*) begin
        // By default, the next state of the links is determined by the tile outputs

        // (x=0, y=0) -> idx=0
        next_in_a_n[0]     = 64'd0;
        next_in_b_n[0]     = 64'd0;
        next_in_ctrl_n[0]  = 16'd0;
        next_in_valid_n[0] = 1'b0;

        next_in_a_w[0]     = 64'd0;
        next_in_b_w[0]     = 64'd0;
        next_in_ctrl_w[0]  = 16'd0;
        next_in_valid_w[0] = 1'b0;

        next_in_a_s[0]     = out_a_n[3];
        next_in_b_s[0]     = out_b_n[3];
        next_in_ctrl_s[0]  = out_ctrl_n[3];
        next_in_valid_s[0] = out_valid_n[3];

        next_in_a_e[0]     = out_a_w[1];
        next_in_b_e[0]     = out_b_w[1];
        next_in_ctrl_e[0]  = out_ctrl_w[1];
        next_in_valid_e[0] = out_valid_w[1];

        // (x=1, y=0) -> idx=1
        next_in_a_n[1]     = 64'd0;
        next_in_b_n[1]     = 64'd0;
        next_in_ctrl_n[1]  = 16'd0;
        next_in_valid_n[1] = 1'b0;

        next_in_a_w[1]     = out_a_e[0];
        next_in_b_w[1]     = out_b_e[0];
        next_in_ctrl_w[1]  = out_ctrl_e[0];
        next_in_valid_w[1] = out_valid_e[0];

        next_in_a_s[1]     = out_a_n[4];
        next_in_b_s[1]     = out_b_n[4];
        next_in_ctrl_s[1]  = out_ctrl_n[4];
        next_in_valid_s[1] = out_valid_n[4];

        next_in_a_e[1]     = out_a_w[2];
        next_in_b_e[1]     = out_b_w[2];
        next_in_ctrl_e[1]  = out_ctrl_w[2];
        next_in_valid_e[1] = out_valid_w[2];

        // (x=2, y=0) -> idx=2
        next_in_a_n[2]     = 64'd0;
        next_in_b_n[2]     = 64'd0;
        next_in_ctrl_n[2]  = 16'd0;
        next_in_valid_n[2] = 1'b0;

        next_in_a_w[2]     = out_a_e[1];
        next_in_b_w[2]     = out_b_e[1];
        next_in_ctrl_w[2]  = out_ctrl_e[1];
        next_in_valid_w[2] = out_valid_e[1];

        next_in_a_s[2]     = out_a_n[5];
        next_in_b_s[2]     = out_b_n[5];
        next_in_ctrl_s[2]  = out_ctrl_n[5];
        next_in_valid_s[2] = out_valid_n[5];

        next_in_a_e[2]     = 64'd0;
        next_in_b_e[2]     = 64'd0;
        next_in_ctrl_e[2]  = 16'd0;
        next_in_valid_e[2] = 1'b0;

        // (x=0, y=1) -> idx=3
        next_in_a_n[3]     = out_a_s[0];
        next_in_b_n[3]     = out_b_s[0];
        next_in_ctrl_n[3]  = out_ctrl_s[0];
        next_in_valid_n[3] = out_valid_s[0];

        next_in_a_w[3]     = 64'd0;
        next_in_b_w[3]     = 64'd0;
        next_in_ctrl_w[3]  = 16'd0;
        next_in_valid_w[3] = 1'b0;

        next_in_a_s[3]     = out_a_n[6];
        next_in_b_s[3]     = out_b_n[6];
        next_in_ctrl_s[3]  = out_ctrl_n[6];
        next_in_valid_s[3] = out_valid_n[6];

        next_in_a_e[3]     = out_a_w[4];
        next_in_b_e[3]     = out_b_w[4];
        next_in_ctrl_e[3]  = out_ctrl_w[4];
        next_in_valid_e[3] = out_valid_w[4];

        // (x=1, y=1) -> idx=4
        next_in_a_n[4]     = out_a_s[1];
        next_in_b_n[4]     = out_b_s[1];
        next_in_ctrl_n[4]  = out_ctrl_s[1];
        next_in_valid_n[4] = out_valid_s[1];

        next_in_a_w[4]     = out_a_e[3];
        next_in_b_w[4]     = out_b_e[3];
        next_in_ctrl_w[4]  = out_ctrl_e[3];
        next_in_valid_w[4] = out_valid_e[3];

        next_in_a_s[4]     = out_a_n[7];
        next_in_b_s[4]     = out_b_n[7];
        next_in_ctrl_s[4]  = out_ctrl_n[7];
        next_in_valid_s[4] = out_valid_n[7];

        next_in_a_e[4]     = out_a_w[5];
        next_in_b_e[4]     = out_b_w[5];
        next_in_ctrl_e[4]  = out_ctrl_w[5];
        next_in_valid_e[4] = out_valid_w[5];

        // (x=2, y=1) -> idx=5
        next_in_a_n[5]     = out_a_s[2];
        next_in_b_n[5]     = out_b_s[2];
        next_in_ctrl_n[5]  = out_ctrl_s[2];
        next_in_valid_n[5] = out_valid_s[2];

        next_in_a_w[5]     = out_a_e[4];
        next_in_b_w[5]     = out_b_e[4];
        next_in_ctrl_w[5]  = out_ctrl_e[4];
        next_in_valid_w[5] = out_valid_e[4];

        next_in_a_s[5]     = out_a_n[8];
        next_in_b_s[5]     = out_b_n[8];
        next_in_ctrl_s[5]  = out_ctrl_n[8];
        next_in_valid_s[5] = out_valid_n[8];

        next_in_a_e[5]     = 64'd0;
        next_in_b_e[5]     = 64'd0;
        next_in_ctrl_e[5]  = 16'd0;
        next_in_valid_e[5] = 1'b0;

        // (x=0, y=2) -> idx=6
        next_in_a_n[6]     = out_a_s[3];
        next_in_b_n[6]     = out_b_s[3];
        next_in_ctrl_n[6]  = out_ctrl_s[3];
        next_in_valid_n[6] = out_valid_s[3];

        next_in_a_w[6]     = 64'd0;
        next_in_b_w[6]     = 64'd0;
        next_in_ctrl_w[6]  = 16'd0;
        next_in_valid_w[6] = 1'b0;

        next_in_a_s[6]     = 64'd0;
        next_in_b_s[6]     = 64'd0;
        next_in_ctrl_s[6]  = 16'd0;
        next_in_valid_s[6] = 1'b0;

        next_in_a_e[6]     = out_a_w[7];
        next_in_b_e[6]     = out_b_w[7];
        next_in_ctrl_e[6]  = out_ctrl_w[7];
        next_in_valid_e[6] = out_valid_w[7];

        // (x=1, y=2) -> idx=7
        next_in_a_n[7]     = out_a_s[4];
        next_in_b_n[7]     = out_b_s[4];
        next_in_ctrl_n[7]  = out_ctrl_s[4];
        next_in_valid_n[7] = out_valid_s[4];

        next_in_a_w[7]     = out_a_e[6];
        next_in_b_w[7]     = out_b_e[6];
        next_in_ctrl_w[7]  = out_ctrl_e[6];
        next_in_valid_w[7] = out_valid_e[6];

        next_in_a_s[7]     = 64'd0;
        next_in_b_s[7]     = 64'd0;
        next_in_ctrl_s[7]  = 16'd0;
        next_in_valid_s[7] = 1'b0;

        next_in_a_e[7]     = out_a_w[8];
        next_in_b_e[7]     = out_b_w[8];
        next_in_ctrl_e[7]  = out_ctrl_w[8];
        next_in_valid_e[7] = out_valid_w[8];

        // (x=2, y=2) -> idx=8
        next_in_a_n[8]     = out_a_s[5];
        next_in_b_n[8]     = out_b_s[5];
        next_in_ctrl_n[8]  = out_ctrl_s[5];
        next_in_valid_n[8] = out_valid_s[5];

        next_in_a_w[8]     = out_a_e[7];
        next_in_b_w[8]     = out_b_e[7];
        next_in_ctrl_w[8]  = out_ctrl_e[7];
        next_in_valid_w[8] = out_valid_e[7];

        next_in_a_s[8]     = 64'd0;
        next_in_b_s[8]     = 64'd0;
        next_in_ctrl_s[8]  = 16'd0;
        next_in_valid_s[8] = 1'b0;

        next_in_a_e[8]     = 64'd0;
        next_in_b_e[8]     = 64'd0;
        next_in_ctrl_e[8]  = 16'd0;
        next_in_valid_e[8] = 1'b0;


        // Default host inputs to zero
        next_host_in_a[0] = 64'd0; next_host_in_b[0] = 64'd0; next_host_in_ctrl[0] = 16'd0; next_host_in_valid[0] = 1'b0;
        next_host_in_a[1] = 64'd0; next_host_in_b[1] = 64'd0; next_host_in_ctrl[1] = 16'd0; next_host_in_valid[1] = 1'b0;
        next_host_in_a[2] = 64'd0; next_host_in_b[2] = 64'd0; next_host_in_ctrl[2] = 16'd0; next_host_in_valid[2] = 1'b0;
        next_host_in_a[3] = 64'd0; next_host_in_b[3] = 64'd0; next_host_in_ctrl[3] = 16'd0; next_host_in_valid[3] = 1'b0;
        next_host_in_a[4] = 64'd0; next_host_in_b[4] = 64'd0; next_host_in_ctrl[4] = 16'd0; next_host_in_valid[4] = 1'b0;
        next_host_in_a[5] = 64'd0; next_host_in_b[5] = 64'd0; next_host_in_ctrl[5] = 16'd0; next_host_in_valid[5] = 1'b0;
        next_host_in_a[6] = 64'd0; next_host_in_b[6] = 64'd0; next_host_in_ctrl[6] = 16'd0; next_host_in_valid[6] = 1'b0;
        next_host_in_a[7] = 64'd0; next_host_in_b[7] = 64'd0; next_host_in_ctrl[7] = 16'd0; next_host_in_valid[7] = 1'b0;
        next_host_in_a[8] = 64'd0; next_host_in_b[8] = 64'd0; next_host_in_ctrl[8] = 16'd0; next_host_in_valid[8] = 1'b0;
        
        // State machine for injection
        next_is_busy = is_busy;
        if (!is_busy) begin
            // STATE: IDLE. Check for new inputs to inject.
            if (a != 0 || b != 0 || mode != 0) begin
                next_host_in_a[0]     = a;
                next_host_in_b[0]     = b;
                next_host_in_ctrl[0]  = make_ctrl(1'b0, (mode % 3), (mode / 3), mode);
                next_host_in_valid[0] = 1'b1;
                next_is_busy          = 1'b1; // Transition to BUSY
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

        in_a_n[0] <= next_in_a_n[0]; in_b_n[0] <= next_in_b_n[0]; in_ctrl_n[0] <= next_in_ctrl_n[0]; in_valid_n[0] <= next_in_valid_n[0];
        in_a_e[0] <= next_in_a_e[0]; in_b_e[0] <= next_in_b_e[0]; in_ctrl_e[0] <= next_in_ctrl_e[0]; in_valid_e[0] <= next_in_valid_e[0];
        in_a_s[0] <= next_in_a_s[0]; in_b_s[0] <= next_in_b_s[0]; in_ctrl_s[0] <= next_in_ctrl_s[0]; in_valid_s[0] <= next_in_valid_s[0];
        in_a_w[0] <= next_in_a_w[0]; in_b_w[0] <= next_in_b_w[0]; in_ctrl_w[0] <= next_in_ctrl_w[0]; in_valid_w[0] <= next_in_valid_w[0];
        host_in_a[0] <= next_host_in_a[0]; host_in_b[0] <= next_host_in_b[0]; host_in_ctrl[0] <= next_host_in_ctrl[0]; host_in_valid[0] <= next_host_in_valid[0];
        
        in_a_n[1] <= next_in_a_n[1]; in_b_n[1] <= next_in_b_n[1]; in_ctrl_n[1] <= next_in_ctrl_n[1]; in_valid_n[1] <= next_in_valid_n[1];
        in_a_e[1] <= next_in_a_e[1]; in_b_e[1] <= next_in_b_e[1]; in_ctrl_e[1] <= next_in_ctrl_e[1]; in_valid_e[1] <= next_in_valid_e[1];
        in_a_s[1] <= next_in_a_s[1]; in_b_s[1] <= next_in_b_s[1]; in_ctrl_s[1] <= next_in_ctrl_s[1]; in_valid_s[1] <= next_in_valid_s[1];
        in_a_w[1] <= next_in_a_w[1]; in_b_w[1] <= next_in_b_w[1]; in_ctrl_w[1] <= next_in_ctrl_w[1]; in_valid_w[1] <= next_in_valid_w[1];
        host_in_a[1] <= next_host_in_a[1]; host_in_b[1] <= next_host_in_b[1]; host_in_ctrl[1] <= next_host_in_ctrl[1]; host_in_valid[1] <= next_host_in_valid[1];
        
        in_a_n[2] <= next_in_a_n[2]; in_b_n[2] <= next_in_b_n[2]; in_ctrl_n[2] <= next_in_ctrl_n[2]; in_valid_n[2] <= next_in_valid_n[2];
        in_a_e[2] <= next_in_a_e[2]; in_b_e[2] <= next_in_b_e[2]; in_ctrl_e[2] <= next_in_ctrl_e[2]; in_valid_e[2] <= next_in_valid_e[2];
        in_a_s[2] <= next_in_a_s[2]; in_b_s[2] <= next_in_b_s[2]; in_ctrl_s[2] <= next_in_ctrl_s[2]; in_valid_s[2] <= next_in_valid_s[2];
        in_a_w[2] <= next_in_a_w[2]; in_b_w[2] <= next_in_b_w[2]; in_ctrl_w[2] <= next_in_ctrl_w[2]; in_valid_w[2] <= next_in_valid_w[2];
        host_in_a[2] <= next_host_in_a[2]; host_in_b[2] <= next_host_in_b[2]; host_in_ctrl[2] <= next_host_in_ctrl[2]; host_in_valid[2] <= next_host_in_valid[2];
        
        in_a_n[3] <= next_in_a_n[3]; in_b_n[3] <= next_in_b_n[3]; in_ctrl_n[3] <= next_in_ctrl_n[3]; in_valid_n[3] <= next_in_valid_n[3];
        in_a_e[3] <= next_in_a_e[3]; in_b_e[3] <= next_in_b_e[3]; in_ctrl_e[3] <= next_in_ctrl_e[3]; in_valid_e[3] <= next_in_valid_e[3];
        in_a_s[3] <= next_in_a_s[3]; in_b_s[3] <= next_in_b_s[3]; in_ctrl_s[3] <= next_in_ctrl_s[3]; in_valid_s[3] <= next_in_valid_s[3];
        in_a_w[3] <= next_in_a_w[3]; in_b_w[3] <= next_in_b_w[3]; in_ctrl_w[3] <= next_in_ctrl_w[3]; in_valid_w[3] <= next_in_valid_w[3];
        host_in_a[3] <= next_host_in_a[3]; host_in_b[3] <= next_host_in_b[3]; host_in_ctrl[3] <= next_host_in_ctrl[3]; host_in_valid[3] <= next_host_in_valid[3];
        
        in_a_n[4] <= next_in_a_n[4]; in_b_n[4] <= next_in_b_n[4]; in_ctrl_n[4] <= next_in_ctrl_n[4]; in_valid_n[4] <= next_in_valid_n[4];
        in_a_e[4] <= next_in_a_e[4]; in_b_e[4] <= next_in_b_e[4]; in_ctrl_e[4] <= next_in_ctrl_e[4]; in_valid_e[4] <= next_in_valid_e[4];
        in_a_s[4] <= next_in_a_s[4]; in_b_s[4] <= next_in_b_s[4]; in_ctrl_s[4] <= next_in_ctrl_s[4]; in_valid_s[4] <= next_in_valid_s[4];
        in_a_w[4] <= next_in_a_w[4]; in_b_w[4] <= next_in_b_w[4]; in_ctrl_w[4] <= next_in_ctrl_w[4]; in_valid_w[4] <= next_in_valid_w[4];
        host_in_a[4] <= next_host_in_a[4]; host_in_b[4] <= next_host_in_b[4]; host_in_ctrl[4] <= next_host_in_ctrl[4]; host_in_valid[4] <= next_host_in_valid[4];
        
        in_a_n[5] <= next_in_a_n[5]; in_b_n[5] <= next_in_b_n[5]; in_ctrl_n[5] <= next_in_ctrl_n[5]; in_valid_n[5] <= next_in_valid_n[5];
        in_a_e[5] <= next_in_a_e[5]; in_b_e[5] <= next_in_b_e[5]; in_ctrl_e[5] <= next_in_ctrl_e[5]; in_valid_e[5] <= next_in_valid_e[5];
        in_a_s[5] <= next_in_a_s[5]; in_b_s[5] <= next_in_b_s[5]; in_ctrl_s[5] <= next_in_ctrl_s[5]; in_valid_s[5] <= next_in_valid_s[5];
        in_a_w[5] <= next_in_a_w[5]; in_b_w[5] <= next_in_b_w[5]; in_ctrl_w[5] <= next_in_ctrl_w[5]; in_valid_w[5] <= next_in_valid_w[5];
        host_in_a[5] <= next_host_in_a[5]; host_in_b[5] <= next_host_in_b[5]; host_in_ctrl[5] <= next_host_in_ctrl[5]; host_in_valid[5] <= next_host_in_valid[5];
        
        in_a_n[6] <= next_in_a_n[6]; in_b_n[6] <= next_in_b_n[6]; in_ctrl_n[6] <= next_in_ctrl_n[6]; in_valid_n[6] <= next_in_valid_n[6];
        in_a_e[6] <= next_in_a_e[6]; in_b_e[6] <= next_in_b_e[6]; in_ctrl_e[6] <= next_in_ctrl_e[6]; in_valid_e[6] <= next_in_valid_e[6];
        in_a_s[6] <= next_in_a_s[6]; in_b_s[6] <= next_in_b_s[6]; in_ctrl_s[6] <= next_in_ctrl_s[6]; in_valid_s[6] <= next_in_valid_s[6];
        in_a_w[6] <= next_in_a_w[6]; in_b_w[6] <= next_in_b_w[6]; in_ctrl_w[6] <= next_in_ctrl_w[6]; in_valid_w[6] <= next_in_valid_w[6];
        host_in_a[6] <= next_host_in_a[6]; host_in_b[6] <= next_host_in_b[6]; host_in_ctrl[6] <= next_host_in_ctrl[6]; host_in_valid[6] <= next_host_in_valid[6];
        
        in_a_n[7] <= next_in_a_n[7]; in_b_n[7] <= next_in_b_n[7]; in_ctrl_n[7] <= next_in_ctrl_n[7]; in_valid_n[7] <= next_in_valid_n[7];
        in_a_e[7] <= next_in_a_e[7]; in_b_e[7] <= next_in_b_e[7]; in_ctrl_e[7] <= next_in_ctrl_e[7]; in_valid_e[7] <= next_in_valid_e[7];
        in_a_s[7] <= next_in_a_s[7]; in_b_s[7] <= next_in_b_s[7]; in_ctrl_s[7] <= next_in_ctrl_s[7]; in_valid_s[7] <= next_in_valid_s[7];
        in_a_w[7] <= next_in_a_w[7]; in_b_w[7] <= next_in_b_w[7]; in_ctrl_w[7] <= next_in_ctrl_w[7]; in_valid_w[7] <= next_in_valid_w[7];
        host_in_a[7] <= next_host_in_a[7]; host_in_b[7] <= next_host_in_b[7]; host_in_ctrl[7] <= next_host_in_ctrl[7]; host_in_valid[7] <= next_host_in_valid[7];
        
        in_a_n[8] <= next_in_a_n[8]; in_b_n[8] <= next_in_b_n[8]; in_ctrl_n[8] <= next_in_ctrl_n[8]; in_valid_n[8] <= next_in_valid_n[8];
        in_a_e[8] <= next_in_a_e[8]; in_b_e[8] <= next_in_b_e[8]; in_ctrl_e[8] <= next_in_ctrl_e[8]; in_valid_e[8] <= next_in_valid_e[8];
        in_a_s[8] <= next_in_a_s[8]; in_b_s[8] <= next_in_b_s[8]; in_ctrl_s[8] <= next_in_ctrl_s[8]; in_valid_s[8] <= next_in_valid_s[8];
        in_a_w[8] <= next_in_a_w[8]; in_b_w[8] <= next_in_b_w[8]; in_ctrl_w[8] <= next_in_ctrl_w[8]; in_valid_w[8] <= next_in_valid_w[8];
        host_in_a[8] <= next_host_in_a[8]; host_in_b[8] <= next_host_in_b[8]; host_in_ctrl[8] <= next_host_in_ctrl[8]; host_in_valid[8] <= next_host_in_valid[8];

    end

    // Initial block to reset all state registers
    initial begin
        is_busy = 1'b0;
        
        in_a_n[0] = 0; in_b_n[0] = 0; in_ctrl_n[0] = 0; in_valid_n[0] = 0;
        in_a_e[0] = 0; in_b_e[0] = 0; in_ctrl_e[0] = 0; in_valid_e[0] = 0;
        in_a_s[0] = 0; in_b_s[0] = 0; in_ctrl_s[0] = 0; in_valid_s[0] = 0;
        in_a_w[0] = 0; in_b_w[0] = 0; in_ctrl_w[0] = 0; in_valid_w[0] = 0;
        host_in_a[0] = 0; host_in_b[0] = 0; host_in_ctrl[0] = 0; host_in_valid[0] = 0;

        in_a_n[1] = 0; in_b_n[1] = 0; in_ctrl_n[1] = 0; in_valid_n[1] = 0;
        in_a_e[1] = 0; in_b_e[1] = 0; in_ctrl_e[1] = 0; in_valid_e[1] = 0;
        in_a_s[1] = 0; in_b_s[1] = 0; in_ctrl_s[1] = 0; in_valid_s[1] = 0;
        in_a_w[1] = 0; in_b_w[1] = 0; in_ctrl_w[1] = 0; in_valid_w[1] = 0;
        host_in_a[1] = 0; host_in_b[1] = 0; host_in_ctrl[1] = 0; host_in_valid[1] = 0;
        
        in_a_n[2] = 0; in_b_n[2] = 0; in_ctrl_n[2] = 0; in_valid_n[2] = 0;
        in_a_e[2] = 0; in_b_e[2] = 0; in_ctrl_e[2] = 0; in_valid_e[2] = 0;
        in_a_s[2] = 0; in_b_s[2] = 0; in_ctrl_s[2] = 0; in_valid_s[2] = 0;
        in_a_w[2] = 0; in_b_w[2] = 0; in_ctrl_w[2] = 0; in_valid_w[2] = 0;
        host_in_a[2] = 0; host_in_b[2] = 0; host_in_ctrl[2] = 0; host_in_valid[2] = 0;
        
        in_a_n[3] = 0; in_b_n[3] = 0; in_ctrl_n[3] = 0; in_valid_n[3] = 0;
        in_a_e[3] = 0; in_b_e[3] = 0; in_ctrl_e[3] = 0; in_valid_e[3] = 0;
        in_a_s[3] = 0; in_b_s[3] = 0; in_ctrl_s[3] = 0; in_valid_s[3] = 0;
        in_a_w[3] = 0; in_b_w[3] = 0; in_ctrl_w[3] = 0; in_valid_w[3] = 0;
        host_in_a[3] = 0; host_in_b[3] = 0; host_in_ctrl[3] = 0; host_in_valid[3] = 0;
        
        in_a_n[4] = 0; in_b_n[4] = 0; in_ctrl_n[4] = 0; in_valid_n[4] = 0;
        in_a_e[4] = 0; in_b_e[4] = 0; in_ctrl_e[4] = 0; in_valid_e[4] = 0;
        in_a_s[4] = 0; in_b_s[4] = 0; in_ctrl_s[4] = 0; in_valid_s[4] = 0;
        in_a_w[4] = 0; in_b_w[4] = 0; in_ctrl_w[4] = 0; in_valid_w[4] = 0;
        host_in_a[4] = 0; host_in_b[4] = 0; host_in_ctrl[4] = 0; host_in_valid[4] = 0;
        
        in_a_n[5] = 0; in_b_n[5] = 0; in_ctrl_n[5] = 0; in_valid_n[5] = 0;
        in_a_e[5] = 0; in_b_e[5] = 0; in_ctrl_e[5] = 0; in_valid_e[5] = 0;
        in_a_s[5] = 0; in_b_s[5] = 0; in_ctrl_s[5] = 0; in_valid_s[5] = 0;
        in_a_w[5] = 0; in_b_w[5] = 0; in_ctrl_w[5] = 0; in_valid_w[5] = 0;
        host_in_a[5] = 0; host_in_b[5] = 0; host_in_ctrl[5] = 0; host_in_valid[5] = 0;
        
        in_a_n[6] = 0; in_b_n[6] = 0; in_ctrl_n[6] = 0; in_valid_n[6] = 0;
        in_a_e[6] = 0; in_b_e[6] = 0; in_ctrl_e[6] = 0; in_valid_e[6] = 0;
        in_a_s[6] = 0; in_b_s[6] = 0; in_ctrl_s[6] = 0; in_valid_s[6] = 0;
        in_a_w[6] = 0; in_b_w[6] = 0; in_ctrl_w[6] = 0; in_valid_w[6] = 0;
        host_in_a[6] = 0; host_in_b[6] = 0; host_in_ctrl[6] = 0; host_in_valid[6] = 0;
        
        in_a_n[7] = 0; in_b_n[7] = 0; in_ctrl_n[7] = 0; in_valid_n[7] = 0;
        in_a_e[7] = 0; in_b_e[7] = 0; in_ctrl_e[7] = 0; in_valid_e[7] = 0;
        in_a_s[7] = 0; in_b_s[7] = 0; in_ctrl_s[7] = 0; in_valid_s[7] = 0;
        in_a_w[7] = 0; in_b_w[7] = 0; in_ctrl_w[7] = 0; in_valid_w[7] = 0;
        host_in_a[7] = 0; host_in_b[7] = 0; host_in_ctrl[7] = 0; host_in_valid[7] = 0;
        
        in_a_n[8] = 0; in_b_n[8] = 0; in_ctrl_n[8] = 0; in_valid_n[8] = 0;
        in_a_e[8] = 0; in_b_e[8] = 0; in_ctrl_e[8] = 0; in_valid_e[8] = 0;
        in_a_s[8] = 0; in_b_s[8] = 0; in_ctrl_s[8] = 0; in_valid_s[8] = 0;
        in_a_w[8] = 0; in_b_w[8] = 0; in_ctrl_w[8] = 0; in_valid_w[8] = 0;
        host_in_a[8] = 0; host_in_b[8] = 0; host_in_ctrl[8] = 0; host_in_valid[8] = 0;
        

    end

    assign result = host_out_a[0];
    assign valid  = host_out_valid[0];

    // --- Manual Instantiation of 3x3 Tile Mesh ---
    // (Instance connections are identical to the previous version)
    alu_tile_noc t0_0 (.TILE_X(0), .TILE_Y(0),
        .in_a_n(in_a_n[0]), .in_b_n(in_b_n[0]), .in_ctrl_n(in_ctrl_n[0]), .in_valid_n(in_valid_n[0]),
        .in_a_e(in_a_e[0]), .in_b_e(in_b_e[0]), .in_ctrl_e(in_ctrl_e[0]), .in_valid_e(in_valid_e[0]),
        .in_a_s(in_a_s[0]), .in_b_s(in_b_s[0]), .in_ctrl_s(in_ctrl_s[0]), .in_valid_s(in_valid_s[0]),
        .in_a_w(in_a_w[0]), .in_b_w(in_b_w[0]), .in_ctrl_w(in_ctrl_w[0]), .in_valid_w(in_valid_w[0]),
        .host_in_a(host_in_a[0]), .host_in_b(host_in_b[0]), .host_in_ctrl(host_in_ctrl[0]), .host_in_valid(host_in_valid[0]),
        .out_a_n(out_a_n[0]), .out_b_n(out_b_n[0]), .out_ctrl_n(out_ctrl_n[0]), .out_valid_n(out_valid_n[0]),
        .out_a_e(out_a_e[0]), .out_b_e(out_b_e[0]), .out_ctrl_e(out_ctrl_e[0]), .out_valid_e(out_valid_e[0]),
        .out_a_s(out_a_s[0]), .out_b_s(out_b_s[0]), .out_ctrl_s(out_ctrl_s[0]), .out_valid_s(out_valid_s[0]),
        .out_a_w(out_a_w[0]), .out_b_w(out_b_w[0]), .out_ctrl_w(out_ctrl_w[0]), .out_valid_w(out_valid_w[0]),
        .host_out_a(host_out_a[0]), .host_out_valid(host_out_valid[0])
    );
    alu_tile_noc t0_1 (.TILE_X(1), .TILE_Y(0),
        .in_a_n(in_a_n[1]), .in_b_n(in_b_n[1]), .in_ctrl_n(in_ctrl_n[1]), .in_valid_n(in_valid_n[1]),
        .in_a_e(in_a_e[1]), .in_b_e(in_b_e[1]), .in_ctrl_e(in_ctrl_e[1]), .in_valid_e(in_valid_e[1]),
        .in_a_s(in_a_s[1]), .in_b_s(in_b_s[1]), .in_ctrl_s(in_ctrl_s[1]), .in_valid_s(in_valid_s[1]),
        .in_a_w(in_a_w[1]), .in_b_w(in_b_w[1]), .in_ctrl_w(in_ctrl_w[1]), .in_valid_w(in_valid_w[1]),
        .host_in_a(host_in_a[1]), .host_in_b(host_in_b[1]), .host_in_ctrl(host_in_ctrl[1]), .host_in_valid(host_in_valid[1]),
        .out_a_n(out_a_n[1]), .out_b_n(out_b_n[1]), .out_ctrl_n(out_ctrl_n[1]), .out_valid_n(out_valid_n[1]),
        .out_a_e(out_a_e[1]), .out_b_e(out_b_e[1]), .out_ctrl_e(out_ctrl_e[1]), .out_valid_e(out_valid_e[1]),
        .out_a_s(out_a_s[1]), .out_b_s(out_b_s[1]), .out_ctrl_s(out_ctrl_s[1]), .out_valid_s(out_valid_s[1]),
        .out_a_w(out_a_w[1]), .out_b_w(out_b_w[1]), .out_ctrl_w(out_ctrl_w[1]), .out_valid_w(out_valid_w[1]),
        .host_out_a(host_out_a[1]), .host_out_valid(host_out_valid[1])
    );
    alu_tile_noc t0_2 (.TILE_X(2), .TILE_Y(0),
        .in_a_n(in_a_n[2]), .in_b_n(in_b_n[2]), .in_ctrl_n(in_ctrl_n[2]), .in_valid_n(in_valid_n[2]),
        .in_a_e(in_a_e[2]), .in_b_e(in_b_e[2]), .in_ctrl_e(in_ctrl_e[2]), .in_valid_e(in_valid_e[2]),
        .in_a_s(in_a_s[2]), .in_b_s(in_b_s[2]), .in_ctrl_s(in_ctrl_s[2]), .in_valid_s(in_valid_s[2]),
        .in_a_w(in_a_w[2]), .in_b_w(in_b_w[2]), .in_ctrl_w(in_ctrl_w[2]), .in_valid_w(in_valid_w[2]),
        .host_in_a(host_in_a[2]), .host_in_b(host_in_b[2]), .host_in_ctrl(host_in_ctrl[2]), .host_in_valid(host_in_valid[2]),
        .out_a_n(out_a_n[2]), .out_b_n(out_b_n[2]), .out_ctrl_n(out_ctrl_n[2]), .out_valid_n(out_valid_n[2]),
        .out_a_e(out_a_e[2]), .out_b_e(out_b_e[2]), .out_ctrl_e(out_ctrl_e[2]), .out_valid_e(out_valid_e[2]),
        .out_a_s(out_a_s[2]), .out_b_s(out_b_s[2]), .out_ctrl_s(out_ctrl_s[2]), .out_valid_s(out_valid_s[2]),
        .out_a_w(out_a_w[2]), .out_b_w(out_b_w[2]), .out_ctrl_w(out_ctrl_w[2]), .out_valid_w(out_valid_w[2]),
        .host_out_a(host_out_a[2]), .host_out_valid(host_out_valid[2])
    );
    alu_tile_noc t1_0 (.TILE_X(0), .TILE_Y(1),
        .in_a_n(in_a_n[3]), .in_b_n(in_b_n[3]), .in_ctrl_n(in_ctrl_n[3]), .in_valid_n(in_valid_n[3]),
        .in_a_e(in_a_e[3]), .in_b_e(in_b_e[3]), .in_ctrl_e(in_ctrl_e[3]), .in_valid_e(in_valid_e[3]),
        .in_a_s(in_a_s[3]), .in_b_s(in_b_s[3]), .in_ctrl_s(in_ctrl_s[3]), .in_valid_s(in_valid_s[3]),
        .in_a_w(in_a_w[3]), .in_b_w(in_b_w[3]), .in_ctrl_w(in_ctrl_w[3]), .in_valid_w(in_valid_w[3]),
        .host_in_a(host_in_a[3]), .host_in_b(host_in_b[3]), .host_in_ctrl(host_in_ctrl[3]), .host_in_valid(host_in_valid[3]),
        .out_a_n(out_a_n[3]), .out_b_n(out_b_n[3]), .out_ctrl_n(out_ctrl_n[3]), .out_valid_n(out_valid_n[3]),
        .out_a_e(out_a_e[3]), .out_b_e(out_b_e[3]), .out_ctrl_e(out_ctrl_e[3]), .out_valid_e(out_valid_e[3]),
        .out_a_s(out_a_s[3]), .out_b_s(out_b_s[3]), .out_ctrl_s(out_ctrl_s[3]), .out_valid_s(out_valid_s[3]),
        .out_a_w(out_a_w[3]), .out_b_w(out_b_w[3]), .out_ctrl_w(out_ctrl_w[3]), .out_valid_w(out_valid_w[3]),
        .host_out_a(host_out_a[3]), .host_out_valid(host_out_valid[3])
    );
    alu_tile_noc t1_1 (.TILE_X(1), .TILE_Y(1),
        .in_a_n(in_a_n[4]), .in_b_n(in_b_n[4]), .in_ctrl_n(in_ctrl_n[4]), .in_valid_n(in_valid_n[4]),
        .in_a_e(in_a_e[4]), .in_b_e(in_b_e[4]), .in_ctrl_e(in_ctrl_e[4]), .in_valid_e(in_valid_e[4]),
        .in_a_s(in_a_s[4]), .in_b_s(in_b_s[4]), .in_ctrl_s(in_ctrl_s[4]), .in_valid_s(in_valid_s[4]),
        .in_a_w(in_a_w[4]), .in_b_w(in_b_w[4]), .in_ctrl_w(in_ctrl_w[4]), .in_valid_w(in_valid_w[4]),
        .host_in_a(host_in_a[4]), .host_in_b(host_in_b[4]), .host_in_ctrl(host_in_ctrl[4]), .host_in_valid(host_in_valid[4]),
        .out_a_n(out_a_n[4]), .out_b_n(out_b_n[4]), .out_ctrl_n(out_ctrl_n[4]), .out_valid_n(out_valid_n[4]),
        .out_a_e(out_a_e[4]), .out_b_e(out_b_e[4]), .out_ctrl_e(out_ctrl_e[4]), .out_valid_e(out_valid_e[4]),
        .out_a_s(out_a_s[4]), .out_b_s(out_b_s[4]), .out_ctrl_s(out_ctrl_s[4]), .out_valid_s(out_valid_s[4]),
        .out_a_w(out_a_w[4]), .out_b_w(out_b_w[4]), .out_ctrl_w(out_ctrl_w[4]), .out_valid_w(out_valid_w[4]),
        .host_out_a(host_out_a[4]), .host_out_valid(host_out_valid[4])
    );
    alu_tile_noc t1_2 (.TILE_X(2), .TILE_Y(1),
        .in_a_n(in_a_n[5]), .in_b_n(in_b_n[5]), .in_ctrl_n(in_ctrl_n[5]), .in_valid_n(in_valid_n[5]),
        .in_a_e(in_a_e[5]), .in_b_e(in_b_e[5]), .in_ctrl_e(in_ctrl_e[5]), .in_valid_e(in_valid_e[5]),
        .in_a_s(in_a_s[5]), .in_b_s(in_b_s[5]), .in_ctrl_s(in_ctrl_s[5]), .in_valid_s(in_valid_s[5]),
        .in_a_w(in_a_w[5]), .in_b_w(in_b_w[5]), .in_ctrl_w(in_ctrl_w[5]), .in_valid_w(in_valid_w[5]),
        .host_in_a(host_in_a[5]), .host_in_b(host_in_b[5]), .host_in_ctrl(host_in_ctrl[5]), .host_in_valid(host_in_valid[5]),
        .out_a_n(out_a_n[5]), .out_b_n(out_b_n[5]), .out_ctrl_n(out_ctrl_n[5]), .out_valid_n(out_valid_n[5]),
        .out_a_e(out_a_e[5]), .out_b_e(out_b_e[5]), .out_ctrl_e(out_ctrl_e[5]), .out_valid_e(out_valid_e[5]),
        .out_a_s(out_a_s[5]), .out_b_s(out_b_s[5]), .out_ctrl_s(out_ctrl_s[5]), .out_valid_s(out_valid_s[5]),
        .out_a_w(out_a_w[5]), .out_b_w(out_b_w[5]), .out_ctrl_w(out_ctrl_w[5]), .out_valid_w(out_valid_w[5]),
        .host_out_a(host_out_a[5]), .host_out_valid(host_out_valid[5])
    );
    alu_tile_noc t2_0 (.TILE_X(0), .TILE_Y(2),
        .in_a_n(in_a_n[6]), .in_b_n(in_b_n[6]), .in_ctrl_n(in_ctrl_n[6]), .in_valid_n(in_valid_n[6]),
        .in_a_e(in_a_e[6]), .in_b_e(in_b_e[6]), .in_ctrl_e(in_ctrl_e[6]), .in_valid_e(in_valid_e[6]),
        .in_a_s(in_a_s[6]), .in_b_s(in_b_s[6]), .in_ctrl_s(in_ctrl_s[6]), .in_valid_s(in_valid_s[6]),
        .in_a_w(in_a_w[6]), .in_b_w(in_b_w[6]), .in_ctrl_w(in_ctrl_w[6]), .in_valid_w(in_valid_w[6]),
        .host_in_a(host_in_a[6]), .host_in_b(host_in_b[6]), .host_in_ctrl(host_in_ctrl[6]), .host_in_valid(host_in_valid[6]),
        .out_a_n(out_a_n[6]), .out_b_n(out_b_n[6]), .out_ctrl_n(out_ctrl_n[6]), .out_valid_n(out_valid_n[6]),
        .out_a_e(out_a_e[6]), .out_b_e(out_b_e[6]), .out_ctrl_e(out_ctrl_e[6]), .out_valid_e(out_valid_e[6]),
        .out_a_s(out_a_s[6]), .out_b_s(out_b_s[6]), .out_ctrl_s(out_ctrl_s[6]), .out_valid_s(out_valid_s[6]),
        .out_a_w(out_a_w[6]), .out_b_w(out_b_w[6]), .out_ctrl_w(out_ctrl_w[6]), .out_valid_w(out_valid_w[6]),
        .host_out_a(host_out_a[6]), .host_out_valid(host_out_valid[6])
    );
    alu_tile_noc t2_1 (.TILE_X(1), .TILE_Y(2),
        .in_a_n(in_a_n[7]), .in_b_n(in_b_n[7]), .in_ctrl_n(in_ctrl_n[7]), .in_valid_n(in_valid_n[7]),
        .in_a_e(in_a_e[7]), .in_b_e(in_b_e[7]), .in_ctrl_e(in_ctrl_e[7]), .in_valid_e(in_valid_e[7]),
        .in_a_s(in_a_s[7]), .in_b_s(in_b_s[7]), .in_ctrl_s(in_ctrl_s[7]), .in_valid_s(in_valid_s[7]),
        .in_a_w(in_a_w[7]), .in_b_w(in_b_w[7]), .in_ctrl_w(in_ctrl_w[7]), .in_valid_w(in_valid_w[7]),
        .host_in_a(host_in_a[7]), .host_in_b(host_in_b[7]), .host_in_ctrl(host_in_ctrl[7]), .host_in_valid(host_in_valid[7]),
        .out_a_n(out_a_n[7]), .out_b_n(out_b_n[7]), .out_ctrl_n(out_ctrl_n[7]), .out_valid_n(out_valid_n[7]),
        .out_a_e(out_a_e[7]), .out_b_e(out_b_e[7]), .out_ctrl_e(out_ctrl_e[7]), .out_valid_e(out_valid_e[7]),
        .out_a_s(out_a_s[7]), .out_b_s(out_b_s[7]), .out_ctrl_s(out_ctrl_s[7]), .out_valid_s(out_valid_s[7]),
        .out_a_w(out_a_w[7]), .out_b_w(out_b_w[7]), .out_ctrl_w(out_ctrl_w[7]), .out_valid_w(out_valid_w[7]),
        .host_out_a(host_out_a[7]), .host_out_valid(host_out_valid[7])
    );
    alu_tile_noc t2_2 (.TILE_X(2), .TILE_Y(2),
        .in_a_n(in_a_n[8]), .in_b_n(in_b_n[8]), .in_ctrl_n(in_ctrl_n[8]), .in_valid_n(in_valid_n[8]),
        .in_a_e(in_a_e[8]), .in_b_e(in_b_e[8]), .in_ctrl_e(in_ctrl_e[8]), .in_valid_e(in_valid_e[8]),
        .in_a_s(in_a_s[8]), .in_b_s(in_b_s[8]), .in_ctrl_s(in_ctrl_s[8]), .in_valid_s(in_valid_s[8]),
        .in_a_w(in_a_w[8]), .in_b_w(in_b_w[8]), .in_ctrl_w(in_ctrl_w[8]), .in_valid_w(in_valid_w[8]),
        .host_in_a(host_in_a[8]), .host_in_b(host_in_b[8]), .host_in_ctrl(host_in_ctrl[8]), .host_in_valid(host_in_valid[8]),
        .out_a_n(out_a_n[8]), .out_b_n(out_b_n[8]), .out_ctrl_n(out_ctrl_n[8]), .out_valid_n(out_valid_n[8]),
        .out_a_e(out_a_e[8]), .out_b_e(out_b_e[8]), .out_ctrl_e(out_ctrl_e[8]), .out_valid_e(out_valid_e[8]),
        .out_a_s(out_a_s[8]), .out_b_s(out_b_s[8]), .out_ctrl_s(out_ctrl_s[8]), .out_valid_s(out_valid_s[8]),
        .out_a_w(out_a_w[8]), .out_b_w(out_b_w[8]), .out_ctrl_w(out_ctrl_w[8]), .out_valid_w(out_valid_w[8]),
        .host_out_a(host_out_a[8]), .host_out_valid(host_out_valid[8])
    );

endmodule