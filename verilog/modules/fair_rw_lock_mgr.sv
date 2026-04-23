module fair_rw_lock_mgr 
                    (
                        output read_lock,
                        output write_lock,
                        input read_request,
                        input write_request,
                        input clk,
                        input rst
                    );
    
    logic read_last;
    always_ff @(posedge clk) begin
        if (rst)
            read_last <= 0;
        else if (read_lock)
            read_last <= 1;
        else if (write_lock)
            read_last <= 0;
    end

    logic read_lock_reg;
    logic write_lock_reg;
    assign read_lock = read_lock_reg;
    assign write_lock = write_lock_reg;
    always_ff @(posedge clk) begin
        if (rst) begin
            read_lock_reg   <= 0;
            write_lock_reg  <= 0;
        end
        else if (read_request && write_request && !(read_lock || write_lock)) begin
            read_lock_reg   <= ~read_last;
            write_lock_reg  <= read_last;
        end
        else begin
            read_lock_reg <= write_lock ? 0 : read_request;
            write_lock_reg <= read_lock ? 0 : write_request;
        end
    end

endmodule