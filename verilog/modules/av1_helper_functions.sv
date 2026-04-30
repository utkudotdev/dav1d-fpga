`ifndef HELPER_VH_
/* verilog_format: off */
`define HELPER_VH_
/* verilog_format: on */

package av1_helper_functions;

    typedef struct packed {
        logic signed [15:0] a;
        logic signed [15:0] b;
    } butterfly_t;


    /* verilog_format: off */
    const logic signed [15:0] Cos128_Lookup [65] = '{
        4096, 4095, 4091, 4085, 4076, 4065, 4052, 4036,
        4017, 3996, 3973, 3948, 3920, 3889, 3857, 3822,
        3784, 3745, 3703, 3659, 3612, 3564, 3513, 3461,
        3406, 3349, 3290, 3229, 3166, 3102, 3035, 2967,
        2896, 2824, 2751, 2675, 2598, 2520, 2440, 2359,
        2276, 2191, 2106, 2019, 1931, 1842, 1751, 1660,
        1567, 1474, 1380, 1285, 1189, 1092,  995,  897,
         799,  700,  601,  501,  401,  301,  201,  101, 0
    };
    /* verilog_format: on */

    function automatic logic signed [15:0] cos128(input logic [7:0] angle);
        if (angle <= 64) begin
            return Cos128_Lookup[7'(angle)];
        end else if (angle > 64 && angle <= 128) begin
            return -Cos128_Lookup[7'(128-angle)];
        end else if (angle > 128 && angle <= 192) begin
            return -Cos128_Lookup[7'(angle-128)];
        end else begin
            return Cos128_Lookup[7'(256-angle)];
        end
    endfunction

    // The function sin128(angle) is defined to be cos128(angle - 64). 
    function automatic logic signed [15:0] sin128(input logic [7:0] angle);
        return cos128(angle - 8'd64);
    endfunction

    function automatic logic signed [15:0] round2(input logic signed [31:0] x, input int n);
        if (n == 0) begin
            return 16'(x);
        end else begin
            // Using arithmetic shift right (>>>) to preserve the sign bit
            return 16'((x + (1 << (n - 1))) >>> n);
        end
    endfunction

    function automatic logic [15:0] brev(input int numBits, input logic [15:0] in_val);
        logic [15:0] out_val = 0;
        for (int i = 0; i < numBits; i++) begin
            out_val = out_val + (((in_val >> i) & 1) << (numBits - 1 - i));
        end
        return out_val;
    endfunction

    function automatic butterfly_t b_0(input logic signed [15:0] t_a, input logic signed [15:0] t_b,
                                       input logic [7:0] angle);
        butterfly_t res;
        logic signed [31:0] x, y;

        x = (t_a * cos128(angle)) - (t_b * sin128(angle));
        y = (t_a * sin128(angle)) + (t_b * cos128(angle));

        res.a = round2(x, 12);
        res.b = round2(y, 12);
        return res;
    endfunction

    function automatic butterfly_t b_1(input logic signed [15:0] t_a, input logic signed [15:0] t_b,
                                       input logic [7:0] angle);
        butterfly_t temp, res;

        // 1. The function B(a, b, angle, 0, r) is invoked. 
        temp  = b_0(t_a, t_b, angle);

        // 2. The contents of T[a] and T[b] are exchanged. 
        res.a = temp.b;  // Note the flip here 
        res.b = temp.a;
        return res;
    endfunction

    function automatic butterfly_t h(input logic signed [15:0] t_a, input logic signed [15:0] t_b,
                                     input logic c);
        butterfly_t temp, res;
        temp.a = c ? t_b : t_a;
        temp.b = c ? t_a : t_b;

        res.a = temp.a + temp.b;
        res.b = temp.a - temp.b;
        return res;
    endfunction
endpackage

`endif
