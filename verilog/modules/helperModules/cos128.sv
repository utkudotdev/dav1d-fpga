// from page 297 of https://aomediacodec.github.io/av1-spec/av1-spec.pdf

/*
The function cos128( angle ) is specified for integer values of the input angle by the following ordered steps:
1. Set a variable angle equal to angle & 255.
2. If angle is greater than or equal to 0 and less than or equal to 64, return Cos128_Lookup[ angle ].
3. If angle is greater than 64 and less than or equal to 128, return Cos128_Lookup[ 128 - angle ] * -1.
4. If angle is greater than 128 and less than or equal to 192, return Cos128_Lookup[ angle - 128 ] * -1.
5. Otherwise (if angle is greater than 192 and less than 256), return Cos128_Lookup[ 256 - angle ].

Where Cos128_Lookup is a constant lookup table defined as:
Cos128_Lookup[ 65 ] = {
4096, 4095, 4091, 4085, 4076, 4065, 4052, 4036,
4017, 3996, 3973, 3948, 3920, 3889, 3857, 3822,
3784, 3745, 3703, 3659, 3612, 3564, 3513, 3461,
3406, 3349, 3290, 3229, 3166, 3102, 3035, 2967,
2896, 2824, 2751, 2675, 2598, 2520, 2440, 2359,
2276, 2191, 2106, 2019, 1931, 1842, 1751, 1660,
1567, 1474, 1380, 1285, 1189, 1092, 995, 897,
799, 700, 601, 501, 401, 301, 201, 101, 0
}
*/

module cos128 (
    output wire [7:0] out,
    input wire [7:0] angle,
);
    logic [15:0] Cos128_Lookup [64:0];

    assign Cos128_Lookup = {
        4096, 4095, 4091, 4085, 4076, 4065, 4052, 4036,
        4017, 3996, 3973, 3948, 3920, 3889, 3857, 3822,
        3784, 3745, 3703, 3659, 3612, 3564, 3513, 3461,
        3406, 3349, 3290, 3229, 3166, 3102, 3035, 2967,
        2896, 2824, 2751, 2675, 2598, 2520, 2440, 2359,
        2276, 2191, 2106, 2019, 1931, 1842, 1751, 1660,
        1567, 1474, 1380, 1285, 1189, 1092, 995, 897,
        799, 700, 601, 501, 401, 301, 201, 101, 0
    };

    always_comb begin
        if (angle >= 0 && angle <= 64) begin
            out = Cos128_Lookup[angle];
        end 
        else if (angle > 64 && angle <= 128) begin
            out = Cos128_Lookup[128 - angle] * -1;
        end 
        else if (angle > 128 && angle <= 192) begin
            out = Cos128_Lookup[angle - 128] * -1;
        end 
        else begin
            out = Cos128_Lookup[256 - angle];
        end
    end
endmodule

