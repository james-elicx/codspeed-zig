const std = @import("std");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    // Core Library
    //
    // const libcore = b.addStaticLibrary(.{
    //     .name = "core",
    //     .root_source_file = b.path("src/c.zig"),
    //     .target = b.resolveTargetQuery(.{ .ofmt = .c }),
    //     .optimize = .ReleaseSmall,
    //     .link_libc = true,
    //     .strip = true,
    //     .pic = true,
    // });
    // libcore.no_builtin = true;
    // b.installArtifact(libcore);

    // Module
    {
        const mod = b.addModule("codspeed", .{
            .root_source_file = b.path("src/codspeed.zig"),
            .target = target,
            .optimize = optimize,
            .link_libc = true,
        });
        mod.addCSourceFile(.{ .file = b.path("src/helpers/valgrind_wrapper.c") });
    }

    // Tests
    {
        const test_step = b.step("test", "Run all tests");

        const test_exe = b.addTest(.{
            .name = "codspeed-test",
            .root_module = b.createModule(.{
                .root_source_file = b.path("src/tests.zig"),
                .target = target,
                .optimize = optimize,
                .link_libc = true,
            }),
            .test_runner = .{ .path = b.path("src/tests/runner.zig"), .mode = .simple },
            .use_llvm = true,
        });
        test_exe.addCSourceFile(.{ .file = b.path("src/helpers/valgrind_wrapper.c") });

        const test_run = b.addRunArtifact(test_exe);
        test_step.dependOn(&test_run.step);
    }
}
