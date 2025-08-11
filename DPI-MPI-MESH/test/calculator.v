// 3x3 ALU Grid + Calculator top
// Single-file Verilog design implementing:
//  - alu_tile: can compute 9 operations but only drives output when the global mode matches
//               its assigned (x,y) position.
//  - calculator_grid: instantiates a 3x3 grid of alu_tile modules (x=0..2, y=0..2).
//  - calculator (top): takes inputs a,b,mode and produces result and valid.
//
// Mode mapping (4-bit mode, values 0..8): row-major, (x=0..2, y=0..2)
//   mode = y*3 + x
//   0: (0,0)  1: (1,0)  2: (2,0)
//   3: (0,1)  4: (1,1)  5: (2,1)
//   6: (0,2)  7: (1,2)  8: (2,2)
//
// Supported operations (selected by the same mode value inside each tile):
//  0: add    -> a + b
//  1: sub    -> a - b
//  2: mul    -> a * b (lower 64 bits)
//  3: div    -> a / b (unsigned, 0 on div-by-zero)
//  4: and    -> a & b
//  5: or     -> a | b
//  6: xor    -> a ^ b
//  7: shl    -> a << (b[5:0]) (shift by low 6 bits)
//  8: shr    -> a >> (b[5:0]) (logical shift)
//
// Notes:
//  - Width: 64-bit datapath for a, b, result. Mode is 4 bits.
//  - Each alu_tile computes the operation selected by the incoming global mode,
//    but will only assert its 'match' output and drive result_out when the
//    global mode equals its tile_id (y*3 + x). This matches "only do the mode
//    which aligns with their x,y position" while still being able to compute all ops.
//  - calculator selects the matching tile's result and asserts valid.
//
// Testbench included at bottom (use `iverilog -DTESTBENCH 3x3_ALU_Calculator.v && vvp a.out`)

`timescale 1ns/1ps

// Top-level calculator module (exposed interface)
module calculator(
    input  wire [63:0] a,
    input  wire [63:0] b,
    input  wire [3:0]  mode,
    output wire [63:0] result,
    output wire        valid
);

    calculator_grid grid(.a(a), .b(b), .mode(mode), .out_result(result), .out_valid(valid));

endmodule
