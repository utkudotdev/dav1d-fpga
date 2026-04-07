`include "M10K_16_1024.sv"
`include "identity_32.sv"

`ifndef AV1_VH_
/* verilog_format: off */
`define AV1_VH_
/* verilog_format: on */

module av1_decode   (
                    output  signed  [15:0] mem_write_data,
                    output          [9:0]  mem_write_addr,
                    output  signed  [15:0] mem_read_data,
                    output  we,
                    output  ready,
                    input           [9:0]  mem_read_addr,
                    input   request,
                    input   clk,
                    input   rst
                    )

    // load signal logic
    typedef enum logic [2:0] {
        INIT,
        START_JOB,
        WORKING_ROW,
        WRITE_ROW,
        SWAP_TO_COL
    } state_t;
    state_t state;

    always_ff @(posedge clk) begin
        if (rst)
            state <= INIT;
        else begin
            if (state == INIT) 
               state <= request ? START_JOB : INIT;
            else if (state == START_JOB)
                state <= WORKING_ROW;
            else if (state == WORKING_ROW)
                state <= done_row ? WRITE_ROW : WORKING_ROW;
            else if (state == WRITE_ROW)
                state <= done_writing ? (done_all ? SWAP_TO_COL : WORKING_ROW) : WAIT;
            else if (state == SWAP_TO_COL)
                state <= 
        end
    end
    
    // talk to qsys attached memory --> put in array
    localparam N = 32;
    // row array is the actual register
    logic signed [15:0] row_arr     [N];
    // row reg_D is the input WIRE to the register
    logic signed [15:0] row_reg_D   [N];
    // 1-hot select logic for loading
    logic [N-1:0] row_reg_sel;
    logic doing_col;

    genvar i 
    generate
        for (i = 0; i < N; i++) begin : : gen_reg_row_in
            always_ff @(posedge clk) begin
                if (rst) begin
                    row_arr[i] <= 15'b0;
                end
                else begin
                    row_arr[i] <= row_reg_sel[i] ? mem_read_data : row_arr[i];
                end
            end
        end
    endgenerate

    logic [$clog2(N)-1:0] row_counter;
    always_ff @(posedge clk) begin
        if (rst)
            row_counter <= 0;
        else begin
            if (working) begin
                row
            end
        end
    end

    // here's how this horrible logic works:
    // state = rst, waiting to start a read
    // state = 0...N-1 do the read i, write spot i-1
    // state = N, do no reads, write spot N-1
    // state is 1 hot i.e. first state after reset --> ...0001
    // fsm to read memory
    logic [N:0] state_mem_read;
    // this is just a counter for read addr
    logic [$clog2(N)-1:0] mem_read_addr_reg;
    always_ff @(posedge clk) begin
        if (rst)
            state_mem_read <= 0;
            mem_read_addr_reg <= 0;
        else begin
            if (load && state_mem_read == 0) 
                state_mem_read <= 1;
                mem_read_addr_reg <= 0; // TODO: start addr?
            else begin
                state_mem_read <= state_mem_read << 1;
                mem_read_addr_reg <= doing_col ? mem_read_addr_reg + N : mem_read_addr_reg + 1;
            end
        end
    end

    // reg select is off by one since reads have 1 latency
    assign row_reg_sel[N-1:0] = state_mem_read[N:1];
    // mem addr maps 1:1
    assign mem_read_addr = mem_read_addr_reg; // TODO: start addr?

    // pass some stuff into compute (the identity PL for now) (horizontal)
    // put an entire row (i.e. 0:31 into an array)
    wire row_ready;
    row_ready = state_mem_read == N;

    identity_32 iden    (   .out_array(),
                            .done_array(),
                            .in_array(row_arr),
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
            ready_reg <= 1
        else begin
            if (load)
                ready_reg <= 0
            else if ()
        end
    end

endmodule
`endif