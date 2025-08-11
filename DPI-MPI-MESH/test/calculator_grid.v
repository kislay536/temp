`timescale 1ns/1ps

module calculator_grid(
    input  wire [63:0] a,
    input  wire [63:0] b,
    input  wire [3:0]  mode,
    output wire [63:0] out_result,
    output wire        out_valid
);

    // Instantiate 3x3 grid of alu_tiles
    wire [63:0] tile_res [0:8];
    wire        tile_match[0:8];

    genvar gx, gy;
    integer idx = 0;

    // manual unroll (easier to read) for 3x3
    alu_tile #(.TILE_X(0), .TILE_Y(0)) tile00(.a(a), .b(b), .mode(mode), .result_out(tile_res[0]), .match(tile_match[0]));
    alu_tile #(.TILE_X(1), .TILE_Y(0)) tile10(.a(a), .b(b), .mode(mode), .result_out(tile_res[1]), .match(tile_match[1]));
    alu_tile #(.TILE_X(2), .TILE_Y(0)) tile20(.a(a), .b(b), .mode(mode), .result_out(tile_res[2]), .match(tile_match[2]));

    alu_tile #(.TILE_X(0), .TILE_Y(1)) tile01(.a(a), .b(b), .mode(mode), .result_out(tile_res[3]), .match(tile_match[3]));
    alu_tile #(.TILE_X(1), .TILE_Y(1)) tile11(.a(a), .b(b), .mode(mode), .result_out(tile_res[4]), .match(tile_match[4]));
    alu_tile #(.TILE_X(2), .TILE_Y(1)) tile21(.a(a), .b(b), .mode(mode), .result_out(tile_res[5]), .match(tile_match[5]));

    alu_tile #(.TILE_X(0), .TILE_Y(2)) tile02(.a(a), .b(b), .mode(mode), .result_out(tile_res[6]), .match(tile_match[6]));
    alu_tile #(.TILE_X(1), .TILE_Y(2)) tile12(.a(a), .b(b), .mode(mode), .result_out(tile_res[7]), .match(tile_match[7]));
    alu_tile #(.TILE_X(2), .TILE_Y(2)) tile22(.a(a), .b(b), .mode(mode), .result_out(tile_res[8]), .match(tile_match[8]));

    // select the tile whose match is high
    reg [63:0] selected;
    reg sel_valid;
    integer i;

    always @(*) begin
        selected = 64'd0;
        sel_valid = 1'b0;
        for (i = 0; i < 9; i = i + 1) begin
            if (tile_match[i]) begin
                selected = tile_res[i];
                sel_valid = 1'b1;
            end
        end
    end

    assign out_result = selected;
    assign out_valid  = sel_valid;

endmodule
