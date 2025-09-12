const std = @import("std");

const features = @import("../features.zig");
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
        return valgrind.running_on_valgrind() > 0;
    }

    pub inline fn set_integration(self: Self, name: []const u8, version: []const u8) !void {
        const metadata_ = try std.fmt.allocPrint(
            self.allocator,
            "Metadata: {s} {s}",
            .{ name, version },
        );
        defer self.allocator.free(metadata_);

        const metadata = try self.allocator.dupeZ(u8, metadata_);
        defer self.allocator.free(metadata);

        valgrind.callgrind_dump_stats_at(metadata.ptr);
    }

    pub inline fn start_benchmark() void {
        if (!features.is_feature_enabled(.disable_callgrind_markers)) {
            valgrind.callgrind_zero_stats();
            valgrind.callgrind_start_instrumentation();
        }
    }

    pub inline fn stop_benchmark() void {
        if (!features.is_feature_enabled(.disable_callgrind_markers)) {
            valgrind.callgrind_stop_instrumentation();
        }
    }

    pub inline fn set_executed_benchmark(self: Self, pid: u32, uri_: []const u8) !void {
        _ = pid;

        const uri = try self.allocator.dupeZ(u8, uri_);
        defer self.allocator.free(uri);

        valgrind.callgrind_dump_stats_at(uri.ptr);
    }
};
