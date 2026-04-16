// from page 296 of https://aomediacodec.github.io/av1-spec/av1-spec.pdf

/*

//explictily the one with a 0 parameter doom

The function B( a, b, angle, 0, r ) performs a butterfly rotation specified by the following ordered steps:
Note: When Lossless is equal to 0, values written into Residual may not be representable by 1 + BitDepth bits (for
example, due to quantization noise). The constraints in other parts of the specification ensure that the values will
always be representable by a signed integer with Max( BitDepth + 5, 15 ) bits.
AV1 Bitstream & Decoding Process Specification
Section: Decoding process Page 296 of 669
1. The variable x is set equal to T[ a ] * cos128( angle ) - T[ b ] * sin128( angle ).
2. The variable y is set equal to T[ a ] * sin128( angle ) + T[ b ] * cos128( angle ).
3. T[ a ] is set equal to Round2( x, 12 ).
4. T[ b ] is set equal to Round2( y, 12 ).
*/

`include "cos128.sv"
`include "sin128.sv"
`include "math.sv"

module b_0 #(parameter int R) (
    output wire [15:0] out_t_a,
    output wire [15:0] out_t_b,
    input wire [15:0] t_a,
    input wire [15:0]t_b,
    input wire [7:0] angle
);
    logic x = t_a * cos128(angle) - t_b * sin128(angle);
    logic y = t_a * sin128(angle) + t_b * cos128(angle);

    round2 #(.N(12)) round_x (
        .out(out_t_a),
        .x(x)
    );

    round2 #(.N(12)) round_y (
        .out(out_t_b),
        .x(y)
    );    
endmodule