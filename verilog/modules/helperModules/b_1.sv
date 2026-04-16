// from page 298 of https://aomediacodec.github.io/av1-spec/av1-spec.pdf

/*

//explictily the one with a 1 parameter doom

The function B( a ,b, angle, 1, r ) performs a butterfly rotation and flip specified by the following ordered steps:
1. The function B( a, b, angle, 0, r ) is invoked.
2. The contents of T[ a ] and T[ b ] are exchanged.

*/

`include "cos128.sv"
`include "sin128.sv"
`include "math.sv"

module b_1 #(parameter int R) (
    output wire [15:0] out_t_a,
    output wire [15:0] out_t_b,
    input wire [15:0] t_a,
    input wire [15:0]t_b,
    input wire [7:0] angle
);
    module b_0 b_0_doom #(parameter int R = 12) (
    .out_t_a(out_t_b), // note the flip here
    .out_t_b(out_t_a),
    .t_a(t_a),
    .t_b(t_b),
    .angle(angle)
);

endmodule