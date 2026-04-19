`include "/helperModules/brev.sv"
//following https://aomediacodec.github.io/av1-spec/av1-spec.pdf page 298

module inv_dct_32 #(parameter int N = 32) (
    output logic signed [15:0] out [N],
    input logic signed [15:0] t_array [N],
    input logic clk,
    input logic rst
)

//n = 5 due to 32 point DCT, so we skip steps 2, 4, 7, 10, 11, 15, 16, 25, 28, 30, and 31.


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

//skipped in 32 point DCT? and below? as n = 5?


// 3. If n is greater than or equal to 5, invoke B( 16 + i, 31 - i, 6 + ( brev( 3, 7 - i ) << 3 ), 0, r ) for i = 0..7. 

wire [2:0] s3_b_out [8];
brev #(.N(3)) s3_brev_0 (.out(s3_b_out[0]), .in(3'd7));
brev #(.N(3)) s3_brev_1 (.out(s3_b_out[1]), .in(3'd6));
brev #(.N(3)) s3_brev_2 (.out(s3_b_out[2]), .in(3'd5));
brev #(.N(3)) s3_brev_3 (.out(s3_b_out[3]), .in(3'd4));
brev #(.N(3)) s3_brev_4 (.out(s3_b_out[4]), .in(3'd3));
brev #(.N(3)) s3_brev_5 (.out(s3_b_out[5]), .in(3'd2));
brev #(.N(3)) s3_brev_6 (.out(s3_b_out[6]), .in(3'd1));
brev #(.N(3)) s3_brev_7 (.out(s3_b_out[7]), .in(3'd0));

wire signed [15:0] s3_out_a [8];
wire signed [15:0] s3_out_b [8];

b_0 #(.R(12)) b0_s3_0 (.out_t_a(s3_out_a[0]), .out_t_b(s3_out_b[0]), .t_a(t_step_2[16]), .t_b(t_step_2[31]), .angle(8'(6 + (s3_b_out[0] << 3))));
b_0 #(.R(12)) b0_s3_1 (.out_t_a(s3_out_a[1]), .out_t_b(s3_out_b[1]), .t_a(t_step_2[17]), .t_b(t_step_2[30]), .angle(8'(6 + (s3_b_out[1] << 3))));
b_0 #(.R(12)) b0_s3_2 (.out_t_a(s3_out_a[2]), .out_t_b(s3_out_b[2]), .t_a(t_step_2[18]), .t_b(t_step_2[29]), .angle(8'(6 + (s3_b_out[2] << 3))));
b_0 #(.R(12)) b0_s3_3 (.out_t_a(s3_out_a[3]), .out_t_b(s3_out_b[3]), .t_a(t_step_2[19]), .t_b(t_step_2[28]), .angle(8'(6 + (s3_b_out[3] << 3))));
b_0 #(.R(12)) b0_s3_4 (.out_t_a(s3_out_a[4]), .out_t_b(s3_out_b[4]), .t_a(t_step_2[20]), .t_b(t_step_2[27]), .angle(8'(6 + (s3_b_out[4] << 3))));
b_0 #(.R(12)) b0_s3_5 (.out_t_a(s3_out_a[5]), .out_t_b(s3_out_b[5]), .t_a(t_step_2[21]), .t_b(t_step_2[26]), .angle(8'(6 + (s3_b_out[5] << 3))));
b_0 #(.R(12)) b0_s3_6 (.out_t_a(s3_out_a[6]), .out_t_b(s3_out_b[6]), .t_a(t_step_2[22]), .t_b(t_step_2[25]), .angle(8'(6 + (s3_b_out[6] << 3))));
b_0 #(.R(12)) b0_s3_7 (.out_t_a(s3_out_a[7]), .out_t_b(s3_out_b[7]), .t_a(t_step_2[23]), .t_b(t_step_2[24]), .angle(8'(6 + (s3_b_out[7] << 3))));

always_comb begin
    for (int k = 0; k < 8; k++) begin
        t_array[16 + k] = s3_out_a[k];
        t_array[31 - k] = s3_out_b[k];
    end
end


// 4. If n is equal to 6, invoke H( 32 + i * 2, 33 + i * 2, i & 1, r ) for i = 0..15.



// 5. If n is greater than or equal to 4, invoke B( 8 + i, 15 - i, 12 + ( brev( 2, 3 - i ) << 4 ), 0, r ) for i = 0..3.



// 6. If n is greater than or equal to 5, invoke H( 16 + 2 * i, 17 + 2 * i, i & 1, r ) for i = 0..7.



// 7. If n is equal to 6, invoke B( 62 - i * 4 - j, 33 + i * 4 + j, 60 - 16 * brev( 2, i ) + 64 * j, 1, r ) for i = 0..3, for j = 0..1.



// 8. If n is greater than or equal to 3, invoke B( 4 + i, 7 - i, 56 - 32 * i, 0, r ) for i = 0..1.



// 9. If n is greater than or equal to 4, invoke H( 8 + 2 * i, 9 + 2 * i, i & 1, r ) for i = 0..3.



// 10. If n is greater than or equal to 5, invoke B( 30 - 4 * i - j, 17 + 4 * i + j, 24 + (j << 6) + ( ( 1 - i ) << 5 ), 1, r ) for i =



// 0..1, for j=0..1.



// 11. If n is equal to 6, invoke H( 32 + i * 4 + j, 35 + i * 4 - j, i & 1, r ) for i = 0..7, for j = 0..1.



// 12. Invoke B( 2 * i, 2 * i + 1, 32 + 16 * i, 1 - i, r ) for i = 0..1.



// 13. If n is greater than or equal to 3, invoke H( 4 + 2 * i, 5 + 2 * i, i, r ) for i = 0..1.



// 14. If n is greater than or equal to 4, invoke B( 14 - i, 9 + i, 48 + 64 * i, 1, r ) for i = 0..1.



// 15. If n is greater than or equal to 5, invoke H( 16 + 4 * i + j, 19 + 4 * i - j, i & 1, r ) for i = 0..3, for j = 0..1.



// 16. If n is equal to 6, invoke B( 61 - i * 8 - j, 34 + i * 8 + j, 56 - i * 32 + ( j >> 1 ) * 64, 1, r ) for i = 0..1, for j = 0..3.



// 17. Invoke H( i, 3 - i, 0, r ) for i = 0..1.



// 18. If n is greater than or equal to 3, invoke B( 6, 5, 32, 1, r ).



// 19. If n is greater than or equal to 4, invoke H( 8 + 4 * i + j, 11 + 4 * i - j, i, r ) for i = 0..1, for j = 0..1.



// 20. If n is greater than or equal to 5, invoke B( 29 - i, 18 + i, 48 + ( i >> 1 ) * 64, 1, r ) for i = 0..3.



// 21. If n is equal to 6, invoke H( 32 + 8 * i + j, 39 + 8 * i - j, i & 1, r ) for i = 0..3, for j = 0..3.



// 22. If n is greater than or equal to 3, invoke H( i, 7 - i, 0, r ) for i = 0..3.




// 23. If n is greater than or equal to 4, invoke B( 13 - i, 10 + i, 32, 1, r ) for i = 0..1.


// 24. If n is greater than or equal to 5, invoke H( 16 + i * 8 + j, 23 + i * 8 - j, i, r ) for i = 0..1, for j = 0..3.


// 25. If n is equal to 6, invoke B( 59 - i, 36 + i, i < 4 ? 48 : 112, 1, r ) for i = 0..7.


// 26. If n is greater than or equal to 4, invoke H( i, 15 - i, 0, r ) for i = 0..7.


// 27. If n is greater than or equal to 5, invoke B( 27 - i, 20 + i, 32, 1, r ) for i = 0..3.


// 28. If n is equal to 6, the following steps apply for i = 0..7:
// ◦ Invoke H( 32 + i, 47 - i, 0, r ).
// ◦ Invoke H( 48 + i, 63 - i, 1, r ).



// 29. If n is greater than or equal to 5, invoke H( i, 31 - i, 0, r ) for i = 0..15.


// 30. If n is equal to 6, invoke B( 55 - i, 40 + i, 32, 1, r ) for i = 0..7.


// 31. If n is equal to 6, invoke H( i, 63 - i, 0, r ) for i = 0..31.