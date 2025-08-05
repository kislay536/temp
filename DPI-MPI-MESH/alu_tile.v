// alu_tile.v
module alu_tile (
    input  [63:0] a,
    input  [63:0] b,
    input  [3:0]  mode,
    output reg [63:0] result
);

    always @(*) begin
        case (mode)
            4'd0: result = a + b;         // Addition
            4'd1: result = a - b;         // Subtraction
            4'd2: result = a * b;         // Multiplication
            4'd3: result = (b != 0) ? a / b : 64'd0; // Division
            4'd4: result = (b != 0) ? a % b : 64'd0; // Modulo
            4'd5: result = a & b;         // Bitwise AND
            4'd6: result = a | b;         // Bitwise OR
            4'd7: result = a ^ b;         // Bitwise XOR
            4'd8: result = (a > b) ? 64'd1 : 64'd0; // Comparison (a > b)
            default: result = 64'd0;
        endcase
    end

endmodule


// module alu_tile (
//     input [1:0] x_id,
//     input [1:0] y_id,
//     //North Ports
//     input  [3:0] ops_in_n,
//     input  [63:0] a_in_n,
//     input  [63:0] b_in_n,
//     output [63:0] result_out_n,

//     //East Ports
//     input  [3:0] ops_in_e,
//     input  [63:0] a_in_e,
//     input  [63:0] b_in_e,
//     output [63:0] result_out_e,

//     //South Ports
//     input  [3:0] ops_out_s,
//     input  [63:0] a_out_s,
//     input  [63:0] b_out_s,
//     output [63:0] result_in_s,

//     //West Ports
//     input  [3:0] ops_in_w,
//     input  [63:0] a_in_w,
//     input  [63:0] b_in_w,
//     output [63:0] result_out_w
//     //I can also input output port, idk what is it called, have to look into it
// );

// if (x_id == ) begin
    
// end
    
// endmodule