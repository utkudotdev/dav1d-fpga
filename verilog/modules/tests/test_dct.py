import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge
from cocotb_tools.runner import get_runner
import os

N = 32
ADDR_WIDTH = (N * N - 1).bit_length()
POISON = 999


async def reset(dut):
    dut.rst.value = 0
    dut.clk.value = 0

    dut.job_id_in.value = 0
    dut.start_compute.value = 0
    for i in range(N):
        dut.in_array[i].value = 0

    await RisingEdge(dut.clk)
    dut.rst.value = 1
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)


@cocotb.test()
async def test_reset_clears_out(dut):
    cocotb.start_soon(Clock(dut.clk, 10, "ns").start())
    await reset(dut)

    for i in range(N):
        assert dut.out[i].value.to_signed() == 0


if __name__ == "__main__":
    import pathlib

    sim = os.environ.get("SIM", "verilator")
    src = pathlib.Path(__file__).resolve().parent.parent / "inv_dct_32.sv"

    runner = get_runner(sim)
    runner.build(
        verilog_sources=[str(src)],
        includes=[str(src.parent.parent)],
        hdl_toplevel="inv_dct_32",
        parameters={"N": N},
        build_args=["-Wno-WIDTH", "-Wno-UNSIGNED"],
    )
    runner.test(
        hdl_toplevel="inv_dct_32",
        test_module="test_dct",
    )
