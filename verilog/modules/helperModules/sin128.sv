// from page 297 of https://aomediacodec.github.io/av1-spec/av1-spec.pdf

/*
The function sin128( angle ) is defined to be cos128( angle - 64 ).
*/

`include "cos128.sv"

module sin128 (
    output wire [7:0] out,
    input wire [7:0] angle,
);
    cos128 cos (
        .out(out),
        .angle(angle - 64)
    );
endmodule