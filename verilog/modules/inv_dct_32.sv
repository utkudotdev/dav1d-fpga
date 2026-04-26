`include "modules/av1_helper_functions.sv"
import av1_helper_functions::*;

// following https://aomediacodec.github.io/av1-spec/av1-spec.pdf page 298
module inv_dct_32 #(
    parameter int N = 32
) (
    output signed [15:0] out[N],
    output               valid, //TODO
    output               ready, //TODO
    output        [15:0] job_id_out,
    input  signed [15:0] in_array[N],
    input         [15:0] job_id_in,
    input start_compute,
    input clk,
    input rst

);
    logic [15:0] job_id;
    assign job_id_out = job_id;
    assign ready = state == IDLE;
    logic valid_reg;
    assign valid = valid_reg;
    localparam int n = $clog2(N);

    logic signed [15:0] t_array[N];

    typedef struct packed {
        logic signed [15:0] a;
        logic signed [15:0] b;
    } butterfly_t;

    //23 states needed 
    typedef enum logic [4:0] {
        IDLE,

        STEP_1,
        STEP_3,
        STEP_5,
        STEP_6,
        STEP_8,
        STEP_9,
        STEP_10,
        STEP_12,
        STEP_13,
        STEP_14,
        STEP_15,
        STEP_17,
        STEP_18,
        STEP_19,
        STEP_20,
        STEP_22,
        STEP_23,
        STEP_24,
        STEP_26,
        STEP_27,
        STEP_29,

        DONE
    } state_t;

    state_t state;

    
    //a variable res that specifies the intermediate clamping range
    // localparam int res = 1 << (n + 5);
     // res = 2^(n+5) as specified in the spec, where n is the input variable to the function. For our case, n = 5 due to 32 point DCT, so res = 2048.

    //n = 5 due to 32 point DCT, so we skip steps 2, 4, 7, 10, 11, 15, 16, 25, 28, 30, and 31.

    //state transistion shenanigans.
    //peter is about to go to the bridge
    always_ff @(posedge clk) begin
        case (state)
            IDLE: begin
                if (start_compute) begin
                    state <= STEP_1;
                end else begin
                    state <= IDLE;
                end
            end

            STEP_1: begin
                if (n >= 5) begin
                    state <= STEP_3;
                end else begin
                    state <= STEP_5;
                end
            end

            STEP_3: begin
                state <= STEP_5;
            end

            STEP_5: begin
                if (n >= 5) begin
                    state <= STEP_6;
                end else begin
                    state <= STEP_9;
                end
            end

            STEP_6: begin
                state <= STEP_8;
            end

            STEP_8: begin
                if (n >= 4) begin
                    state <= STEP_9;
                end else begin
                    state <= STEP_12;
                end
            end

            STEP_9: begin
                if (n >= 5) begin
                    state <= STEP_10;
                end else begin
                    state <= STEP_12;
                end
            end

            STEP_10: begin
                state <= STEP_12;
            end

            STEP_12: begin
                if (n >= 3) begin
                    state <= STEP_13;
                end else begin
                    state <= STEP_17;
                end
            end

            STEP_13: begin
                if (n >= 4) begin
                    state <= STEP_14;
                end else begin
                    state <= STEP_17;
                end
            end

            STEP_14: begin
                if (n >= 5) begin
                    state <= STEP_15;
                end else begin
                    state <= STEP_17;
                end
            end

            STEP_15: begin
                state <= STEP_17;
            end

            STEP_17: begin
                if (n >= 3) begin
                    state <= STEP_18;
                end else begin
                    state <= STEP_22;
                end
            end

            STEP_18: begin
                if (n >= 4) begin
                    state <= STEP_19;
                end else begin
                    state <= STEP_22;
                end
            end

            STEP_19: begin
                if (n >= 5) begin
                    state <= STEP_20;
                end else begin
                    state <= STEP_22;
                end
            end

            STEP_20: begin
                state <= STEP_22;
            end

            STEP_22: begin
                if (n >= 4) begin
                    state <= STEP_23;
                end else begin
                    state <= DONE;
                end
            end

            STEP_23: begin
                if (n >= 5) begin
                    state <= STEP_24;
                end else begin
                    state <= STEP_26;
                end

            end

            STEP_24: begin
                state <= STEP_26;
            end

            STEP_26: begin
                if (n >= 5) begin
                    state <= STEP_27;
                end else begin
                    state <= DONE;
                end
            end

            STEP_27: begin
                state <= STEP_29;
            end

            STEP_29: begin
                state <= DONE;
            end

            DONE: begin
                state <= IDLE;
            end

            default: state <= IDLE;


        endcase
    end

    logic signed [15:0] T[N];

    always_ff @(posedge clk) begin
        case (state)
            IDLE: begin
                //do nothing lmao
                if (start_compute) begin
                    for (int i = 0; i < N; i++) begin
                        t_array[i] <= in_array[i];
                    end
                end
            end

            STEP_1: begin
            // 1. Invoke the inverse DCT permutation process as specified in section 7.13.2.2 with the input variable n.
                for (int i = 0; i < N; i++) begin
                    T[i] <= t_array[brev(5, 16'(i))];
                end
            end

            STEP_3: begin
            // 3. If n is greater than or equal to 5, invoke B( 16 + i, 31 - i, 6 + ( brev( 3, 7 - i ) << 3 ), 0, r ) for i = 0..7.
                for (int i = 0; i <= 7; i++) begin
                    butterfly_t b_res;
                    b_res = b_0(T[16+i], T[31-i], 8'(6 + (brev(3, 16'(7 - i)) << 3)));
                    T[16+i] <= b_res.a;
                    T[31-i] <= b_res.b;
                end
            end


            STEP_5: begin
            // 5. If n is greater than or equal to 4, invoke B( 8 + i, 15 - i, 12 + ( brev( 2, 3 - i ) << 4 ), 0, r ) for i = 0..3.
                for (int i = 0; i <= 3; i++) begin
                    butterfly_t b_res;
                    b_res = b_0(T[8 + i], T[15 - i], 8'(12 + (brev(2, 16'(3 - i)) << 4)));
                    T[8 + i] <= b_res.a;
                    T[15 - i] <= b_res.b;
                end
            end

            STEP_6: begin
            // 6. If n is greater than or equal to 5, invoke H( 16 + 2 * i, 17 + 2 * i, i & 1, r ) for i = 0..7.
                for (int i = 0; i <= 7; i++) begin
                    butterfly_t b_res;
                    b_res = h(T[16 + 2 * i], T[17 + 2 * i], (i & 1));
                    T[16 + 2 * i] <= b_res.a;
                    T[17 + 2 * i] <= b_res.b;
                 end
                
            end

            STEP_8: begin
            // 8. If n is greater than or equal to 3, invoke B( 4 + i, 7 - i, 56 - 32 * i, 0, r ) for i = 0..1.
                for (int i = 0; i <= 1; i++) begin
                        butterfly_t b_res;
                        b_res = b_0(T[4 + i], T[7 - i], 8'(56 - 32 * i));
                        T[4 + i] <= b_res.a;
                        T[7 - i] <= b_res.b;
                end
            end

            STEP_9: begin
            // 9. If n is greater than or equal to 4, invoke H( 8 + 2 * i, 9 + 2 * i, i & 1, r ) for i = 0..3.
                for (int i = 0; i <= 3; i++) begin
                    butterfly_t b_res;
                    b_res = h(T[8 + 2 * i], T[9 + 2 * i], (i & 1));
                    T[8 + 2 * i] <= b_res.a;
                    T[9 + 2 * i] <= b_res.b;
                end
            end

            STEP_10: begin
            // 10. If n is greater than or equal to 5, invoke B( 30 - 4 * i - j, 17 + 4 * i + j, 24 + (j << 6) + ( ( 1 - i ) << 5 ), 1, r ) for i = 0..1, for j=0..1.
                for (int i = 0; i <= 1; i++) begin
                    for (int j = 0; j <= 1; j++) begin
                        butterfly_t b_res;
                        b_res = b_1(T[30 - 4 * i - j], T[17 + 4 * i + j], 8'(24 + (j << 6) + ( ( 1 - i ) << 5 )));
                        T[30 - 4 * i - j] <= b_res.a;
                        T[17 + 4 * i + j] <= b_res.b;
                    end
                end
            end

            STEP_12: begin
            // 12. Invoke B( 2 * i, 2 * i + 1, 32 + 16 * i, 1 - i, r ) for i = 0..1.
                for (int i = 0; i <= 1; i++) begin
                    butterfly_t b_res;
                    b_res = (1 - i) ? b_0(T[2 * i], T[2 * i + 1], 8'(32 + 16 * i)) : b_1(T[2 * i], T[2 * i + 1], 8'(32 + 16 * i));
                    T[2 * i] <= b_res.a;
                    T[2 * i + 1] <= b_res.b;
                end
            end

            STEP_13: begin
            // 13. If n is greater than or equal to 3, invoke H( 4 + 2 * i, 5 + 2 * i, i, r ) for i = 0..1.
                for (int i = 0; i <= 1; i++) begin
                    butterfly_t b_res;
                    b_res = h(T[4 + 2 * i], T[5 + 2 * i], i);
                    T[4 + 2 * i] <= b_res.a;
                    T[5 + 2 * i] <= b_res.b;
                end
            end

            STEP_14: begin
            // 14. If n is greater than or equal to 4, invoke B( 14 - i, 9 + i, 48 + 64 * i, 1, r ) for i = 0..1.
                for (int i = 0; i <= 1; i++) begin
                    butterfly_t b_res;
                    b_res = b_1(T[14 - i], T[9 + i], 8'(48 + 64 * i));
                    T[14 - i] <= b_res.a;
                    T[9 + i] <= b_res.b;
                end
            end

            STEP_15: begin
            // 15. If n is greater than or equal to 5, invoke H( 16 + 4 * i + j, 19 + 4 * i - j, i & 1, r ) for i = 0..3, for j = 0..1.
                for (int i = 0; i <= 3; i++) begin
                    for (int j = 0; j <= 1; j++) begin
                        butterfly_t b_res;
                        b_res = h(T[16 + 4 * i + j], T[19 + 4 * i - j], (i & 1));
                        T[16 + 4 * i + j] <= b_res.a;
                        T[19 + 4 * i - j] <= b_res.b;
                    end
                end
            end

            STEP_17: begin
            // 17. Invoke H( i, 3 - i, 0, r ) for i = 0..1.
                for (int i = 0; i <= 1; i++) begin
                    butterfly_t b_res;
                    b_res = h(T[i], T[3 - i], 0);
                    T[i] <= b_res.a;
                    T[3 - i] <= b_res.b;
                end
            end

            STEP_18: begin
            // 18. If n is greater than or equal to 3, invoke B( 6, 5, 32, 1, r ).
                butterfly_t b_res;
                b_res = b_1(T[6], T[5], 8'(32));
                T[6] <= b_res.a;
                T[5] <= b_res.b;
            end

            STEP_19: begin
            // 19. If n is greater than or equal to 4, invoke H( 8 + 4 * i + j, 11 + 4 * i - j, i, r ) for i = 0..1, for j = 0..1.
                for (int i = 0; i <= 1; i++) begin
                    for (int j = 0; j <= 1; j++) begin
                        butterfly_t b_res;
                        b_res = h(T[8 + 4 * i + j], T[11 + 4 * i - j], i);
                        T[8 + 4 * i + j] <= b_res.a;
                        T[11 + 4 * i - j] <= b_res.b;
                    end
                end
            end

            STEP_20: begin
            // 20. If n is greater than or equal to 5, invoke B( 29 - i, 18 + i, 48 + ( i >> 1 ) * 64, 1, r ) for i = 0..3.
                for (int i = 0; i <= 3; i++) begin
                    butterfly_t b_res;
                    b_res = b_1(T[29 - i], T[18 + i], 8'(48 + (i >> 1) * 64));
                    T[29 - i] <= b_res.a;
                    T[18 + i] <= b_res.b;
                end
            end

            STEP_22: begin
            // 22. If n is greater than or equal to 3, invoke H( i, 7 - i, 0, r ) for i = 0..3.
                for (int i = 0; i <= 3; i++) begin
                    butterfly_t b_res;
                    b_res = h(T[i], T[7 - i], 0);
                    T[i] <= b_res.a;
                    T[7 - i] <= b_res.b;
                end
            end

            STEP_23: begin
            // 23. If n is greater than or equal to 4, invoke B( 13 - i, 10 + i, 32, 1, r ) for i = 0..1.
                for (int i = 0; i <= 1; i++) begin
                    butterfly_t b_res;
                    b_res = b_1(T[13 - i], T[10 + i], 8'(32));
                    T[13 - i] <= b_res.a;
                    T[10 + i] <= b_res.b;
                end
            end

            STEP_24: begin
            // 24. If n is greater than or equal to 5, invoke H( 16 + i * 8 + j, 23 + i * 8 - j, i, r ) for i = 0..1, for j = 0..3.
                for (int i = 0; i <= 1; i++) begin
                    for (int j = 0; j <= 3; j++) begin
                        butterfly_t b_res;
                        b_res = h(T[16 + i * 8 + j], T[23 + i * 8 - j], i);
                        T[16 + i * 8 + j] <= b_res.a;
                        T[23 + i * 8 - j] <= b_res.b;
                    end
                end
            end

            STEP_26: begin
            // 26. If n is greater than or equal to 4, invoke H( i, 15 - i, 0, r ) for i = 0..7.
                for (int i = 0; i <= 7; i++) begin
                    butterfly_t b_res;
                    b_res = h(T[i], T[15 - i], 0);
                    T[i] <= b_res.a;
                    T[15 - i] <= b_res.b;
                end
            end

            STEP_27: begin
            // 27. If n is greater than or equal to 5, invoke B( 27 - i, 20 + i, 32, 1, r ) for i = 0..3.
                for (int i = 0; i <= 3; i++) begin
                    butterfly_t b_res;
                    b_res = b_1(T[27 - i], T[20 + i], 8'(32));
                    T[27 - i] <= b_res.a;
                    T[20 + i] <= b_res.b;
                end
            end

            STEP_29: begin
            // 29. If n is greater than or equal to 5, invoke H( i, 31 - i, 0, r ) for i = 0..15.
                for (int i = 0; i <= 15; i++) begin
                    butterfly_t b_res;
                    b_res = h(T[i], T[31 - i], 0);
                    T[i] <= b_res.a;
                    T[31 - i] <= b_res.b;
                end
            end

            DONE: begin

            end

            default: begin end

        endcase
    end

    genvar j;
    generate
        for (j = 0; j < N; j++) begin : evil_stupid_generate
            assign out[j] = T[j];
        end
    endgenerate


    always_ff @(posedge clk) begin
        if (rst) begin
            valid_reg <= 0;
            job_id <= 111;
        end
        else if ((start_compute && state == IDLE)) begin
            valid_reg <= 0;
            job_id <= job_id_in;
        end
        else if (state == DONE)
            valid_reg <= 1;
    end


    // 4. If n is equal to 6, invoke H( 32 + i * 2, 33 + i * 2, i & 1, r ) for i = 0..15.
    //skip 


    // 5. If n is greater than or equal to 4, invoke B( 8 + i, 15 - i, 12 + ( brev( 2, 3 - i ) << 4 ), 0, r ) for i = 0..3.
    // for (int i = 0; i <= 3; i++) begin
    //         b_res = b_0(T[8 + i], T[15 - i], 8'(12 + (brev(2, 16'(3 - i)) << 4)));
    //         T[8 + i] = b_res.a;
    //         T[15 - i] = b_res.b;
    //     end
    //

    // 6. If n is greater than or equal to 5, invoke H( 16 + 2 * i, 17 + 2 * i, i & 1, r ) for i = 0..7.
    // for (int i = 0; i <= 7; i++) begin
    //         b_res = h(T[16 + 2 * i], T[17 + 2 * i], (i & 1));
    //         T[16 + 2 * i] = b_res.a;
    //         T[17 + 2 * i] = b_res.b;
    //     end
    //

    // 7. If n is equal to 6, invoke B( 62 - i * 4 - j, 33 + i * 4 + j, 60 - 16 * brev( 2, i ) + 64 * j, 1, r ) for i = 0..3, for j = 0..1.
    //skip

    // 8. If n is greater than or equal to 3, invoke B( 4 + i, 7 - i, 56 - 32 * i, 0, r ) for i = 0..1.
    // for (int i = 0; i <= 1; i++) begin
    //         b_res = b_0(T[4 + i], T[7 - i], 8'(56 - 32 * i));
    //         T[4 + i] = b_res.a;
    //         T[7 - i] = b_res.b;
    //     end
    //

    // 9. If n is greater than or equal to 4, invoke H( 8 + 2 * i, 9 + 2 * i, i & 1, r ) for i = 0..3.


    // 10. If n is greater than or equal to 5, invoke B( 30 - 4 * i - j, 17 + 4 * i + j, 24 + (j << 6) + ( ( 1 - i ) << 5 ), 1, r ) for i = 0..1, for j=0..1.



    // 11. If n is equal to 6, invoke H( 32 + i * 4 + j, 35 + i * 4 - j, i & 1, r ) for i = 0..7, for j = 0..1.
    //skip


    // 12. Invoke B( 2 * i, 2 * i + 1, 32 + 16 * i, 1 - i, r ) for i = 0..1.


    // 13. If n is greater than or equal to 3, invoke H( 4 + 2 * i, 5 + 2 * i, i, r ) for i = 0..1.



    // 14. If n is greater than or equal to 4, invoke B( 14 - i, 9 + i, 48 + 64 * i, 1, r ) for i = 0..1.



    // 15. If n is greater than or equal to 5, invoke H( 16 + 4 * i + j, 19 + 4 * i - j, i & 1, r ) for i = 0..3, for j = 0..1.



    // 16. If n is equal to 6, invoke B( 61 - i * 8 - j, 34 + i * 8 + j, 56 - i * 32 + ( j >> 1 ) * 64, 1, r ) for i = 0..1, for j = 0..3.
    //skip


    // 17. Invoke H( i, 3 - i, 0, r ) for i = 0..1.



    // 18. If n is greater than or equal to 3, invoke B( 6, 5, 32, 1, r ).



    // 19. If n is greater than or equal to 4, invoke H( 8 + 4 * i + j, 11 + 4 * i - j, i, r ) for i = 0..1, for j = 0..1.


    // 20. If n is greater than or equal to 5, invoke B( 29 - i, 18 + i, 48 + ( i >> 1 ) * 64, 1, r ) for i = 0..3.


    // 21. If n is equal to 6, invoke H( 32 + 8 * i + j, 39 + 8 * i - j, i & 1, r ) for i = 0..3, for j = 0..3.
    //skip


    // 22. If n is greater than or equal to 3, invoke H( i, 7 - i, 0, r ) for i = 0..3.




    // 23. If n is greater than or equal to 4, invoke B( 13 - i, 10 + i, 32, 1, r ) for i = 0..1.


    // 24. If n is greater than or equal to 5, invoke H( 16 + i * 8 + j, 23 + i * 8 - j, i, r ) for i = 0..1, for j = 0..3.


    // 25. If n is equal to 6, invoke B( 59 - i, 36 + i, i < 4 ? 48 : 112, 1, r ) for i = 0..7.
    //skip

    // 26. If n is greater than or equal to 4, invoke H( i, 15 - i, 0, r ) for i = 0..7.


    // 27. If n is greater than or equal to 5, invoke B( 27 - i, 20 + i, 32, 1, r ) for i = 0..3.


    // 28. If n is equal to 6, the following steps apply for i = 0..7:
    // ◦ Invoke H( 32 + i, 47 - i, 0, r ).
    // ◦ Invoke H( 48 + i, 63 - i, 1, r ).



    // 29. If n is greater than or equal to 5, invoke H( i, 31 - i, 0, r ) for i = 0..15.


    // 30. If n is equal to 6, invoke B( 55 - i, 40 + i, 32, 1, r ) for i = 0..7.
    //skip

    // 31. If n is equal to 6, invoke H( i, 63 - i, 0, r ) for i = 0..31.
    //skip


endmodule

