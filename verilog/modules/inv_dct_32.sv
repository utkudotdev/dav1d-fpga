`include "/helperModules/brev.sv"
//following https://aomediacodec.github.io/av1-spec/av1-spec.pdf page 298

module inv_dct_32 #(parameter int N = 32) (
    output logic signed [15:0] out [N],
    input logic signed [15:0] t_array [N],
    input logic clk,
    input logic rst
)

// 1. Invoke the inverse DCT permutation process as specified in section 7.13.2.2 with the input variable n.
logic signed t_array_copy [N];

assign t_array_copy = t_array;

wire inv_dct_permutation_out [$clog2(N)-1:0];

brev #(.N($clog2(N))) inv_dct_permutation_brev (
    .out(inv_dct_permutation_out),
    .in(t_array_copy)
);

assign t_array = inv_dct_permutation_out;

// 2. If n is equal to 6, invoke B( 32 + i, 63 - i, 63 - 4 * brev( 4, i ), 0, r ) for i = 0..15.




// 3. If n is greater than or equal to 5, invoke B( 16 + i, 31 - i, 6 + ( brev( 3, 7 - i ) << 3 ), 0, r ) for i = 0..7.