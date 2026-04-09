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
    typedef enum logic [1:0] {
        INIT,
        START_JOB,
        WORKING_ARR,
        SWAP_TO_COL
    } state_t;
    state_t state;

    logic done_rows;
    wire  done_compute;
    wire  done_all_writes;
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
                    state       <= WORKING_ARR;
                end
                WORKING_ARR: begin
                    state       <= done_all_writes ? SWAP_TO_COL : WORKING_ARR;
                end
                SWAP_TO_COL: begin // TODO: this state can disappear later
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

    logic [$clog2(N)-1:0] arr_read_counter;
    always_ff @(posedge clk) begin
        if (rst)
            arr_read_counter <= 0;
        else begin
            if (state == (INIT || START_JOB)) begin
                arr_read_counter <= 0;
            end else if (done_reading && done_compute) begin // TODO: ??
                arr_read_counter <= arr_read_counter + 1;
            end
        end
    end

    wire signed [15:0] arr [N];
    wire read_done;
    arr_reader  #(.N(N)) reader
                    (
                        .arr(arr),
                        .mem_read_addr(mem_read_addr),
                        .read_done(read_done),
                        .mem_read_data(mem_read_data),
                        .start_addr(arr_read_counter),
                        .start_read(),
                        .is_column(done_rows),
                        .clk(clk),
                        .rst(rst)
                    );


    identity_32 iden    (   .out_array(arr_to_write),
                            .done(done_compute),
                            .in_array(arr),
                            .load(arr_ready),
                            .clk(clk),
                            .rst(rst)
                        );

    wire [15:0] arr_to_write [N];

    arr_writer  #(.N(N)) writer
                (
                    .mem_write_addr(mem_write_addr),
                    .mem_write_data(mem_write_addr),
                    .write_done(done_writing),
                    .we(we),
                    .arr(arr_to_write),
                    .start_addr(arr_write_counter),
                    .start_write(),
                    .is_column(done_rows),
                    .clk(clk),
                    .rst(rst)
                );

    logic [$clog2(N)-1:0] arr_write_counter;
    always_ff @(posedge clk) begin
        if (rst)
            arr_write_counter <= 0;
        else begin
            if (working) begin
                pass;
            end
        end
    end

    logic [$clog2(N)-1:0] arr_write_counter;
    always_ff @(posedge clk) begin
        if (rst)
            arr_write_counter <= 0;
        else begin
            if (state == (INIT || START_JOB)) begin
                arr_write_counter <= 0;
            end else if (done_writing) begin // TODO: ??
                arr_write_counter <= arr_write_counter + 1;
            end
        end
    end


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
