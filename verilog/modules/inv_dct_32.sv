import av1_helper_functions::*;

// following https://aomediacodec.github.io/av1-spec/av1-spec.pdf page 298
module inv_dct_32 #(
    parameter int N
) (
    output logic signed [15:0] out[N],
    input logic signed [15:0] t_array[N],
    input logic start_compute,
    input logic clk,
    input logic rst

);
    localparam int n = $clog2(N);

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

    //n = 5 due to 32 point DCT, so we skip steps 2, 4, 7, 10, 11, 15, 16, 25, 28, 30, and 31.

    //state transistion shenanigans.
    //peter is about to go to the bridge
    always_ff @(clock) begin
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

    always_ff @(clock) begin
        case (state_t)
            IDLE: begin
                if (rst) begin
                    state <= STEP_1;
                end else begin
                    state <= IDLE;
                end
            end

            STEP_1: begin
                // 1. Invoke the inverse DCT permutation process as specified in section 7.13.2.2 with the input variable n.
                for (int i = 0; i < N; i++) begin
                    T[i] <= t_array[brev(5, 16'(i))];
                end
            end

            STEP_3: begin
                for (int i = 0; i <= 7; i++) begin
                    butterfly_t b_res = b_0(T[16+i], T[31-i], 8'(6 + (brev(3, 16'(7 - i)) << 3)));
                    T[16+i] <= b_res.a;
                    T[31-i] <= b_res.b;
                end
            end


        endcase
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


    // 10. If n is greater than or equal to 5, invoke B( 30 - 4 * i - j, 17 + 4 * i + j, 24 + (j << 6) + ( ( 1 - i ) << 5 ), 1, r ) for i =



    // 0..1, for j=0..1.



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

