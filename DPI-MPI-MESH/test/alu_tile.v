`timescale 1ns/1ps

module alu_tile #(
    parameter integer TILE_X = 0,
    parameter integer TILE_Y = 0
)(
    input  wire [63:0] a,
    input  wire [63:0] b,
    input  wire [3:0]  mode,    // global mode (0..8 used)
    output reg  [63:0] result_out,
    output reg         match    // high if tile's assigned code == mode
);

    // compute this tile's assigned mode code
    localparam integer ASSIGNED = (TILE_Y * 3) + TILE_X; // 0..8

    // internal op result (combinational)
    reg [63:0] op_result;

    always @(*) begin
        // default
        op_result = 64'd0;

        // compute op based on mode (tiles compute all ops when asked)
        case (mode)
            4'd0: op_result = a + b;                       // add
            4'd1: op_result = a - b;                       // sub
            4'd2: op_result = a * b;                       // mul (low 64)
            4'd3: op_result = (b == 0) ? 64'd0 : (a / b);  // div (unsigned, safe)
            4'd4: op_result = a & b;                       // and
            4'd5: op_result = a | b;                       // or
            4'd6: op_result = a ^ b;                       // xor
            4'd7: op_result = a << b[5:0];                 // shl (use low 6 bits)
            4'd8: op_result = a >> b[5:0];                 // shr (logical)
            default: op_result = 64'd0;
        endcase

        // only drive output when this tile's assigned mode equals global mode
        if (mode == ASSIGNED[3:0]) begin
            result_out = op_result;
            match = 1'b1;
        end else begin
            result_out = 64'd0;
            match = 1'b0;
        end
    end

endmodule
