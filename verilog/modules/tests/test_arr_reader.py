import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles
from cocotb_tools.runner import get_runner
import os

N = 32
ADDR_WIDTH = (N * N - 1).bit_length()


async def reset(dut):
    dut.rst.value = 1
    dut.start_read.value = 0
    dut.is_column.value = 0
    dut.start_addr.value = 0
    dut.mem_read_data.value = 0
    await ClockCycles(dut.clk, 3)
    dut.rst.value = 0
    await RisingEdge(dut.clk)


@cocotb.test()
async def test_row_read(dut):
    cocotb.start_soon(Clock(dut.clk, 10, "ns").start())
    await reset(dut)

    mem = {i: (i + 1) * 100 for i in range(N * N)}

    dut.start_read.value = 1
    dut.start_addr.value = 0
    dut.is_column.value = 0
    await RisingEdge(dut.clk)
    dut.start_read.value = 0

    for _ in range(N + 1):
        addr = dut.mem_read_addr.value.to_unsigned()
        dut.mem_read_data.value = mem.get(addr, 0)
        await RisingEdge(dut.clk)

    await RisingEdge(dut.clk)
    assert dut.read_done.value == 1

    for i in range(N):
        val = dut.array[i].value.to_signed()
        expected = mem[i]
        assert val == expected, f"array[{i}] = {val}, expected {expected}"


@cocotb.test()
async def test_column_read(dut):
    cocotb.start_soon(Clock(dut.clk, 10, "ns").start())
    await reset(dut)

    start = 5
    mem = {start + i * N: 0x1000 + i for i in range(N)}

    dut.start_read.value = 1
    dut.start_addr.value = start
    dut.is_column.value = 1
    await RisingEdge(dut.clk)
    dut.start_read.value = 0

    for _ in range(N + 1):
        addr = dut.mem_read_addr.value.to_unsigned()
        dut.mem_read_data.value = mem.get(addr, 0)
        await RisingEdge(dut.clk)

    await RisingEdge(dut.clk)
    assert dut.read_done.value == 1

    for i in range(N):
        val = dut.array[i].value.to_signed()
        expected = mem[start + i * N]
        assert val == expected, f"array[{i}] = {val}, expected {expected}"


@cocotb.test()
async def test_reset_clears_array(dut):
    cocotb.start_soon(Clock(dut.clk, 10, "ns").start())
    await reset(dut)

    for i in range(N):
        assert dut.array[i].value.to_signed() == 0


if __name__ == "__main__":
    import pathlib

    sim = os.environ.get("SIM", "verilator")
    src = pathlib.Path(__file__).resolve().parent.parent / "arr_reader.sv"

    runner = get_runner(sim)
    runner.build(
        verilog_sources=[str(src)],
        hdl_toplevel="arr_reader",
        parameters={"N": N},
    )
    runner.test(
        hdl_toplevel="arr_reader",
        test_module="test_arr_reader",
    )
