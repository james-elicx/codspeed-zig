// Taken from the std library: https://github.com/ziglang/zig/blob/master/lib/std/valgrind/callgrind.zig
// Modifications: Inline every called function, remove unused code.

const valgrind = @import("../valgrind.zig");

pub const ClientRequest = enum(usize) {
    DumpStats = valgrind.ToolBase("CT".*),
    ZeroStats,
    ToggleCollect,
    DumpStatsAt,
    StartInstrumentation,
    StopInstrumentation,
};

inline fn doClientRequestExpr(default: usize, request: ClientRequest, a1: usize, a2: usize, a3: usize, a4: usize, a5: usize) usize {
    return valgrind.doClientRequest(default, @as(usize, @intCast(@intFromEnum(request))), a1, a2, a3, a4, a5);
}

inline fn doClientRequestStmt(request: ClientRequest, a1: usize, a2: usize, a3: usize, a4: usize, a5: usize) void {
    _ = doClientRequestExpr(0, request, a1, a2, a3, a4, a5);
}

/// Dump current state of cost centers, and zero them afterwards.
/// The argument is appended to a string stating the reason which triggered
/// the dump. This string is written as a description field into the
/// profile data dump.
pub inline fn dumpStatsAt(pos_str: [*:0]const u8) void {
    doClientRequestStmt(.DumpStatsAt, @intFromPtr(pos_str), 0, 0, 0, 0);
}

/// Zero cost centers
pub inline fn zeroStats() void {
    doClientRequestStmt(.ZeroStats, 0, 0, 0, 0, 0);
}

/// Start full callgrind instrumentation if not already switched on.
/// When cache simulation is done, it will flush the simulated cache;
/// this will lead to an artificial cache warmup phase afterwards with
/// cache misses which would not have happened in reality.
pub inline fn startInstrumentation() void {
    doClientRequestStmt(.StartInstrumentation, 0, 0, 0, 0, 0);
}

/// Stop full callgrind instrumentation if not already switched off.
/// This flushes Valgrinds translation cache, and does no additional
/// instrumentation afterwards, which effectively will run at the same
/// speed as the "none" tool (ie. at minimal slowdown).
/// Use this to bypass Callgrind aggregation for uninteresting code parts.
/// To start Callgrind in this mode to ignore the setup phase, use
/// the option "--instr-atstart=no".
pub inline fn stopInstrumentation() void {
    doClientRequestStmt(.StopInstrumentation, 0, 0, 0, 0, 0);
}
