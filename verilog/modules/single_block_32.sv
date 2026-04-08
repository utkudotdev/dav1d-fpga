`include "M10K_16_1024.sv"
`include "identity_32.sv"

`ifndef BLOCK_32_VH_
/* verilog_format: off */
`define BLOCK_32_VH_
/* verilog_format: on */

module single_block_32   (
                    output  signed  [15:0] mem_write_data,
                    output          [9:0]  mem_write_addr,
                    output          [9:0]  mem_read_addr,
                    output  we,
                    output  ready,
                    input   signed  [15:0] mem_read_data,
                    input   request,
                    input   clk,
                    input   rst
                    );

    // load signal logic
    typedef enum logic [2:0] {
        INIT,
        START_JOB,
        WORKING_ROW,
        WRITE_ROW,
        SWAP_TO_COL
    } state_t;
    state_t state;

    logic done_rows;

    always_ff @(posedge clk) begin
        if (rst) begin
            done_rows <= 0;
            state <= INIT;
        end
        else begin
            case (state)
                INIT: begin
                    state       <= request ? START_JOB : INIT;
                    done_rows   <= 0;
                end
                START_JOB: begin
                    state       <= WORKING_ROW;
                end
                WORKING_ROW: begin
                    state       <= done_row ? WRITE_ROW : WORKING_ROW;
                end
                WRITE_ROW: begin
                    state       <= done_writing ? (done_all ? SWAP_TO_COL : WORKING_ROW) : WAIT;
                end
                SWAP_TO_COL: begin
                    state       <= done_rows ? INIT : START_JOB;
                    done_rows   <= !done_rows;
                end
                default: begin
                    state       <= INIT;
                    done_rows   <= 0;
                end
            endcase
        end
    end


    // talk to qsys attached memory --> put in array
    localparam N = 32;

    logic [$clog2(N)-1:0] row_counter;
    always_ff @(posedge clk) begin
        if (rst)
            row_counter <= 0;
        else begin
            if (working) begin
                row;
            end
        end
    end

    wire signed [15:0] row [N];
    wire row_ready;
    row_reader  #(.N(N)) reader
                    (
                        .row(row),
                        .mem_read_addr(mem_read_addr),
                        .row_ready(row_ready),
                        .mem_read_data(mem_read_data),
                        .start_addr(0),
                        .start_read(),
                        .is_column(done_rows)
                    );


    identity_32 iden    (   .out_array(),
                            .done_array(),
                            .in_array(row),
                            .load(row_ready),
                            .clk(),
                            .rst()
                        );



    // write that stuff to a temporary memory


    // read temp mem 
    // pass that stuff into compute (the identity PL for now) (vertical)
    // put an entire column (i.e. 0, 32, 64, 48)

    // write temp mem back to qsys mem

    logic ready_reg;
    always_ff @(posedge clk) begin
        if (rst)
            ready_reg <= 1;
        else begin
            if (load)
                ready_reg <= 0;
            //else if ()
        end
    end

endmodule
`endif
