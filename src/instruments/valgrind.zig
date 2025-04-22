const std = @import("std");
const valgrind = @import("../helpers/valgrind.zig");

pub const ValgrindInstrument = struct {
    allocator: std.mem.Allocator,
    const Self = @This();

    pub fn init(allocator: std.mem.Allocator) Self {
        return Self{
            .allocator = allocator,
        };
    }

    pub inline fn is_instrumented() bool {
        return valgrind.runningOnValgrind() > 0;
    }

    pub inline fn set_integration(self: Self, name: [*c]const u8, version: [*c]const u8) !void {
        const metadata = try std.fmt.allocPrintZ(
            self.allocator,
            "Metadata: {s} {s}",
            .{ name, version },
        );
        defer self.allocator.free(metadata);

        valgrind.callgrind.dumpStatsAt(metadata.ptr);
    }

    pub inline fn start_benchmark() void {
        valgrind.callgrind.zeroStats();
        valgrind.callgrind.startInstrumentation();
    }

    pub inline fn stop_benchmark() void {
        valgrind.callgrind.stopInstrumentation();
    }

    pub inline fn current_benchmark(pid: u32, uri: [*c]const u8) void {
        _ = pid;
        valgrind.callgrind.dumpStatsAt(uri);
    }
};
