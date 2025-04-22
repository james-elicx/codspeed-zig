// Taken from the std library: https://github.com/ziglang/zig/blob/master/lib/std/valgrind.zig
// Modifications: Inline every called function, remove unused code, always run doClientRequest.

const builtin = @import("builtin");
const std = @import("std");
const math = std.math;

pub inline fn doClientRequest(default: usize, request: usize, a1: usize, a2: usize, a3: usize, a4: usize, a5: usize) usize {
    const args = &[_]usize{ request, a1, a2, a3, a4, a5 };

    return switch (builtin.cpu.arch) {
        .arm, .armeb, .thumb, .thumbeb => asm volatile (
            \\ mov r12, r12, ror #3  ; mov r12, r12, ror #13
            \\ mov r12, r12, ror #29 ; mov r12, r12, ror #19
            \\ orr r10, r10, r10
            : [_] "={r3}" (-> usize),
            : [_] "{r4}" (args),
              [_] "{r3}" (default),
            : "cc", "memory"
        ),
        .aarch64, .aarch64_be => asm volatile (
            \\ ror x12, x12, #3  ; ror x12, x12, #13
            \\ ror x12, x12, #51 ; ror x12, x12, #61
            \\ orr x10, x10, x10
            : [_] "={x3}" (-> usize),
            : [_] "{x4}" (args),
              [_] "{x3}" (default),
            : "cc", "memory"
        ),
        .mips, .mipsel => asm volatile (
            \\ srl $0,  $0,  13
            \\ srl $0,  $0,  29
            \\ srl $0,  $0,  3
            \\ srl $0,  $0,  19
            \\ or  $13, $13, $13
            : [_] "={$11}" (-> usize),
            : [_] "{$12}" (args),
              [_] "{$11}" (default),
            : "memory"
        ),
        .mips64, .mips64el => asm volatile (
            \\ dsll $0,  $0,  3   ; dsll $0, $0, 13
            \\ dsll $0,  $0,  29  ; dsll $0, $0, 19
            \\ or   $13, $13, $13
            : [_] "={$11}" (-> usize),
            : [_] "{$12}" (args),
              [_] "{$11}" (default),
            : "memory"
        ),
        .powerpc, .powerpcle => asm volatile (
            \\ rlwinm 0, 0, 3,  0, 31 ; rlwinm 0, 0, 13, 0, 31
            \\ rlwinm 0, 0, 29, 0, 31 ; rlwinm 0, 0, 19, 0, 31
            \\ or     1, 1, 1
            : [_] "={r3}" (-> usize),
            : [_] "{r4}" (args),
              [_] "{r3}" (default),
            : "cc", "memory"
        ),
        .powerpc64, .powerpc64le => asm volatile (
            \\ rotldi 0, 0, 3  ; rotldi 0, 0, 13
            \\ rotldi 0, 0, 61 ; rotldi 0, 0, 51
            \\ or     1, 1, 1
            : [_] "={r3}" (-> usize),
            : [_] "{r4}" (args),
              [_] "{r3}" (default),
            : "cc", "memory"
        ),
        .s390x => asm volatile (
            \\ lr %%r15, %%r15
            \\ lr %%r1,  %%r1
            \\ lr %%r2,  %%r2
            \\ lr %%r3,  %%r3
            \\ lr %%r2,  %%r2
            : [_] "={r3}" (-> usize),
            : [_] "{r2}" (args),
              [_] "{r3}" (default),
            : "cc", "memory"
        ),
        .x86 => asm volatile (
            \\ roll  $3,    %%edi ; roll $13, %%edi
            \\ roll  $29,   %%edi ; roll $19, %%edi
            \\ xchgl %%ebx, %%ebx
            : [_] "={edx}" (-> usize),
            : [_] "{eax}" (args),
              [_] "{edx}" (default),
            : "cc", "memory"
        ),
        .x86_64 => asm volatile (
            \\ rolq  $3,    %%rdi ; rolq $13, %%rdi
            \\ rolq  $61,   %%rdi ; rolq $51, %%rdi
            \\ xchgq %%rbx, %%rbx
            : [_] "={rdx}" (-> usize),
            : [_] "{rax}" (args),
              [_] "{rdx}" (default),
            : "cc", "memory"
        ),
        else => default,
    };
}

pub const ClientRequest = enum(u32) {
    RunningOnValgrind = 4097,
    DiscardTranslations = 4098,
    ClientCall0 = 4353,
    ClientCall1 = 4354,
    ClientCall2 = 4355,
    ClientCall3 = 4356,
    CountErrors = 4609,
    GdbMonitorCommand = 4610,
    MalloclikeBlock = 4865,
    ResizeinplaceBlock = 4875,
    FreelikeBlock = 4866,
    CreateMempool = 4867,
    DestroyMempool = 4868,
    MempoolAlloc = 4869,
    MempoolFree = 4870,
    MempoolTrim = 4871,
    MoveMempool = 4872,
    MempoolChange = 4873,
    MempoolExists = 4874,
    Printf = 5121,
    PrintfBacktrace = 5122,
    PrintfValistByRef = 5123,
    PrintfBacktraceValistByRef = 5124,
    StackRegister = 5377,
    StackDeregister = 5378,
    StackChange = 5379,
    LoadPdbDebuginfo = 5633,
    MapIpToSrcloc = 5889,
    ChangeErrDisablement = 6145,
    VexInitForIri = 6401,
    InnerThreads = 6402,
};
pub fn ToolBase(base: [2]u8) u32 {
    return (@as(u32, base[0] & 0xff) << 24) | (@as(u32, base[1] & 0xff) << 16);
}

inline fn doClientRequestExpr(default: usize, request: ClientRequest, a1: usize, a2: usize, a3: usize, a4: usize, a5: usize) usize {
    return doClientRequest(default, @as(usize, @intCast(@intFromEnum(request))), a1, a2, a3, a4, a5);
}

/// Returns the number of Valgrinds this code is running under.  That
/// is, 0 if running natively, 1 if running under Valgrind, 2 if
/// running under Valgrind which is running under another Valgrind,
/// etc.
pub inline fn runningOnValgrind() usize {
    return doClientRequestExpr(0, .RunningOnValgrind, 0, 0, 0, 0, 0);
}

test "works whether running on valgrind or not" {
    _ = runningOnValgrind();
}

pub const callgrind = @import("valgrind/callgrind.zig");
