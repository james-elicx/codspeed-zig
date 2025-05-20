#define ZIG_TARGET_MAX_INT_ALIGNMENT 16
#include "zig.h"
struct anon__lazy_58 {
 uint8_t const *ptr;
 uintptr_t len;
};
struct fifo_UnixPipe_Writer__538;
typedef struct anon__lazy_70 nav__987_39;
struct mem_Allocator__206;
typedef struct anon__lazy_58 nav__987_42;
struct mem_Allocator_VTable__209;
struct mem_Allocator__206 {
 void *ptr;
 struct mem_Allocator_VTable__209 const *vtable;
};
struct fs_File__546;
struct fs_File__546 {
 int32_t handle;
};
struct fifo_UnixPipe_Writer__538 {
 struct mem_Allocator__206 allocator;
 struct fs_File__546 file;
};
struct anon__lazy_70 {
 struct fifo_UnixPipe_Writer__538 payload;
 uint16_t error;
};
struct fs_File_OpenFlags__1820;
struct fs_File_OpenFlags__1820 {
 uint8_t mode;
 uint8_t lock;
 bool lock_nonblocking;
 bool allow_ctty;
};
typedef struct anon__lazy_84 nav__987_56;
struct anon__lazy_84 {
 struct fs_File__546 payload;
 uint16_t error;
};
struct fifo_UnixPipe_Reader__540;
typedef struct anon__lazy_87 nav__986_39;
typedef struct anon__lazy_58 nav__986_42;
struct fifo_UnixPipe_Reader__540 {
 struct mem_Allocator__206 allocator;
 struct fs_File__546 file;
};
struct anon__lazy_87 {
 struct fifo_UnixPipe_Reader__540 payload;
 uint16_t error;
};
typedef struct anon__lazy_84 nav__986_56;
struct instruments_perf_PerfInstrument__200;
typedef struct anon__lazy_93 nav__337_39;
struct instruments_perf_PerfInstrument__200 {
 struct mem_Allocator__206 allocator;
 struct fifo_UnixPipe_Writer__538 writer;
 struct fifo_UnixPipe_Reader__540 reader;
};
struct anon__lazy_93 {
 struct instruments_perf_PerfInstrument__200 payload;
 uint16_t error;
};
typedef struct anon__lazy_58 nav__337_59;
typedef struct anon__lazy_70 nav__337_61;
typedef struct anon__lazy_87 nav__337_66;
struct instruments_root_InstrumentHooks__188;
typedef struct anon__lazy_104 nav__314_39;
struct instruments_valgrind_ValgrindInstrument__195;
struct instruments_valgrind_ValgrindInstrument__195 {
 struct mem_Allocator__206 allocator;
};
struct instruments_root_InstrumentHooks__188 {
 union {
  struct instruments_valgrind_ValgrindInstrument__195 valgrind;
  struct instruments_perf_PerfInstrument__200 perf;
 } payload;
 uint8_t tag;
};
struct anon__lazy_104 {
 struct instruments_root_InstrumentHooks__188 payload;
 uint16_t error;
};
typedef struct anon__lazy_93 nav__314_60;
typedef struct anon__lazy_114 nav__231_46;
struct anon__lazy_114 {
 struct instruments_root_InstrumentHooks__188 *payload;
 uint16_t error;
};
typedef struct anon__lazy_119 nav__231_51;
struct mem_Allocator_VTable__209 {
 uint8_t *(*alloc)(void *, uintptr_t, uint8_t, uintptr_t);
 bool (*resize)(void *, struct anon__lazy_119, uint8_t, uintptr_t, uintptr_t);
 uint8_t *(*remap)(void *, struct anon__lazy_119, uint8_t, uintptr_t, uintptr_t);
 void (*free)(void *, struct anon__lazy_119, uint8_t, uintptr_t);
};
typedef struct anon__lazy_58 nav__231_60;
typedef struct anon__lazy_127 nav__231_62;
struct anon__lazy_127 {
 struct anon__lazy_58 f0;
};
typedef struct anon__lazy_104 nav__231_76;
typedef struct anon__lazy_114 nav__3488_40;
typedef struct anon__lazy_132 nav__3488_51;
struct anon__lazy_132 {
 uint8_t *payload;
 uint16_t error;
};
typedef struct anon__lazy_58 nav__3489_39;
typedef struct anon__lazy_127 nav__3489_40;
struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934;
struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 {
 struct fs_File__546 context;
};
struct io_Writer__1950;
typedef struct anon__lazy_143 nav__3489_54;
struct io_Writer__1950 {
 void const *context;
 struct anon__lazy_143 (*writeFn)(void const *, struct anon__lazy_58);
};
struct anon__lazy_143 {
 uintptr_t payload;
 uint16_t error;
};
typedef struct anon__lazy_58 nav__1053_39;
struct fs_Dir__1822;
struct fs_Dir__1822 {
 int32_t fd;
};
typedef struct anon__lazy_84 nav__1050_39;
typedef struct anon__lazy_58 nav__1050_41;
struct shared_Command__2004;
struct shared_Command__struct_2007__2007;
typedef struct anon__lazy_58 nav__991_44;
struct shared_Command__struct_2007__2007 {
 struct anon__lazy_58 uri;
 uint32_t pid;
};
struct shared_Command__struct_2008__2008;
struct shared_Command__struct_2008__2008 {
 struct anon__lazy_58 name;
 struct anon__lazy_58 version;
};
struct shared_Command__2004 {
 union {
  struct shared_Command__struct_2007__2007 ExecutedBenchmark;
  struct shared_Command__struct_2008__2008 SetIntegration;
 } payload;
 uint8_t tag;
};
struct array_list_ArrayListAligned_28u8_2cnull_29__2035;
typedef struct anon__lazy_119 nav__991_55;
struct anon__lazy_119 {
 uint8_t *ptr;
 uintptr_t len;
};
struct array_list_ArrayListAligned_28u8_2cnull_29__2035 {
 struct anon__lazy_119 items;
 uintptr_t capacity;
 struct mem_Allocator__206 allocator;
};
struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060;
struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *context;
};
typedef struct anon__lazy_184 nav__4200_38;
struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230;
struct anon__lazy_184 {
 uint32_t payload;
 uint16_t error;
};
struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207;
struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *context;
};
struct io_Reader__2355;
typedef struct anon__lazy_143 nav__4200_50;
typedef struct anon__lazy_119 nav__4200_52;
struct io_Reader__2355 {
 void const *context;
 struct anon__lazy_143 (*readFn)(void const *, struct anon__lazy_119);
};
typedef struct anon__lazy_202 nav__4200_64;
struct anon__lazy_202 {
 uint16_t error;
 uint8_t payload[4];
};
typedef struct anon__lazy_184 nav__4199_38;
typedef struct anon__lazy_119 nav__4242_39;
typedef struct anon__lazy_206 nav__4242_40;
struct anon__lazy_206 {
 struct anon__lazy_119 payload;
 uint16_t error;
};
typedef struct anon__lazy_143 nav__4242_59;
typedef struct anon__lazy_210 nav__4242_69;
struct anon__lazy_210 {
 uint64_t payload;
 uint16_t error;
};
typedef struct anon__lazy_212 nav__4242_72;
struct anon__lazy_212 {
 uint16_t error;
 uint8_t payload[8];
};
typedef struct anon__lazy_58 nav__4241_39;
typedef struct anon__lazy_215 nav__4241_40;
struct anon__lazy_215 {
 struct anon__lazy_58 payload;
 uint16_t error;
};
typedef struct anon__lazy_119 nav__4241_55;
typedef struct anon__lazy_206 nav__4241_57;
typedef struct anon__lazy_219 nav__4240_39;
typedef struct anon__lazy_58 nav__4240_44;
struct anon__lazy_219 {
 struct shared_Command__struct_2007__2007 payload;
 uint16_t error;
};
typedef struct anon__lazy_184 nav__4240_57;
typedef struct anon__lazy_215 nav__4240_60;
typedef struct anon__lazy_219 nav__4239_39;
typedef struct anon__lazy_58 nav__4239_44;
typedef struct anon__lazy_227 nav__4247_39;
typedef struct anon__lazy_58 nav__4247_44;
struct anon__lazy_227 {
 struct shared_Command__struct_2008__2008 payload;
 uint16_t error;
};
typedef struct anon__lazy_215 nav__4247_57;
typedef struct anon__lazy_227 nav__4246_39;
typedef struct anon__lazy_58 nav__4246_44;
typedef struct anon__lazy_231 nav__4198_39;
typedef struct anon__lazy_58 nav__4198_45;
struct anon__lazy_231 {
 struct shared_Command__2004 payload;
 uint16_t error;
};
typedef struct anon__lazy_184 nav__4198_61;
typedef struct anon__lazy_219 nav__4198_63;
typedef struct anon__lazy_227 nav__4198_65;
typedef struct anon__lazy_231 nav__4197_39;
typedef struct anon__lazy_58 nav__4197_45;
typedef struct anon__lazy_231 nav__996_39;
typedef struct anon__lazy_58 nav__996_45;
typedef struct anon__lazy_119 nav__996_66;
typedef struct anon__lazy_143 nav__996_69;
typedef struct anon__lazy_206 nav__996_73;
struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 {
 struct anon__lazy_119 buffer;
 uintptr_t pos;
};
typedef struct anon__lazy_231 nav__997_39;
typedef struct anon__lazy_240 nav__997_42;
typedef struct anon__lazy_58 nav__997_46;
struct anon__lazy_240 {
 uint64_t payload;
 bool is_null;
};
typedef struct anon__lazy_240 nav__998_40;
typedef struct anon__lazy_58 nav__998_48;
typedef struct anon__lazy_231 nav__998_55;
typedef struct anon__lazy_58 nav__339_44;
typedef struct anon__lazy_240 nav__339_67;
typedef struct anon__lazy_58 nav__340_45;
typedef struct anon__lazy_132 nav__3738_39;
typedef struct anon__lazy_119 nav__3738_52;
typedef struct anon__lazy_143 nav__3818_38;
typedef struct anon__lazy_58 nav__3818_41;
typedef struct anon__lazy_58 nav__3835_40;
typedef struct anon__lazy_127 nav__3835_41;
typedef struct anon__lazy_143 nav__3835_44;
typedef struct anon__lazy_58 nav__3870_39;
typedef struct anon__lazy_58 nav__3694_40;
typedef struct anon__lazy_272 nav__3694_49;
struct anon__lazy_272 {
 uint16_t error;
 uint8_t payload[4096];
};
typedef struct anon__lazy_84 nav__3630_39;
typedef struct anon__lazy_58 nav__3630_42;
typedef struct anon__lazy_272 nav__3630_53;
typedef struct anon__lazy_119 nav__3983_42;
typedef struct anon__lazy_58 nav__4089_46;
typedef struct anon__lazy_119 nav__3985_41;
typedef struct anon__lazy_58 nav__1144_40;
typedef struct anon__lazy_143 nav__1144_47;
struct os_linux_timespec__struct_2817__2817;
struct os_linux_timespec__struct_2817__2817 {
 intptr_t sec;
 intptr_t nsec;
};
typedef struct anon__lazy_294 nav__4103_41;
struct anon__lazy_294 {
 struct os_linux_timespec__struct_2817__2817 payload;
 uint16_t error;
};
typedef struct anon__lazy_143 nav__1134_38;
typedef struct anon__lazy_119 nav__1134_41;
typedef struct anon__lazy_119 nav__4131_39;
typedef struct anon__lazy_206 nav__4131_40;
typedef struct anon__lazy_132 nav__4131_51;
typedef struct anon__lazy_119 nav__4163_40;
typedef struct anon__lazy_143 nav__4196_38;
typedef struct anon__lazy_119 nav__4196_41;
typedef struct anon__lazy_202 nav__4238_39;
typedef struct anon__lazy_143 nav__4238_44;
typedef struct anon__lazy_119 nav__4238_46;
typedef struct anon__lazy_212 nav__4243_39;
typedef struct anon__lazy_143 nav__4243_44;
typedef struct anon__lazy_119 nav__4243_46;
typedef struct anon__lazy_143 nav__4203_38;
typedef struct anon__lazy_119 nav__4203_41;
typedef struct anon__lazy_58 nav__4244_40;
typedef struct anon__lazy_315 nav__4244_42;
struct anon__lazy_315 {
 uintptr_t payload;
 bool is_null;
};
typedef struct anon__lazy_119 nav__4248_40;
struct cimport_struct_timespec__2991;
struct cimport_struct_timespec__2991 {
 long tv_sec;
 long tv_nsec;
};
typedef struct anon__lazy_325 nav__4253_42;
struct anon__lazy_325 {
 long payload;
 bool is_null;
};
typedef struct anon__lazy_58 nav__3933_43;
struct Thread_Mutex_Recursive__3148;
struct Thread_Mutex__3146;
struct Thread_Mutex_FutexImpl__3172;
struct atomic_Value_28u32_29__3128;
struct atomic_Value_28u32_29__3128 {
 uint32_t raw;
};
struct Thread_Mutex_FutexImpl__3172 {
 struct atomic_Value_28u32_29__3128 state;
};
struct Thread_Mutex__3146 {
 struct Thread_Mutex_FutexImpl__3172 impl;
};
struct Thread_Mutex_Recursive__3148 {
 uintptr_t lock_count;
 struct Thread_Mutex__3146 mutex;
 uint32_t thread_id;
};
typedef struct anon__lazy_143 nav__1143_38;
typedef struct anon__lazy_58 nav__1143_41;
typedef struct anon__lazy_58 nav__4480_40;
typedef struct anon__lazy_127 nav__4480_41;
typedef struct anon__lazy_143 nav__4480_44;
struct fmt_FormatOptions__3656;
typedef struct anon__lazy_315 nav__4480_55;
struct fmt_FormatOptions__3656 {
 struct anon__lazy_315 precision;
 struct anon__lazy_315 width;
 uint32_t fill;
 uint8_t alignment;
};
typedef struct anon__lazy_58 nav__3876_39;
typedef struct anon__lazy_272 nav__1628_39;
typedef struct anon__lazy_58 nav__1628_41;
typedef struct anon__lazy_119 nav__1628_47;
typedef struct anon__lazy_84 nav__3631_39;
typedef struct anon__lazy_354 nav__3631_50;
struct anon__lazy_354 {
 int32_t payload;
 uint16_t error;
};
typedef struct anon__lazy_58 nav__4493_46;
typedef struct anon__lazy_119 nav__4031_39;
typedef struct anon__lazy_294 nav__1544_39;
typedef struct anon__lazy_143 nav__1133_38;
typedef struct anon__lazy_119 nav__1133_41;
typedef struct anon__lazy_132 nav__4494_39;
typedef struct anon__lazy_143 nav__4494_49;
typedef struct anon__lazy_143 nav__4155_38;
typedef struct anon__lazy_119 nav__4155_42;
typedef struct anon__lazy_119 nav__4205_40;
typedef struct anon__lazy_143 nav__4205_43;
typedef struct anon__lazy_143 nav__4204_38;
typedef struct anon__lazy_119 nav__4204_41;
typedef struct anon__lazy_58 nav__4496_39;
typedef struct anon__lazy_315 nav__4496_40;
typedef struct anon__lazy_119 nav__4523_39;
typedef struct anon__lazy_325 nav__5369_38;
typedef struct anon__lazy_58 nav__6140_40;
typedef struct anon__lazy_119 nav__6140_51;
struct Progress__2682;
struct Thread__3078;
struct Thread_PosixThreadImpl__3109;
struct Thread_PosixThreadImpl__3109 {
 void *handle;
};
struct Thread__3078 {
 struct Thread_PosixThreadImpl__3109 impl;
};
typedef struct anon__lazy_385 nav__4292_45;
struct anon__lazy_385 {
 struct Thread__3078 payload;
 bool is_null;
};
typedef struct anon__lazy_119 nav__4292_48;
struct Progress_Node_Storage__3095;
typedef struct anon__lazy_389 nav__4292_52;
struct anon__lazy_389 {
 struct Progress_Node_Storage__3095 *ptr;
 uintptr_t len;
};
struct Thread_ResetEvent__3081;
struct Thread_ResetEvent_FutexImpl__3120;
struct Thread_ResetEvent_FutexImpl__3120 {
 struct atomic_Value_28u32_29__3128 state;
};
struct Thread_ResetEvent__3081 {
 struct Thread_ResetEvent_FutexImpl__3120 impl;
};
struct Progress_TerminalMode__3076;
struct Progress_TerminalMode__3076 {
 uint8_t tag;
};
struct Progress__2682 {
 struct anon__lazy_385 update_thread;
 uint64_t refresh_rate_ns;
 uint64_t initial_delay_ns;
 struct anon__lazy_119 draw_buffer;
 struct anon__lazy_119 node_parents;
 struct anon__lazy_389 node_storage;
 struct anon__lazy_119 node_freelist;
 struct fs_File__546 terminal;
 struct Thread_ResetEvent__3081 redraw_event;
 uint32_t node_end_index;
 uint16_t rows;
 uint16_t cols;
 struct Progress_TerminalMode__3076 terminal_mode;
 bool done;
 bool need_clear;
 uint8_t node_freelist_first;
};
typedef struct anon__lazy_58 nav__4292_68;
typedef struct anon__lazy_143 nav__1363_38;
typedef struct anon__lazy_58 nav__1363_40;
typedef struct anon__lazy_58 nav__3826_40;
typedef struct anon__lazy_143 nav__3826_43;
typedef struct anon__lazy_58 nav__6704_39;
typedef struct anon__lazy_315 nav__6704_44;
typedef struct anon__lazy_143 nav__6704_48;
typedef struct anon__lazy_354 nav__1375_38;
typedef struct anon__lazy_58 nav__6830_45;
typedef struct anon__lazy_58 nav__6832_45;
typedef struct anon__lazy_143 nav__1355_38;
typedef struct anon__lazy_119 nav__1355_40;
typedef struct anon__lazy_143 nav__6836_38;
typedef struct anon__lazy_426 nav__6836_42;
struct anon__lazy_426 {
 uintptr_t f0;
 uint8_t f1;
};
typedef struct anon__lazy_132 nav__6837_39;
typedef struct anon__lazy_119 nav__6837_52;
typedef struct anon__lazy_143 nav__4202_38;
typedef struct anon__lazy_119 nav__4202_41;
typedef struct anon__lazy_58 nav__6838_39;
typedef struct anon__lazy_58 nav__4311_39;
typedef struct anon__lazy_385 nav__4311_52;
typedef struct anon__lazy_119 nav__4311_55;
typedef struct anon__lazy_389 nav__4311_59;
typedef struct anon__lazy_143 nav__3825_38;
typedef struct anon__lazy_58 nav__3825_41;
typedef struct anon__lazy_442 nav__6349_38;
struct anon__lazy_442 {
 uint16_t error;
 uint8_t payload;
};
typedef struct anon__lazy_143 nav__6365_38;
typedef struct anon__lazy_58 nav__6365_40;
typedef struct anon__lazy_442 nav__6365_48;
typedef struct anon__lazy_184 nav__6365_50;
typedef struct anon__lazy_58 nav__6841_39;
typedef struct anon__lazy_315 nav__6841_44;
typedef struct anon__lazy_143 nav__6841_48;
typedef struct anon__lazy_119 nav__6841_57;
typedef struct anon__lazy_442 nav__6841_60;
typedef struct anon__lazy_143 nav__6845_48;
typedef struct anon__lazy_58 nav__6845_50;
typedef struct anon__lazy_58 nav__6846_45;
typedef struct anon__lazy_58 nav__6847_45;
typedef struct anon__lazy_184 nav__6355_38;
typedef struct anon__lazy_58 nav__6355_40;
typedef struct anon__lazy_460 nav__6355_48;
struct anon__lazy_460 {
 uint8_t array[2];
};
typedef struct anon__lazy_462 nav__6355_52;
struct anon__lazy_462 {
 uint8_t array[3];
};
typedef struct anon__lazy_464 nav__6355_56;
struct anon__lazy_464 {
 uint8_t array[4];
};
typedef struct anon__lazy_442 nav__6348_38;
typedef struct anon__lazy_442 nav__6861_38;
typedef struct anon__lazy_119 nav__6861_40;
typedef struct anon__lazy_442 nav__6350_38;
typedef struct anon__lazy_119 nav__6350_40;
typedef struct anon__lazy_58 nav__3830_40;
typedef struct anon__lazy_143 nav__3830_43;
typedef struct anon__lazy_143 nav__4088_38;
typedef struct anon__lazy_58 nav__4088_41;
typedef struct anon__lazy_58 nav__6850_40;
typedef struct anon__lazy_477 nav__6854_39;
struct anon__lazy_477 {
 uint32_t payload;
 bool is_null;
};
typedef struct anon__lazy_184 nav__6357_38;
typedef struct anon__lazy_460 nav__6357_40;
typedef struct anon__lazy_184 nav__6359_38;
typedef struct anon__lazy_462 nav__6359_40;
typedef struct anon__lazy_184 nav__6363_38;
typedef struct anon__lazy_464 nav__6363_40;
typedef struct anon__lazy_143 nav__4009_38;
typedef struct anon__lazy_58 nav__4009_42;
typedef struct anon__lazy_58 nav__6890_40;
typedef struct anon__lazy_143 nav__6890_51;
typedef struct anon__lazy_240 nav__6871_41;
typedef struct anon__lazy_184 nav__6361_38;
typedef struct anon__lazy_462 nav__6361_40;
typedef struct anon__lazy_493 nav__6935_45;
struct anon__lazy_493 {
 int32_t payload;
 bool is_null;
};
typedef struct anon__lazy_58 nav__4003_41;
typedef struct anon__lazy_240 nav__6934_40;
typedef struct anon__lazy_493 nav__6973_38;
typedef struct anon__lazy_119 nav__4022_43;
typedef struct anon__lazy_143 nav__4022_52;
typedef struct anon__lazy_58 nav__4004_41;
typedef struct anon__lazy_119 nav__4004_47;
typedef struct anon__lazy_143 nav__3947_38;
typedef struct anon__lazy_426 nav__3947_42;
typedef struct anon__lazy_119 nav__4020_43;
typedef struct anon__lazy_119 nav__4021_43;
typedef struct anon__lazy_206 nav__4021_55;
typedef struct anon__lazy_119 nav__7033_39;
typedef struct anon__lazy_143 nav__7033_50;
typedef struct anon__lazy_119 nav__7034_39;
typedef struct anon__lazy_206 nav__7034_40;
typedef struct anon__lazy_132 nav__7034_51;
typedef struct anon__lazy_119 nav__7035_39;
typedef struct anon__lazy_119 nav__232_63;
typedef struct anon__lazy_119 nav__7036_52;
typedef struct anon__lazy_58 nav__341_58;
typedef struct anon__lazy_240 nav__341_66;
typedef struct anon__lazy_58 nav__234_61;
typedef struct anon__lazy_127 nav__234_63;
typedef struct anon__lazy_58 nav__7039_39;
typedef struct anon__lazy_127 nav__7039_40;
typedef struct anon__lazy_143 nav__7039_54;
typedef struct anon__lazy_58 nav__7040_40;
typedef struct anon__lazy_127 nav__7040_41;
typedef struct anon__lazy_143 nav__7040_44;
typedef struct anon__lazy_58 nav__7041_40;
typedef struct anon__lazy_127 nav__7041_41;
typedef struct anon__lazy_143 nav__7041_44;
typedef struct anon__lazy_315 nav__7041_55;
typedef struct anon__lazy_58 nav__342_58;
typedef struct anon__lazy_240 nav__342_66;
typedef struct anon__lazy_58 nav__235_61;
typedef struct anon__lazy_127 nav__235_63;
typedef struct anon__lazy_58 nav__7043_39;
typedef struct anon__lazy_127 nav__7043_40;
typedef struct anon__lazy_143 nav__7043_54;
typedef struct anon__lazy_58 nav__7044_40;
typedef struct anon__lazy_127 nav__7044_41;
typedef struct anon__lazy_143 nav__7044_44;
typedef struct anon__lazy_58 nav__7045_40;
typedef struct anon__lazy_127 nav__7045_41;
typedef struct anon__lazy_143 nav__7045_44;
typedef struct anon__lazy_315 nav__7045_55;
typedef struct anon__lazy_58 nav__343_56;
typedef struct anon__lazy_240 nav__343_66;
typedef struct anon__lazy_58 nav__236_61;
typedef struct anon__lazy_127 nav__236_63;
typedef struct anon__lazy_58 nav__7047_39;
typedef struct anon__lazy_58 nav__7048_39;
typedef struct anon__lazy_127 nav__7048_40;
typedef struct anon__lazy_143 nav__7048_54;
typedef struct anon__lazy_58 nav__7050_40;
typedef struct anon__lazy_127 nav__7050_41;
typedef struct anon__lazy_143 nav__7050_44;
typedef struct anon__lazy_542 nav__7051_45;
struct anon__lazy_542 {
 bool array[32];
};
typedef struct anon__lazy_544 nav__7051_47;
struct anon__lazy_544 {
 bool is_null;
 uint8_t payload;
};
typedef struct anon__lazy_58 nav__7052_40;
typedef struct anon__lazy_127 nav__7052_41;
typedef struct anon__lazy_143 nav__7052_44;
typedef struct anon__lazy_315 nav__7052_55;
typedef struct anon__lazy_544 nav__7060_38;
typedef struct anon__lazy_542 nav__7060_40;
typedef struct anon__lazy_58 nav__344_56;
typedef struct anon__lazy_240 nav__344_66;
typedef struct anon__lazy_559 nav__237_62;
struct anon__lazy_559 {
 uint8_t const *f0;
 uint8_t const *f1;
};
typedef struct anon__lazy_119 nav__237_65;
typedef struct anon__lazy_206 nav__237_67;
typedef struct anon__lazy_58 nav__237_71;
typedef struct anon__lazy_127 nav__237_73;
typedef struct anon__lazy_119 nav__7068_39;
typedef struct anon__lazy_206 nav__7068_40;
typedef struct anon__lazy_559 nav__7068_43;
typedef struct anon__lazy_119 nav__7069_40;
typedef struct anon__lazy_58 nav__7070_39;
typedef struct anon__lazy_127 nav__7070_40;
typedef struct anon__lazy_143 nav__7070_54;
typedef struct anon__lazy_119 nav__7071_39;
typedef struct anon__lazy_206 nav__7071_40;
typedef struct anon__lazy_559 nav__7071_43;
typedef struct anon__lazy_315 nav__7071_54;
typedef struct anon__lazy_119 nav__7072_39;
typedef struct anon__lazy_58 nav__7073_40;
typedef struct anon__lazy_127 nav__7073_41;
typedef struct anon__lazy_143 nav__7073_44;
typedef struct anon__lazy_559 nav__7116_40;
typedef struct anon__lazy_143 nav__7116_43;
typedef struct anon__lazy_58 nav__7116_44;
typedef struct anon__lazy_315 nav__7116_55;
typedef struct anon__lazy_559 nav__7074_39;
struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959;
struct io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29__5951;
struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 {
 uint64_t bytes_written;
};
struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__5973;
struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__5973 {
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *context;
};
typedef struct anon__lazy_143 nav__7074_53;
typedef struct anon__lazy_58 nav__7074_54;
typedef struct anon__lazy_315 nav__7075_38;
typedef struct anon__lazy_119 nav__7076_39;
typedef struct anon__lazy_206 nav__7076_40;
typedef struct anon__lazy_559 nav__7076_42;
struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6070;
struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6070 {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *context;
};
typedef struct anon__lazy_143 nav__7076_57;
typedef struct anon__lazy_58 nav__7076_58;
typedef struct anon__lazy_58 nav__7077_40;
typedef struct anon__lazy_127 nav__7077_41;
typedef struct anon__lazy_143 nav__7077_44;
typedef struct anon__lazy_315 nav__7077_55;
typedef struct anon__lazy_143 nav__7115_38;
typedef struct anon__lazy_58 nav__7115_41;
typedef struct anon__lazy_315 nav__7117_42;
typedef struct anon__lazy_143 nav__7117_46;
typedef struct anon__lazy_58 nav__7117_47;
typedef struct anon__lazy_143 nav__7130_38;
typedef struct anon__lazy_58 nav__7130_41;
typedef struct anon__lazy_119 nav__4161_39;
typedef struct anon__lazy_143 nav__7100_38;
typedef struct anon__lazy_58 nav__7100_42;
typedef struct anon__lazy_143 nav__4156_38;
typedef struct anon__lazy_58 nav__4156_42;
typedef struct anon__lazy_119 nav__4156_50;
typedef struct anon__lazy_143 nav__3796_38;
typedef struct anon__lazy_58 nav__3796_40;
struct Target_Os__563;
union Target_Os_VersionRange__619;
struct SemanticVersion_Range__625;
struct SemanticVersion__623;
typedef struct anon__lazy_58 nav__250_43;
struct SemanticVersion__623 {
 uintptr_t major;
 uintptr_t minor;
 uintptr_t patch;
 struct anon__lazy_58 pre;
 struct anon__lazy_58 build;
};
struct SemanticVersion_Range__625 {
 struct SemanticVersion__623 zig_e_min;
 struct SemanticVersion__623 zig_e_max;
};
struct Target_Os_HurdVersionRange__627;
struct Target_Os_HurdVersionRange__627 {
 struct SemanticVersion_Range__625 range;
 struct SemanticVersion__623 glibc;
};
struct Target_Os_LinuxVersionRange__629;
struct Target_Os_LinuxVersionRange__629 {
 struct SemanticVersion_Range__625 range;
 struct SemanticVersion__623 glibc;
 uint32_t android;
};
struct Target_Os_WindowsVersion_Range__685;
struct Target_Os_WindowsVersion_Range__685 {
 uint32_t zig_e_min;
 uint32_t zig_e_max;
};
union Target_Os_VersionRange__619 {
 struct SemanticVersion_Range__625 semver;
 struct Target_Os_HurdVersionRange__627 hurd;
 struct Target_Os_LinuxVersionRange__629 linux;
 struct Target_Os_WindowsVersion_Range__685 windows;
};
struct Target_Os__563 {
 union Target_Os_VersionRange__619 version_range;
 uint8_t tag;
};
struct Target_DynamicLinker__737;
struct Target_DynamicLinker__737 {
 uint8_t buffer[255];
 uint8_t len;
};
typedef struct anon__lazy_119 nav__3485_40;
typedef struct anon__lazy_119 nav__3486_40;
typedef struct anon__lazy_119 nav__3487_40;
typedef struct anon__lazy_119 nav__3449_46;
typedef struct anon__lazy_119 nav__230_46;
struct Target_Cpu_Feature_Set__754;
struct Target_Cpu_Feature_Set__754 {
 uintptr_t ints[5];
};
struct Target_Cpu__722;
struct Target_Cpu_Model__749;
struct Target_Cpu__722 {
 struct Target_Cpu_Model__749 const *model;
 struct Target_Cpu_Feature_Set__754 features;
 uint8_t arch;
};
typedef struct anon__lazy_58 nav__249_46;
struct Target_Cpu_Model__749 {
 struct anon__lazy_58 name;
 struct anon__lazy_58 llvm_name;
 struct Target_Cpu_Feature_Set__754 features;
};
struct Target__561;
typedef struct anon__lazy_58 nav__251_51;
struct Target__561 {
 struct Target_Cpu__722 cpu;
 struct Target_Os__563 os;
 uint8_t abi;
 uint8_t ofmt;
 struct Target_DynamicLinker__737 dynamic_linker;
};
struct builtin_CallingConvention__261;
struct builtin_CallingConvention_CommonOptions__263;
typedef struct anon__lazy_240 nav__830_40;
struct builtin_CallingConvention_CommonOptions__263 {
 struct anon__lazy_240 incoming_stack_alignment;
};
struct builtin_CallingConvention_X86RegparmOptions__265;
struct builtin_CallingConvention_X86RegparmOptions__265 {
 struct anon__lazy_240 incoming_stack_alignment;
 uint8_t register_params;
};
struct builtin_CallingConvention_ArmInterruptOptions__267;
struct builtin_CallingConvention_ArmInterruptOptions__267 {
 struct anon__lazy_240 incoming_stack_alignment;
 uint8_t type;
};
struct builtin_CallingConvention_MipsInterruptOptions__269;
struct builtin_CallingConvention_MipsInterruptOptions__269 {
 struct anon__lazy_240 incoming_stack_alignment;
 uint8_t mode;
};
struct builtin_CallingConvention_RiscvInterruptOptions__271;
struct builtin_CallingConvention_RiscvInterruptOptions__271 {
 struct anon__lazy_240 incoming_stack_alignment;
 uint8_t mode;
};
struct builtin_CallingConvention__261 {
 union {
  struct builtin_CallingConvention_CommonOptions__263 x86_64_sysv;
  struct builtin_CallingConvention_CommonOptions__263 x86_64_win;
  struct builtin_CallingConvention_CommonOptions__263 x86_64_regcall_v3_sysv;
  struct builtin_CallingConvention_CommonOptions__263 x86_64_regcall_v4_win;
  struct builtin_CallingConvention_CommonOptions__263 x86_64_vectorcall;
  struct builtin_CallingConvention_CommonOptions__263 x86_64_interrupt;
  struct builtin_CallingConvention_X86RegparmOptions__265 x86_sysv;
  struct builtin_CallingConvention_X86RegparmOptions__265 x86_win;
  struct builtin_CallingConvention_X86RegparmOptions__265 x86_stdcall;
  struct builtin_CallingConvention_CommonOptions__263 x86_fastcall;
  struct builtin_CallingConvention_CommonOptions__263 x86_thiscall;
  struct builtin_CallingConvention_CommonOptions__263 x86_thiscall_mingw;
  struct builtin_CallingConvention_CommonOptions__263 x86_regcall_v3;
  struct builtin_CallingConvention_CommonOptions__263 x86_regcall_v4_win;
  struct builtin_CallingConvention_CommonOptions__263 x86_vectorcall;
  struct builtin_CallingConvention_CommonOptions__263 x86_interrupt;
  struct builtin_CallingConvention_CommonOptions__263 aarch64_aapcs;
  struct builtin_CallingConvention_CommonOptions__263 aarch64_aapcs_darwin;
  struct builtin_CallingConvention_CommonOptions__263 aarch64_aapcs_win;
  struct builtin_CallingConvention_CommonOptions__263 aarch64_vfabi;
  struct builtin_CallingConvention_CommonOptions__263 aarch64_vfabi_sve;
  struct builtin_CallingConvention_CommonOptions__263 arm_aapcs;
  struct builtin_CallingConvention_CommonOptions__263 arm_aapcs_vfp;
  struct builtin_CallingConvention_ArmInterruptOptions__267 arm_interrupt;
  struct builtin_CallingConvention_CommonOptions__263 mips64_n64;
  struct builtin_CallingConvention_CommonOptions__263 mips64_n32;
  struct builtin_CallingConvention_MipsInterruptOptions__269 mips64_interrupt;
  struct builtin_CallingConvention_CommonOptions__263 mips_o32;
  struct builtin_CallingConvention_MipsInterruptOptions__269 mips_interrupt;
  struct builtin_CallingConvention_CommonOptions__263 riscv64_lp64;
  struct builtin_CallingConvention_CommonOptions__263 riscv64_lp64_v;
  struct builtin_CallingConvention_RiscvInterruptOptions__271 riscv64_interrupt;
  struct builtin_CallingConvention_CommonOptions__263 riscv32_ilp32;
  struct builtin_CallingConvention_CommonOptions__263 riscv32_ilp32_v;
  struct builtin_CallingConvention_RiscvInterruptOptions__271 riscv32_interrupt;
  struct builtin_CallingConvention_CommonOptions__263 sparc64_sysv;
  struct builtin_CallingConvention_CommonOptions__263 sparc_sysv;
  struct builtin_CallingConvention_CommonOptions__263 powerpc64_elf;
  struct builtin_CallingConvention_CommonOptions__263 powerpc64_elf_altivec;
  struct builtin_CallingConvention_CommonOptions__263 powerpc64_elf_v2;
  struct builtin_CallingConvention_CommonOptions__263 powerpc_sysv;
  struct builtin_CallingConvention_CommonOptions__263 powerpc_sysv_altivec;
  struct builtin_CallingConvention_CommonOptions__263 powerpc_aix;
  struct builtin_CallingConvention_CommonOptions__263 powerpc_aix_altivec;
  struct builtin_CallingConvention_CommonOptions__263 wasm_mvp;
  struct builtin_CallingConvention_CommonOptions__263 arc_sysv;
  struct builtin_CallingConvention_CommonOptions__263 bpf_std;
  struct builtin_CallingConvention_CommonOptions__263 csky_sysv;
  struct builtin_CallingConvention_CommonOptions__263 csky_interrupt;
  struct builtin_CallingConvention_CommonOptions__263 hexagon_sysv;
  struct builtin_CallingConvention_CommonOptions__263 hexagon_sysv_hvx;
  struct builtin_CallingConvention_CommonOptions__263 lanai_sysv;
  struct builtin_CallingConvention_CommonOptions__263 loongarch64_lp64;
  struct builtin_CallingConvention_CommonOptions__263 loongarch32_ilp32;
  struct builtin_CallingConvention_CommonOptions__263 m68k_sysv;
  struct builtin_CallingConvention_CommonOptions__263 m68k_gnu;
  struct builtin_CallingConvention_CommonOptions__263 m68k_rtd;
  struct builtin_CallingConvention_CommonOptions__263 m68k_interrupt;
  struct builtin_CallingConvention_CommonOptions__263 msp430_eabi;
  struct builtin_CallingConvention_CommonOptions__263 propeller_sysv;
  struct builtin_CallingConvention_CommonOptions__263 s390x_sysv;
  struct builtin_CallingConvention_CommonOptions__263 s390x_sysv_vx;
  struct builtin_CallingConvention_CommonOptions__263 ve_sysv;
  struct builtin_CallingConvention_CommonOptions__263 xcore_xs1;
  struct builtin_CallingConvention_CommonOptions__263 xcore_xs2;
  struct builtin_CallingConvention_CommonOptions__263 xtensa_call0;
  struct builtin_CallingConvention_CommonOptions__263 xtensa_windowed;
  struct builtin_CallingConvention_CommonOptions__263 amdgcn_device;
  struct builtin_CallingConvention_CommonOptions__263 amdgcn_cs;
 } payload;
 uint8_t tag;
};
struct std_Options__3668;
typedef struct anon__lazy_315 nav__97_39;
struct std_Options__3668 {
 struct anon__lazy_315 page_size_min;
 struct anon__lazy_315 page_size_max;
 uintptr_t fmt_max_depth;
 bool enable_segfault_handler;
 uint8_t log_level;
 bool crypto_always_getrandom;
 bool crypto_fork_safety;
 bool keep_sigpipe;
 bool http_disable_tls;
 bool http_enable_ssl_key_log_file;
 uint8_t side_channels_mitigations;
};
typedef struct anon__lazy_385 nav__4267_44;
typedef struct anon__lazy_119 nav__4267_47;
typedef struct anon__lazy_389 nav__4267_51;
struct Progress_Node_Storage__3095 {
 uint32_t completed_count;
 uint32_t estimated_total_count;
 zig_align(8) uint8_t name[40];
};
typedef struct anon__lazy_315 nav__3465_38;
typedef struct anon__lazy_477 nav__6853_38;
typedef struct anon__lazy_119 nav__3476_43;
typedef struct anon__lazy_58 nav__3509_40;
static uint8_t const __anon_1813[21];
static uint8_t const __anon_1873[21];
static uint8_t const __anon_2868[89];
static uint8_t const __anon_3300[36];
static uint8_t const __anon_3745[1];
static uint8_t const __anon_4135[4];
static uint8_t const __anon_4258[8];
static uint8_t const __anon_4571[3];
static uint8_t const __anon_5533[27];
static uint8_t const __anon_5608[26];
static uint8_t const __anon_5776[34];
static uint8_t const __anon_6023[10];
static uint8_t const __anon_6038[1];
static uint8_t const __anon_6058[1];
static uint8_t const __anon_6125[27];
static uint8_t const __anon_4232[4];
static uint8_t const __anon_6198[10];
static nav__987_39 fifo_UnixPipe_openWrite__987(struct mem_Allocator__206, nav__987_42);
static nav__986_39 fifo_UnixPipe_openRead__986(struct mem_Allocator__206, nav__986_42);
static nav__337_39 instruments_perf_PerfInstrument_init__337(struct mem_Allocator__206);
static nav__314_39 instruments_root_InstrumentHooks_init__314(struct mem_Allocator__206);
#define c_instrument_hooks_init__231 instrument_hooks_init
zig_extern struct instruments_root_InstrumentHooks__188 *instrument_hooks_init(void);
static nav__3488_40 mem_Allocator_create__anon_795__3488(struct mem_Allocator__206);
static void debug_print__anon_809__3489(nav__3489_40);
static struct instruments_valgrind_ValgrindInstrument__195 instruments_valgrind_ValgrindInstrument_init__325(struct mem_Allocator__206);
static uint16_t fs_accessAbsolute__1053(nav__1053_39, struct fs_File_OpenFlags__1820);
static nav__1050_39 fs_openFileAbsolute__1050(nav__1050_41, struct fs_File_OpenFlags__1820);
static struct fifo_UnixPipe_Writer__538 fifo_UnixPipe_Writer_init__988(struct fs_File__546, struct mem_Allocator__206);
static struct fifo_UnixPipe_Reader__540 fifo_UnixPipe_Reader_init__993(struct fs_File__546, struct mem_Allocator__206);
static uint16_t fifo_UnixPipe_Writer_sendCmd__991(struct fifo_UnixPipe_Writer__538 *, struct shared_Command__2004);
static nav__4200_38 bincode_deserializeInt__anon_2341__4200(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230);
static nav__4199_38 bincode_deserializeAlloc__anon_2330__4199(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230, struct mem_Allocator__206);
static nav__4242_40 bincode_deserializePointerAlloc__anon_2464__4242(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230, struct mem_Allocator__206);
static nav__4241_40 bincode_deserializeAlloc__anon_2451__4241(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230, struct mem_Allocator__206);
static nav__4240_39 bincode_deserializeStructAlloc__anon_2426__4240(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230, struct mem_Allocator__206);
static nav__4239_39 bincode_deserializeAlloc__anon_2397__4239(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230, struct mem_Allocator__206);
static uint16_t bincode_deserializeAlloc__anon_2516__4245(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230, struct mem_Allocator__206);
static nav__4247_39 bincode_deserializeStructAlloc__anon_2578__4247(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230, struct mem_Allocator__206);
static nav__4246_39 bincode_deserializeAlloc__anon_2559__4246(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230, struct mem_Allocator__206);
static nav__4198_39 bincode_deserializeUnionAlloc__anon_2325__4198(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230, struct mem_Allocator__206);
static nav__4197_39 bincode_deserializeAlloc__anon_2238__4197(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230, struct mem_Allocator__206);
static nav__996_39 fifo_UnixPipe_Reader_recvCmd__996(struct fifo_UnixPipe_Reader__540 *);
static nav__997_39 fifo_UnixPipe_Reader_waitForResponse__997(struct fifo_UnixPipe_Reader__540 *, nav__997_42);
static uint16_t fifo_UnixPipe_Reader_waitForAck__998(struct fifo_UnixPipe_Reader__540 *, nav__998_40);
static uint16_t instruments_perf_PerfInstrument_send_cmd__339(struct instruments_perf_PerfInstrument__200 *, struct shared_Command__2004);
static bool instruments_perf_PerfInstrument_is_instrumented__340(struct instruments_perf_PerfInstrument__200 *);
static nav__3738_39 mem_Allocator_allocBytesWithAlignment__anon_1902__3738(struct mem_Allocator__206, uintptr_t, uintptr_t);
static void debug_lockStdErr__161(void);
static struct fs_File__546 io_getStdErr__3756(void);
static struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 fs_File_writer__1162(struct fs_File__546);
static nav__3818_38 io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooB__3818(void const *, nav__3818_41);
static uint16_t io_Writer_print__anon_1973__3835(struct io_Writer__1950, nav__3835_41);
static void debug_unlockStdErr__162(void);
static bool fs_path_isAbsolute__3870(nav__3870_39);
static void debug_assert__179(bool);
static struct fs_Dir__1822 fs_cwd__1045(void);
static uint16_t fs_Dir_access__3694(struct fs_Dir__1822, nav__3694_40, struct fs_File_OpenFlags__1820);
static nav__3630_39 fs_Dir_openFile__3630(struct fs_Dir__1822, nav__3630_42, struct fs_File_OpenFlags__1820);
static struct array_list_ArrayListAligned_28u8_2cnull_29__2035 array_list_ArrayListAligned_28u8_2cnull_29_init__3983(struct mem_Allocator__206);
static struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 array_list_ArrayListAligned_28u8_2cnull_29_writer__4008(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *);
static uint16_t bincode_serialize__anon_2070__4089(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, struct shared_Command__2004);
static void array_list_ArrayListAligned_28u8_2cnull_29_deinit__3985(struct array_list_ArrayListAligned_28u8_2cnull_29__2035);
static uint8_t const (*mem_asBytes__anon_2105__4090(uint32_t const *))[4];
static uint16_t fs_File_writeAll__1144(struct fs_File__546, nav__1144_40);
static zig_i128 time_nanoTimestamp__4103(void);
static nav__1134_38 fs_File_readAll__1134(struct fs_File__546, nav__1134_41);
static nav__4131_40 mem_Allocator_alloc__anon_2188__4131(struct mem_Allocator__206, uintptr_t);
static struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 io_fixed_buffer_stream_fixedBufferStream__anon_2210__4163(nav__4163_40);
static struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_reader__4152(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *);
static nav__4196_38 io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29_typeEras__4196(void const *, nav__4196_41);
static nav__4238_39 io_Reader_readBytesNoEof__anon_2384__4238(struct io_Reader__2355);
static nav__4243_39 io_Reader_readBytesNoEof__anon_2477__4243(struct io_Reader__2355);
static nav__4203_38 io_Reader_readAll__4203(struct io_Reader__2355, nav__4203_41);
static zig_cold zig_noreturn void bincode_invalidProtocol__anon_2501__4244(void);
static void mem_Allocator_free__anon_2612__4248(struct mem_Allocator__206, nav__4248_40);
static void utils_sleep__4253(uint64_t);
static void shared_Command_deinit__3933(struct shared_Command__2004, struct mem_Allocator__206);
static uint8_t mem_Alignment_fromByteUnits__628(uintptr_t);
static void Progress_lockStdErr__4281(void);
static int32_t io_getStdErrHandle__3755(void);
static nav__1143_38 fs_File_write__1143(struct fs_File__546, nav__1143_41);
static uint16_t fmt_format__anon_2701__4480(struct io_Writer__1950, nav__4480_41);
static void Progress_unlockStdErr__4282(void);
static bool fs_path_isAbsolutePosix__3876(nav__3876_39);
static nav__1628_39 posix_toPosixPath__1628(nav__1628_41);
static uint16_t fs_Dir_accessZ__3695(struct fs_Dir__1822, uint8_t const *, struct fs_File_OpenFlags__1820);
static nav__3631_39 fs_Dir_openFileZ__3631(struct fs_Dir__1822, uint8_t const *, struct fs_File_OpenFlags__1820);
static uint16_t bincode_serializeUnion__anon_2787__4493(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, struct shared_Command__2004);
static nav__4031_39 array_list_ArrayListAligned_28u8_2cnull_29_allocatedSlice__4031(struct array_list_ArrayListAligned_28u8_2cnull_29__2035);
static nav__1544_39 posix_clock_gettime__1544(uint32_t);
static nav__1133_38 fs_File_read__1133(struct fs_File__546, nav__1133_41);
static nav__4494_39 mem_Allocator_allocWithSizeAndAlignment__anon_2848__4494(struct mem_Allocator__206, uintptr_t, uintptr_t);
static nav__4155_38 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_read__4155(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *, nav__4155_42);
static uint16_t io_Reader_readNoEof__4205(struct io_Reader__2355, nav__4205_40);
static nav__4204_38 io_Reader_readAtLeast__4204(struct io_Reader__2355, nav__4204_41, uintptr_t);
static zig_cold zig_noreturn void debug_no_panic_call__4496(nav__4496_39, nav__4496_40);
static nav__4523_39 mem_sliceAsBytes__anon_2965__4523(nav__4523_39);
static nav__5369_38 math_cast__anon_3004__5369(uint64_t);
static void mem_Allocator_free__anon_3071__6140(struct mem_Allocator__206, nav__6140_40);
static bool math_isPowerOfTwo__anon_3073__6141(uintptr_t);
static void Thread_Mutex_Recursive_lock__6328(struct Thread_Mutex_Recursive__3148 *);
static uint16_t Progress_clearWrittenWithEscapeCodes__4292(void);
static nav__1363_38 posix_write__1363(int32_t, nav__1363_40);
static uint16_t io_Writer_writeAll__3826(struct io_Writer__1950, nav__3826_40);
static uint16_t fmt_formatType__anon_3739__6704(nav__6704_39, struct fmt_FormatOptions__3656, struct io_Writer__1950, uintptr_t);
static void Thread_Mutex_Recursive_unlock__6329(struct Thread_Mutex_Recursive__3148 *);
static uint16_t posix_faccessatZ__1519(int32_t, uint8_t const *, uint32_t, uint32_t);
static nav__1375_38 posix_openatZ__1375(int32_t, uint8_t const *, uint32_t, uintptr_t);
static uint16_t posix_flock__1536(int32_t, int32_t);
static void posix_close__1333(int32_t);
static uint16_t bincode_serialize__anon_3877__6829(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, uint32_t);
static uint16_t bincode_serialize__anon_3879__6830(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, struct shared_Command__struct_2007__2007);
static uint16_t bincode_serialize__anon_3881__6831(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060);
static uint16_t bincode_serialize__anon_3883__6832(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, struct shared_Command__struct_2008__2008);
static uint16_t posix_errno__anon_4035__6835(int);
static uint16_t posix_unexpectedErrno__1627(uint16_t);
static nav__1355_38 posix_read__1355(int32_t, nav__1355_40);
static nav__6836_38 math_mul__anon_4055__6836(uintptr_t, uintptr_t);
static nav__6837_39 mem_Allocator_allocBytesWithAlignment__anon_4057__6837(struct mem_Allocator__206, uintptr_t, uintptr_t);
static nav__4202_38 io_Reader_read__4202(struct io_Reader__2355, nav__4202_41);
static nav__6838_39 mem_sliceAsBytes__anon_4087__6838(nav__6838_39);
static uint32_t Thread_getCurrentId__6169(void);
static void Thread_Mutex_lock__6309(struct Thread_Mutex__3146 *);
static uint16_t Progress_write__4311(nav__4311_39);
static uint16_t posix_errno__anon_4152__6840(intptr_t);
static nav__3825_38 io_Writer_write__3825(struct io_Writer__1950, nav__3825_41);
static nav__6349_38 unicode_utf8ByteSequenceLength__6349(uint8_t);
static nav__6365_38 unicode_utf8CountCodepoints__6365(nav__6365_40);
static uint16_t fmt_formatBuf__anon_4268__6841(nav__6841_39, struct fmt_FormatOptions__3656, struct io_Writer__1950);
static void Thread_Mutex_unlock__6310(struct Thread_Mutex__3146 *);
static uint16_t bincode_serializeInt__anon_4399__6845(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, uint32_t);
static uint16_t bincode_serializeStruct__anon_4404__6846(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, struct shared_Command__struct_2007__2007);
static uint16_t bincode_serializeStruct__anon_4405__6847(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, struct shared_Command__struct_2008__2008);
static uint32_t Thread_PosixThreadImpl_getCurrentId__6239(void);
static void Thread_Mutex_FutexImpl_lock__6334(struct Thread_Mutex_FutexImpl__3172 *);
static nav__6355_38 unicode_utf8Decode__6355(nav__6355_40);
static nav__6348_38 unicode_utf8CodepointSequenceLength__6348(uint32_t);
static nav__6861_38 unicode_utf8EncodeImpl__anon_4643__6861(uint32_t, nav__6861_40);
static nav__6350_38 unicode_utf8Encode__6350(uint32_t, nav__6350_40);
static uint16_t io_Writer_writeBytesNTimes__3830(struct io_Writer__1950, nav__3830_40, uintptr_t);
static void Thread_Mutex_FutexImpl_unlock__6337(struct Thread_Mutex_FutexImpl__3172 *);
static nav__4088_38 io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29___4088(void const *, nav__4088_41);
static uint16_t bincode_serialize__anon_4615__6850(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, nav__6850_40);
static uint32_t Thread_LinuxThreadImpl_getCurrentId__6854(void);
static bool Thread_Mutex_FutexImpl_tryLock__6335(struct Thread_Mutex_FutexImpl__3172 *);
static zig_cold void Thread_Mutex_FutexImpl_lockSlow__6336(struct Thread_Mutex_FutexImpl__3172 *);
static nav__6357_38 unicode_utf8Decode2__6357(nav__6357_40);
static nav__6359_38 unicode_utf8Decode3__6359(nav__6359_40);
static nav__6363_38 unicode_utf8Decode4__6363(nav__6363_40);
static bool unicode_isSurrogateCodepoint__6428(uint32_t);
static zig_cold void Thread_Futex_wake__6873(struct atomic_Value_28u32_29__3128 const *, uint32_t);
static nav__4009_38 array_list_ArrayListAligned_28u8_2cnull_29_appendWrite__4009(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *, nav__4009_42);
static uint16_t bincode_serializePointer__anon_4685__6890(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, nav__6890_40);
static int32_t os_linux_gettid__2743(void);
static zig_cold void Thread_Futex_wait__6871(struct atomic_Value_28u32_29__3128 const *, uint32_t);
static nav__6361_38 unicode_utf8Decode3AllowSurrogateHalf__6361(nav__6361_40);
static void Thread_Futex_LinuxImpl_wake__6935(struct atomic_Value_28u32_29__3128 const *, uint32_t);
static uint16_t array_list_ArrayListAligned_28u8_2cnull_29_appendSlice__4003(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *, nav__4003_41);
static uintptr_t os_linux_x86_64_syscall0__6721(uintptr_t);
static uint16_t Thread_Futex_LinuxImpl_wait__6934(struct atomic_Value_28u32_29__3128 const *, uint32_t, nav__6934_40);
static nav__6973_38 math_cast__anon_5315__6973(uint32_t);
static uintptr_t os_linux_futex_wake__2629(int32_t const *, uint32_t, int32_t);
static uint16_t os_linux_errnoFromSyscall__2615(uintptr_t);
static uint16_t array_list_ArrayListAligned_28u8_2cnull_29_ensureUnusedCapacity__4022(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *, uintptr_t);
static void array_list_ArrayListAligned_28u8_2cnull_29_appendSliceAssumeCapacity__4004(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *, nav__4004_41);
static uintptr_t os_linux_futex_wait__2628(int32_t const *, uint32_t, int32_t, struct os_linux_timespec__struct_2817__2817 const *);
static uintptr_t os_linux_x86_64_syscall3__6724(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
static nav__3947_38 array_list_addOrOom__3947(uintptr_t, uintptr_t);
static uint16_t array_list_ArrayListAligned_28u8_2cnull_29_ensureTotalCapacity__4020(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *, uintptr_t);
static uintptr_t os_linux_x86_64_syscall4__6725(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
static uintptr_t array_list_ArrayListAlignedUnmanaged_28u8_2cnull_29_growCapacity__7032(uintptr_t, uintptr_t);
static uint16_t array_list_ArrayListAligned_28u8_2cnull_29_ensureTotalCapacityPrecise__4021(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *, uintptr_t);
static nav__7033_39 mem_Allocator_remap__anon_5400__7033(struct mem_Allocator__206, nav__7033_39, uintptr_t);
static nav__7034_40 mem_Allocator_alignedAlloc__anon_5405__7034(struct mem_Allocator__206, uintptr_t);
static nav__7035_39 mem_bytesAsSlice__anon_5420__7035(nav__7035_39);
#define c_instrument_hooks_deinit__232 instrument_hooks_deinit
zig_extern void instrument_hooks_deinit(struct instruments_root_InstrumentHooks__188 *);
static void instruments_perf_PerfInstrument_deinit__338(struct instruments_perf_PerfInstrument__200 *);
static void mem_Allocator_destroy__anon_5438__7036(struct mem_Allocator__206, struct instruments_root_InstrumentHooks__188 *);
static void fifo_UnixPipe_Writer_deinit__992(struct fifo_UnixPipe_Writer__538 *);
static void fifo_UnixPipe_Reader_deinit__999(struct fifo_UnixPipe_Reader__540 *);
static void fs_File_close__1090(struct fs_File__546);
#define c_instrument_hooks_is_instrumented__233 instrument_hooks_is_instrumented
zig_extern bool instrument_hooks_is_instrumented(struct instruments_root_InstrumentHooks__188 *);
static zig_cold uint16_t instruments_perf_PerfInstrument_start_benchmark__341(struct instruments_perf_PerfInstrument__200 *);
#define c_instrument_hooks_start_benchmark__234 instrument_hooks_start_benchmark
zig_extern void instrument_hooks_start_benchmark(struct instruments_root_InstrumentHooks__188 *);
static void debug_print__anon_5494__7039(nav__7039_40);
static uint16_t io_Writer_print__anon_5495__7040(struct io_Writer__1950, nav__7040_41);
static uint16_t fmt_format__anon_5496__7041(struct io_Writer__1950, nav__7041_41);
static zig_cold uint16_t instruments_perf_PerfInstrument_stop_benchmark__342(struct instruments_perf_PerfInstrument__200 *);
#define c_instrument_hooks_stop_benchmark__235 instrument_hooks_stop_benchmark
zig_extern void instrument_hooks_stop_benchmark(struct instruments_root_InstrumentHooks__188 *);
static void debug_print__anon_5570__7043(nav__7043_40);
static uint16_t io_Writer_print__anon_5571__7044(struct io_Writer__1950, nav__7044_41);
static uint16_t fmt_format__anon_5572__7045(struct io_Writer__1950, nav__7045_41);
static uint16_t instruments_perf_PerfInstrument_set_executed_benchmark__343(struct instruments_perf_PerfInstrument__200 *, uint32_t, uint8_t const *);
#define c_instrument_hooks_executed_benchmark__236 instrument_hooks_executed_benchmark
zig_extern void instrument_hooks_executed_benchmark(struct instruments_root_InstrumentHooks__188 *, uint32_t, uint8_t const *);
static nav__7047_39 mem_span__anon_5655__7047(uint8_t const *);
static void debug_print__anon_5663__7048(nav__7048_40);
static uintptr_t mem_len__anon_5671__7049(uint8_t const *);
static uint16_t io_Writer_print__anon_5673__7050(struct io_Writer__1950, nav__7050_41);
static uintptr_t mem_indexOfSentinel__anon_5679__7051(uint8_t const *);
static uint16_t fmt_format__anon_5680__7052(struct io_Writer__1950, nav__7052_41);
static bool math_isPowerOfTwo__anon_5692__7053(void);
static nav__7060_38 simd_firstTrue__anon_5726__7060(nav__7060_40);
static uintptr_t mem_alignForward__anon_5729__7061(uintptr_t, uintptr_t);
static bool mem_isAligned__499(uintptr_t, uintptr_t);
static bool mem_isValidAlignGeneric__anon_5838__7062(uintptr_t);
static uintptr_t mem_alignBackward__anon_5839__7063(uintptr_t, uintptr_t);
static bool mem_isAlignedGeneric__anon_5843__7064(uint64_t, uint64_t);
static uint64_t mem_alignBackward__anon_5845__7065(uint64_t, uint64_t);
static bool mem_isValidAlignGeneric__anon_5847__7066(uint64_t);
static bool math_isPowerOfTwo__anon_5848__7067(uint64_t);
static uint16_t instruments_perf_PerfInstrument_set_integration__344(struct instruments_perf_PerfInstrument__200 *, uint8_t const *, uint8_t const *);
#define c_instrument_hooks_set_integration__237 instrument_hooks_set_integration
zig_extern void instrument_hooks_set_integration(struct instruments_root_InstrumentHooks__188 *, uint8_t const *, uint8_t const *);
static nav__7068_40 fmt_allocPrintZ__anon_5881__7068(struct mem_Allocator__206, nav__7068_43);
static void mem_Allocator_free__anon_5883__7069(struct mem_Allocator__206, nav__7069_40);
static void debug_print__anon_5895__7070(nav__7070_40);
static nav__7071_40 fmt_allocPrint__anon_5911__7071(struct mem_Allocator__206, nav__7071_43);
static nav__7072_39 mem_sliceAsBytes__anon_5918__7072(nav__7072_39);
static uint16_t io_Writer_print__anon_5919__7073(struct io_Writer__1950, nav__7073_41);
static uint16_t fmt_format__anon_5992__7116(struct io_Writer__1950, nav__7116_40);
static uint64_t fmt_count__anon_5926__7074(nav__7074_39);
static nav__7075_38 math_cast__anon_5928__7075(uint64_t);
static nav__7076_40 fmt_bufPrint__anon_5937__7076(nav__7076_39, nav__7076_42);
static uint16_t fmt_format__anon_5940__7077(struct io_Writer__1950, nav__7077_41);
static struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 io_counting_writer_countingWriter__anon_5962__7102(void);
static struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__5973 io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_writer__7101(struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *);
static nav__7115_38 io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWr__7115(void const *, nav__7115_41);
static uint16_t fmt_formatType__anon_6032__7117(uint8_t const *, struct fmt_FormatOptions__3656, struct io_Writer__1950, uintptr_t);
static struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6070 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_writer__4153(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *);
static nav__7130_38 io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write__7130(void const *, nav__7130_41);
static nav__4161_39 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_getWritten__4161(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207);
static nav__7100_38 io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_write__7100(struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *, nav__7100_42);
static nav__4156_38 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_write__4156(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *, nav__4156_42);
static nav__3796_38 io_dummyWrite__3796(nav__3796_40);
static uint64_t const builtin_zig_backend__242;
static bool const start_simplified_logic__109;
static uint8_t const builtin_output_mode__243;
static uint8_t const builtin_link_mode__244;
static bool const builtin_link_libc__254;
static bool const posix_use_libc__1196;
static struct Target_Os__563 const builtin_os__250;
static uint8_t const c_native_os__1638;
static struct Target_DynamicLinker__737 const Target_DynamicLinker_none__3360;
static bool const builtin_is_test__246;
static uint8_t *heap_CAllocator_alloc__3484(void *, uintptr_t, uint8_t, uintptr_t);
static bool heap_CAllocator_resize__3485(void *, nav__3485_40, uint8_t, uintptr_t, uintptr_t);
static uint8_t *heap_CAllocator_remap__3486(void *, nav__3486_40, uint8_t, uintptr_t, uintptr_t);
static void heap_CAllocator_free__3487(void *, nav__3487_40, uint8_t, uintptr_t);
static uint8_t *heap_CAllocator_alignedAlloc__3481(uintptr_t, uint8_t);
static uintptr_t heap_CAllocator_alignedAllocSize__3483(uint8_t *);
static void heap_CAllocator_alignedFree__3482(uint8_t *);
static uintptr_t mem_Alignment_toByteUnits__627(uint8_t);
static struct mem_Allocator__206 const heap_c_allocator__3449;
static struct mem_Allocator__206 const c_allocator__230;
static struct Target_Cpu_Feature_Set__754 const Target_Cpu_Feature_Set_empty__3405;
static struct Target_Cpu__722 const builtin_cpu__249;
static uint8_t const builtin_abi__248;
static uint8_t const builtin_object_format__252;
static struct Target__561 const builtin_target__251;
static struct builtin_CallingConvention__261 const builtin_CallingConvention_c__830;
zig_extern uint8_t running_on_valgrind(void);
static uint8_t const (*const shared_RUNNER_CTL_FIFO__3613)[21];
static uint8_t const (*const shared_RUNNER_ACK_FIFO__3614)[21];
static uint8_t const mem_native_endian__353;
static uint8_t const fs_path_native_os__3849;
static uint8_t const fs_native_os__1008;
static uint8_t const fs_Dir_native_os__3736;
static uint8_t const os_linux_native_arch__2544;
zig_extern int nanosleep(struct cimport_struct_timespec__2991 const *, struct cimport_struct_timespec__2991 *);
static int const cimport_EINTR__6008;
static bool const Progress_is_windows__4263;
static uint8_t const Thread_native_os__6148;
static bool const Thread_use_pthreads__6159;
static bool const builtin_single_threaded__247;
static uint8_t const builtin_mode__253;
static uint32_t const Thread_Mutex_FutexImpl_unlocked__6331;
static uint32_t const Thread_Mutex_Recursive_invalid_thread_id__6330;
static struct Thread_Mutex_Recursive__3148 const Thread_Mutex_Recursive_init__6326;
static struct Thread_Mutex_Recursive__3148 Progress_stderr_mutex__4318;
static bool const io_is_windows__3743;
static bool const fs_File_is_windows__1184;
static uint16_t const fmt_max_format_args__4343;
static bool const debug_runtime_safety__159;
static bool const debug_default_enable_segfault_handler__204;
static uint8_t const log_default_level__6638;
static struct std_Options__3668 const std_options__97;
zig_extern int flock(int32_t, int);
static bool const fs_Dir_have_flock__3737;
static uint8_t const posix_native_os__1194;
zig_extern int clock_gettime(uint32_t, struct os_linux_timespec__struct_2817__2817 *);
static struct Progress__2682 Progress_global_progress__4267;
static uint8_t const (*const Progress_clear__4286)[4];
zig_extern intptr_t write(int32_t, uint8_t const *, uintptr_t);
static uint8_t const (*const fmt_ANY__4346)[4];
zig_extern int faccessat(int32_t, uint8_t const *, unsigned int, unsigned int);
static bool const posix_lfs64_abi__1624;
zig_extern int openat64(int, uint8_t const *, uint32_t, ...);
zig_extern int close(int32_t);
static uint8_t const c_native_abi__1636;
zig_extern int *zig_e___errno_location(void) zig_mangled(zig_e___errno_location, "__errno_location");
static bool const posix_unexpected_error_tracing__1625;
zig_extern intptr_t read(int32_t, uint8_t *, uintptr_t);
static uint8_t const unicode_native_endian__6346;
static uint32_t const unicode_replacement_character__6347;
static uint32_t const Thread_Mutex_FutexImpl_contended__6333;
static nav__3465_38 const heap_page_size_min_default__3465;
static uintptr_t const heap_page_size_min__3444;
static zig_threadlocal nav__6853_38 Thread_LinuxThreadImpl_tls_thread_id__6853;
static uint32_t const Thread_Mutex_FutexImpl_locked__6332;
zig_extern void callgrind_zero_stats(void);
zig_extern void callgrind_start_instrumentation(void);
zig_extern void callgrind_stop_instrumentation(void);
zig_extern void callgrind_dump_stats_at(uint8_t const *);
static bool const mem_backend_supports_vectors__381;
static bool const builtin_valgrind_support__257;
static bool const os_linux_extern_getauxval__2608;
static struct mem_Allocator_VTable__209 const heap_CAllocator_vtable__3476;
zig_extern uintptr_t malloc_usable_size(void const *);
static bool const heap_CAllocator_supports_malloc_size__3477;
static bool const heap_CAllocator_supports_posix_memalign__3479;
zig_extern int posix_memalign(void **, uintptr_t, uintptr_t);
zig_extern void free(void *);
static struct Target_Cpu_Model__749 const Target_x86_cpu_alderlake__3509;
static uint8_t Progress_node_parents_buffer__4269[83];
static struct Progress_Node_Storage__3095 Progress_node_storage_buffer__4270[83];
static uint8_t Progress_node_freelist_buffer__4271[83];
enum {
 zig_error_OutOfMemory = 1u,
 zig_error_PermissionDenied = 2u,
 zig_error_FileNotFound = 3u,
 zig_error_NameTooLong = 4u,
 zig_error_InputOutput = 5u,
 zig_error_SystemResources = 6u,
 zig_error_BadPathName = 7u,
 zig_error_FileBusy = 8u,
 zig_error_SymLinkLoop = 9u,
 zig_error_ReadOnlyFileSystem = 10u,
 zig_error_InvalidUtf8 = 11u,
 zig_error_InvalidWtf8 = 12u,
 zig_error_Unexpected = 13u,
 zig_error_SharingViolation = 14u,
 zig_error_PathAlreadyExists = 15u,
 zig_error_AccessDenied = 16u,
 zig_error_PipeBusy = 17u,
 zig_error_NoDevice = 18u,
 zig_error_NetworkNotFound = 19u,
 zig_error_AntivirusInterference = 20u,
 zig_error_ProcessFdQuotaExceeded = 21u,
 zig_error_SystemFdQuotaExceeded = 22u,
 zig_error_FileTooBig = 23u,
 zig_error_IsDir = 24u,
 zig_error_NoSpaceLeft = 25u,
 zig_error_NotDir = 26u,
 zig_error_DeviceBusy = 27u,
 zig_error_FileLocksNotSupported = 28u,
 zig_error_WouldBlock = 29u,
 zig_error_DiskQuota = 30u,
 zig_error_InvalidArgument = 31u,
 zig_error_BrokenPipe = 32u,
 zig_error_OperationAborted = 33u,
 zig_error_NotOpenForWriting = 34u,
 zig_error_LockViolation = 35u,
 zig_error_ConnectionResetByPeer = 36u,
 zig_error_ProcessNotFound = 37u,
 zig_error_AckTimeout = 38u,
 zig_error_ConnectionTimedOut = 39u,
 zig_error_NotOpenForReading = 40u,
 zig_error_SocketNotConnected = 41u,
 zig_error_Canceled = 42u,
 zig_error_EndOfStream = 43u,
 zig_error_UnexpectedError = 44u,
 zig_error_UnexpectedResponse = 45u,
 zig_error_UnsupportedClock = 46u,
 zig_error_Overflow = 47u,
 zig_error_Utf8ExpectedContinuation = 48u,
 zig_error_Utf8OverlongEncoding = 49u,
 zig_error_Utf8EncodesSurrogateHalf = 50u,
 zig_error_Utf8CodepointTooLarge = 51u,
 zig_error_Utf8InvalidStartByte = 52u,
 zig_error_TruncatedInput = 53u,
 zig_error_Utf8CannotEncodeSurrogateHalf = 54u,
 zig_error_CodepointTooLarge = 55u,
 zig_error_Timeout = 56u,
};
static uint8_t const zig_errorName_OutOfMemory[12] = "OutOfMemory";
static uint8_t const zig_errorName_PermissionDenied[17] = "PermissionDenied";
static uint8_t const zig_errorName_FileNotFound[13] = "FileNotFound";
static uint8_t const zig_errorName_NameTooLong[12] = "NameTooLong";
static uint8_t const zig_errorName_InputOutput[12] = "InputOutput";
static uint8_t const zig_errorName_SystemResources[16] = "SystemResources";
static uint8_t const zig_errorName_BadPathName[12] = "BadPathName";
static uint8_t const zig_errorName_FileBusy[9] = "FileBusy";
static uint8_t const zig_errorName_SymLinkLoop[12] = "SymLinkLoop";
static uint8_t const zig_errorName_ReadOnlyFileSystem[19] = "ReadOnlyFileSystem";
static uint8_t const zig_errorName_InvalidUtf8[12] = "InvalidUtf8";
static uint8_t const zig_errorName_InvalidWtf8[12] = "InvalidWtf8";
static uint8_t const zig_errorName_Unexpected[11] = "Unexpected";
static uint8_t const zig_errorName_SharingViolation[17] = "SharingViolation";
static uint8_t const zig_errorName_PathAlreadyExists[18] = "PathAlreadyExists";
static uint8_t const zig_errorName_AccessDenied[13] = "AccessDenied";
static uint8_t const zig_errorName_PipeBusy[9] = "PipeBusy";
static uint8_t const zig_errorName_NoDevice[9] = "NoDevice";
static uint8_t const zig_errorName_NetworkNotFound[16] = "NetworkNotFound";
static uint8_t const zig_errorName_AntivirusInterference[22] = "AntivirusInterference";
static uint8_t const zig_errorName_ProcessFdQuotaExceeded[23] = "ProcessFdQuotaExceeded";
static uint8_t const zig_errorName_SystemFdQuotaExceeded[22] = "SystemFdQuotaExceeded";
static uint8_t const zig_errorName_FileTooBig[11] = "FileTooBig";
static uint8_t const zig_errorName_IsDir[6] = "IsDir";
static uint8_t const zig_errorName_NoSpaceLeft[12] = "NoSpaceLeft";
static uint8_t const zig_errorName_NotDir[7] = "NotDir";
static uint8_t const zig_errorName_DeviceBusy[11] = "DeviceBusy";
static uint8_t const zig_errorName_FileLocksNotSupported[22] = "FileLocksNotSupported";
static uint8_t const zig_errorName_WouldBlock[11] = "WouldBlock";
static uint8_t const zig_errorName_DiskQuota[10] = "DiskQuota";
static uint8_t const zig_errorName_InvalidArgument[16] = "InvalidArgument";
static uint8_t const zig_errorName_BrokenPipe[11] = "BrokenPipe";
static uint8_t const zig_errorName_OperationAborted[17] = "OperationAborted";
static uint8_t const zig_errorName_NotOpenForWriting[18] = "NotOpenForWriting";
static uint8_t const zig_errorName_LockViolation[14] = "LockViolation";
static uint8_t const zig_errorName_ConnectionResetByPeer[22] = "ConnectionResetByPeer";
static uint8_t const zig_errorName_ProcessNotFound[16] = "ProcessNotFound";
static uint8_t const zig_errorName_AckTimeout[11] = "AckTimeout";
static uint8_t const zig_errorName_ConnectionTimedOut[19] = "ConnectionTimedOut";
static uint8_t const zig_errorName_NotOpenForReading[18] = "NotOpenForReading";
static uint8_t const zig_errorName_SocketNotConnected[19] = "SocketNotConnected";
static uint8_t const zig_errorName_Canceled[9] = "Canceled";
static uint8_t const zig_errorName_EndOfStream[12] = "EndOfStream";
static uint8_t const zig_errorName_UnexpectedError[16] = "UnexpectedError";
static uint8_t const zig_errorName_UnexpectedResponse[19] = "UnexpectedResponse";
static uint8_t const zig_errorName_UnsupportedClock[17] = "UnsupportedClock";
static uint8_t const zig_errorName_Overflow[9] = "Overflow";
static uint8_t const zig_errorName_Utf8ExpectedContinuation[25] = "Utf8ExpectedContinuation";
static uint8_t const zig_errorName_Utf8OverlongEncoding[21] = "Utf8OverlongEncoding";
static uint8_t const zig_errorName_Utf8EncodesSurrogateHalf[25] = "Utf8EncodesSurrogateHalf";
static uint8_t const zig_errorName_Utf8CodepointTooLarge[22] = "Utf8CodepointTooLarge";
static uint8_t const zig_errorName_Utf8InvalidStartByte[21] = "Utf8InvalidStartByte";
static uint8_t const zig_errorName_TruncatedInput[15] = "TruncatedInput";
static uint8_t const zig_errorName_Utf8CannotEncodeSurrogateHalf[30] = "Utf8CannotEncodeSurrogateHalf";
static uint8_t const zig_errorName_CodepointTooLarge[18] = "CodepointTooLarge";
static uint8_t const zig_errorName_Timeout[8] = "Timeout";
static struct anon__lazy_58 const zig_errorName[57] = {{zig_errorName_OutOfMemory, 11ul}, {zig_errorName_PermissionDenied, 16ul}, {zig_errorName_FileNotFound, 12ul}, {zig_errorName_NameTooLong, 11ul}, {zig_errorName_InputOutput, 11ul}, {zig_errorName_SystemResources, 15ul}, {zig_errorName_BadPathName, 11ul}, {zig_errorName_FileBusy, 8ul}, {zig_errorName_SymLinkLoop, 11ul}, {zig_errorName_ReadOnlyFileSystem, 18ul}, {zig_errorName_InvalidUtf8, 11ul}, {zig_errorName_InvalidWtf8, 11ul}, {zig_errorName_Unexpected, 10ul}, {zig_errorName_SharingViolation, 16ul}, {zig_errorName_PathAlreadyExists, 17ul}, {zig_errorName_AccessDenied, 12ul}, {zig_errorName_PipeBusy, 8ul}, {zig_errorName_NoDevice, 8ul}, {zig_errorName_NetworkNotFound, 15ul}, {zig_errorName_AntivirusInterference, 21ul}, {zig_errorName_ProcessFdQuotaExceeded, 22ul}, {zig_errorName_SystemFdQuotaExceeded, 21ul}, {zig_errorName_FileTooBig, 10ul}, {zig_errorName_IsDir, 5ul}, {zig_errorName_NoSpaceLeft, 11ul}, {zig_errorName_NotDir, 6ul}, {zig_errorName_DeviceBusy, 10ul}, {zig_errorName_FileLocksNotSupported, 21ul}, {zig_errorName_WouldBlock, 10ul}, {zig_errorName_DiskQuota, 9ul}, {zig_errorName_InvalidArgument, 15ul}, {zig_errorName_BrokenPipe, 10ul}, {zig_errorName_OperationAborted, 16ul}, {zig_errorName_NotOpenForWriting, 17ul}, {zig_errorName_LockViolation, 13ul}, {zig_errorName_ConnectionResetByPeer, 21ul}, {zig_errorName_ProcessNotFound, 15ul}, {zig_errorName_AckTimeout, 10ul}, {zig_errorName_ConnectionTimedOut, 18ul}, {zig_errorName_NotOpenForReading, 17ul}, {zig_errorName_SocketNotConnected, 18ul}, {zig_errorName_Canceled, 8ul}, {zig_errorName_EndOfStream, 11ul}, {zig_errorName_UnexpectedError, 15ul}, {zig_errorName_UnexpectedResponse, 18ul}, {zig_errorName_UnsupportedClock, 16ul}, {zig_errorName_Overflow, 8ul}, {zig_errorName_Utf8ExpectedContinuation, 24ul}, {zig_errorName_Utf8OverlongEncoding, 20ul}, {zig_errorName_Utf8EncodesSurrogateHalf, 24ul}, {zig_errorName_Utf8CodepointTooLarge, 21ul}, {zig_errorName_Utf8InvalidStartByte, 20ul}, {zig_errorName_TruncatedInput, 14ul}, {zig_errorName_Utf8CannotEncodeSurrogateHalf, 29ul}, {zig_errorName_CodepointTooLarge, 17ul}, {zig_errorName_Timeout, 7ul}};

static uint8_t const __anon_1813[21] = "/tmp/runner.ctl.fifo";

static uint8_t const __anon_1873[21] = "/tmp/runner.ack.fifo";

static uint8_t const __anon_2868[89] = "Invalid protocol detected: The stream end was found before all required bytes were read.";

static uint8_t const __anon_3300[36] = "Failed to allocate InstrumentHooks: ";

static uint8_t const __anon_3745[1] = "\n";

static uint8_t const __anon_4135[4] = "\033[J";

static uint8_t const __anon_4258[8] = "{ ... }";

static uint8_t const __anon_4571[3] = "\357\277\275";

static uint8_t const __anon_5533[27] = "Failed to start benchmark: ";

static uint8_t const __anon_5608[26] = "Failed to stop benchmark: ";

static uint8_t const __anon_5776[34] = "Failed to set executed benchmark: ";

static uint8_t const __anon_6023[10] = "Metadata: ";

static uint8_t const __anon_6038[1] = " ";

static uint8_t const __anon_6058[1] = "\000";

static uint8_t const __anon_6125[27] = "Failed to set integration: ";

static uint8_t const __anon_4232[4] = "any";

static uint8_t const __anon_6198[10] = "alderlake";

static nav__987_39 fifo_UnixPipe_openWrite__987(struct mem_Allocator__206 const a0, nav__987_42 const a1) {
 nav__987_39 t1;
 struct fifo_UnixPipe_Writer__538 t4;
 nav__987_56 t2;
 struct fs_File__546 t3;
 uint16_t t0;
 t0 = fs_accessAbsolute__1053(a1, (struct fs_File_OpenFlags__1820){UINT8_C(2),UINT8_C(0),false,false});
 if (t0) {
  t1.payload = (struct fifo_UnixPipe_Writer__538){{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)},{-INT32_C(0x55555556)}};
  t1.error = t0;
  return t1;
 }
 t2 = fs_openFileAbsolute__1050(a1, (struct fs_File_OpenFlags__1820){UINT8_C(2),UINT8_C(1),true,false});
 if (t2.error) {
  t0 = t2.error;
  t1.payload = (struct fifo_UnixPipe_Writer__538){{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)},{-INT32_C(0x55555556)}};
  t1.error = t0;
  return t1;
 }
 t3 = t2.payload;
 t4 = fifo_UnixPipe_Writer_init__988(t3, a0);
 t1.payload = t4;
 t1.error = UINT16_C(0);
 return t1;
}

static nav__986_39 fifo_UnixPipe_openRead__986(struct mem_Allocator__206 const a0, nav__986_42 const a1) {
 nav__986_39 t1;
 struct fifo_UnixPipe_Reader__540 t4;
 nav__986_56 t2;
 struct fs_File__546 t3;
 uint16_t t0;
 t0 = fs_accessAbsolute__1053(a1, (struct fs_File_OpenFlags__1820){UINT8_C(2),UINT8_C(0),false,false});
 if (t0) {
  t1.payload = (struct fifo_UnixPipe_Reader__540){{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)},{-INT32_C(0x55555556)}};
  t1.error = t0;
  return t1;
 }
 t2 = fs_openFileAbsolute__1050(a1, (struct fs_File_OpenFlags__1820){UINT8_C(2),UINT8_C(1),true,false});
 if (t2.error) {
  t0 = t2.error;
  t1.payload = (struct fifo_UnixPipe_Reader__540){{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)},{-INT32_C(0x55555556)}};
  t1.error = t0;
  return t1;
 }
 t3 = t2.payload;
 t4 = fifo_UnixPipe_Reader_init__993(t3, a0);
 t1.payload = t4;
 t1.error = UINT16_C(0);
 return t1;
}

static nav__337_39 instruments_perf_PerfInstrument_init__337(struct mem_Allocator__206 const a0) {
 struct instruments_perf_PerfInstrument__200 *t1;
 struct mem_Allocator__206 *t2;
 struct fifo_UnixPipe_Writer__538 *t3;
 nav__337_61 t4;
 nav__337_39 t6;
 nav__337_39 t0;
 struct fifo_UnixPipe_Writer__538 t7;
 struct fifo_UnixPipe_Reader__540 *t8;
 nav__337_66 t9;
 struct fifo_UnixPipe_Reader__540 t10;
 uint16_t t5;
 t0.error = UINT16_C(0);
 t1 = &t0.payload;
 t2 = (struct mem_Allocator__206 *)&t1->allocator;
 (*t2) = a0;
 t3 = (struct fifo_UnixPipe_Writer__538 *)&t1->writer;
 t4 = fifo_UnixPipe_openWrite__987(a0, (nav__337_59){(uint8_t const *)&__anon_1813,(uintptr_t)20ul});
 if (t4.error) {
  t5 = t4.error;
  t6.payload = (struct instruments_perf_PerfInstrument__200){{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)},{{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)},{-INT32_C(0x55555556)}},{{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)},{-INT32_C(0x55555556)}}};
  t6.error = t5;
  return t6;
 }
 t7 = t4.payload;
 (*t3) = t7;
 t8 = (struct fifo_UnixPipe_Reader__540 *)&t1->reader;
 t9 = fifo_UnixPipe_openRead__986(a0, (nav__337_59){(uint8_t const *)&__anon_1873,(uintptr_t)20ul});
 if (t9.error) {
  t5 = t9.error;
  t6.payload = (struct instruments_perf_PerfInstrument__200){{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)},{{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)},{-INT32_C(0x55555556)}},{{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)},{-INT32_C(0x55555556)}}};
  t6.error = t5;
  return t6;
 }
 t10 = t9.payload;
 (*t8) = t10;
 return t0;
}

static nav__314_39 instruments_root_InstrumentHooks_init__314(struct mem_Allocator__206 const a0) {
 struct instruments_valgrind_ValgrindInstrument__195 t2;
 struct instruments_root_InstrumentHooks__188 t3;
 nav__314_39 t4;
 struct instruments_perf_PerfInstrument__200 t6;
 struct instruments_perf_PerfInstrument__200 t8;
 struct instruments_perf_PerfInstrument__200 t5;
 nav__314_60 t7;
 uint8_t t0;
 bool t1;
 t0 = running_on_valgrind();
 t1 = t0 > UINT8_C(0);
 if (t1) {
  t2 = instruments_valgrind_ValgrindInstrument_init__325(a0);
  t3.tag = UINT8_C(0);
  t3.payload.valgrind = t2;
  t4.payload = t3;
  t4.error = UINT16_C(0);
  return t4;
 }
 goto zig_block_0;

 zig_block_0:;
 t7 = instruments_perf_PerfInstrument_init__337(a0);
 t1 = t7.error == UINT16_C(0);
 if (t1) {
  t8 = t7.payload;
  t6 = t8;
  goto zig_block_1;
 }
 return (nav__314_39){{{{{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)}}},UINT8_C(2)},0};

 zig_block_1:;
 t5 = t6;
 t1 = instruments_perf_PerfInstrument_is_instrumented__340(&t5);
 if (t1) {
  t6 = t5;
  t3.tag = UINT8_C(1);
  t3.payload.perf = t6;
  t4.payload = t3;
  t4.error = UINT16_C(0);
  return t4;
 }
 goto zig_block_2;

 zig_block_2:;
 return (nav__314_39){{{{{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)}}},UINT8_C(2)},0};
}

struct instruments_root_InstrumentHooks__188 *c_instrument_hooks_init__231(void) {
 struct instruments_root_InstrumentHooks__188 *t0;
 struct instruments_root_InstrumentHooks__188 *t3;
 nav__231_46 t1;
 nav__231_60 t5;
 nav__231_62 t6;
 nav__231_76 t7;
 struct instruments_root_InstrumentHooks__188 t8;
 uint16_t t4;
 bool t2;
 t1 = mem_Allocator_create__anon_795__3488((struct mem_Allocator__206){((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)&heap_CAllocator_vtable__3476)});
 t2 = t1.error == UINT16_C(0);
 if (t2) {
  t3 = t1.payload;
  t0 = t3;
  goto zig_block_0;
 }
 t4 = t1.error;
 t5 = zig_errorName[t4 - 1];
 t6.f0 = t5;
 debug_print__anon_809__3489(t6);
 return NULL;

 zig_block_0:;
 t7 = instruments_root_InstrumentHooks_init__314((struct mem_Allocator__206){((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)&heap_CAllocator_vtable__3476)});
 t8 = t7.payload;
 (*t0) = t8;
 t3 = (struct instruments_root_InstrumentHooks__188 *)t0;
 return t3;
}

static nav__3488_40 mem_Allocator_create__anon_795__3488(struct mem_Allocator__206 const a0) {
 struct mem_Allocator__206 const *t1;
 struct mem_Allocator__206 t2;
 struct mem_Allocator__206 t0;
 uintptr_t t3;
 nav__3488_51 t4;
 nav__3488_40 t6;
 uint8_t *t7;
 struct instruments_root_InstrumentHooks__188 *t8;
 uint16_t t5;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = (*t1);
 t3 = (uintptr_t)zig_return_address();
 t4 = mem_Allocator_allocBytesWithAlignment__anon_1902__3738(t2, (uintptr_t)72ul, t3);
 if (t4.error) {
  t5 = t4.error;
  t6.payload = ((struct instruments_root_InstrumentHooks__188 *)(uintptr_t)0xaaaaaaaaaaaaaaaaul);
  t6.error = t5;
  return t6;
 }
 t7 = t4.payload;
 t8 = (struct instruments_root_InstrumentHooks__188 *)t7;
 t6.payload = t8;
 t6.error = UINT16_C(0);
 return t6;
}

static void debug_print__anon_809__3489(nav__3489_40 const a0) {
 struct fs_File__546 const *t2;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t5;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t7;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *t8;
 void const **t10;
 void const *t11;
 nav__3489_54 (**t12)(void const *, nav__3489_39);
 struct io_Writer__1950 t13;
 struct io_Writer__1950 t9;
 struct io_Writer__1950 t14;
 struct io_Writer__1950 const *t15;
 struct fs_File__546 t0;
 struct fs_File__546 t1;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t3;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t4;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t6;
 uint16_t t16;
 uint16_t t17;
 bool t18;
 debug_lockStdErr__161();
 t0 = io_getStdErr__3756();
 t1 = t0;
 t2 = (struct fs_File__546 const *)&t1;
 t0 = (*t2);
 t3 = fs_File_writer__1162(t0);
 t4 = t3;
 t5 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *)&t4;
 t3 = (*t5);
 t6 = t3;
 t5 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *)&t6;
 t7 = t5;
 t8 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *)&t7;
 t10 = (void const **)&t9.context;
 t5 = (*t8);
 t2 = (struct fs_File__546 const *)&t5->context;
 t11 = (void const *)t2;
 (*t10) = t11;
 t12 = (nav__3489_54 (**)(void const *, nav__3489_39))&t9.writeFn;
 (*t12) = &io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooB__3818;
 t13 = t9;
 t14 = t13;
 t15 = (struct io_Writer__1950 const *)&t14;
 t13 = (*t15);
 t16 = io_Writer_print__anon_1973__3835(t13, a0);
 memcpy(&t17, &t16, sizeof(uint16_t));
 t18 = t17 == UINT16_C(0);
 if (t18) {
  goto zig_block_0;
 }
 debug_unlockStdErr__162();
 return;

 zig_block_0:;
 debug_unlockStdErr__162();
 return;
}

static struct instruments_valgrind_ValgrindInstrument__195 instruments_valgrind_ValgrindInstrument_init__325(struct mem_Allocator__206 const a0) {
 struct instruments_valgrind_ValgrindInstrument__195 t0;
 t0.allocator = a0;
 return t0;
}

static uint16_t fs_accessAbsolute__1053(nav__1053_39 const a0, struct fs_File_OpenFlags__1820 const a1) {
 struct fs_Dir__1822 const *t3;
 struct fs_Dir__1822 t1;
 struct fs_Dir__1822 t2;
 uint16_t t4;
 bool t0;
 t0 = fs_path_isAbsolute__3870(a0);
 debug_assert__179(t0);
 t1 = fs_cwd__1045();
 t2 = t1;
 t3 = (struct fs_Dir__1822 const *)&t2;
 t1 = (*t3);
 t4 = fs_Dir_access__3694(t1, a0, a1);
 if (t4) {
  return t4;
 }
 return 0;
}

static nav__1050_39 fs_openFileAbsolute__1050(nav__1050_41 const a0, struct fs_File_OpenFlags__1820 const a1) {
 struct fs_Dir__1822 const *t3;
 struct fs_Dir__1822 t1;
 struct fs_Dir__1822 t2;
 nav__1050_39 t4;
 bool t0;
 t0 = fs_path_isAbsolute__3870(a0);
 debug_assert__179(t0);
 t1 = fs_cwd__1045();
 t2 = t1;
 t3 = (struct fs_Dir__1822 const *)&t2;
 t1 = (*t3);
 t4 = fs_Dir_openFile__3630(t1, a0, a1);
 return t4;
}

static struct fifo_UnixPipe_Writer__538 fifo_UnixPipe_Writer_init__988(struct fs_File__546 const a0, struct mem_Allocator__206 const a1) {
 struct fs_File__546 *t1;
 struct mem_Allocator__206 *t2;
 struct fifo_UnixPipe_Writer__538 t0;
 t1 = (struct fs_File__546 *)&t0.file;
 (*t1) = a0;
 t2 = (struct mem_Allocator__206 *)&t0.allocator;
 (*t2) = a1;
 return t0;
}

static struct fifo_UnixPipe_Reader__540 fifo_UnixPipe_Reader_init__993(struct fs_File__546 const a0, struct mem_Allocator__206 const a1) {
 struct fs_File__546 *t1;
 struct mem_Allocator__206 *t2;
 struct fifo_UnixPipe_Reader__540 t0;
 t1 = (struct fs_File__546 *)&t0.file;
 (*t1) = a0;
 t2 = (struct mem_Allocator__206 *)&t0.allocator;
 (*t2) = a1;
 return t0;
}

static uint16_t fifo_UnixPipe_Writer_sendCmd__991(struct fifo_UnixPipe_Writer__538 *const a0, struct shared_Command__2004 const a1) {
 struct fifo_UnixPipe_Writer__538 *const *t1;
 struct mem_Allocator__206 *t3;
 struct mem_Allocator__206 t4;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 t5;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 t2;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 t6;
 nav__991_55 t8;
 struct fifo_UnixPipe_Writer__538 *t9;
 struct fifo_UnixPipe_Writer__538 *t0;
 struct fs_File__546 *t10;
 uintptr_t t12;
 uint32_t const *t15;
 uint8_t const (*t16)[4];
 nav__991_44 t17;
 struct fs_File__546 t11;
 uint32_t t13;
 uint32_t t14;
 uint16_t t7;
 t0 = a0;
 t1 = (struct fifo_UnixPipe_Writer__538 *const *)&t0;
 t3 = (struct mem_Allocator__206 *)&a0->allocator;
 t4 = (*t3);
 t5 = array_list_ArrayListAligned_28u8_2cnull_29_init__3983(t4);
 t2 = t5;
 t6 = array_list_ArrayListAligned_28u8_2cnull_29_writer__4008(&t2);
 t7 = bincode_serialize__anon_2070__4089(t6, a1);
 if (t7) {
  t5 = t2;
  array_list_ArrayListAligned_28u8_2cnull_29_deinit__3985(t5);
  return t7;
 }
 t5 = t2;
 t8 = t5.items;
 t9 = (*t1);
 t10 = (struct fs_File__546 *)&t9->file;
 t11 = (*t10);
 t12 = t8.len;
 t13 = (uint32_t)t12;
 t14 = t13;
 t15 = (uint32_t const *)&t14;
 t16 = mem_asBytes__anon_2105__4090(t15);
 t17.ptr = &(*t16)[(uintptr_t)0ul];
 t17.len = (uintptr_t)4ul;
 t7 = fs_File_writeAll__1144(t11, t17);
 if (t7) {
  t5 = t2;
  array_list_ArrayListAligned_28u8_2cnull_29_deinit__3985(t5);
  return t7;
 }
 t9 = (*t1);
 t10 = (struct fs_File__546 *)&t9->file;
 t11 = (*t10);
 memcpy(&t17, &t8, sizeof(nav__991_44));
 t7 = fs_File_writeAll__1144(t11, t17);
 if (t7) {
  t5 = t2;
  array_list_ArrayListAligned_28u8_2cnull_29_deinit__3985(t5);
  return t7;
 }
 t5 = t2;
 array_list_ArrayListAligned_28u8_2cnull_29_deinit__3985(t5);
 return 0;
}

static nav__4200_38 bincode_deserializeInt__anon_2341__4200(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const a0) {
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *t1;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *t4;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 t2;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 t0;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 t3;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *const *t5;
 void const **t7;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *t8;
 void const *t9;
 nav__4200_50 (**t10)(void const *, nav__4200_52);
 struct io_Reader__2355 t11;
 struct io_Reader__2355 t6;
 struct io_Reader__2355 t12;
 struct io_Reader__2355 t15;
 struct io_Reader__2355 const *t13;
 uint8_t const (*t21)[4];
 nav__4200_38 t14;
 nav__4200_38 t18;
 uint32_t t22;
 nav__4200_64 t16;
 uint16_t t17;
 uint8_t t19[4];
 uint8_t t20[4];
 t0 = a0;
 t1 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *)&t0;
 t2 = (*t1);
 t3 = t2;
 t1 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *)&t3;
 t4 = t1;
 t5 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *const *)&t4;
 t7 = (void const **)&t6.context;
 t1 = (*t5);
 t8 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *)&t1->context;
 t9 = (void const *)t8;
 (*t7) = t9;
 t10 = (nav__4200_50 (**)(void const *, nav__4200_52))&t6.readFn;
 (*t10) = &io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29_typeEras__4196;
 t11 = t6;
 t12 = t11;
 t13 = (struct io_Reader__2355 const *)&t12;
 t11 = (*t13);
 t15 = t11;
 t13 = (struct io_Reader__2355 const *)&t15;
 t11 = (*t13);
 t16 = io_Reader_readBytesNoEof__anon_2384__4238(t11);
 if (t16.error) {
  t17 = t16.error;
  t18.payload = UINT32_C(0xaaaaaaaa);
  t18.error = t17;
  t14 = t18;
  goto zig_block_0;
 }
 memcpy(t19, t16.payload, sizeof(uint8_t[4]));
 memcpy((char *)&t20, t19, sizeof(uint8_t[4]));
 t21 = (uint8_t const (*)[4])&t20;
 memcpy(t19, (const char *)t21, sizeof(uint8_t[4]));
 memcpy(&t22, &t19, sizeof(uint32_t));
 t22 = zig_wrap_u32(t22, UINT8_C(32));
 t18.payload = t22;
 t18.error = UINT16_C(0);
 t14 = t18;
 goto zig_block_0;

 zig_block_0:;
 memcpy(&t18, &t14, sizeof(nav__4200_38));
 if (t18.error) {
  t17 = t18.error;
  t18.payload = UINT32_C(0xaaaaaaaa);
  t18.error = t17;
  return t18;
 }
 t22 = t18.payload;
 t18.payload = t22;
 t18.error = UINT16_C(0);
 return t18;
}

static nav__4199_38 bincode_deserializeAlloc__anon_2330__4199(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const a0, struct mem_Allocator__206 const a1) {
 nav__4199_38 t0;
 uint32_t t2;
 uint16_t t1;
 (void)a1;
 t0 = bincode_deserializeInt__anon_2341__4200(a0);
 if (t0.error) {
  t1 = t0.error;
  t0.payload = UINT32_C(0xaaaaaaaa);
  t0.error = t1;
  return t0;
 }
 t2 = t0.payload;
 t0.payload = t2;
 t0.error = UINT16_C(0);
 return t0;
}

static nav__4242_40 bincode_deserializePointerAlloc__anon_2464__4242(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const a0, struct mem_Allocator__206 const a1) {
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *t1;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *t6;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *t7;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *t32;
 struct mem_Allocator__206 const *t3;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 t4;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 t0;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 t5;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 t31;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *const *t8;
 void const **t10;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *t11;
 void const *t12;
 nav__4242_59 (**t13)(void const *, nav__4242_39);
 struct io_Reader__2355 t14;
 struct io_Reader__2355 t9;
 struct io_Reader__2355 t15;
 struct io_Reader__2355 t18;
 struct io_Reader__2355 t33;
 struct io_Reader__2355 t34;
 struct io_Reader__2355 const *t16;
 nav__4242_69 t17;
 nav__4242_69 t21;
 uint8_t const (*t24)[8];
 uint64_t t25;
 uint64_t t38;
 nav__4242_40 t26;
 uintptr_t t27;
 uintptr_t t37;
 struct mem_Allocator__206 t29;
 struct mem_Allocator__206 t2;
 nav__4242_39 t30;
 nav__4242_39 t28;
 nav__4242_59 t35;
 nav__4242_59 t36;
 nav__4242_72 t19;
 uint16_t t20;
 uint8_t t22[8];
 uint8_t t23[8];
 bool t39;
 t0 = a0;
 t1 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *)&t0;
 t2 = a1;
 t3 = (struct mem_Allocator__206 const *)&t2;
 t4 = (*t1);
 t5 = t4;
 t6 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *)&t5;
 t7 = t6;
 t8 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *const *)&t7;
 t10 = (void const **)&t9.context;
 t6 = (*t8);
 t11 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *)&t6->context;
 t12 = (void const *)t11;
 (*t10) = t12;
 t13 = (nav__4242_59 (**)(void const *, nav__4242_39))&t9.readFn;
 (*t13) = &io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29_typeEras__4196;
 t14 = t9;
 t15 = t14;
 t16 = (struct io_Reader__2355 const *)&t15;
 t14 = (*t16);
 t18 = t14;
 t16 = (struct io_Reader__2355 const *)&t18;
 t14 = (*t16);
 t19 = io_Reader_readBytesNoEof__anon_2477__4243(t14);
 if (t19.error) {
  t20 = t19.error;
  t21.payload = UINT64_C(0xaaaaaaaaaaaaaaaa);
  t21.error = t20;
  t17 = t21;
  goto zig_block_0;
 }
 memcpy(t22, t19.payload, sizeof(uint8_t[8]));
 memcpy((char *)&t23, t22, sizeof(uint8_t[8]));
 t24 = (uint8_t const (*)[8])&t23;
 memcpy(t22, (const char *)t24, sizeof(uint8_t[8]));
 memcpy(&t25, &t22, sizeof(uint64_t));
 t25 = zig_wrap_u64(t25, UINT8_C(64));
 t21.payload = t25;
 t21.error = UINT16_C(0);
 t17 = t21;
 goto zig_block_0;

 zig_block_0:;
 memcpy(&t21, &t17, sizeof(nav__4242_69));
 if (t21.error) {
  t20 = t21.error;
  t26.payload = (nav__4242_39){(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t26.error = t20;
  return t26;
 }
 t25 = t21.payload;
 t27 = t25;
 t29 = (*t3);
 t26 = mem_Allocator_alloc__anon_2188__4131(t29, t27);
 if (t26.error) {
  t20 = t26.error;
  t26.payload = (nav__4242_39){(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t26.error = t20;
  return t26;
 }
 t30 = t26.payload;
 t28 = t30;
 t4 = (*t1);
 t30 = t28;
 t31 = t4;
 t1 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *)&t31;
 t32 = t1;
 t8 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const *const *)&t32;
 t10 = (void const **)&t33.context;
 t1 = (*t8);
 t11 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *)&t1->context;
 t12 = (void const *)t11;
 (*t10) = t12;
 t13 = (nav__4242_59 (**)(void const *, nav__4242_39))&t33.readFn;
 (*t13) = &io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29_typeEras__4196;
 t14 = t33;
 t34 = t14;
 t16 = (struct io_Reader__2355 const *)&t34;
 t14 = (*t16);
 t35 = io_Reader_readAll__4203(t14, t30);
 memcpy(&t36, &t35, sizeof(nav__4242_59));
 t37 = t36.payload;
 t25 = t37;
 t38 = t27;
 t39 = t25 != t38;
 if (t39) {
  bincode_invalidProtocol__anon_2501__4244();
  zig_unreachable();
 }
 goto zig_block_1;

 zig_block_1:;
 t30 = t28;
 t26.payload = t30;
 t26.error = UINT16_C(0);
 return t26;
}

static nav__4241_40 bincode_deserializeAlloc__anon_2451__4241(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const a0, struct mem_Allocator__206 const a1) {
 nav__4241_57 t0;
 nav__4241_40 t2;
 nav__4241_55 t3;
 nav__4241_39 t4;
 uint16_t t1;
 t0 = bincode_deserializePointerAlloc__anon_2464__4242(a0, a1);
 if (t0.error) {
  t1 = t0.error;
  t2.payload = (nav__4241_39){(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t2.error = t1;
  return t2;
 }
 t3 = t0.payload;
 memcpy(&t4, &t3, sizeof(nav__4241_39));
 t2.payload = t4;
 t2.error = UINT16_C(0);
 return t2;
}

static nav__4240_39 bincode_deserializeStructAlloc__anon_2426__4240(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const a0, struct mem_Allocator__206 const a1) {
 uint32_t *t1;
 nav__4240_39 t4;
 nav__4240_44 *t6;
 nav__4240_60 t7;
 nav__4240_44 t8;
 struct shared_Command__struct_2007__2007 t9;
 struct shared_Command__struct_2007__2007 t0;
 nav__4240_57 t2;
 uint32_t t5;
 uint16_t t3;
 t1 = (uint32_t *)&t0.pid;
 t2 = bincode_deserializeAlloc__anon_2330__4199(a0, a1);
 if (t2.error) {
  t3 = t2.error;
  t4.payload = (struct shared_Command__struct_2007__2007){{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)};
  t4.error = t3;
  return t4;
 }
 t5 = t2.payload;
 (*t1) = t5;
 t6 = (nav__4240_44 *)&t0.uri;
 t7 = bincode_deserializeAlloc__anon_2451__4241(a0, a1);
 if (t7.error) {
  t3 = t7.error;
  t4.payload = (struct shared_Command__struct_2007__2007){{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)};
  t4.error = t3;
  return t4;
 }
 t8 = t7.payload;
 (*t6) = t8;
 t9 = t0;
 t4.payload = t9;
 t4.error = UINT16_C(0);
 return t4;
}

static nav__4239_39 bincode_deserializeAlloc__anon_2397__4239(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const a0, struct mem_Allocator__206 const a1) {
 nav__4239_39 t0;
 struct shared_Command__struct_2007__2007 t2;
 uint16_t t1;
 t0 = bincode_deserializeStructAlloc__anon_2426__4240(a0, a1);
 if (t0.error) {
  t1 = t0.error;
  t0.payload = (struct shared_Command__struct_2007__2007){{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)};
  t0.error = t1;
  return t0;
 }
 t2 = t0.payload;
 t0.payload = t2;
 t0.error = UINT16_C(0);
 return t0;
}

static uint16_t bincode_deserializeAlloc__anon_2516__4245(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const a0, struct mem_Allocator__206 const a1) {
 (void)a0;
 (void)a1;
 return 0;
}

static nav__4247_39 bincode_deserializeStructAlloc__anon_2578__4247(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const a0, struct mem_Allocator__206 const a1) {
 nav__4247_44 *t1;
 nav__4247_57 t2;
 nav__4247_39 t4;
 nav__4247_44 t5;
 struct shared_Command__struct_2008__2008 t6;
 struct shared_Command__struct_2008__2008 t0;
 uint16_t t3;
 t1 = (nav__4247_44 *)&t0.name;
 t2 = bincode_deserializeAlloc__anon_2451__4241(a0, a1);
 if (t2.error) {
  t3 = t2.error;
  t4.payload = (struct shared_Command__struct_2008__2008){{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul}};
  t4.error = t3;
  return t4;
 }
 t5 = t2.payload;
 (*t1) = t5;
 t1 = (nav__4247_44 *)&t0.version;
 t2 = bincode_deserializeAlloc__anon_2451__4241(a0, a1);
 if (t2.error) {
  t3 = t2.error;
  t4.payload = (struct shared_Command__struct_2008__2008){{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul}};
  t4.error = t3;
  return t4;
 }
 t5 = t2.payload;
 (*t1) = t5;
 t6 = t0;
 t4.payload = t6;
 t4.error = UINT16_C(0);
 return t4;
}

static nav__4246_39 bincode_deserializeAlloc__anon_2559__4246(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const a0, struct mem_Allocator__206 const a1) {
 nav__4246_39 t0;
 struct shared_Command__struct_2008__2008 t2;
 uint16_t t1;
 t0 = bincode_deserializeStructAlloc__anon_2578__4247(a0, a1);
 if (t0.error) {
  t1 = t0.error;
  t0.payload = (struct shared_Command__struct_2008__2008){{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul}};
  t0.error = t1;
  return t0;
 }
 t2 = t0.payload;
 t0.payload = t2;
 t0.error = UINT16_C(0);
 return t0;
}

static nav__4198_39 bincode_deserializeUnionAlloc__anon_2325__4198(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const a0, struct mem_Allocator__206 const a1) {
 nav__4198_39 t2;
 nav__4198_63 t6;
 struct shared_Command__struct_2007__2007 t7;
 struct shared_Command__2004 t8;
 nav__4198_65 t9;
 struct shared_Command__struct_2008__2008 t10;
 nav__4198_61 t0;
 uint32_t t3;
 uint16_t t1;
 uint8_t t4;
 bool t5;
 t0 = bincode_deserializeAlloc__anon_2330__4199(a0, a1);
 if (t0.error) {
  t1 = t0.error;
  t2.payload = (struct shared_Command__2004){{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(0x2)};
  t2.error = t1;
  return t2;
 }
 t3 = t0.payload;
 t4 = (uint8_t)t3;
 t5 = t4 == UINT8_C(0);
 if (t5) {
  t6 = bincode_deserializeAlloc__anon_2397__4239(a0, a1);
  if (t6.error) {
   t1 = t6.error;
   t2.payload = (struct shared_Command__2004){{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(0x2)};
   t2.error = t1;
   return t2;
  }
  t7 = t6.payload;
  t8.tag = UINT8_C(0);
  t8.payload.ExecutedBenchmark = t7;
  t2.payload = t8;
  t2.error = UINT16_C(0);
  return t2;
 }
 goto zig_block_0;

 zig_block_0:;
 t5 = t4 == UINT8_C(1);
 if (t5) {
  (void)bincode_deserializeAlloc__anon_2516__4245(a0, a1);
  return (nav__4198_39){{{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(1)},0};
 }
 goto zig_block_1;

 zig_block_1:;
 t5 = t4 == UINT8_C(2);
 if (t5) {
  (void)bincode_deserializeAlloc__anon_2516__4245(a0, a1);
  return (nav__4198_39){{{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(2)},0};
 }
 goto zig_block_2;

 zig_block_2:;
 t5 = t4 == UINT8_C(3);
 if (t5) {
  (void)bincode_deserializeAlloc__anon_2516__4245(a0, a1);
  return (nav__4198_39){{{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(3)},0};
 }
 goto zig_block_3;

 zig_block_3:;
 t5 = t4 == UINT8_C(4);
 if (t5) {
  (void)bincode_deserializeAlloc__anon_2516__4245(a0, a1);
  return (nav__4198_39){{{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(4)},0};
 }
 goto zig_block_4;

 zig_block_4:;
 t5 = t4 == UINT8_C(5);
 if (t5) {
  t9 = bincode_deserializeAlloc__anon_2559__4246(a0, a1);
  if (t9.error) {
   t1 = t9.error;
   t2.payload = (struct shared_Command__2004){{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(0x2)};
   t2.error = t1;
   return t2;
  }
  t10 = t9.payload;
  t8.tag = UINT8_C(5);
  t8.payload.SetIntegration = t10;
  t2.payload = t8;
  t2.error = UINT16_C(0);
  return t2;
 }
 goto zig_block_5;

 zig_block_5:;
 t5 = t4 == UINT8_C(6);
 if (t5) {
  (void)bincode_deserializeAlloc__anon_2516__4245(a0, a1);
  return (nav__4198_39){{{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(6)},0};
 }
 goto zig_block_6;

 zig_block_6:;
 zig_unreachable();
}

static nav__4197_39 bincode_deserializeAlloc__anon_2238__4197(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 const a0, struct mem_Allocator__206 const a1) {
 nav__4197_39 t0;
 struct shared_Command__2004 t2;
 uint16_t t1;
 t0 = bincode_deserializeUnionAlloc__anon_2325__4198(a0, a1);
 if (t0.error) {
  t1 = t0.error;
  t0.payload = (struct shared_Command__2004){{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(0x2)};
  t0.error = t1;
  return t0;
 }
 t2 = t0.payload;
 t0.payload = t2;
 t0.error = UINT16_C(0);
 return t0;
}

static nav__996_39 fifo_UnixPipe_Reader_recvCmd__996(struct fifo_UnixPipe_Reader__540 *const a0) {
 struct fifo_UnixPipe_Reader__540 *const *t1;
 struct fifo_UnixPipe_Reader__540 *t3;
 struct fifo_UnixPipe_Reader__540 *t0;
 struct fs_File__546 *t4;
 nav__996_66 t6;
 nav__996_69 t7;
 nav__996_39 t9;
 uint8_t const (*t10)[4];
 struct mem_Allocator__206 *t13;
 struct mem_Allocator__206 t14;
 uintptr_t t15;
 nav__996_73 t16;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 t19;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 t18;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 t20;
 struct shared_Command__2004 t21;
 struct fs_File__546 t5;
 uint32_t t12;
 uint16_t t8;
 uint8_t t11[4];
 uint8_t t2[4];
 bool t17;
 t0 = a0;
 t1 = (struct fifo_UnixPipe_Reader__540 *const *)&t0;
 t3 = (*t1);
 t4 = (struct fs_File__546 *)&t3->file;
 t5 = (*t4);
 t6.ptr = &t2[(uintptr_t)0ul];
 t6.len = (uintptr_t)4ul;
 t7 = fs_File_readAll__1134(t5, t6);
 if (t7.error) {
  t8 = t7.error;
  t9.payload = (struct shared_Command__2004){{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(0x2)};
  t9.error = t8;
  return t9;
 }
 t10 = (uint8_t const (*)[4])&t2;
 memcpy(t11, (const char *)t10, sizeof(uint8_t[4]));
 memcpy(&t12, &t11, sizeof(uint32_t));
 t12 = zig_wrap_u32(t12, UINT8_C(32));
 t3 = (*t1);
 t13 = (struct mem_Allocator__206 *)&t3->allocator;
 t14 = (*t13);
 t15 = (uintptr_t)t12;
 t16 = mem_Allocator_alloc__anon_2188__4131(t14, t15);
 if (t16.error) {
  t8 = t16.error;
  t9.payload = (struct shared_Command__2004){{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(0x2)};
  t9.error = t8;
  return t9;
 }
 t6 = t16.payload;
 zig_loop_36:
 t3 = (*t1);
 t4 = (struct fs_File__546 *)&t3->file;
 t5 = (*t4);
 t7 = fs_File_readAll__1134(t5, t6);
 t17 = t7.error == UINT16_C(0);
 if (t17) {
  goto zig_block_2;
 }
 goto zig_block_1;

 zig_block_2:;
 goto zig_block_0;

 zig_block_1:;
 goto zig_loop_36;

 zig_block_0:;
 t19 = io_fixed_buffer_stream_fixedBufferStream__anon_2210__4163(t6);
 t18 = t19;
 t20 = io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_reader__4152(&t18);
 t13 = (struct mem_Allocator__206 *)&a0->allocator;
 t14 = (*t13);
 t9 = bincode_deserializeAlloc__anon_2238__4197(t20, t14);
 if (t9.error) {
  t8 = t9.error;
  t3 = (*t1);
  t13 = (struct mem_Allocator__206 *)&t3->allocator;
  t14 = (*t13);
  mem_Allocator_free__anon_2612__4248(t14, t6);
  t9.payload = (struct shared_Command__2004){{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(0x2)};
  t9.error = t8;
  return t9;
 }
 t21 = t9.payload;
 t3 = (*t1);
 t13 = (struct mem_Allocator__206 *)&t3->allocator;
 t14 = (*t13);
 mem_Allocator_free__anon_2612__4248(t14, t6);
 t9.payload = t21;
 t9.error = UINT16_C(0);
 return t9;
}

static nav__997_39 fifo_UnixPipe_Reader_waitForResponse__997(struct fifo_UnixPipe_Reader__540 *const a0, nav__997_42 const a1) {
 zig_i128 t2;
 zig_i128 t6;
 struct fifo_UnixPipe_Reader__540 *const *t1;
 uint64_t t3;
 uint64_t t5;
 struct shared_Command__2004 t7;
 struct shared_Command__2004 t10;
 struct fifo_UnixPipe_Reader__540 *t8;
 struct fifo_UnixPipe_Reader__540 *t0;
 nav__997_39 t9;
 bool t4;
 t0 = a0;
 t1 = (struct fifo_UnixPipe_Reader__540 *const *)&t0;
 t2 = time_nanoTimestamp__4103();
 t4 = a1.is_null != true;
 if (t4) {
  t5 = a1.payload;
  t3 = t5;
  goto zig_block_0;
 }
 t3 = UINT64_C(5000000000);
 goto zig_block_0;

 zig_block_0:;
 zig_loop_13:
 t6 = time_nanoTimestamp__4103();
 t6 = zig_sub_i128(t6, t2);
 t5 = zig_lo_i128(t6);
 t4 = t5 > t3;
 if (t4) {
  return (nav__997_39){{{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(0x2)},zig_error_AckTimeout};
 }
 goto zig_block_2;

 zig_block_2:;
 t8 = (*t1);
 t9 = fifo_UnixPipe_Reader_recvCmd__996(t8);
 t4 = t9.error == UINT16_C(0);
 if (t4) {
  t10 = t9.payload;
  t7 = t10;
  goto zig_block_3;
 }
 utils_sleep__4253(UINT64_C(10000000));
 goto zig_block_1;

 zig_block_3:;
 t9.payload = t7;
 t9.error = UINT16_C(0);
 return t9;

 zig_block_1:;
 goto zig_loop_13;
}

static uint16_t fifo_UnixPipe_Reader_waitForAck__998(struct fifo_UnixPipe_Reader__540 *const a0, nav__998_40 const a1) {
 struct fifo_UnixPipe_Reader__540 *const *t1;
 struct fifo_UnixPipe_Reader__540 *t2;
 struct fifo_UnixPipe_Reader__540 *t0;
 nav__998_55 t3;
 struct shared_Command__2004 t5;
 struct shared_Command__2004 t6;
 struct shared_Command__2004 const *t7;
 struct mem_Allocator__206 *t10;
 struct mem_Allocator__206 t11;
 uint16_t t4;
 uint8_t t8;
 bool t9;
 t0 = a0;
 t1 = (struct fifo_UnixPipe_Reader__540 *const *)&t0;
 t2 = (*t1);
 t3 = fifo_UnixPipe_Reader_waitForResponse__997(t2, a1);
 if (t3.error) {
  t4 = t3.error;
  return t4;
 }
 t5 = t3.payload;
 t6 = t5;
 t7 = (struct shared_Command__2004 const *)&t6;
 t8 = t5.tag;
 t9 = t8 == UINT8_C(3);
 if (t9) {
  t5 = (*t7);
  t10 = (struct mem_Allocator__206 *)&a0->allocator;
  t11 = (*t10);
  shared_Command_deinit__3933(t5, t11);
  return 0;
 }
 t8 = t5.tag;
 t9 = t8 == UINT8_C(6);
 if (t9) {
  t5 = (*t7);
  t10 = (struct mem_Allocator__206 *)&a0->allocator;
  t11 = (*t10);
  shared_Command_deinit__3933(t5, t11);
  return zig_error_UnexpectedError;
 }
 t5 = (*t7);
 t10 = (struct mem_Allocator__206 *)&a0->allocator;
 t11 = (*t10);
 shared_Command_deinit__3933(t5, t11);
 return zig_error_UnexpectedResponse;
}

static uint16_t instruments_perf_PerfInstrument_send_cmd__339(struct instruments_perf_PerfInstrument__200 *const a0, struct shared_Command__2004 const a1) {
 struct instruments_perf_PerfInstrument__200 *const *t1;
 struct instruments_perf_PerfInstrument__200 *t2;
 struct instruments_perf_PerfInstrument__200 *t0;
 struct fifo_UnixPipe_Writer__538 *t3;
 struct fifo_UnixPipe_Reader__540 *t5;
 uint16_t t4;
 t0 = a0;
 t1 = (struct instruments_perf_PerfInstrument__200 *const *)&t0;
 t2 = (*t1);
 t3 = (struct fifo_UnixPipe_Writer__538 *)&t2->writer;
 t4 = fifo_UnixPipe_Writer_sendCmd__991(t3, a1);
 if (t4) {
  return t4;
 }
 t2 = (*t1);
 t5 = (struct fifo_UnixPipe_Reader__540 *)&t2->reader;
 t4 = fifo_UnixPipe_Reader_waitForAck__998(t5, (nav__339_67){UINT64_C(0xaaaaaaaaaaaaaaaa),true});
 if (t4) {
  return t4;
 }
 return 0;
}

static bool instruments_perf_PerfInstrument_is_instrumented__340(struct instruments_perf_PerfInstrument__200 *const a0) {
 struct instruments_perf_PerfInstrument__200 *const *t1;
 struct instruments_perf_PerfInstrument__200 *t2;
 struct instruments_perf_PerfInstrument__200 *t0;
 uint16_t t3;
 bool t4;
 t0 = a0;
 t1 = (struct instruments_perf_PerfInstrument__200 *const *)&t0;
 t2 = (*t1);
 t3 = instruments_perf_PerfInstrument_send_cmd__339(t2, (struct shared_Command__2004){{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(4)});
 t4 = t3 == UINT16_C(0);
 if (t4) {
  goto zig_block_0;
 }
 return false;

 zig_block_0:;
 return true;
}

static nav__3738_39 mem_Allocator_allocBytesWithAlignment__anon_1902__3738(struct mem_Allocator__206 const a0, uintptr_t const a1, uintptr_t const a2) {
 struct mem_Allocator__206 const *t1;
 uint64_t t2;
 uint8_t *t4;
 uint8_t *t13;
 uint8_t *t14;
 uint8_t *t15;
 struct mem_Allocator__206 t5;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t7;
 struct mem_Allocator_VTable__209 const *const *t8;
 struct mem_Allocator_VTable__209 const *t9;
 uint8_t *(*const *t10)(void *, uintptr_t, uint8_t, uintptr_t);
 uint8_t *(*t11)(void *, uintptr_t, uint8_t, uintptr_t);
 void *t12;
 uint8_t *const *t16;
 nav__3738_52 t17;
 nav__3738_39 t18;
 bool t3;
 uint8_t t6;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = a1;
 t3 = t2 == UINT64_C(0);
 if (t3) {
  return (nav__3738_39){(uint8_t *)(uintptr_t)0xfffffffffffffff8ul,0};
 }
 goto zig_block_0;

 zig_block_0:;
 t5 = (*t1);
 t6 = mem_Alignment_fromByteUnits__628((uintptr_t)8ul);
 t7 = t5;
 t1 = (struct mem_Allocator__206 const *)&t7;
 t8 = (struct mem_Allocator_VTable__209 const *const *)&t1->vtable;
 t9 = (*t8);
 t10 = (uint8_t *(*const *)(void *, uintptr_t, uint8_t, uintptr_t))&t9->alloc;
 t11 = (*t10);
 t12 = t5.ptr;
 t13 = t11(t12, a1, t6, a2);
 t3 = t13 != NULL;
 if (t3) {
  t14 = t13;
  t4 = t14;
  goto zig_block_1;
 }
 return (nav__3738_39){((uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),zig_error_OutOfMemory};

 zig_block_1:;
 t15 = t4;
 t16 = (uint8_t *const *)&t15;
 t14 = (*t16);
 t14 = (uint8_t *)(((uintptr_t)t14) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t17.ptr = t14;
 t17.len = a1;
 t14 = (uint8_t *)t4;
 t18.payload = t14;
 t18.error = UINT16_C(0);
 return t18;
}

static void debug_lockStdErr__161(void) {
 Progress_lockStdErr__4281();
 return;
}

static struct fs_File__546 io_getStdErr__3756(void) {
 int32_t *t1;
 int32_t t2;
 struct fs_File__546 t0;
 t1 = (int32_t *)&t0.handle;
 t2 = io_getStdErrHandle__3755();
 (*t1) = t2;
 return t0;
}

static struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 fs_File_writer__1162(struct fs_File__546 const a0) {
 struct fs_File__546 *t1;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t0;
 t1 = (struct fs_File__546 *)&t0.context;
 (*t1) = a0;
 return t0;
}

static nav__3818_38 io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooB__3818(void const *const a0, nav__3818_41 const a1) {
 struct fs_File__546 const *t0;
 nav__3818_38 t2;
 nav__3818_38 t3;
 struct fs_File__546 t1;
 t0 = (struct fs_File__546 const *)a0;
 t1 = (*t0);
 t2 = fs_File_write__1143(t1, a1);
 memcpy(&t3, &t2, sizeof(nav__3818_38));
 return t3;
}

static uint16_t io_Writer_print__anon_1973__3835(struct io_Writer__1950 const a0, nav__3835_41 const a1) {
 uint16_t t0;
 uint16_t t1;
 t0 = fmt_format__anon_2701__4480(a0, a1);
 memcpy(&t1, &t0, sizeof(uint16_t));
 return t1;
}

static void debug_unlockStdErr__162(void) {
 Progress_unlockStdErr__4282();
 return;
}

static bool fs_path_isAbsolute__3870(nav__3870_39 const a0) {
 bool t0;
 t0 = fs_path_isAbsolutePosix__3876(a0);
 return t0;
}

static void debug_assert__179(bool const a0) {
 bool t0;
 t0 = !a0;
 if (t0) {
  zig_unreachable();
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static struct fs_Dir__1822 fs_cwd__1045(void) {
 struct fs_Dir__1822 t0;
 t0 = (struct fs_Dir__1822){-INT32_C(100)};
 return t0;
}

static uint16_t fs_Dir_access__3694(struct fs_Dir__1822 const a0, nav__3694_40 const a1, struct fs_File_OpenFlags__1820 const a2) {
 struct fs_Dir__1822 const *t1;
 uint8_t const (*t6)[4096];
 uint8_t const *t8;
 struct fs_Dir__1822 t7;
 struct fs_Dir__1822 t0;
 nav__3694_49 t2;
 uint16_t t3;
 uint8_t t4[4096];
 uint8_t t5[4096];
 t0 = a0;
 t1 = (struct fs_Dir__1822 const *)&t0;
 t2 = posix_toPosixPath__1628(a1);
 if (t2.error) {
  t3 = t2.error;
  return t3;
 }
 memcpy(t4, t2.payload, sizeof(uint8_t[4096]));
 memcpy((char *)&t5, t4, sizeof(uint8_t[4096]));
 t6 = (uint8_t const (*)[4096])&t5;
 t7 = (*t1);
 t8 = (uint8_t const *)t6;
 t3 = fs_Dir_accessZ__3695(t7, t8, a2);
 return t3;
}

static nav__3630_39 fs_Dir_openFile__3630(struct fs_Dir__1822 const a0, nav__3630_42 const a1, struct fs_File_OpenFlags__1820 const a2) {
 struct fs_Dir__1822 const *t1;
 uint8_t const (*t8)[4096];
 uint8_t const *t10;
 nav__3630_39 t5;
 struct fs_Dir__1822 t9;
 struct fs_Dir__1822 t0;
 nav__3630_53 t3;
 uint16_t t4;
 uint8_t t6[4096];
 uint8_t t7[4096];
 struct fs_File_OpenFlags__1820 t2;
 t0 = a0;
 t1 = (struct fs_Dir__1822 const *)&t0;
 t2 = a2;
 t3 = posix_toPosixPath__1628(a1);
 if (t3.error) {
  t4 = t3.error;
  t5.payload = (struct fs_File__546){-INT32_C(0x55555556)};
  t5.error = t4;
  return t5;
 }
 memcpy(t6, t3.payload, sizeof(uint8_t[4096]));
 memcpy((char *)&t7, t6, sizeof(uint8_t[4096]));
 t8 = (uint8_t const (*)[4096])&t7;
 t9 = (*t1);
 t10 = (uint8_t const *)t8;
 t5 = fs_Dir_openFileZ__3631(t9, t10, a2);
 return t5;
}

static struct array_list_ArrayListAligned_28u8_2cnull_29__2035 array_list_ArrayListAligned_28u8_2cnull_29_init__3983(struct mem_Allocator__206 const a0) {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 t0;
 t0.items = (nav__3983_42){(uint8_t *)((void const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),(uintptr_t)0ul};
 t0.capacity = (uintptr_t)0ul;
 t0.allocator = a0;
 return t0;
}

static struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 array_list_ArrayListAligned_28u8_2cnull_29_writer__4008(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const a0) {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 **t1;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 t0;
 t1 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 **)&t0.context;
 (*t1) = a0;
 return t0;
}

static uint16_t bincode_serialize__anon_2070__4089(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, struct shared_Command__2004 const a1) {
 uint16_t t0;
 t0 = bincode_serializeUnion__anon_2787__4493(a0, a1);
 if (t0) {
  return t0;
 }
 return 0;
}

static void array_list_ArrayListAligned_28u8_2cnull_29_deinit__3985(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 const a0) {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 const *t1;
 struct mem_Allocator__206 const *t2;
 struct mem_Allocator__206 t3;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 t4;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 t0;
 nav__3985_41 t5;
 t0 = a0;
 t1 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 const *)&t0;
 t2 = (struct mem_Allocator__206 const *)&t1->allocator;
 t3 = (*t2);
 t4 = (*t1);
 t5 = array_list_ArrayListAligned_28u8_2cnull_29_allocatedSlice__4031(t4);
 mem_Allocator_free__anon_2612__4248(t3, t5);
 return;
}

static uint8_t const (*mem_asBytes__anon_2105__4090(uint32_t const *const a0))[4] {
 uint8_t const (*t0)[4];
 t0 = (uint8_t const (*)[4])a0;
 return t0;
}

static uint16_t fs_File_writeAll__1144(struct fs_File__546 const a0, nav__1144_40 const a1) {
 struct fs_File__546 const *t1;
 nav__1144_40 const *t3;
 uintptr_t t5;
 uintptr_t t6;
 uintptr_t t13;
 uintptr_t t4;
 uint64_t t7;
 uint64_t t8;
 nav__1144_40 t11;
 nav__1144_40 t2;
 uint8_t const *t12;
 nav__1144_47 t14;
 struct fs_File__546 t10;
 struct fs_File__546 t0;
 uint16_t t15;
 bool t9;
 t0 = a0;
 t1 = (struct fs_File__546 const *)&t0;
 t2 = a1;
 t3 = (nav__1144_40 const *)&t2;
 t4 = (uintptr_t)0ul;
 zig_loop_11:
 t5 = t4;
 t6 = a1.len;
 t7 = t5;
 t8 = t6;
 t9 = t7 < t8;
 if (t9) {
  t6 = t4;
  t10 = (*t1);
  t5 = t4;
  t11 = (*t3);
  t12 = t11.ptr;
  t12 = (uint8_t const *)(((uintptr_t)t12) + (t5*sizeof(uint8_t)));
  t13 = t11.len;
  t5 = t13 - t5;
  t11.ptr = t12;
  t11.len = t5;
  t14 = fs_File_write__1143(t10, t11);
  if (t14.error) {
   t15 = t14.error;
   return t15;
  }
  t5 = t14.payload;
  t5 = t6 + t5;
  t4 = t5;
  goto zig_block_1;
 }
 goto zig_block_0;

 zig_block_1:;
 goto zig_loop_11;

 zig_block_0:;
 return 0;
}

static zig_i128 time_nanoTimestamp__4103(void) {
 zig_i128 t6;
 zig_i128 t7;
 nav__4103_41 t0;
 struct os_linux_timespec__struct_2817__2817 t2;
 struct os_linux_timespec__struct_2817__2817 t3;
 intptr_t t5;
 uint16_t t4;
 bool t1;
 t0 = posix_clock_gettime__1544(UINT32_C(0));
 t1 = t0.error == UINT16_C(0);
 if (t1) {
  t3 = t0.payload;
  t2 = t3;
  goto zig_block_0;
 }
 t4 = t0.error;
 switch (t4) {
  case zig_error_UnsupportedClock:
  case zig_error_Unexpected: {
   return zig_make_i128(INT64_C(0), UINT64_C(0));
  }
  default: zig_unreachable();
 }

 zig_block_0:;
 t5 = t2.sec;
 t6 = zig_make_i128(0, t5);
 t6 = zig_mul_i128(t6, zig_make_i128(INT64_C(0), UINT64_C(1000000000)));
 t5 = t2.nsec;
 t7 = zig_make_i128(0, t5);
 t7 = zig_add_i128(t6, t7);
 return t7;
}

static nav__1134_38 fs_File_readAll__1134(struct fs_File__546 const a0, nav__1134_41 const a1) {
 struct fs_File__546 const *t1;
 nav__1134_41 const *t3;
 uintptr_t t5;
 uintptr_t t6;
 uintptr_t t4;
 uint64_t t7;
 uint64_t t8;
 nav__1134_41 t11;
 nav__1134_41 t2;
 uint8_t *t12;
 nav__1134_38 t13;
 struct fs_File__546 t10;
 struct fs_File__546 t0;
 uint16_t t14;
 bool t9;
 t0 = a0;
 t1 = (struct fs_File__546 const *)&t0;
 t2 = a1;
 t3 = (nav__1134_41 const *)&t2;
 t4 = (uintptr_t)0ul;
 zig_loop_11:
 t5 = t4;
 t6 = a1.len;
 t7 = t5;
 t8 = t6;
 t9 = t7 != t8;
 if (t9) {
  t10 = (*t1);
  t6 = t4;
  t11 = (*t3);
  t12 = t11.ptr;
  t12 = (uint8_t *)(((uintptr_t)t12) + (t6*sizeof(uint8_t)));
  t5 = t11.len;
  t6 = t5 - t6;
  t11.ptr = t12;
  t11.len = t6;
  t13 = fs_File_read__1133(t10, t11);
  if (t13.error) {
   t14 = t13.error;
   t13.payload = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
   t13.error = t14;
   return t13;
  }
  t6 = t13.payload;
  t8 = t6;
  t9 = t8 == UINT64_C(0);
  if (t9) {
   goto zig_block_0;
  }
  goto zig_block_2;

  zig_block_2:;
  t5 = t4;
  t6 = t5 + t6;
  t4 = t6;
  goto zig_block_1;
 }
 goto zig_block_0;

 zig_block_1:;
 goto zig_loop_11;

 zig_block_0:;
 t6 = t4;
 t13.payload = t6;
 t13.error = UINT16_C(0);
 return t13;
}

static nav__4131_40 mem_Allocator_alloc__anon_2188__4131(struct mem_Allocator__206 const a0, uintptr_t const a1) {
 struct mem_Allocator__206 const *t1;
 struct mem_Allocator__206 t2;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t5;
 uintptr_t t3;
 nav__4131_40 t4;
 nav__4131_40 t8;
 nav__4131_51 t6;
 uint8_t *t9;
 uint8_t *t10;
 uint8_t *const *t11;
 nav__4131_39 t12;
 uint16_t t7;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = (*t1);
 t3 = (uintptr_t)zig_return_address();
 t5 = t2;
 t1 = (struct mem_Allocator__206 const *)&t5;
 t2 = (*t1);
 t6 = mem_Allocator_allocWithSizeAndAlignment__anon_2848__4494(t2, a1, t3);
 if (t6.error) {
  t7 = t6.error;
  t8.payload = (nav__4131_39){(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t8.error = t7;
  t4 = t8;
  goto zig_block_0;
 }
 t9 = t6.payload;
 t10 = t9;
 t11 = (uint8_t *const *)&t10;
 t9 = (*t11);
 t9 = (uint8_t *)(((uintptr_t)t9) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t12.ptr = t9;
 t12.len = a1;
 t8.payload = t12;
 t8.error = UINT16_C(0);
 t4 = t8;
 goto zig_block_0;

 zig_block_0:;
 return t4;
}

static struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 io_fixed_buffer_stream_fixedBufferStream__anon_2210__4163(nav__4163_40 const a0) {
 nav__4163_40 *t1;
 uintptr_t *t2;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 t0;
 t1 = (nav__4163_40 *)&t0.buffer;
 (*t1) = a0;
 t2 = (uintptr_t *)&t0.pos;
 (*t2) = (uintptr_t)0ul;
 return t0;
}

static struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_reader__4152(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const a0) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 **t1;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2230 t0;
 t1 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 **)&t0.context;
 (*t1) = a0;
 return t0;
}

static nav__4196_38 io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29_typeEras__4196(void const *const a0, nav__4196_41 const a1) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *t0;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *t1;
 nav__4196_38 t2;
 nav__4196_38 t3;
 t0 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *)a0;
 t1 = (*t0);
 t2 = io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_read__4155(t1, a1);
 memcpy(&t3, &t2, sizeof(nav__4196_38));
 return t3;
}

static nav__4238_39 io_Reader_readBytesNoEof__anon_2384__4238(struct io_Reader__2355 const a0) {
 struct io_Reader__2355 const *t1;
 struct io_Reader__2355 t3;
 struct io_Reader__2355 t0;
 nav__4238_46 t4;
 uint16_t t5;
 nav__4238_39 t6;
 uint8_t t7[4];
 uint8_t t2[4];
 t0 = a0;
 t1 = (struct io_Reader__2355 const *)&t0;
 t3 = (*t1);
 t4.ptr = &t2[(uintptr_t)0ul];
 t4.len = (uintptr_t)4ul;
 t5 = io_Reader_readNoEof__4205(t3, t4);
 if (t5) {
  memcpy(t6.payload, "\252\252\252\252", sizeof(uint8_t[4]));
  t6.error = t5;
  return t6;
 }
 memcpy(t7, (const char *)&t2, sizeof(uint8_t[4]));
 memcpy(t6.payload, t7, sizeof(uint8_t[4]));
 t6.error = UINT16_C(0);
 return t6;
}

static nav__4243_39 io_Reader_readBytesNoEof__anon_2477__4243(struct io_Reader__2355 const a0) {
 struct io_Reader__2355 const *t1;
 struct io_Reader__2355 t3;
 struct io_Reader__2355 t0;
 nav__4243_46 t4;
 uint16_t t5;
 nav__4243_39 t6;
 uint8_t t7[8];
 uint8_t t2[8];
 t0 = a0;
 t1 = (struct io_Reader__2355 const *)&t0;
 t3 = (*t1);
 t4.ptr = &t2[(uintptr_t)0ul];
 t4.len = (uintptr_t)8ul;
 t5 = io_Reader_readNoEof__4205(t3, t4);
 if (t5) {
  memcpy(t6.payload, "\252\252\252\252\252\252\252\252", sizeof(uint8_t[8]));
  t6.error = t5;
  return t6;
 }
 memcpy(t7, (const char *)&t2, sizeof(uint8_t[8]));
 memcpy(t6.payload, t7, sizeof(uint8_t[8]));
 t6.error = UINT16_C(0);
 return t6;
}

static nav__4203_38 io_Reader_readAll__4203(struct io_Reader__2355 const a0, nav__4203_41 const a1) {
 uintptr_t t0;
 nav__4203_38 t1;
 t0 = a1.len;
 t1 = io_Reader_readAtLeast__4204(a0, a1, t0);
 return t1;
}

static zig_cold zig_noreturn void bincode_invalidProtocol__anon_2501__4244(void) {
 debug_no_panic_call__4496((nav__4244_40){(uint8_t const *)&__anon_2868,(uintptr_t)88ul}, (nav__4244_42){(uintptr_t)0xaaaaaaaaaaaaaaaaul,true});
 zig_unreachable();
}

static void mem_Allocator_free__anon_2612__4248(struct mem_Allocator__206 const a0, nav__4248_40 const a1) {
 struct mem_Allocator__206 const *t1;
 nav__4248_40 t2;
 uintptr_t t3;
 uint64_t t4;
 uint8_t *t6;
 uint8_t *t7;
 uint8_t *t8;
 uint8_t *const *t9;
 struct mem_Allocator__206 t10;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t12;
 struct mem_Allocator_VTable__209 const *const *t13;
 struct mem_Allocator_VTable__209 const *t14;
 void (*const *t15)(void *, nav__4248_40, uint8_t, uintptr_t);
 void (*t16)(void *, nav__4248_40, uint8_t, uintptr_t);
 void *t17;
 bool t5;
 uint8_t t11;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = mem_sliceAsBytes__anon_2965__4523(a1);
 t3 = t2.len;
 t4 = t3;
 t5 = t4 == UINT64_C(0);
 if (t5) {
  return;
 }
 goto zig_block_0;

 zig_block_0:;
 t6 = t2.ptr;
 t7 = (uint8_t *)t6;
 t8 = t7;
 t9 = (uint8_t *const *)&t8;
 t7 = (*t9);
 t7 = (uint8_t *)(((uintptr_t)t7) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t2.ptr = t7;
 t2.len = t3;
 t10 = (*t1);
 t7 = (*t9);
 t7 = (uint8_t *)(((uintptr_t)t7) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t2.ptr = t7;
 t2.len = t3;
 t11 = mem_Alignment_fromByteUnits__628((uintptr_t)1ul);
 t3 = (uintptr_t)zig_return_address();
 t12 = t10;
 t1 = (struct mem_Allocator__206 const *)&t12;
 t13 = (struct mem_Allocator_VTable__209 const *const *)&t1->vtable;
 t14 = (*t13);
 t15 = (void (*const *)(void *, nav__4248_40, uint8_t, uintptr_t))&t14->free;
 t16 = (*t15);
 t17 = t10.ptr;
 t16(t17, t2, t11, t3);
 return;
}

static void utils_sleep__4253(uint64_t const a0) {
 uint64_t t0;
 uint64_t t1;
 long *t3;
 long t4;
 long t7;
 nav__4253_42 t5;
 struct cimport_struct_timespec__2991 const *t9;
 struct cimport_struct_timespec__2991 *t10;
 struct cimport_struct_timespec__2991 t13;
 struct cimport_struct_timespec__2991 t2;
 struct cimport_struct_timespec__2991 t8;
 int t11;
 int32_t t12;
 bool t6;
 t0 = a0 / UINT64_C(1000000000);
 t1 = a0 % UINT64_C(1000000000);
 t3 = (long *)&t2.tv_sec;
 t5 = math_cast__anon_3004__5369(t0);
 t6 = t5.is_null != true;
 if (t6) {
  t7 = t5.payload;
  t4 = t7;
  goto zig_block_0;
 }
 t4 = LONG_MAX;
 goto zig_block_0;

 zig_block_0:;
 (*t3) = t4;
 t3 = (long *)&t2.tv_nsec;
 t5 = math_cast__anon_3004__5369(t1);
 t6 = t5.is_null != true;
 if (t6) {
  t7 = t5.payload;
  t4 = t7;
  goto zig_block_1;
 }
 t4 = LONG_MAX;
 goto zig_block_1;

 zig_block_1:;
 (*t3) = t4;
 zig_loop_28:
 t9 = (struct cimport_struct_timespec__2991 const *)&t2;
 t10 = (struct cimport_struct_timespec__2991 *)&t8;
 t11 = nanosleep(t9, t10);
 t12 = t11;
 t6 = t12 == INT32_C(4);
 if (t6) {
  t13 = t8;
  t2 = t13;
  goto zig_block_2;
 }
 return;

 zig_block_2:;
 goto zig_loop_28;
}

static void shared_Command_deinit__3933(struct shared_Command__2004 const a0, struct mem_Allocator__206 const a1) {
 struct mem_Allocator__206 const *t1;
 struct shared_Command__struct_2008__2008 t3;
 struct mem_Allocator__206 t4;
 struct mem_Allocator__206 t0;
 nav__3933_43 t5;
 struct shared_Command__struct_2007__2007 t6;
 uint8_t t2;
 t0 = a1;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = a0.tag;
 switch (t2) {
  case UINT8_C(5): {
   t3 = a0.payload.SetIntegration;
   t4 = (*t1);
   t5 = t3.name;
   mem_Allocator_free__anon_3071__6140(t4, t5);
   t4 = (*t1);
   t5 = t3.version;
   mem_Allocator_free__anon_3071__6140(t4, t5);
   goto zig_block_0;
  }
  case UINT8_C(0): {
   t6 = a0.payload.ExecutedBenchmark;
   t4 = (*t1);
   t5 = t6.uri;
   mem_Allocator_free__anon_3071__6140(t4, t5);
   goto zig_block_0;
  }
  default: {
   goto zig_block_0;
  }
 }

 zig_block_0:;
 return;
}

static uint8_t mem_Alignment_fromByteUnits__628(uintptr_t const a0) {
 bool t0;
 uint8_t t1;
 t0 = math_isPowerOfTwo__anon_3073__6141(a0);
 debug_assert__179(t0);
 t1 = zig_ctz_u64(a0, UINT8_C(64));
 return t1;
}

static void Progress_lockStdErr__4281(void) {
 uint16_t t0;
 bool t1;
 Thread_Mutex_Recursive_lock__6328(((struct Thread_Mutex_Recursive__3148 *)&Progress_stderr_mutex__4318));
 t0 = Progress_clearWrittenWithEscapeCodes__4292();
 t1 = t0 == UINT16_C(0);
 if (t1) {
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static int32_t io_getStdErrHandle__3755(void) {
 return INT32_C(2);
}

static nav__1143_38 fs_File_write__1143(struct fs_File__546 const a0, nav__1143_41 const a1) {
 nav__1143_38 t1;
 int32_t t0;
 t0 = a0.handle;
 t1 = posix_write__1363(t0, a1);
 return t1;
}

static uint16_t fmt_format__anon_2701__4480(struct io_Writer__1950 const a0, nav__4480_41 const a1) {
 struct io_Writer__1950 const *t1;
 struct io_Writer__1950 t2;
 struct io_Writer__1950 t0;
 nav__4480_40 t4;
 uint16_t t3;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__4480_40){(uint8_t const *)&__anon_3300,(uintptr_t)36ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f0;
 t3 = fmt_formatType__anon_3739__6704(t4, (struct fmt_FormatOptions__3656){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__4480_40){(uint8_t const *)&__anon_3745,(uintptr_t)1ul});
 if (t3) {
  return t3;
 }
 return 0;
}

static void Progress_unlockStdErr__4282(void) {
 Thread_Mutex_Recursive_unlock__6329(((struct Thread_Mutex_Recursive__3148 *)&Progress_stderr_mutex__4318));
 return;
}

static bool fs_path_isAbsolutePosix__3876(nav__3876_39 const a0) {
 uintptr_t t0;
 uint64_t t1;
 bool t2;
 bool t3;
 uint8_t t4;
 t0 = a0.len;
 t1 = t0;
 t2 = t1 > UINT64_C(0);
 if (t2) {
  t4 = a0.ptr[(uintptr_t)0ul];
  t2 = t4 == UINT8_C(47);
  t3 = t2;
  goto zig_block_0;
 }
 t3 = false;
 goto zig_block_0;

 zig_block_0:;
 return t3;
}

static nav__1628_39 posix_toPosixPath__1628(nav__1628_41 const a0) {
 uintptr_t t1;
 uint64_t t2;
 uint8_t *t4;
 nav__1628_47 t5;
 uint8_t const *t6;
 nav__1628_39 t8;
 bool t3;
 uint8_t t7[4096];
 uint8_t t0[4096];
 t1 = a0.len;
 t2 = t1;
 t3 = t2 >= UINT64_C(4096);
 if (t3) {
  return (nav__1628_39){zig_error_NameTooLong,{'\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa'}};
 }
 goto zig_block_0;

 zig_block_0:;
 t1 = a0.len;
 t4 = (uint8_t *)&t0;
 t4 = (uint8_t *)(((uintptr_t)t4) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t5.ptr = t4;
 t5.len = t1;
 t6 = a0.ptr;
 if (t5.len != 0) memcpy(t5.ptr, t6, t5.len * sizeof(uint8_t));
 t1 = a0.len;
 t4 = (uint8_t *)&t0[t1];
 (*t4) = UINT8_C(0);
 memcpy(t7, (const char *)&t0, sizeof(uint8_t[4096]));
 memcpy(t8.payload, t7, sizeof(uint8_t[4096]));
 t8.error = UINT16_C(0);
 return t8;
}

static uint16_t fs_Dir_accessZ__3695(struct fs_Dir__1822 const a0, uint8_t const *const a1, struct fs_File_OpenFlags__1820 const a2) {
 uint32_t t2;
 int32_t t3;
 struct fs_Dir__1822 t0;
 uint16_t t4;
 uint8_t t1;
 t0 = a0;
 t1 = a2.mode;
 switch (t1) {
  case UINT8_C(0): {
   t2 = UINT32_C(0);
   goto zig_block_0;
  }
  case UINT8_C(1): {
   t2 = UINT32_C(2);
   goto zig_block_0;
  }
  case UINT8_C(2): {
   t2 = UINT32_C(6);
   goto zig_block_0;
  }
  default: zig_unreachable();
 }

 zig_block_0:;
 t3 = a0.fd;
 t4 = posix_faccessatZ__1519(t3, a1, t2, UINT32_C(0));
 return t4;
}

static nav__3631_39 fs_Dir_openFileZ__3631(struct fs_Dir__1822 const a0, uint8_t const *const a1, struct fs_File_OpenFlags__1820 const a2) {
 uint32_t *t2;
 struct fs_File__546 *t14;
 int32_t *t15;
 int32_t t6;
 int32_t t11;
 int32_t t12;
 uint32_t t7;
 uint32_t t1;
 nav__3631_50 t8;
 nav__3631_39 t10;
 nav__3631_39 t13;
 struct fs_Dir__1822 t0;
 uint16_t t9;
 uint8_t t3;
 uint8_t t4;
 bool t5;
 t0 = a0;
 t2 = (uint32_t *)&t1;
 t3 = a2.mode;
 switch (t3) {
  case UINT8_C(0): {
   t4 = UINT8_C(0);
   goto zig_block_0;
  }
  case UINT8_C(1): {
   t4 = UINT8_C(1);
   goto zig_block_0;
  }
  case UINT8_C(2): {
   t4 = UINT8_C(2);
   goto zig_block_0;
  }
  default: zig_unreachable();
 }

 zig_block_0:;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xfffffffc)), zig_shl_u32((uint32_t)t4, UINT8_C(0)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xffffffc3)), zig_shl_u32((uint32_t)UINT8_C(0), UINT8_C(2)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xffffffbf)), zig_shl_u32((uint32_t)false, UINT8_C(6)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xffffff7f)), zig_shl_u32((uint32_t)false, UINT8_C(7)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xfffffeff)), zig_shl_u32((uint32_t)false, UINT8_C(8)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xfffffdff)), zig_shl_u32((uint32_t)false, UINT8_C(9)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xfffffbff)), zig_shl_u32((uint32_t)false, UINT8_C(10)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xfffff7ff)), zig_shl_u32((uint32_t)false, UINT8_C(11)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xffffefff)), zig_shl_u32((uint32_t)false, UINT8_C(12)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xffffdfff)), zig_shl_u32((uint32_t)false, UINT8_C(13)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xffffbfff)), zig_shl_u32((uint32_t)false, UINT8_C(14)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xffff7fff)), zig_shl_u32((uint32_t)UINT8_C(0), UINT8_C(15)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xfffeffff)), zig_shl_u32((uint32_t)false, UINT8_C(16)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xfffdffff)), zig_shl_u32((uint32_t)false, UINT8_C(17)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xfffbffff)), zig_shl_u32((uint32_t)false, UINT8_C(18)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xfff7ffff)), zig_shl_u32((uint32_t)false, UINT8_C(19)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xffefffff)), zig_shl_u32((uint32_t)false, UINT8_C(20)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xffdfffff)), zig_shl_u32((uint32_t)false, UINT8_C(21)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xffbfffff)), zig_shl_u32((uint32_t)false, UINT8_C(22)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0x7fffff)), zig_shl_u32((uint32_t)UINT16_C(0), UINT8_C(23)));
 t2 = (uint32_t *)&t1;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xfff7ffff)), zig_shl_u32((uint32_t)true, UINT8_C(19)));
 t2 = (uint32_t *)&t1;
 t5 = a2.allow_ctty;
 t5 = !t5;
 (*t2) = zig_or_u32(zig_and_u32((*t2), UINT32_C(0xfffffeff)), zig_shl_u32((uint32_t)t5, UINT8_C(8)));
 t6 = a0.fd;
 t7 = t1;
 t8 = posix_openatZ__1375(t6, a1, t7, (uintptr_t)0ul);
 if (t8.error) {
  t9 = t8.error;
  t10.payload = (struct fs_File__546){-INT32_C(0x55555556)};
  t10.error = t9;
  return t10;
 }
 t6 = t8.payload;
 t4 = a2.lock;
 t5 = t4 != UINT8_C(0);
 if (t5) {
  t5 = a2.lock_nonblocking;
  if (t5) {
   t11 = INT32_C(4);
   goto zig_block_2;
  }
  t11 = INT32_C(0);
  goto zig_block_2;

  zig_block_2:;
  t4 = a2.lock;
  switch (t4) {
   case UINT8_C(0): {
    zig_unreachable();
   }
   case UINT8_C(1): {
    t11 = INT32_C(1) | t11;
    t12 = t11;
    goto zig_block_3;
   }
   case UINT8_C(2): {
    t11 = INT32_C(2) | t11;
    t12 = t11;
    goto zig_block_3;
   }
   default: zig_unreachable();
  }

  zig_block_3:;
  t9 = posix_flock__1536(t6, t12);
  if (t9) {
   posix_close__1333(t6);
   t10.payload = (struct fs_File__546){-INT32_C(0x55555556)};
   t10.error = t9;
   return t10;
  }
  goto zig_block_1;
 }
 goto zig_block_1;

 zig_block_1:;
 t13.error = UINT16_C(0);
 t14 = &t13.payload;
 t15 = (int32_t *)&t14->handle;
 (*t15) = t6;
 return t13;
}

static uint16_t bincode_serializeUnion__anon_2787__4493(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, struct shared_Command__2004 const a1) {
 struct shared_Command__struct_2007__2007 t4;
 struct shared_Command__struct_2008__2008 t5;
 uint32_t t1;
 uint16_t t2;
 uint8_t t0;
 bool t3;
 t0 = a1.tag;
 t1 = (uint32_t)t0;
 t2 = bincode_serialize__anon_3877__6829(a0, t1);
 if (t2) {
  return t2;
 }
 t0 = a1.tag;
 t3 = t0 == UINT8_C(0);
 if (t3) {
  t4 = a1.payload.ExecutedBenchmark;
  t2 = bincode_serialize__anon_3879__6830(a0, t4);
  if (t2) {
   return t2;
  }
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 t0 = a1.tag;
 t3 = t0 == UINT8_C(1);
 if (t3) {
  t2 = bincode_serialize__anon_3881__6831(a0);
  if (t2) {
   return t2;
  }
  goto zig_block_1;
 }
 goto zig_block_1;

 zig_block_1:;
 t0 = a1.tag;
 t3 = t0 == UINT8_C(2);
 if (t3) {
  t2 = bincode_serialize__anon_3881__6831(a0);
  if (t2) {
   return t2;
  }
  goto zig_block_2;
 }
 goto zig_block_2;

 zig_block_2:;
 t0 = a1.tag;
 t3 = t0 == UINT8_C(3);
 if (t3) {
  t2 = bincode_serialize__anon_3881__6831(a0);
  if (t2) {
   return t2;
  }
  goto zig_block_3;
 }
 goto zig_block_3;

 zig_block_3:;
 t0 = a1.tag;
 t3 = t0 == UINT8_C(4);
 if (t3) {
  t2 = bincode_serialize__anon_3881__6831(a0);
  if (t2) {
   return t2;
  }
  goto zig_block_4;
 }
 goto zig_block_4;

 zig_block_4:;
 t0 = a1.tag;
 t3 = t0 == UINT8_C(5);
 if (t3) {
  t5 = a1.payload.SetIntegration;
  t2 = bincode_serialize__anon_3883__6832(a0, t5);
  if (t2) {
   return t2;
  }
  goto zig_block_5;
 }
 goto zig_block_5;

 zig_block_5:;
 t0 = a1.tag;
 t3 = t0 == UINT8_C(6);
 if (t3) {
  t2 = bincode_serialize__anon_3881__6831(a0);
  if (t2) {
   return t2;
  }
  goto zig_block_6;
 }
 goto zig_block_6;

 zig_block_6:;
 return 0;
}

static nav__4031_39 array_list_ArrayListAligned_28u8_2cnull_29_allocatedSlice__4031(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 const a0) {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 const *t1;
 nav__4031_39 const *t2;
 uint8_t *const *t3;
 uintptr_t t4;
 uint8_t *t5;
 nav__4031_39 t6;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 t0;
 t0 = a0;
 t1 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 const *)&t0;
 t2 = (nav__4031_39 const *)&t1->items;
 t3 = &t2->ptr;
 t4 = a0.capacity;
 t5 = (*t3);
 t5 = (uint8_t *)(((uintptr_t)t5) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t6.ptr = t5;
 t6.len = t4;
 return t6;
}

static nav__1544_39 posix_clock_gettime__1544(uint32_t const a0) {
 struct os_linux_timespec__struct_2817__2817 t3;
 struct os_linux_timespec__struct_2817__2817 t0;
 nav__1544_39 t4;
 int t1;
 uint16_t t2;
 t1 = clock_gettime(a0, &t0);
 t2 = posix_errno__anon_4035__6835(t1);
 switch (t2) {
  case UINT16_C(0): {
   t3 = t0;
   t4.payload = t3;
   t4.error = UINT16_C(0);
   return t4;
  }
  case UINT16_C(14): {
   zig_unreachable();
  }
  case UINT16_C(22): {
   return (nav__1544_39){{-(intptr_t)0x5555555555555556,-(intptr_t)0x5555555555555556},zig_error_UnsupportedClock};
  }
  default: {
   t2 = posix_unexpectedErrno__1627(t2);
   t4.payload = (struct os_linux_timespec__struct_2817__2817){-(intptr_t)0x5555555555555556,-(intptr_t)0x5555555555555556};
   t4.error = t2;
   return t4;
  }
 }
}

static nav__1133_38 fs_File_read__1133(struct fs_File__546 const a0, nav__1133_41 const a1) {
 nav__1133_38 t1;
 int32_t t0;
 t0 = a0.handle;
 t1 = posix_read__1355(t0, a1);
 return t1;
}

static nav__4494_39 mem_Allocator_allocWithSizeAndAlignment__anon_2848__4494(struct mem_Allocator__206 const a0, uintptr_t const a1, uintptr_t const a2) {
 struct mem_Allocator__206 const *t1;
 uintptr_t t2;
 uintptr_t t5;
 nav__4494_49 t3;
 struct mem_Allocator__206 t6;
 struct mem_Allocator__206 t0;
 nav__4494_39 t7;
 bool t4;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t3 = math_mul__anon_4055__6836((uintptr_t)1ul, a1);
 t4 = t3.error == UINT16_C(0);
 if (t4) {
  t5 = t3.payload;
  t2 = t5;
  goto zig_block_0;
 }
 return (nav__4494_39){((uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),zig_error_OutOfMemory};

 zig_block_0:;
 t6 = (*t1);
 t7 = mem_Allocator_allocBytesWithAlignment__anon_4057__6837(t6, t2, a2);
 return t7;
}

static nav__4155_38 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_read__4155(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const a0, nav__4155_42 const a1) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *t1;
 nav__4155_42 const *t3;
 uintptr_t t4;
 uintptr_t t7;
 uintptr_t t9;
 nav__4155_42 *t5;
 nav__4155_42 t6;
 nav__4155_42 t13;
 nav__4155_42 t2;
 uintptr_t *t8;
 uint64_t t10;
 uint8_t *t11;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *t12;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *t0;
 nav__4155_38 t14;
 t0 = a0;
 t1 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *)&t0;
 t2 = a1;
 t3 = (nav__4155_42 const *)&t2;
 t4 = a1.len;
 t5 = (nav__4155_42 *)&a0->buffer;
 t6 = (*t5);
 t7 = t6.len;
 t8 = (uintptr_t *)&a0->pos;
 t9 = (*t8);
 t9 = t7 - t9;
 t9 = (t4 < t9) ? t4 : t9;
 t10 = t9;
 t8 = (uintptr_t *)&a0->pos;
 t9 = (*t8);
 t4 = t10;
 t4 = t9 + t4;
 t6 = (*t3);
 t11 = t6.ptr;
 t11 = (uint8_t *)(((uintptr_t)t11) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t9 = t10;
 t6.ptr = t11;
 t6.len = t9;
 t12 = (*t1);
 t5 = (nav__4155_42 *)&t12->buffer;
 t8 = (uintptr_t *)&a0->pos;
 t9 = (*t8);
 t13 = (*t5);
 t11 = t13.ptr;
 t11 = (uint8_t *)(((uintptr_t)t11) + (t9*sizeof(uint8_t)));
 t9 = t4 - t9;
 t13.ptr = t11;
 t13.len = t9;
 t11 = t13.ptr;
 if (t6.len != 0) memcpy(t6.ptr, t11, t6.len * sizeof(uint8_t));
 t12 = (*t1);
 t8 = (uintptr_t *)&t12->pos;
 (*t8) = t4;
 t4 = t10;
 t14.payload = t4;
 t14.error = UINT16_C(0);
 return t14;
}

static uint16_t io_Reader_readNoEof__4205(struct io_Reader__2355 const a0, nav__4205_40 const a1) {
 struct io_Reader__2355 const *t1;
 struct io_Reader__2355 t2;
 struct io_Reader__2355 t0;
 nav__4205_43 t3;
 uintptr_t t5;
 uintptr_t t6;
 uint64_t t7;
 uint64_t t8;
 uint16_t t4;
 bool t9;
 t0 = a0;
 t1 = (struct io_Reader__2355 const *)&t0;
 t2 = (*t1);
 t3 = io_Reader_readAll__4203(t2, a1);
 if (t3.error) {
  t4 = t3.error;
  return t4;
 }
 t5 = t3.payload;
 t6 = a1.len;
 t7 = t5;
 t8 = t6;
 t9 = t7 < t8;
 if (t9) {
  return zig_error_EndOfStream;
 }
 goto zig_block_0;

 zig_block_0:;
 return 0;
}

static nav__4204_38 io_Reader_readAtLeast__4204(struct io_Reader__2355 const a0, nav__4204_41 const a1, uintptr_t const a2) {
 struct io_Reader__2355 const *t1;
 nav__4204_41 const *t3;
 uintptr_t t4;
 uintptr_t t12;
 uintptr_t t8;
 uint64_t t5;
 uint64_t t6;
 struct io_Reader__2355 t9;
 struct io_Reader__2355 t0;
 nav__4204_41 t10;
 nav__4204_41 t2;
 uint8_t *t11;
 nav__4204_38 t13;
 uint16_t t14;
 bool t7;
 t0 = a0;
 t1 = (struct io_Reader__2355 const *)&t0;
 t2 = a1;
 t3 = (nav__4204_41 const *)&t2;
 t4 = a1.len;
 t5 = a2;
 t6 = t4;
 t7 = t5 <= t6;
 debug_assert__179(t7);
 t8 = (uintptr_t)0ul;
 zig_loop_17:
 t4 = t8;
 t6 = t4;
 t5 = a2;
 t7 = t6 < t5;
 if (t7) {
  t9 = (*t1);
  t4 = t8;
  t10 = (*t3);
  t11 = t10.ptr;
  t11 = (uint8_t *)(((uintptr_t)t11) + (t4*sizeof(uint8_t)));
  t12 = t10.len;
  t4 = t12 - t4;
  t10.ptr = t11;
  t10.len = t4;
  t13 = io_Reader_read__4202(t9, t10);
  if (t13.error) {
   t14 = t13.error;
   t13.payload = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
   t13.error = t14;
   return t13;
  }
  t4 = t13.payload;
  t5 = t4;
  t7 = t5 == UINT64_C(0);
  if (t7) {
   goto zig_block_0;
  }
  goto zig_block_2;

  zig_block_2:;
  t12 = t8;
  t4 = t12 + t4;
  t8 = t4;
  goto zig_block_1;
 }
 goto zig_block_0;

 zig_block_1:;
 goto zig_loop_17;

 zig_block_0:;
 t12 = t8;
 t13.payload = t12;
 t13.error = UINT16_C(0);
 return t13;
}

static zig_cold zig_noreturn void debug_no_panic_call__4496(nav__4496_39 const a0, nav__4496_40 const a1) {
 (void)a0;
 (void)a1;
 zig_trap();
}

static nav__4523_39 mem_sliceAsBytes__anon_2965__4523(nav__4523_39 const a0) {
 uintptr_t t0;
 uint64_t t1;
 uint8_t *t4;
 uint8_t *t5;
 uint8_t *const *t6;
 nav__4523_39 t7;
 bool t2;
 bool t3;
 t0 = a0.len;
 t1 = t0;
 t2 = t1 == UINT64_C(0);
 if (t2) {
  t3 = true;
  goto zig_block_1;
 }
 t3 = false;
 goto zig_block_1;

 zig_block_1:;
 if (t3) {
  return (nav__4523_39){(uint8_t *)((void const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),(uintptr_t)0ul};
 }
 goto zig_block_0;

 zig_block_0:;
 t4 = a0.ptr;
 t5 = t4;
 t6 = (uint8_t *const *)&t5;
 t0 = a0.len;
 t4 = (*t6);
 t4 = (uint8_t *)(((uintptr_t)t4) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t7.ptr = t4;
 t7.len = t0;
 return t7;
}

static nav__5369_38 math_cast__anon_3004__5369(uint64_t const a0) {
 long t1;
 nav__5369_38 t2;
 bool t0;
 t0 = a0 > UINT64_C(9223372036854775807);
 if (t0) {
  return (nav__5369_38){-0x5555555555555556l,true};
 }
 t1 = (long)a0;
 t2.is_null = false;
 t2.payload = t1;
 return t2;
}

static void mem_Allocator_free__anon_3071__6140(struct mem_Allocator__206 const a0, nav__6140_40 const a1) {
 struct mem_Allocator__206 const *t1;
 nav__6140_40 t2;
 uintptr_t t3;
 uint64_t t4;
 uint8_t const *t6;
 uint8_t *t7;
 uint8_t *t8;
 uint8_t *const *t9;
 nav__6140_51 t10;
 struct mem_Allocator__206 t11;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t13;
 struct mem_Allocator_VTable__209 const *const *t14;
 struct mem_Allocator_VTable__209 const *t15;
 void (*const *t16)(void *, nav__6140_51, uint8_t, uintptr_t);
 void (*t17)(void *, nav__6140_51, uint8_t, uintptr_t);
 void *t18;
 bool t5;
 uint8_t t12;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = mem_sliceAsBytes__anon_4087__6838(a1);
 t3 = t2.len;
 t4 = t3;
 t5 = t4 == UINT64_C(0);
 if (t5) {
  return;
 }
 goto zig_block_0;

 zig_block_0:;
 t6 = t2.ptr;
 t7 = (uint8_t *)t6;
 t8 = t7;
 t9 = (uint8_t *const *)&t8;
 t7 = (*t9);
 t7 = (uint8_t *)(((uintptr_t)t7) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t10.ptr = t7;
 t10.len = t3;
 t11 = (*t1);
 t7 = (*t9);
 t7 = (uint8_t *)(((uintptr_t)t7) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t10.ptr = t7;
 t10.len = t3;
 t12 = mem_Alignment_fromByteUnits__628((uintptr_t)1ul);
 t3 = (uintptr_t)zig_return_address();
 t13 = t11;
 t1 = (struct mem_Allocator__206 const *)&t13;
 t14 = (struct mem_Allocator_VTable__209 const *const *)&t1->vtable;
 t15 = (*t14);
 t16 = (void (*const *)(void *, nav__6140_51, uint8_t, uintptr_t))&t15->free;
 t17 = (*t16);
 t18 = t11.ptr;
 t17(t18, t10, t12, t3);
 return;
}

static bool math_isPowerOfTwo__anon_3073__6141(uintptr_t const a0) {
 uint64_t t0;
 uintptr_t t2;
 bool t1;
 t0 = a0;
 t1 = t0 > UINT64_C(0);
 debug_assert__179(t1);
 t2 = a0 - (uintptr_t)1ul;
 t2 = a0 & t2;
 t0 = t2;
 t1 = t0 == UINT64_C(0);
 return t1;
}

static void Thread_Mutex_Recursive_lock__6328(struct Thread_Mutex_Recursive__3148 *const a0) {
 struct Thread_Mutex_Recursive__3148 *const *t1;
 struct Thread_Mutex_Recursive__3148 *t3;
 struct Thread_Mutex_Recursive__3148 *t0;
 uint32_t *t4;
 uint32_t const *t5;
 struct Thread_Mutex__3146 *t8;
 uintptr_t *t9;
 uintptr_t t10;
 uint64_t t11;
 uint32_t t2;
 uint32_t t6;
 bool t7;
 t0 = a0;
 t1 = (struct Thread_Mutex_Recursive__3148 *const *)&t0;
 t2 = Thread_getCurrentId__6169();
 t3 = (*t1);
 t4 = (uint32_t *)&t3->thread_id;
 t5 = (uint32_t const *)t4;
 zig_atomic_load(t6, (zig_atomic(uint32_t) *)t5, zig_memory_order_relaxed, u32, uint32_t);
 t7 = t6 != t2;
 if (t7) {
  t3 = (*t1);
  t8 = (struct Thread_Mutex__3146 *)&t3->mutex;
  Thread_Mutex_lock__6309(t8);
  t9 = (uintptr_t *)&a0->lock_count;
  t10 = (*t9);
  t11 = t10;
  t7 = t11 == UINT64_C(0);
  debug_assert__179(t7);
  t3 = (*t1);
  t4 = (uint32_t *)&t3->thread_id;
  zig_atomic_store((zig_atomic(uint32_t) *)t4, t2, zig_memory_order_relaxed, u32, uint32_t);
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = (*t1);
 t9 = (uintptr_t *)&t3->lock_count;
 t10 = (*t9);
 t10 = t10 + (uintptr_t)1ul;
 (*t9) = t10;
 return;
}

static uint16_t Progress_clearWrittenWithEscapeCodes__4292(void) {
 struct Progress__2682 t0;
 uint16_t t2;
 bool t1;
 t0 = (*((struct Progress__2682 *)&Progress_global_progress__4267));
 t1 = t0.need_clear;
 t1 = !t1;
 if (t1) {
  return 0;
 }
 goto zig_block_0;

 zig_block_0:;
 (*&(((struct Progress__2682 *)&Progress_global_progress__4267))->need_clear) = false;
 t2 = Progress_write__4311((nav__4292_68){(uint8_t const *)&__anon_4135,(uintptr_t)3ul});
 if (t2) {
  return t2;
 }
 return 0;
}

static nav__1363_38 posix_write__1363(int32_t const a0, nav__1363_40 const a1) {
 uintptr_t t0;
 uint64_t t1;
 uint8_t const *t3;
 intptr_t t5;
 nav__1363_38 t7;
 uint32_t t4;
 uint16_t t6;
 bool t2;
 t0 = a1.len;
 t1 = t0;
 t2 = t1 == UINT64_C(0);
 if (t2) {
  return (nav__1363_38){(uintptr_t)0ul,0};
 }
 goto zig_block_0;

 zig_block_0:;
 zig_loop_16:
 t3 = a1.ptr;
 t0 = a1.len;
 t0 = ((uintptr_t)2147479552ul < t0) ? (uintptr_t)2147479552ul : t0;
 t4 = (uint32_t)t0;
 t0 = (uintptr_t)t4;
 t5 = write(a0, t3, t0);
 t6 = posix_errno__anon_4152__6840(t5);
 switch (t6) {
  case UINT16_C(0): {
   t0 = (uintptr_t)t5;
   t7.payload = t0;
   t7.error = UINT16_C(0);
   return t7;
  }
  case UINT16_C(4): {
   goto zig_block_1;
  }
  case UINT16_C(22): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_InvalidArgument};
  }
  case UINT16_C(14): {
   zig_unreachable();
  }
  case UINT16_C(2): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_ProcessNotFound};
  }
  case UINT16_C(11): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_WouldBlock};
  }
  case UINT16_C(9): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_NotOpenForWriting};
  }
  case UINT16_C(89): {
   zig_unreachable();
  }
  case UINT16_C(122): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_DiskQuota};
  }
  case UINT16_C(27): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_FileTooBig};
  }
  case UINT16_C(5): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_InputOutput};
  }
  case UINT16_C(28): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_NoSpaceLeft};
  }
  case UINT16_C(13): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_AccessDenied};
  }
  case UINT16_C(1): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_AccessDenied};
  }
  case UINT16_C(32): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_BrokenPipe};
  }
  case UINT16_C(104): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_ConnectionResetByPeer};
  }
  case UINT16_C(16): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_DeviceBusy};
  }
  case UINT16_C(6): {
   return (nav__1363_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_NoDevice};
  }
  default: {
   t6 = posix_unexpectedErrno__1627(t6);
   t7.payload = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
   t7.error = t6;
   return t7;
  }
 }

 zig_block_1:;
 goto zig_loop_16;
}

static uint16_t io_Writer_writeAll__3826(struct io_Writer__1950 const a0, nav__3826_40 const a1) {
 struct io_Writer__1950 const *t1;
 nav__3826_40 const *t3;
 uintptr_t t5;
 uintptr_t t6;
 uintptr_t t13;
 uintptr_t t4;
 uint64_t t7;
 uint64_t t8;
 struct io_Writer__1950 t10;
 struct io_Writer__1950 t0;
 nav__3826_40 t11;
 nav__3826_40 t2;
 uint8_t const *t12;
 nav__3826_43 t14;
 uint16_t t15;
 bool t9;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = a1;
 t3 = (nav__3826_40 const *)&t2;
 t4 = (uintptr_t)0ul;
 zig_loop_11:
 t5 = t4;
 t6 = a1.len;
 t7 = t5;
 t8 = t6;
 t9 = t7 != t8;
 if (t9) {
  t6 = t4;
  t10 = (*t1);
  t5 = t4;
  t11 = (*t3);
  t12 = t11.ptr;
  t12 = (uint8_t const *)(((uintptr_t)t12) + (t5*sizeof(uint8_t)));
  t13 = t11.len;
  t5 = t13 - t5;
  t11.ptr = t12;
  t11.len = t5;
  t14 = io_Writer_write__3825(t10, t11);
  if (t14.error) {
   t15 = t14.error;
   return t15;
  }
  t5 = t14.payload;
  t5 = t6 + t5;
  t4 = t5;
  goto zig_block_1;
 }
 goto zig_block_0;

 zig_block_1:;
 goto zig_loop_11;

 zig_block_0:;
 return 0;
}

static uint16_t fmt_formatType__anon_3739__6704(nav__6704_39 const a0, struct fmt_FormatOptions__3656 const a1, struct io_Writer__1950 const a2, uintptr_t const a3) {
 struct io_Writer__1950 const *t2;
 uint64_t t3;
 struct io_Writer__1950 t5;
 struct io_Writer__1950 t1;
 nav__6704_39 t7;
 nav__6704_39 t0;
 uint16_t t6;
 uint16_t t8;
 bool t4;
 t0 = a0;
 t1 = a2;
 t2 = (struct io_Writer__1950 const *)&t1;
 t3 = a3;
 t4 = t3 == UINT64_C(0);
 if (t4) {
  t5 = (*t2);
  t6 = io_Writer_writeAll__3826(t5, (nav__6704_39){(uint8_t const *)&__anon_4258,(uintptr_t)7ul});
  return t6;
 }
 goto zig_block_0;

 zig_block_0:;
 memcpy(&t7, &a0, sizeof(nav__6704_39));
 t6 = fmt_formatBuf__anon_4268__6841(t7, a1, a2);
 memcpy(&t8, &t6, sizeof(uint16_t));
 return t8;
}

static void Thread_Mutex_Recursive_unlock__6329(struct Thread_Mutex_Recursive__3148 *const a0) {
 struct Thread_Mutex_Recursive__3148 *const *t1;
 struct Thread_Mutex_Recursive__3148 *t2;
 struct Thread_Mutex_Recursive__3148 *t0;
 uintptr_t *t3;
 uintptr_t t4;
 uint64_t t5;
 uint32_t *t7;
 struct Thread_Mutex__3146 *t9;
 uint32_t t8;
 bool t6;
 t0 = a0;
 t1 = (struct Thread_Mutex_Recursive__3148 *const *)&t0;
 t2 = (*t1);
 t3 = (uintptr_t *)&t2->lock_count;
 t4 = (*t3);
 t4 = t4 - (uintptr_t)1ul;
 (*t3) = t4;
 t3 = (uintptr_t *)&a0->lock_count;
 t4 = (*t3);
 t5 = t4;
 t6 = t5 == UINT64_C(0);
 if (t6) {
  t2 = (*t1);
  t7 = (uint32_t *)&t2->thread_id;
  t8 = UINT32_MAX;
  zig_atomic_store((zig_atomic(uint32_t) *)t7, t8, zig_memory_order_relaxed, u32, uint32_t);
  t2 = (*t1);
  t9 = (struct Thread_Mutex__3146 *)&t2->mutex;
  Thread_Mutex_unlock__6310(t9);
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static uint16_t posix_faccessatZ__1519(int32_t const a0, uint8_t const *const a1, uint32_t const a2, uint32_t const a3) {
 unsigned int t0;
 unsigned int t1;
 int t2;
 uint16_t t3;
 t0 = a2;
 t1 = a3;
 t2 = faccessat(a0, a1, t0, t1);
 t3 = posix_errno__anon_4035__6835(t2);
 switch (t3) {
  case UINT16_C(0): {
   return 0;
  }
  case UINT16_C(13): {
   return zig_error_PermissionDenied;
  }
  case UINT16_C(1): {
   return zig_error_PermissionDenied;
  }
  case UINT16_C(30): {
   return zig_error_ReadOnlyFileSystem;
  }
  case UINT16_C(40): {
   return zig_error_SymLinkLoop;
  }
  case UINT16_C(26): {
   return zig_error_FileBusy;
  }
  case UINT16_C(20): {
   return zig_error_FileNotFound;
  }
  case UINT16_C(2): {
   return zig_error_FileNotFound;
  }
  case UINT16_C(36): {
   return zig_error_NameTooLong;
  }
  case UINT16_C(22): {
   zig_unreachable();
  }
  case UINT16_C(14): {
   zig_unreachable();
  }
  case UINT16_C(5): {
   return zig_error_InputOutput;
  }
  case UINT16_C(12): {
   return zig_error_SystemResources;
  }
  case UINT16_C(84): {
   t3 = posix_unexpectedErrno__1627(t3);
   return t3;
  }
  default: {
   t3 = posix_unexpectedErrno__1627(t3);
   return t3;
  }
 }
}

static nav__1375_38 posix_openatZ__1375(int32_t const a0, uint8_t const *const a1, uint32_t const a2, uintptr_t const a3) {
 unsigned long t1;
 int t0;
 int32_t t3;
 nav__1375_38 t4;
 uint16_t t2;
 zig_loop_11:
 t0 = a0;
 t1 = a3;
 t0 = openat64(t0, a1, a2, t1);
 t2 = posix_errno__anon_4035__6835(t0);
 switch (t2) {
  case UINT16_C(0): {
   t3 = t0;
   t4.payload = t3;
   t4.error = UINT16_C(0);
   return t4;
  }
  case UINT16_C(4): {
   goto zig_block_0;
  }
  case UINT16_C(14): {
   zig_unreachable();
  }
  case UINT16_C(22): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_BadPathName};
  }
  case UINT16_C(9): {
   zig_unreachable();
  }
  case UINT16_C(13): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_AccessDenied};
  }
  case UINT16_C(27): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_FileTooBig};
  }
  case UINT16_C(75): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_FileTooBig};
  }
  case UINT16_C(21): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_IsDir};
  }
  case UINT16_C(40): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_SymLinkLoop};
  }
  case UINT16_C(24): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_ProcessFdQuotaExceeded};
  }
  case UINT16_C(36): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_NameTooLong};
  }
  case UINT16_C(23): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_SystemFdQuotaExceeded};
  }
  case UINT16_C(19): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_NoDevice};
  }
  case UINT16_C(2): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_FileNotFound};
  }
  case UINT16_C(12): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_SystemResources};
  }
  case UINT16_C(28): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_NoSpaceLeft};
  }
  case UINT16_C(20): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_NotDir};
  }
  case UINT16_C(1): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_AccessDenied};
  }
  case UINT16_C(17): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_PathAlreadyExists};
  }
  case UINT16_C(16): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_DeviceBusy};
  }
  case UINT16_C(95): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_FileLocksNotSupported};
  }
  case UINT16_C(11): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_WouldBlock};
  }
  case UINT16_C(26): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_FileBusy};
  }
  case UINT16_C(6): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_NoDevice};
  }
  case UINT16_C(84): {
   t2 = posix_unexpectedErrno__1627(t2);
   t4.payload = -INT32_C(0x55555556);
   t4.error = t2;
   return t4;
  }
  default: {
   t2 = posix_unexpectedErrno__1627(t2);
   t4.payload = -INT32_C(0x55555556);
   t4.error = t2;
   return t4;
  }
 }

 zig_block_0:;
 goto zig_loop_11;
}

static uint16_t posix_flock__1536(int32_t const a0, int32_t const a1) {
 int t0;
 uint16_t t1;
 zig_loop_3:
 t0 = a1;
 t0 = flock(a0, t0);
 t1 = posix_errno__anon_4035__6835(t0);
 switch (t1) {
  case UINT16_C(0): {
   return 0;
  }
  case UINT16_C(9): {
   zig_unreachable();
  }
  case UINT16_C(4): {
   goto zig_block_0;
  }
  case UINT16_C(22): {
   zig_unreachable();
  }
  case UINT16_C(37): {
   return zig_error_SystemResources;
  }
  case UINT16_C(11): {
   return zig_error_WouldBlock;
  }
  case UINT16_C(95): {
   return zig_error_FileLocksNotSupported;
  }
  default: {
   t1 = posix_unexpectedErrno__1627(t1);
   return t1;
  }
 }

 zig_block_0:;
 goto zig_loop_3;
}

static void posix_close__1333(int32_t const a0) {
 int t0;
 uint16_t t1;
 t0 = close(a0);
 t1 = posix_errno__anon_4035__6835(t0);
 switch (t1) {
  case UINT16_C(9): {
   zig_unreachable();
  }
  case UINT16_C(4): {
   return;
  }
  default: {
   return;
  }
 }
}

static uint16_t bincode_serialize__anon_3877__6829(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, uint32_t const a1) {
 uint16_t t0;
 t0 = bincode_serializeInt__anon_4399__6845(a0, a1);
 if (t0) {
  return t0;
 }
 return 0;
}

static uint16_t bincode_serialize__anon_3879__6830(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, struct shared_Command__struct_2007__2007 const a1) {
 uint16_t t0;
 t0 = bincode_serializeStruct__anon_4404__6846(a0, a1);
 if (t0) {
  return t0;
 }
 return 0;
}

static uint16_t bincode_serialize__anon_3881__6831(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0) {
 (void)a0;
 return 0;
}

static uint16_t bincode_serialize__anon_3883__6832(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, struct shared_Command__struct_2008__2008 const a1) {
 uint16_t t0;
 t0 = bincode_serializeStruct__anon_4405__6847(a0, a1);
 if (t0) {
  return t0;
 }
 return 0;
}

static uint16_t posix_errno__anon_4035__6835(int const a0) {
 int *t3;
 int32_t t1;
 int t4;
 uint16_t t0;
 uint16_t t5;
 bool t2;
 t1 = a0;
 t2 = t1 == -INT32_C(1);
 if (t2) {
  t3 = zig_e___errno_location();
  t4 = (*t3);
  t5 = (uint16_t)t4;
  t0 = t5;
  goto zig_block_0;
 }
 t0 = UINT16_C(0);
 goto zig_block_0;

 zig_block_0:;
 return t0;
}

static uint16_t posix_unexpectedErrno__1627(uint16_t const a0) {
 (void)a0;
 return zig_error_Unexpected;
}

static nav__1355_38 posix_read__1355(int32_t const a0, nav__1355_40 const a1) {
 uintptr_t t0;
 uint64_t t1;
 uint8_t *t3;
 intptr_t t5;
 nav__1355_38 t7;
 uint32_t t4;
 uint16_t t6;
 bool t2;
 t0 = a1.len;
 t1 = t0;
 t2 = t1 == UINT64_C(0);
 if (t2) {
  return (nav__1355_38){(uintptr_t)0ul,0};
 }
 goto zig_block_0;

 zig_block_0:;
 zig_loop_16:
 t3 = a1.ptr;
 t0 = a1.len;
 t0 = ((uintptr_t)2147479552ul < t0) ? (uintptr_t)2147479552ul : t0;
 t4 = (uint32_t)t0;
 t0 = (uintptr_t)t4;
 t5 = read(a0, t3, t0);
 t6 = posix_errno__anon_4152__6840(t5);
 switch (t6) {
  case UINT16_C(0): {
   t0 = (uintptr_t)t5;
   t7.payload = t0;
   t7.error = UINT16_C(0);
   return t7;
  }
  case UINT16_C(4): {
   goto zig_block_1;
  }
  case UINT16_C(22): {
   zig_unreachable();
  }
  case UINT16_C(14): {
   zig_unreachable();
  }
  case UINT16_C(2): {
   return (nav__1355_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_ProcessNotFound};
  }
  case UINT16_C(11): {
   return (nav__1355_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_WouldBlock};
  }
  case UINT16_C(125): {
   return (nav__1355_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_Canceled};
  }
  case UINT16_C(9): {
   return (nav__1355_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_NotOpenForReading};
  }
  case UINT16_C(5): {
   return (nav__1355_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_InputOutput};
  }
  case UINT16_C(21): {
   return (nav__1355_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_IsDir};
  }
  case UINT16_C(105): {
   return (nav__1355_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_SystemResources};
  }
  case UINT16_C(12): {
   return (nav__1355_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_SystemResources};
  }
  case UINT16_C(107): {
   return (nav__1355_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_SocketNotConnected};
  }
  case UINT16_C(104): {
   return (nav__1355_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_ConnectionResetByPeer};
  }
  case UINT16_C(110): {
   return (nav__1355_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_ConnectionTimedOut};
  }
  default: {
   t6 = posix_unexpectedErrno__1627(t6);
   t7.payload = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
   t7.error = t6;
   return t7;
  }
 }

 zig_block_1:;
 goto zig_loop_16;
}

static nav__6836_38 math_mul__anon_4055__6836(uintptr_t const a0, uintptr_t const a1) {
 nav__6836_42 t0;
 uintptr_t t3;
 nav__6836_38 t4;
 uint8_t t1;
 bool t2;
 t0.f1 = zig_mulo_u64(&t0.f0, a0, a1, UINT8_C(64));
 t1 = t0.f1;
 t2 = t1 != UINT8_C(0);
 if (t2) {
  return (nav__6836_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_Overflow};
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = t0.f0;
 t4.payload = t3;
 t4.error = UINT16_C(0);
 return t4;
}

static nav__6837_39 mem_Allocator_allocBytesWithAlignment__anon_4057__6837(struct mem_Allocator__206 const a0, uintptr_t const a1, uintptr_t const a2) {
 struct mem_Allocator__206 const *t1;
 uint64_t t2;
 uint8_t *t4;
 uint8_t *t13;
 uint8_t *t14;
 uint8_t *t15;
 struct mem_Allocator__206 t5;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t7;
 struct mem_Allocator_VTable__209 const *const *t8;
 struct mem_Allocator_VTable__209 const *t9;
 uint8_t *(*const *t10)(void *, uintptr_t, uint8_t, uintptr_t);
 uint8_t *(*t11)(void *, uintptr_t, uint8_t, uintptr_t);
 void *t12;
 uint8_t *const *t16;
 nav__6837_52 t17;
 nav__6837_39 t18;
 bool t3;
 uint8_t t6;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = a1;
 t3 = t2 == UINT64_C(0);
 if (t3) {
  return (nav__6837_39){(uint8_t *)UINTPTR_MAX,0};
 }
 goto zig_block_0;

 zig_block_0:;
 t5 = (*t1);
 t6 = mem_Alignment_fromByteUnits__628((uintptr_t)1ul);
 t7 = t5;
 t1 = (struct mem_Allocator__206 const *)&t7;
 t8 = (struct mem_Allocator_VTable__209 const *const *)&t1->vtable;
 t9 = (*t8);
 t10 = (uint8_t *(*const *)(void *, uintptr_t, uint8_t, uintptr_t))&t9->alloc;
 t11 = (*t10);
 t12 = t5.ptr;
 t13 = t11(t12, a1, t6, a2);
 t3 = t13 != NULL;
 if (t3) {
  t14 = t13;
  t4 = t14;
  goto zig_block_1;
 }
 return (nav__6837_39){((uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),zig_error_OutOfMemory};

 zig_block_1:;
 t15 = t4;
 t16 = (uint8_t *const *)&t15;
 t14 = (*t16);
 t14 = (uint8_t *)(((uintptr_t)t14) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t17.ptr = t14;
 t17.len = a1;
 t18.payload = t4;
 t18.error = UINT16_C(0);
 return t18;
}

static nav__4202_38 io_Reader_read__4202(struct io_Reader__2355 const a0, nav__4202_41 const a1) {
 struct io_Reader__2355 const *t1;
 nav__4202_38 (*const *t2)(void const *, nav__4202_41);
 nav__4202_38 (*t3)(void const *, nav__4202_41);
 void const *t4;
 nav__4202_38 t5;
 struct io_Reader__2355 t0;
 t0 = a0;
 t1 = (struct io_Reader__2355 const *)&t0;
 t2 = (nav__4202_38 (*const *)(void const *, nav__4202_41))&t1->readFn;
 t3 = (*t2);
 t4 = a0.context;
 t5 = t3(t4, a1);
 return t5;
}

static nav__6838_39 mem_sliceAsBytes__anon_4087__6838(nav__6838_39 const a0) {
 uintptr_t t0;
 uint64_t t1;
 uint8_t const *t4;
 uint8_t const *t5;
 uint8_t const *const *t6;
 nav__6838_39 t7;
 bool t2;
 bool t3;
 t0 = a0.len;
 t1 = t0;
 t2 = t1 == UINT64_C(0);
 if (t2) {
  t3 = true;
  goto zig_block_1;
 }
 t3 = false;
 goto zig_block_1;

 zig_block_1:;
 if (t3) {
  return (nav__6838_39){(uint8_t const *)((void const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),(uintptr_t)0ul};
 }
 goto zig_block_0;

 zig_block_0:;
 t4 = a0.ptr;
 t5 = t4;
 t6 = (uint8_t const *const *)&t5;
 t0 = a0.len;
 t4 = (*t6);
 t4 = (uint8_t const *)(((uintptr_t)t4) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t7.ptr = t4;
 t7.len = t0;
 return t7;
}

static uint32_t Thread_getCurrentId__6169(void) {
 uint32_t t0;
 t0 = Thread_PosixThreadImpl_getCurrentId__6239();
 return t0;
}

static void Thread_Mutex_lock__6309(struct Thread_Mutex__3146 *const a0) {
 struct Thread_Mutex__3146 *const *t1;
 struct Thread_Mutex__3146 *t2;
 struct Thread_Mutex__3146 *t0;
 struct Thread_Mutex_FutexImpl__3172 *t3;
 t0 = a0;
 t1 = (struct Thread_Mutex__3146 *const *)&t0;
 t2 = (*t1);
 t3 = (struct Thread_Mutex_FutexImpl__3172 *)&t2->impl;
 Thread_Mutex_FutexImpl_lock__6334(t3);
 return;
}

static uint16_t Progress_write__4311(nav__4311_39 const a0) {
 struct fs_File__546 t0;
 uint16_t t1;
 t0 = (*&(((struct Progress__2682 *)&Progress_global_progress__4267))->terminal);
 t1 = fs_File_writeAll__1144(t0, a0);
 if (t1) {
  return t1;
 }
 return 0;
}

static uint16_t posix_errno__anon_4152__6840(intptr_t const a0) {
 int64_t t1;
 int *t3;
 int t4;
 uint16_t t0;
 uint16_t t5;
 bool t2;
 t1 = a0;
 t2 = t1 == -INT64_C(1);
 if (t2) {
  t3 = zig_e___errno_location();
  t4 = (*t3);
  t5 = (uint16_t)t4;
  t0 = t5;
  goto zig_block_0;
 }
 t0 = UINT16_C(0);
 goto zig_block_0;

 zig_block_0:;
 return t0;
}

static nav__3825_38 io_Writer_write__3825(struct io_Writer__1950 const a0, nav__3825_41 const a1) {
 struct io_Writer__1950 const *t1;
 nav__3825_38 (*const *t2)(void const *, nav__3825_41);
 nav__3825_38 (*t3)(void const *, nav__3825_41);
 void const *t4;
 nav__3825_38 t5;
 struct io_Writer__1950 t0;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (nav__3825_38 (*const *)(void const *, nav__3825_41))&t1->writeFn;
 t3 = (*t2);
 t4 = a0.context;
 t5 = t3(t4, a1);
 return t5;
}

static nav__6349_38 unicode_utf8ByteSequenceLength__6349(uint8_t const a0) {
 nav__6349_38 t0;
 switch (a0) {
  default: if ((a0 >= UINT8_C(0) && a0 <= UINT8_C(127))) {
   t0 = (nav__6349_38){0,UINT8_C(1)};
   goto zig_block_0;
  }if ((a0 >= UINT8_C(192) && a0 <= UINT8_C(223))) {
   t0 = (nav__6349_38){0,UINT8_C(2)};
   goto zig_block_0;
  }if ((a0 >= UINT8_C(224) && a0 <= UINT8_C(239))) {
   t0 = (nav__6349_38){0,UINT8_C(3)};
   goto zig_block_0;
  }if ((a0 >= UINT8_C(240) && a0 <= UINT8_C(247))) {
   t0 = (nav__6349_38){0,UINT8_C(4)};
   goto zig_block_0;
  }{
   t0 = (nav__6349_38){zig_error_Utf8InvalidStartByte,UINT8_C(0x2)};
   goto zig_block_0;
  }
 }

 zig_block_0:;
 return t0;
}

static nav__6365_38 unicode_utf8CountCodepoints__6365(nav__6365_40 const a0) {
 nav__6365_40 const *t1;
 uintptr_t t4;
 uintptr_t t5;
 uintptr_t t2;
 uintptr_t t3;
 uint64_t t6;
 uint64_t t7;
 nav__6365_40 t9;
 nav__6365_40 t0;
 uint8_t const *t10;
 uint8_t const (*t11)[8];
 nav__6365_38 t16;
 nav__6365_50 t17;
 nav__6365_48 t14;
 uint16_t t15;
 bool t8;
 uint8_t t12[8];
 uint8_t t13;
 t0 = a0;
 t1 = (nav__6365_40 const *)&t0;
 t2 = (uintptr_t)0ul;
 t3 = (uintptr_t)0ul;
 zig_loop_9:
 t4 = t3;
 t5 = a0.len;
 t6 = t4;
 t7 = t5;
 t8 = t6 < t7;
 if (t8) {
  zig_loop_18:
  t5 = t3;
  t5 = t5 + (uintptr_t)8ul;
  t4 = a0.len;
  t7 = t5;
  t6 = t4;
  t8 = t7 <= t6;
  if (t8) {
   t4 = t3;
   t9 = (*t1);
   t10 = t9.ptr;
   t10 = (uint8_t const *)(((uintptr_t)t10) + (t4*sizeof(uint8_t)));
   t11 = (uint8_t const (*)[8])t10;
   memcpy(t12, (const char *)t11, sizeof(uint8_t[8]));
   memcpy(&t4, &t12, sizeof(uintptr_t));
   t4 = zig_wrap_u64(t4, UINT8_C(64));
   t4 = t4 & (uintptr_t)9259542123273814144ul;
   t6 = t4;
   t8 = t6 != UINT64_C(0);
   if (t8) {
    goto zig_block_2;
   }
   goto zig_block_4;

   zig_block_4:;
   t4 = t2;
   t4 = t4 + (uintptr_t)8ul;
   t2 = t4;
   t4 = t3;
   t4 = t4 + (uintptr_t)8ul;
   t3 = t4;
   goto zig_block_3;
  }
  goto zig_block_2;

  zig_block_3:;
  goto zig_loop_18;

  zig_block_2:;
  t5 = t3;
  t4 = a0.len;
  t7 = t5;
  t6 = t4;
  t8 = t7 < t6;
  if (t8) {
   t4 = t3;
   t13 = a0.ptr[t4];
   t14 = unicode_utf8ByteSequenceLength__6349(t13);
   if (t14.error) {
    t15 = t14.error;
    t16.payload = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
    t16.error = t15;
    return t16;
   }
   t13 = t14.payload;
   t4 = t3;
   t5 = (uintptr_t)t13;
   t5 = t4 + t5;
   t4 = a0.len;
   t6 = t5;
   t7 = t4;
   t8 = t6 > t7;
   if (t8) {
    return (nav__6365_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_TruncatedInput};
   }
   goto zig_block_6;

   zig_block_6:;
   switch (t13) {
    case UINT8_C(1): {
     goto zig_block_7;
    }
    default: {
     t4 = t3;
     t9 = (*t1);
     t10 = t9.ptr;
     t10 = (uint8_t const *)(((uintptr_t)t10) + (t4*sizeof(uint8_t)));
     t4 = (uintptr_t)t13;
     t9.ptr = t10;
     t9.len = t4;
     t17 = unicode_utf8Decode__6355(t9);
     if (t17.error) {
      t15 = t17.error;
      t16.payload = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
      t16.error = t15;
      return t16;
     }
     goto zig_block_7;
    }
   }

   zig_block_7:;
   t4 = t3;
   t5 = (uintptr_t)t13;
   t5 = t4 + t5;
   t3 = t5;
   t5 = t2;
   t5 = t5 + (uintptr_t)1ul;
   t2 = t5;
   goto zig_block_5;
  }
  goto zig_block_5;

  zig_block_5:;
  goto zig_block_1;
 }
 goto zig_block_0;

 zig_block_1:;
 goto zig_loop_9;

 zig_block_0:;
 t5 = t2;
 t16.payload = t5;
 t16.error = UINT16_C(0);
 return t16;
}

static uint16_t fmt_formatBuf__anon_4268__6841(nav__6841_39 const a0, struct fmt_FormatOptions__3656 const a1, struct io_Writer__1950 const a2) {
 struct io_Writer__1950 const *t1;
 nav__6841_44 t2;
 uintptr_t t4;
 uintptr_t t5;
 uintptr_t t7;
 nav__6841_48 t6;
 uint64_t t8;
 uint64_t t9;
 struct io_Writer__1950 t10;
 struct io_Writer__1950 t0;
 nav__6841_57 t15;
 nav__6841_39 t17;
 nav__6841_39 t20;
 uint8_t *t19;
 uint32_t t14;
 uint16_t t11;
 uint16_t t12;
 nav__6841_60 t16;
 bool t3;
 uint8_t t18;
 uint8_t t13[4];
 t0 = a2;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = a1.width;
 t3 = t2.is_null != true;
 if (t3) {
  t4 = t2.payload;
  t6 = unicode_utf8CountCodepoints__6365(a0);
  t3 = t6.error == UINT16_C(0);
  if (t3) {
   t7 = t6.payload;
   t5 = t7;
   goto zig_block_1;
  }
  t7 = a0.len;
  t5 = t7;
  goto zig_block_1;

  zig_block_1:;
  t8 = t5;
  t9 = t4;
  t3 = t8 < t9;
  if (t3) {
   t5 = t4 - t5;
   t7 = t5;
   goto zig_block_2;
  }
  t7 = (uintptr_t)0ul;
  goto zig_block_2;

  zig_block_2:;
  t9 = t7;
  t3 = t9 == UINT64_C(0);
  if (t3) {
   t10 = (*t1);
   t11 = io_Writer_writeAll__3826(t10, a0);
   memcpy(&t12, &t11, sizeof(uint16_t));
   return t12;
  }
  goto zig_block_3;

  zig_block_3:;
  t14 = a1.fill;
  t15.ptr = &t13[(uintptr_t)0ul];
  t15.len = (uintptr_t)4ul;
  t16 = unicode_utf8Encode__6350(t14, t15);
  t3 = t16.error == UINT16_C(0);
  if (t3) {
   t18 = t16.payload;
   t19 = (uint8_t *)&t13;
   t19 = (uint8_t *)(((uintptr_t)t19) + ((uintptr_t)0ul*sizeof(uint8_t)));
   t5 = (uintptr_t)t18;
   t15.ptr = t19;
   t15.len = t5;
   memcpy(&t20, &t15, sizeof(nav__6841_39));
   t17 = t20;
   goto zig_block_4;

  }
  t12 = t16.error;
  switch (t12) {
   case zig_error_Utf8CannotEncodeSurrogateHalf:
   case zig_error_CodepointTooLarge: {
    t17 = (nav__6841_39){(uint8_t const *)&__anon_4571,(uintptr_t)3ul};
    goto zig_block_4;
   }
   default: zig_unreachable();
  }

  zig_block_4:;
  t18 = a1.alignment;
  switch (t18) {
   case UINT8_C(0): {
    t10 = (*t1);
    t12 = io_Writer_writeAll__3826(t10, a0);
    if (t12) {
     return t12;
    }
    t10 = (*t1);
    t12 = io_Writer_writeBytesNTimes__3830(t10, t17, t7);
    if (t12) {
     return t12;
    }
    goto zig_block_6;
   }
   case UINT8_C(1): {
    t5 = t7 / (uintptr_t)2ul;
    t7 = t7 + (uintptr_t)1ul;
    t7 = t7 / (uintptr_t)2ul;
    t10 = (*t1);
    t12 = io_Writer_writeBytesNTimes__3830(t10, t17, t5);
    if (t12) {
     return t12;
    }
    t10 = (*t1);
    t12 = io_Writer_writeAll__3826(t10, a0);
    if (t12) {
     return t12;
    }
    t10 = (*t1);
    t12 = io_Writer_writeBytesNTimes__3830(t10, t17, t7);
    if (t12) {
     return t12;
    }
    goto zig_block_6;
   }
   case UINT8_C(2): {
    t10 = (*t1);
    t12 = io_Writer_writeBytesNTimes__3830(t10, t17, t7);
    if (t12) {
     return t12;
    }
    t10 = (*t1);
    t12 = io_Writer_writeAll__3826(t10, a0);
    if (t12) {
     return t12;
    }
    goto zig_block_6;
   }
   default: zig_unreachable();
  }

  zig_block_6:;
  goto zig_block_0;
 }
 t10 = (*t1);
 t12 = io_Writer_writeAll__3826(t10, a0);
 if (t12) {
  return t12;
 }
 goto zig_block_0;

 zig_block_0:;
 return 0;
}

static void Thread_Mutex_unlock__6310(struct Thread_Mutex__3146 *const a0) {
 struct Thread_Mutex__3146 *const *t1;
 struct Thread_Mutex__3146 *t2;
 struct Thread_Mutex__3146 *t0;
 struct Thread_Mutex_FutexImpl__3172 *t3;
 t0 = a0;
 t1 = (struct Thread_Mutex__3146 *const *)&t0;
 t2 = (*t1);
 t3 = (struct Thread_Mutex_FutexImpl__3172 *)&t2->impl;
 Thread_Mutex_FutexImpl_unlock__6337(t3);
 return;
}

static uint16_t bincode_serializeInt__anon_4399__6845(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, uint32_t const a1) {
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *t1;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *t4;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 t2;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 t0;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 t3;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *const *t5;
 void const **t7;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *t8;
 void const *t9;
 nav__6845_48 (**t10)(void const *, nav__6845_50);
 struct io_Writer__1950 t11;
 struct io_Writer__1950 t6;
 struct io_Writer__1950 t12;
 struct io_Writer__1950 t14;
 struct io_Writer__1950 const *t13;
 nav__6845_50 t17;
 uint16_t t18;
 uint16_t t19;
 uint8_t t16[4];
 uint8_t t15[4];
 t0 = a0;
 t1 = (struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *)&t0;
 t2 = (*t1);
 t3 = t2;
 t1 = (struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *)&t3;
 t4 = t1;
 t5 = (struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *const *)&t4;
 t7 = (void const **)&t6.context;
 t1 = (*t5);
 t8 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *)&t1->context;
 t9 = (void const *)t8;
 (*t7) = t9;
 t10 = (nav__6845_48 (**)(void const *, nav__6845_50))&t6.writeFn;
 (*t10) = &io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29___4088;
 t11 = t6;
 t12 = t11;
 t13 = (struct io_Writer__1950 const *)&t12;
 t11 = (*t13);
 t14 = t11;
 t13 = (struct io_Writer__1950 const *)&t14;
 memcpy(&t16, &a1, sizeof(uint8_t[4]));
 memcpy((char *)&t15, t16, sizeof(uint8_t[4]));
 t11 = (*t13);
 t17.ptr = &t15[(uintptr_t)0ul];
 t17.len = (uintptr_t)4ul;
 t18 = io_Writer_writeAll__3826(t11, t17);
 memcpy(&t19, &t18, sizeof(uint16_t));
 if (t19) {
  return t19;
 }
 return 0;
}

static uint16_t bincode_serializeStruct__anon_4404__6846(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, struct shared_Command__struct_2007__2007 const a1) {
 nav__6846_45 t2;
 uint32_t t0;
 uint16_t t1;
 t0 = a1.pid;
 t1 = bincode_serialize__anon_3877__6829(a0, t0);
 if (t1) {
  return t1;
 }
 t2 = a1.uri;
 t1 = bincode_serialize__anon_4615__6850(a0, t2);
 if (t1) {
  return t1;
 }
 return 0;
}

static uint16_t bincode_serializeStruct__anon_4405__6847(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, struct shared_Command__struct_2008__2008 const a1) {
 nav__6847_45 t0;
 uint16_t t1;
 t0 = a1.name;
 t1 = bincode_serialize__anon_4615__6850(a0, t0);
 if (t1) {
  return t1;
 }
 t0 = a1.version;
 t1 = bincode_serialize__anon_4615__6850(a0, t0);
 if (t1) {
  return t1;
 }
 return 0;
}

static uint32_t Thread_PosixThreadImpl_getCurrentId__6239(void) {
 uint32_t t0;
 t0 = Thread_LinuxThreadImpl_getCurrentId__6854();
 return t0;
}

static void Thread_Mutex_FutexImpl_lock__6334(struct Thread_Mutex_FutexImpl__3172 *const a0) {
 struct Thread_Mutex_FutexImpl__3172 *const *t1;
 struct Thread_Mutex_FutexImpl__3172 *t2;
 struct Thread_Mutex_FutexImpl__3172 *t0;
 bool t3;
 t0 = a0;
 t1 = (struct Thread_Mutex_FutexImpl__3172 *const *)&t0;
 t2 = (*t1);
 t3 = Thread_Mutex_FutexImpl_tryLock__6335(t2);
 t3 = !t3;
 if (t3) {
  t2 = (*t1);
  Thread_Mutex_FutexImpl_lockSlow__6336(t2);
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static nav__6355_38 unicode_utf8Decode__6355(nav__6355_40 const a0) {
 nav__6355_40 const *t1;
 uintptr_t t2;
 nav__6355_40 t7;
 nav__6355_40 t0;
 uint8_t const *t8;
 uint8_t const (*t9)[2];
 uint8_t const (*t13)[3];
 uint8_t const (*t16)[4];
 nav__6355_38 t3;
 nav__6355_38 t6;
 nav__6355_38 t12;
 uint32_t t5;
 uint8_t t4;
 uint8_t t10[2];
 nav__6355_48 t11;
 uint8_t t14[3];
 nav__6355_52 t15;
 uint8_t t17[4];
 nav__6355_56 t18;
 t0 = a0;
 t1 = (nav__6355_40 const *)&t0;
 t2 = a0.len;
 switch (t2) {
  case (uintptr_t)1ul: {
   t4 = a0.ptr[(uintptr_t)0ul];
   t5 = (uint32_t)t4;
   t6.payload = t5;
   t6.error = UINT16_C(0);
   t3 = t6;
   goto zig_block_0;
  }
  case (uintptr_t)2ul: {
   t7 = (*t1);
   t8 = t7.ptr;
   t8 = (uint8_t const *)(((uintptr_t)t8) + ((uintptr_t)0ul*sizeof(uint8_t)));
   t9 = (uint8_t const (*)[2])t8;
   memcpy(t10, (const char *)t9, sizeof(uint8_t[2]));
   memcpy(t11.array, t10, sizeof(nav__6355_48));
   t6 = unicode_utf8Decode2__6357(t11);
   memcpy(&t12, &t6, sizeof(nav__6355_38));
   t3 = t12;
   goto zig_block_0;
  }
  case (uintptr_t)3ul: {
   t7 = (*t1);
   t8 = t7.ptr;
   t8 = (uint8_t const *)(((uintptr_t)t8) + ((uintptr_t)0ul*sizeof(uint8_t)));
   t13 = (uint8_t const (*)[3])t8;
   memcpy(t14, (const char *)t13, sizeof(uint8_t[3]));
   memcpy(t15.array, t14, sizeof(nav__6355_52));
   t12 = unicode_utf8Decode3__6359(t15);
   memcpy(&t6, &t12, sizeof(nav__6355_38));
   t3 = t6;
   goto zig_block_0;
  }
  case (uintptr_t)4ul: {
   t7 = (*t1);
   t8 = t7.ptr;
   t8 = (uint8_t const *)(((uintptr_t)t8) + ((uintptr_t)0ul*sizeof(uint8_t)));
   t16 = (uint8_t const (*)[4])t8;
   memcpy(t17, (const char *)t16, sizeof(uint8_t[4]));
   memcpy(t18.array, t17, sizeof(nav__6355_56));
   t12 = unicode_utf8Decode4__6363(t18);
   memcpy(&t6, &t12, sizeof(nav__6355_38));
   t3 = t6;
   goto zig_block_0;
  }
  default: {
   zig_unreachable();
  }
 }

 zig_block_0:;
 return t3;
}

static nav__6348_38 unicode_utf8CodepointSequenceLength__6348(uint32_t const a0) {
 bool t0;
 t0 = a0 < UINT32_C(128);
 if (t0) {
  return (nav__6348_38){0,UINT8_C(1)};
 }
 goto zig_block_0;

 zig_block_0:;
 t0 = a0 < UINT32_C(2048);
 if (t0) {
  return (nav__6348_38){0,UINT8_C(2)};
 }
 goto zig_block_1;

 zig_block_1:;
 t0 = a0 < UINT32_C(65536);
 if (t0) {
  return (nav__6348_38){0,UINT8_C(3)};
 }
 goto zig_block_2;

 zig_block_2:;
 t0 = a0 < UINT32_C(1114112);
 if (t0) {
  return (nav__6348_38){0,UINT8_C(4)};
 }
 goto zig_block_3;

 zig_block_3:;
 return (nav__6348_38){zig_error_CodepointTooLarge,UINT8_C(0x2)};
}

static nav__6861_38 unicode_utf8EncodeImpl__anon_4643__6861(uint32_t const a0, nav__6861_40 const a1) {
 nav__6861_40 const *t1;
 uintptr_t t5;
 uint64_t t6;
 uint64_t t7;
 nav__6861_40 t9;
 nav__6861_40 t0;
 uint8_t *t10;
 uint32_t t12;
 nav__6861_38 t2;
 uint16_t t3;
 uint8_t t4;
 uint8_t t11;
 bool t8;
 t0 = a1;
 t1 = (nav__6861_40 const *)&t0;
 t2 = unicode_utf8CodepointSequenceLength__6348(a0);
 if (t2.error) {
  t3 = t2.error;
  t2.payload = UINT8_C(0x2);
  t2.error = t3;
  return t2;
 }
 t4 = t2.payload;
 t5 = a1.len;
 t6 = t5;
 t7 = (uint64_t)t4;
 t8 = t6 >= t7;
 debug_assert__179(t8);
 switch (t4) {
  case UINT8_C(1): {
   t9 = (*t1);
   t10 = &t9.ptr[(uintptr_t)0ul];
   t11 = (uint8_t)a0;
   (*t10) = t11;
   goto zig_block_0;
  }
  case UINT8_C(2): {
   t9 = (*t1);
   t10 = &t9.ptr[(uintptr_t)0ul];
   t12 = zig_shr_u32(a0, UINT8_C(6));
   t12 = UINT32_C(192) | t12;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   t9 = (*t1);
   t10 = &t9.ptr[(uintptr_t)1ul];
   t12 = a0 & UINT32_C(63);
   t12 = UINT32_C(128) | t12;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   goto zig_block_0;
  }
  case UINT8_C(3): {
   t8 = unicode_isSurrogateCodepoint__6428(a0);
   if (t8) {
    return (nav__6861_38){zig_error_Utf8CannotEncodeSurrogateHalf,UINT8_C(0x2)};
   }
   goto zig_block_1;

   zig_block_1:;
   t9 = (*t1);
   t10 = &t9.ptr[(uintptr_t)0ul];
   t12 = zig_shr_u32(a0, UINT8_C(12));
   t12 = UINT32_C(224) | t12;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   t9 = (*t1);
   t10 = &t9.ptr[(uintptr_t)1ul];
   t12 = zig_shr_u32(a0, UINT8_C(6));
   t12 = t12 & UINT32_C(63);
   t12 = UINT32_C(128) | t12;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   t9 = (*t1);
   t10 = &t9.ptr[(uintptr_t)2ul];
   t12 = a0 & UINT32_C(63);
   t12 = UINT32_C(128) | t12;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   goto zig_block_0;
  }
  case UINT8_C(4): {
   t9 = (*t1);
   t10 = &t9.ptr[(uintptr_t)0ul];
   t12 = zig_shr_u32(a0, UINT8_C(18));
   t12 = UINT32_C(240) | t12;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   t9 = (*t1);
   t10 = &t9.ptr[(uintptr_t)1ul];
   t12 = zig_shr_u32(a0, UINT8_C(12));
   t12 = t12 & UINT32_C(63);
   t12 = UINT32_C(128) | t12;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   t9 = (*t1);
   t10 = &t9.ptr[(uintptr_t)2ul];
   t12 = zig_shr_u32(a0, UINT8_C(6));
   t12 = t12 & UINT32_C(63);
   t12 = UINT32_C(128) | t12;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   t9 = (*t1);
   t10 = &t9.ptr[(uintptr_t)3ul];
   t12 = a0 & UINT32_C(63);
   t12 = UINT32_C(128) | t12;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   goto zig_block_0;
  }
  default: {
   zig_unreachable();
  }
 }

 zig_block_0:;
 t2.payload = t4;
 t2.error = UINT16_C(0);
 return t2;
}

static nav__6350_38 unicode_utf8Encode__6350(uint32_t const a0, nav__6350_40 const a1) {
 nav__6350_38 t0;
 nav__6350_38 t1;
 t0 = unicode_utf8EncodeImpl__anon_4643__6861(a0, a1);
 memcpy(&t1, &t0, sizeof(nav__6350_38));
 return t1;
}

static uint16_t io_Writer_writeBytesNTimes__3830(struct io_Writer__1950 const a0, nav__3830_40 const a1, uintptr_t const a2) {
 struct io_Writer__1950 const *t1;
 uintptr_t t3;
 uintptr_t t2;
 uint64_t t4;
 uint64_t t5;
 struct io_Writer__1950 t7;
 struct io_Writer__1950 t0;
 uint16_t t8;
 bool t6;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (uintptr_t)0ul;
 zig_loop_9:
 t3 = t2;
 t4 = t3;
 t5 = a2;
 t6 = t4 < t5;
 if (t6) {
  t7 = (*t1);
  t8 = io_Writer_writeAll__3826(t7, a1);
  if (t8) {
   return t8;
  }
  t3 = t2;
  t3 = t3 + (uintptr_t)1ul;
  t2 = t3;
  goto zig_block_1;
 }
 goto zig_block_0;

 zig_block_1:;
 goto zig_loop_9;

 zig_block_0:;
 return 0;
}

static void Thread_Mutex_FutexImpl_unlock__6337(struct Thread_Mutex_FutexImpl__3172 *const a0) {
 struct Thread_Mutex_FutexImpl__3172 *const *t1;
 struct Thread_Mutex_FutexImpl__3172 *t2;
 struct Thread_Mutex_FutexImpl__3172 *t0;
 struct atomic_Value_28u32_29__3128 *t3;
 struct atomic_Value_28u32_29__3128 *t4;
 struct atomic_Value_28u32_29__3128 *const *t5;
 uint32_t *t6;
 struct atomic_Value_28u32_29__3128 const *t10;
 uint32_t t7;
 uint32_t t8;
 bool t9;
 t0 = a0;
 t1 = (struct Thread_Mutex_FutexImpl__3172 *const *)&t0;
 t2 = (*t1);
 t3 = (struct atomic_Value_28u32_29__3128 *)&t2->state;
 t4 = t3;
 t5 = (struct atomic_Value_28u32_29__3128 *const *)&t4;
 t3 = (*t5);
 t6 = (uint32_t *)&t3->raw;
 t7 = UINT32_C(0);
 zig_atomicrmw_xchg(t8, (zig_atomic(uint32_t) *)t6, t7, zig_memory_order_release, u32, uint32_t);
 t9 = t8 != UINT32_C(0);
 debug_assert__179(t9);
 t9 = t8 == UINT32_C(3);
 if (t9) {
  t2 = (*t1);
  t3 = (struct atomic_Value_28u32_29__3128 *)&t2->state;
  t10 = (struct atomic_Value_28u32_29__3128 const *)t3;
  Thread_Futex_wake__6873(t10, UINT32_C(1));
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static nav__4088_38 io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29___4088(void const *const a0, nav__4088_41 const a1) {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *t0;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t1;
 nav__4088_38 t2;
 nav__4088_38 t3;
 t0 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *)a0;
 t1 = (*t0);
 t2 = array_list_ArrayListAligned_28u8_2cnull_29_appendWrite__4009(t1, a1);
 memcpy(&t3, &t2, sizeof(nav__4088_38));
 return t3;
}

static uint16_t bincode_serialize__anon_4615__6850(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, nav__6850_40 const a1) {
 uint16_t t0;
 t0 = bincode_serializePointer__anon_4685__6890(a0, a1);
 if (t0) {
  return t0;
 }
 return 0;
}

static uint32_t Thread_LinuxThreadImpl_getCurrentId__6854(void) {
 uint32_t t0;
 uint32_t t3;
 nav__6854_39 t1;
 int32_t t4;
 bool t2;
 t1 = (*((nav__6854_39 *)&Thread_LinuxThreadImpl_tls_thread_id__6853));
 t2 = t1.is_null != true;
 if (t2) {
  t3 = t1.payload;
  t0 = t3;
  goto zig_block_0;
 }
 t4 = os_linux_gettid__2743();
 memcpy(&t3, &t4, sizeof(uint32_t));
 t3 = zig_wrap_u32(t3, UINT8_C(32));
 t1.is_null = false;
 t1.payload = t3;
 (*((nav__6854_39 *)&Thread_LinuxThreadImpl_tls_thread_id__6853)) = t1;
 return t3;

 zig_block_0:;
 return t0;
}

static bool Thread_Mutex_FutexImpl_tryLock__6335(struct Thread_Mutex_FutexImpl__3172 *const a0) {
 struct Thread_Mutex_FutexImpl__3172 *const *t1;
 struct Thread_Mutex_FutexImpl__3172 *t2;
 struct Thread_Mutex_FutexImpl__3172 *t0;
 struct atomic_Value_28u32_29__3128 *t3;
 struct atomic_Value_28u32_29__3128 *t4;
 struct atomic_Value_28u32_29__3128 *t6;
 struct atomic_Value_28u32_29__3128 *const *t5;
 uint32_t *t7;
 uint32_t t8;
 uint32_t t9;
 bool t10;
 uint8_t t11;
 t0 = a0;
 t1 = (struct Thread_Mutex_FutexImpl__3172 *const *)&t0;
 t2 = (*t1);
 t3 = (struct atomic_Value_28u32_29__3128 *)&t2->state;
 t4 = t3;
 t5 = (struct atomic_Value_28u32_29__3128 *const *)&t4;
 t3 = (*t5);
 t6 = t3;
 t5 = (struct atomic_Value_28u32_29__3128 *const *)&t6;
 t3 = (*t5);
 t7 = (uint32_t *)&t3->raw;
 t8 = UINT32_C(1);
 zig_atomicrmw_or(t9, (zig_atomic(uint32_t) *)t7, t8, zig_memory_order_acquire, u32, uint32_t);
 t9 = t9 & UINT32_C(1);
 t10 = t9 != UINT32_C(0);
 memcpy(&t11, &t10, sizeof(uint8_t));
 t11 = zig_wrap_u8(t11, UINT8_C(1));
 t10 = t11 == UINT8_C(0);
 return t10;
}

static zig_cold void Thread_Mutex_FutexImpl_lockSlow__6336(struct Thread_Mutex_FutexImpl__3172 *const a0) {
 struct Thread_Mutex_FutexImpl__3172 *const *t1;
 struct Thread_Mutex_FutexImpl__3172 *t2;
 struct Thread_Mutex_FutexImpl__3172 *t0;
 struct atomic_Value_28u32_29__3128 *t3;
 struct atomic_Value_28u32_29__3128 *t10;
 struct atomic_Value_28u32_29__3128 const *t4;
 struct atomic_Value_28u32_29__3128 const *t5;
 struct atomic_Value_28u32_29__3128 const *const *t6;
 uint32_t const *t7;
 struct atomic_Value_28u32_29__3128 *const *t11;
 uint32_t *t12;
 uint32_t t8;
 uint32_t t13;
 bool t9;
 t0 = a0;
 t1 = (struct Thread_Mutex_FutexImpl__3172 *const *)&t0;
 t2 = (*t1);
 t3 = (struct atomic_Value_28u32_29__3128 *)&t2->state;
 t4 = (struct atomic_Value_28u32_29__3128 const *)t3;
 t5 = t4;
 t6 = (struct atomic_Value_28u32_29__3128 const *const *)&t5;
 t4 = (*t6);
 t7 = (uint32_t const *)&t4->raw;
 zig_atomic_load(t8, (zig_atomic(uint32_t) *)t7, zig_memory_order_relaxed, u32, uint32_t);
 t9 = t8 == UINT32_C(3);
 if (t9) {
  t2 = (*t1);
  t3 = (struct atomic_Value_28u32_29__3128 *)&t2->state;
  t4 = (struct atomic_Value_28u32_29__3128 const *)t3;
  Thread_Futex_wait__6871(t4, UINT32_C(3));
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 zig_loop_25:
 t2 = (*t1);
 t3 = (struct atomic_Value_28u32_29__3128 *)&t2->state;
 t10 = t3;
 t11 = (struct atomic_Value_28u32_29__3128 *const *)&t10;
 t3 = (*t11);
 t12 = (uint32_t *)&t3->raw;
 t8 = UINT32_C(3);
 zig_atomicrmw_xchg(t13, (zig_atomic(uint32_t) *)t12, t8, zig_memory_order_acquire, u32, uint32_t);
 t9 = t13 != UINT32_C(0);
 if (t9) {
  t2 = (*t1);
  t3 = (struct atomic_Value_28u32_29__3128 *)&t2->state;
  t4 = (struct atomic_Value_28u32_29__3128 const *)t3;
  Thread_Futex_wait__6871(t4, UINT32_C(3));
  goto zig_block_2;
 }
 goto zig_block_1;

 zig_block_2:;
 goto zig_loop_25;

 zig_block_1:;
 return;
}

static nav__6357_38 unicode_utf8Decode2__6357(nav__6357_40 const a0) {
 uint32_t t3;
 uint32_t t4;
 uint32_t t2;
 nav__6357_38 t5;
 uint8_t t0;
 bool t1;
 t0 = a0.array[(uintptr_t)0ul];
 t0 = t0 & UINT8_C(224);
 t1 = t0 == UINT8_C(192);
 debug_assert__179(t1);
 t0 = a0.array[(uintptr_t)0ul];
 t0 = t0 & UINT8_C(31);
 t3 = (uint32_t)t0;
 t2 = t3;
 t0 = a0.array[(uintptr_t)1ul];
 t0 = t0 & UINT8_C(192);
 t1 = t0 != UINT8_C(128);
 if (t1) {
  return (nav__6357_38){UINT32_C(0xaaaaa),zig_error_Utf8ExpectedContinuation};
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = t2;
 t3 = zig_shlw_u32(t3, UINT8_C(6), UINT8_C(21));
 t2 = t3;
 t3 = t2;
 t0 = a0.array[(uintptr_t)1ul];
 t0 = t0 & UINT8_C(63);
 t4 = (uint32_t)t0;
 t4 = t3 | t4;
 t2 = t4;
 t4 = t2;
 t1 = t4 < UINT32_C(128);
 if (t1) {
  return (nav__6357_38){UINT32_C(0xaaaaa),zig_error_Utf8OverlongEncoding};
 }
 goto zig_block_1;

 zig_block_1:;
 t4 = t2;
 t5.payload = t4;
 t5.error = UINT16_C(0);
 return t5;
}

static nav__6359_38 unicode_utf8Decode3__6359(nav__6359_40 const a0) {
 nav__6359_38 t1;
 uint32_t t3;
 uint16_t t2;
 nav__6359_40 t0;
 bool t4;
 bool t5;
 memcpy(t0.array, a0.array, sizeof(nav__6359_40));
 t1 = unicode_utf8Decode3AllowSurrogateHalf__6361(t0);
 if (t1.error) {
  t2 = t1.error;
  t1.payload = UINT32_C(0xaaaaa);
  t1.error = t2;
  return t1;
 }
 t3 = t1.payload;
 t4 = UINT32_C(55296) <= t3;
 if (t4) {
  t4 = t3 <= UINT32_C(57343);
  t5 = t4;
  goto zig_block_1;
 }
 t5 = false;
 goto zig_block_1;

 zig_block_1:;
 if (t5) {
  return (nav__6359_38){UINT32_C(0xaaaaa),zig_error_Utf8EncodesSurrogateHalf};
 }
 goto zig_block_0;

 zig_block_0:;
 t1.payload = t3;
 t1.error = UINT16_C(0);
 return t1;
}

static nav__6363_38 unicode_utf8Decode4__6363(nav__6363_40 const a0) {
 uint32_t t3;
 uint32_t t4;
 uint32_t t2;
 nav__6363_38 t5;
 uint8_t t0;
 bool t1;
 t0 = a0.array[(uintptr_t)0ul];
 t0 = t0 & UINT8_C(248);
 t1 = t0 == UINT8_C(240);
 debug_assert__179(t1);
 t0 = a0.array[(uintptr_t)0ul];
 t0 = t0 & UINT8_C(7);
 t3 = (uint32_t)t0;
 t2 = t3;
 t0 = a0.array[(uintptr_t)1ul];
 t0 = t0 & UINT8_C(192);
 t1 = t0 != UINT8_C(128);
 if (t1) {
  return (nav__6363_38){UINT32_C(0xaaaaa),zig_error_Utf8ExpectedContinuation};
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = t2;
 t3 = zig_shlw_u32(t3, UINT8_C(6), UINT8_C(21));
 t2 = t3;
 t3 = t2;
 t0 = a0.array[(uintptr_t)1ul];
 t0 = t0 & UINT8_C(63);
 t4 = (uint32_t)t0;
 t4 = t3 | t4;
 t2 = t4;
 t0 = a0.array[(uintptr_t)2ul];
 t0 = t0 & UINT8_C(192);
 t1 = t0 != UINT8_C(128);
 if (t1) {
  return (nav__6363_38){UINT32_C(0xaaaaa),zig_error_Utf8ExpectedContinuation};
 }
 goto zig_block_1;

 zig_block_1:;
 t4 = t2;
 t4 = zig_shlw_u32(t4, UINT8_C(6), UINT8_C(21));
 t2 = t4;
 t4 = t2;
 t0 = a0.array[(uintptr_t)2ul];
 t0 = t0 & UINT8_C(63);
 t3 = (uint32_t)t0;
 t3 = t4 | t3;
 t2 = t3;
 t0 = a0.array[(uintptr_t)3ul];
 t0 = t0 & UINT8_C(192);
 t1 = t0 != UINT8_C(128);
 if (t1) {
  return (nav__6363_38){UINT32_C(0xaaaaa),zig_error_Utf8ExpectedContinuation};
 }
 goto zig_block_2;

 zig_block_2:;
 t3 = t2;
 t3 = zig_shlw_u32(t3, UINT8_C(6), UINT8_C(21));
 t2 = t3;
 t3 = t2;
 t0 = a0.array[(uintptr_t)3ul];
 t0 = t0 & UINT8_C(63);
 t4 = (uint32_t)t0;
 t4 = t3 | t4;
 t2 = t4;
 t4 = t2;
 t1 = t4 < UINT32_C(65536);
 if (t1) {
  return (nav__6363_38){UINT32_C(0xaaaaa),zig_error_Utf8OverlongEncoding};
 }
 goto zig_block_3;

 zig_block_3:;
 t4 = t2;
 t1 = t4 > UINT32_C(1114111);
 if (t1) {
  return (nav__6363_38){UINT32_C(0xaaaaa),zig_error_Utf8CodepointTooLarge};
 }
 goto zig_block_4;

 zig_block_4:;
 t4 = t2;
 t5.payload = t4;
 t5.error = UINT16_C(0);
 return t5;
}

static bool unicode_isSurrogateCodepoint__6428(uint32_t const a0) {
 bool t0;
 switch (a0) {
  default: if ((a0 >= UINT32_C(55296) && a0 <= UINT32_C(57343))) {
   t0 = true;
   goto zig_block_0;
  }{
   t0 = false;
   goto zig_block_0;
  }
 }

 zig_block_0:;
 return t0;
}

static zig_cold void Thread_Futex_wake__6873(struct atomic_Value_28u32_29__3128 const *const a0, uint32_t const a1) {
 bool t0;
 t0 = a1 == UINT32_C(0);
 if (t0) {
  return;
 }
 goto zig_block_0;

 zig_block_0:;
 Thread_Futex_LinuxImpl_wake__6935(a0, a1);
 return;
}

static nav__4009_38 array_list_ArrayListAligned_28u8_2cnull_29_appendWrite__4009(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const a0, nav__4009_42 const a1) {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *t1;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t2;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t0;
 nav__4009_38 t4;
 uintptr_t t5;
 uint16_t t3;
 t0 = a0;
 t1 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *)&t0;
 t2 = (*t1);
 t3 = array_list_ArrayListAligned_28u8_2cnull_29_appendSlice__4003(t2, a1);
 if (t3) {
  t4.payload = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
  t4.error = t3;
  return t4;
 }
 t5 = a1.len;
 t4.payload = t5;
 t4.error = UINT16_C(0);
 return t4;
}

static uint16_t bincode_serializePointer__anon_4685__6890(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, nav__6890_40 const a1) {
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *t1;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *t6;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *t7;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *t24;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 t2;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 t0;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 t5;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 t23;
 uintptr_t t3;
 uint64_t t4;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *const *t8;
 void const **t10;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *t11;
 void const *t12;
 nav__6890_51 (**t13)(void const *, nav__6890_40);
 struct io_Writer__1950 t14;
 struct io_Writer__1950 t9;
 struct io_Writer__1950 t15;
 struct io_Writer__1950 t17;
 struct io_Writer__1950 t25;
 struct io_Writer__1950 t26;
 struct io_Writer__1950 const *t16;
 nav__6890_40 t20;
 uint16_t t21;
 uint16_t t22;
 uint8_t t19[8];
 uint8_t t18[8];
 t0 = a0;
 t1 = (struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *)&t0;
 t2 = (*t1);
 t3 = a1.len;
 t4 = t3;
 t5 = t2;
 t6 = (struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *)&t5;
 t7 = t6;
 t8 = (struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *const *)&t7;
 t10 = (void const **)&t9.context;
 t6 = (*t8);
 t11 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *)&t6->context;
 t12 = (void const *)t11;
 (*t10) = t12;
 t13 = (nav__6890_51 (**)(void const *, nav__6890_40))&t9.writeFn;
 (*t13) = &io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29___4088;
 t14 = t9;
 t15 = t14;
 t16 = (struct io_Writer__1950 const *)&t15;
 t14 = (*t16);
 t17 = t14;
 t16 = (struct io_Writer__1950 const *)&t17;
 memcpy(&t19, &t4, sizeof(uint8_t[8]));
 memcpy((char *)&t18, t19, sizeof(uint8_t[8]));
 t14 = (*t16);
 t20.ptr = &t18[(uintptr_t)0ul];
 t20.len = (uintptr_t)8ul;
 t21 = io_Writer_writeAll__3826(t14, t20);
 memcpy(&t22, &t21, sizeof(uint16_t));
 if (t22) {
  return t22;
 }
 t2 = (*t1);
 t23 = t2;
 t1 = (struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *)&t23;
 t24 = t1;
 t8 = (struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *const *)&t24;
 t10 = (void const **)&t25.context;
 t1 = (*t8);
 t11 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *)&t1->context;
 t12 = (void const *)t11;
 (*t10) = t12;
 t13 = (nav__6890_51 (**)(void const *, nav__6890_40))&t25.writeFn;
 (*t13) = &io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29___4088;
 t14 = t25;
 t26 = t14;
 t16 = (struct io_Writer__1950 const *)&t26;
 t14 = (*t16);
 t22 = io_Writer_writeAll__3826(t14, a1);
 memcpy(&t21, &t22, sizeof(uint16_t));
 if (t21) {
  return t21;
 }
 return 0;
}

static int32_t os_linux_gettid__2743(void) {
 uintptr_t t0;
 uint32_t t1;
 int32_t t2;
 t0 = os_linux_x86_64_syscall0__6721((uintptr_t)186ul);
 t1 = (uint32_t)t0;
 memcpy(&t2, &t1, sizeof(int32_t));
 t2 = zig_wrap_i32(t2, UINT8_C(32));
 return t2;
}

static zig_cold void Thread_Futex_wait__6871(struct atomic_Value_28u32_29__3128 const *const a0, uint32_t const a1) {
 uint16_t t0;
 bool t1;
 t0 = Thread_Futex_LinuxImpl_wait__6934(a0, a1, (nav__6871_41){UINT64_C(0xaaaaaaaaaaaaaaaa),true});
 t1 = t0 == UINT16_C(0);
 if (t1) {
  goto zig_block_0;
 }
 switch (t0) {
  case zig_error_Timeout: {
   zig_unreachable();
  }
  default: zig_unreachable();
 }

 zig_block_0:;
 return;
}

static nav__6361_38 unicode_utf8Decode3AllowSurrogateHalf__6361(nav__6361_40 const a0) {
 uint32_t t3;
 uint32_t t4;
 uint32_t t2;
 nav__6361_38 t5;
 uint8_t t0;
 bool t1;
 t0 = a0.array[(uintptr_t)0ul];
 t0 = t0 & UINT8_C(240);
 t1 = t0 == UINT8_C(224);
 debug_assert__179(t1);
 t0 = a0.array[(uintptr_t)0ul];
 t0 = t0 & UINT8_C(15);
 t3 = (uint32_t)t0;
 t2 = t3;
 t0 = a0.array[(uintptr_t)1ul];
 t0 = t0 & UINT8_C(192);
 t1 = t0 != UINT8_C(128);
 if (t1) {
  return (nav__6361_38){UINT32_C(0xaaaaa),zig_error_Utf8ExpectedContinuation};
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = t2;
 t3 = zig_shlw_u32(t3, UINT8_C(6), UINT8_C(21));
 t2 = t3;
 t3 = t2;
 t0 = a0.array[(uintptr_t)1ul];
 t0 = t0 & UINT8_C(63);
 t4 = (uint32_t)t0;
 t4 = t3 | t4;
 t2 = t4;
 t0 = a0.array[(uintptr_t)2ul];
 t0 = t0 & UINT8_C(192);
 t1 = t0 != UINT8_C(128);
 if (t1) {
  return (nav__6361_38){UINT32_C(0xaaaaa),zig_error_Utf8ExpectedContinuation};
 }
 goto zig_block_1;

 zig_block_1:;
 t4 = t2;
 t4 = zig_shlw_u32(t4, UINT8_C(6), UINT8_C(21));
 t2 = t4;
 t4 = t2;
 t0 = a0.array[(uintptr_t)2ul];
 t0 = t0 & UINT8_C(63);
 t3 = (uint32_t)t0;
 t3 = t4 | t3;
 t2 = t3;
 t3 = t2;
 t1 = t3 < UINT32_C(2048);
 if (t1) {
  return (nav__6361_38){UINT32_C(0xaaaaa),zig_error_Utf8OverlongEncoding};
 }
 goto zig_block_2;

 zig_block_2:;
 t3 = t2;
 t5.payload = t3;
 t5.error = UINT16_C(0);
 return t5;
}

static void Thread_Futex_LinuxImpl_wake__6935(struct atomic_Value_28u32_29__3128 const *const a0, uint32_t const a1) {
 struct atomic_Value_28u32_29__3128 const *const *t1;
 struct atomic_Value_28u32_29__3128 const *t2;
 struct atomic_Value_28u32_29__3128 const *t0;
 uint32_t const *t3;
 int32_t const *t4;
 uintptr_t t9;
 int32_t t5;
 int32_t t8;
 nav__6935_45 t6;
 uint16_t t10;
 bool t7;
 t0 = a0;
 t1 = (struct atomic_Value_28u32_29__3128 const *const *)&t0;
 t2 = (*t1);
 t3 = (uint32_t const *)&t2->raw;
 t4 = (int32_t const *)t3;
 t6 = math_cast__anon_5315__6973(a1);
 t7 = t6.is_null != true;
 if (t7) {
  t8 = t6.payload;
  t5 = t8;
  goto zig_block_0;
 }
 t5 = INT32_MAX;
 goto zig_block_0;

 zig_block_0:;
 t9 = os_linux_futex_wake__2629(t4, UINT32_C(129), t5);
 t10 = os_linux_errnoFromSyscall__2615(t9);
 switch (t10) {
  case UINT16_C(0): {
   goto zig_block_1;
  }
  case UINT16_C(22): {
   goto zig_block_1;
  }
  case UINT16_C(14): {
   goto zig_block_1;
  }
  default: {
   zig_unreachable();
  }
 }

 zig_block_1:;
 return;
}

static uint16_t array_list_ArrayListAligned_28u8_2cnull_29_appendSlice__4003(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const a0, nav__4003_41 const a1) {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *t1;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t2;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t0;
 uintptr_t t3;
 uint16_t t4;
 t0 = a0;
 t1 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *)&t0;
 t2 = (*t1);
 t3 = a1.len;
 t4 = array_list_ArrayListAligned_28u8_2cnull_29_ensureUnusedCapacity__4022(t2, t3);
 if (t4) {
  return t4;
 }
 t2 = (*t1);
 array_list_ArrayListAligned_28u8_2cnull_29_appendSliceAssumeCapacity__4004(t2, a1);
 return 0;
}

static uintptr_t os_linux_x86_64_syscall0__6721(uintptr_t const a0) {
 uintptr_t t0;
 uintptr_t t1;
 t0 = a0;
 register uintptr_t t2 __asm("rax");
 register uintptr_t const t3 __asm("rax") = t0;
 __asm volatile("syscall": [ret]"=r"(t2): [number]"r"(t3): "rcx", "r11", "memory");
 t1 = t2;
 return t1;
}

static uint16_t Thread_Futex_LinuxImpl_wait__6934(struct atomic_Value_28u32_29__3128 const *const a0, uint32_t const a1, nav__6934_40 const a2) {
 struct atomic_Value_28u32_29__3128 const *const *t1;
 uint64_t t4;
 uint64_t t6;
 intptr_t *t5;
 intptr_t t7;
 struct atomic_Value_28u32_29__3128 const *t8;
 struct atomic_Value_28u32_29__3128 const *t0;
 uint32_t const *t9;
 int32_t const *t10;
 struct os_linux_timespec__struct_2817__2817 const *t12;
 struct os_linux_timespec__struct_2817__2817 const *t13;
 uintptr_t t14;
 struct os_linux_timespec__struct_2817__2817 t2;
 int32_t t11;
 uint16_t t15;
 bool t3;
 t0 = a0;
 t1 = (struct atomic_Value_28u32_29__3128 const *const *)&t0;
 t3 = a2.is_null != true;
 if (t3) {
  t4 = a2.payload;
  t5 = (intptr_t *)&t2.sec;
  t6 = t4 / UINT64_C(1000000000);
  t7 = (intptr_t)t6;
  (*t5) = t7;
  t5 = (intptr_t *)&t2.nsec;
  t4 = t4 % UINT64_C(1000000000);
  t7 = (intptr_t)t4;
  (*t5) = t7;
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 t8 = (*t1);
 t9 = (uint32_t const *)&t8->raw;
 t10 = (int32_t const *)t9;
 memcpy(&t11, &a1, sizeof(int32_t));
 t11 = zig_wrap_i32(t11, UINT8_C(32));
 t3 = a2.is_null != true;
 if (t3) {
  t13 = (struct os_linux_timespec__struct_2817__2817 const *)&t2;
  t12 = t13;
  goto zig_block_1;
 }
 t12 = NULL;
 goto zig_block_1;

 zig_block_1:;
 t14 = os_linux_futex_wait__2628(t10, UINT32_C(128), t11, t12);
 t15 = os_linux_errnoFromSyscall__2615(t14);
 switch (t15) {
  case UINT16_C(0): {
   goto zig_block_2;
  }
  case UINT16_C(4): {
   goto zig_block_2;
  }
  case UINT16_C(11): {
   goto zig_block_2;
  }
  case UINT16_C(110): {
   t3 = a2.is_null != true;
   debug_assert__179(t3);
   return zig_error_Timeout;
  }
  case UINT16_C(22): {
   goto zig_block_2;
  }
  case UINT16_C(14): {
   zig_unreachable();
  }
  default: {
   zig_unreachable();
  }
 }

 zig_block_2:;
 return 0;
}

static nav__6973_38 math_cast__anon_5315__6973(uint32_t const a0) {
 int32_t t1;
 nav__6973_38 t2;
 bool t0;
 t0 = a0 > UINT32_C(2147483647);
 if (t0) {
  return (nav__6973_38){-INT32_C(0x55555556),true};
 }
 t1 = (int32_t)a0;
 t2.is_null = false;
 t2.payload = t1;
 return t2;
}

static uintptr_t os_linux_futex_wake__2629(int32_t const *const a0, uint32_t const a1, int32_t const a2) {
 uintptr_t t0;
 uintptr_t t1;
 uintptr_t t3;
 uint32_t t2;
 t0 = (uintptr_t)a0;
 t1 = (uintptr_t)a1;
 memcpy(&t2, &a2, sizeof(uint32_t));
 t2 = zig_wrap_u32(t2, UINT8_C(32));
 t3 = (uintptr_t)t2;
 t3 = os_linux_x86_64_syscall3__6724((uintptr_t)202ul, t0, t1, t3);
 return t3;
}

static uint16_t os_linux_errnoFromSyscall__2615(uintptr_t const a0) {
 intptr_t t0;
 intptr_t t1;
 int64_t t2;
 uint16_t t5;
 bool t3;
 bool t4;
 memcpy(&t0, &a0, sizeof(intptr_t));
 t0 = zig_wrap_i64(t0, UINT8_C(64));
 t2 = t0;
 t3 = t2 > -INT64_C(4096);
 if (t3) {
  t2 = t0;
  t3 = t2 < INT64_C(0);
  t4 = t3;
  goto zig_block_1;
 }
 t4 = false;
 goto zig_block_1;

 zig_block_1:;
 if (t4) {
  t0 = (intptr_t)0 - t0;
  t1 = t0;
  goto zig_block_0;
 }
 t1 = (intptr_t)0;
 goto zig_block_0;

 zig_block_0:;
 t5 = (uint16_t)t1;
 return t5;
}

static uint16_t array_list_ArrayListAligned_28u8_2cnull_29_ensureUnusedCapacity__4022(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const a0, uintptr_t const a1) {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *t1;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t2;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t0;
 nav__4022_43 *t3;
 nav__4022_43 t4;
 uintptr_t t5;
 nav__4022_52 t6;
 uint16_t t7;
 t0 = a0;
 t1 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *)&t0;
 t2 = (*t1);
 t3 = (nav__4022_43 *)&a0->items;
 t4 = (*t3);
 t5 = t4.len;
 t6 = array_list_addOrOom__3947(t5, a1);
 if (t6.error) {
  t7 = t6.error;
  return t7;
 }
 t5 = t6.payload;
 t7 = array_list_ArrayListAligned_28u8_2cnull_29_ensureTotalCapacity__4020(t2, t5);
 return t7;
}

static void array_list_ArrayListAligned_28u8_2cnull_29_appendSliceAssumeCapacity__4004(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const a0, nav__4004_41 const a1) {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *t1;
 nav__4004_47 *t2;
 nav__4004_47 t3;
 uintptr_t t4;
 uintptr_t t5;
 uintptr_t t7;
 uintptr_t *t6;
 uint64_t t8;
 uint64_t t9;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t11;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t0;
 uint8_t *t12;
 uint8_t const *t13;
 bool t10;
 t0 = a0;
 t1 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *)&t0;
 t2 = (nav__4004_47 *)&a0->items;
 t3 = (*t2);
 t4 = t3.len;
 t5 = a1.len;
 t5 = t4 + t5;
 t6 = (uintptr_t *)&a0->capacity;
 t7 = (*t6);
 t8 = t5;
 t9 = t7;
 t10 = t8 <= t9;
 debug_assert__179(t10);
 t11 = (*t1);
 t2 = (nav__4004_47 *)&t11->items;
 t6 = &t2->len;
 (*t6) = t5;
 t11 = (*t1);
 t2 = (nav__4004_47 *)&t11->items;
 t5 = a1.len;
 t3 = (*t2);
 t12 = t3.ptr;
 t12 = (uint8_t *)(((uintptr_t)t12) + (t4*sizeof(uint8_t)));
 t3.ptr = t12;
 t3.len = t5;
 t13 = a1.ptr;
 if (t3.len != 0) memcpy(t3.ptr, t13, t3.len * sizeof(uint8_t));
 return;
}

static uintptr_t os_linux_futex_wait__2628(int32_t const *const a0, uint32_t const a1, int32_t const a2, struct os_linux_timespec__struct_2817__2817 const *const a3) {
 uintptr_t t0;
 uintptr_t t1;
 uintptr_t t3;
 uintptr_t t4;
 uint32_t t2;
 t0 = (uintptr_t)a0;
 t1 = (uintptr_t)a1;
 memcpy(&t2, &a2, sizeof(uint32_t));
 t2 = zig_wrap_u32(t2, UINT8_C(32));
 t3 = (uintptr_t)t2;
 t4 = (uintptr_t)a3;
 t4 = os_linux_x86_64_syscall4__6725((uintptr_t)202ul, t0, t1, t3, t4);
 return t4;
}

static uintptr_t os_linux_x86_64_syscall3__6724(uintptr_t const a0, uintptr_t const a1, uintptr_t const a2, uintptr_t const a3) {
 uintptr_t t0;
 uintptr_t t1;
 t0 = a0;
 register uintptr_t t2 __asm("rax");
 register uintptr_t const t3 __asm("rax") = t0;
 register uintptr_t const t4 __asm("rdi") = a1;
 register uintptr_t const t5 __asm("rsi") = a2;
 register uintptr_t const t6 __asm("rdx") = a3;
 __asm volatile("syscall": [ret]"=r"(t2): [number]"r"(t3), [arg1]"r"(t4), [arg2]"r"(t5), [arg3]"r"(t6): "rcx", "r11", "memory");
 t1 = t2;
 return t1;
}

static nav__3947_38 array_list_addOrOom__3947(uintptr_t const a0, uintptr_t const a1) {
 nav__3947_42 t2;
 uintptr_t t3;
 uintptr_t t0;
 uintptr_t const *t5;
 uint8_t const *t6;
 nav__3947_38 t8;
 uint8_t t4;
 uint8_t t1;
 bool t7;
 t2.f1 = zig_addo_u64(&t2.f0, a0, a1, UINT8_C(64));
 t3 = t2.f0;
 t0 = t3;
 t4 = t2.f1;
 t1 = t4;
 t5 = (uintptr_t const *)&t0;
 t6 = (uint8_t const *)&t1;
 t4 = (*t6);
 t7 = t4 != UINT8_C(0);
 if (t7) {
  return (nav__3947_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_OutOfMemory};
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = (*t5);
 t8.payload = t3;
 t8.error = UINT16_C(0);
 return t8;
}

static uint16_t array_list_ArrayListAligned_28u8_2cnull_29_ensureTotalCapacity__4020(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const a0, uintptr_t const a1) {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *t1;
 uintptr_t *t2;
 uintptr_t t3;
 uint64_t t4;
 uint64_t t5;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t7;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t0;
 uint16_t t8;
 bool t6;
 t0 = a0;
 t1 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *)&t0;
 t2 = (uintptr_t *)&a0->capacity;
 t3 = (*t2);
 t4 = t3;
 t5 = a1;
 t6 = t4 >= t5;
 if (t6) {
  return 0;
 }
 goto zig_block_0;

 zig_block_0:;
 t2 = (uintptr_t *)&a0->capacity;
 t3 = (*t2);
 t3 = array_list_ArrayListAlignedUnmanaged_28u8_2cnull_29_growCapacity__7032(t3, a1);
 t7 = (*t1);
 t8 = array_list_ArrayListAligned_28u8_2cnull_29_ensureTotalCapacityPrecise__4021(t7, t3);
 return t8;
}

static uintptr_t os_linux_x86_64_syscall4__6725(uintptr_t const a0, uintptr_t const a1, uintptr_t const a2, uintptr_t const a3, uintptr_t const a4) {
 uintptr_t t0;
 uintptr_t t1;
 t0 = a0;
 register uintptr_t t2 __asm("rax");
 register uintptr_t const t3 __asm("rax") = t0;
 register uintptr_t const t4 __asm("rdi") = a1;
 register uintptr_t const t5 __asm("rsi") = a2;
 register uintptr_t const t6 __asm("rdx") = a3;
 register uintptr_t const t7 __asm("r10") = a4;
 __asm volatile("syscall": [ret]"=r"(t2): [number]"r"(t3), [arg1]"r"(t4), [arg2]"r"(t5), [arg3]"r"(t6), [arg4]"r"(t7): "rcx", "r11", "memory");
 t1 = t2;
 return t1;
}

static uintptr_t array_list_ArrayListAlignedUnmanaged_28u8_2cnull_29_growCapacity__7032(uintptr_t const a0, uintptr_t const a1) {
 uintptr_t t1;
 uintptr_t t2;
 uintptr_t t0;
 uint64_t t3;
 uint64_t t4;
 bool t5;
 t0 = a0;
 zig_loop_6:
 t1 = t0;
 t2 = t0;
 t2 = t2 / (uintptr_t)2ul;
 t2 = t2 + (uintptr_t)128ul;
 t2 = zig_adds_u64(t1, t2, UINT8_C(64));
 t0 = t2;
 t2 = t0;
 t3 = t2;
 t4 = a1;
 t5 = t3 >= t4;
 if (t5) {
  t2 = t0;
  return t2;
 }
 goto zig_block_0;

 zig_block_0:;
 goto zig_loop_6;
}

static uint16_t array_list_ArrayListAligned_28u8_2cnull_29_ensureTotalCapacityPrecise__4021(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const a0, uintptr_t const a1) {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *t1;
 uintptr_t *t2;
 uintptr_t t3;
 uint64_t t4;
 uint64_t t5;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t7;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t0;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 t8;
 nav__4021_43 t9;
 nav__4021_43 t12;
 nav__4021_43 t20;
 nav__4021_43 t21;
 nav__4021_43 t18;
 struct mem_Allocator__206 *t10;
 struct mem_Allocator__206 t11;
 nav__4021_43 *t13;
 uint8_t **t14;
 uint8_t *t15;
 nav__4021_55 t16;
 nav__4021_43 const *t19;
 uint16_t t17;
 bool t6;
 t0 = a0;
 t1 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *)&t0;
 t2 = (uintptr_t *)&a0->capacity;
 t3 = (*t2);
 t4 = t3;
 t5 = a1;
 t6 = t4 >= t5;
 if (t6) {
  return 0;
 }
 goto zig_block_0;

 zig_block_0:;
 t7 = (*t1);
 t8 = (*t7);
 t9 = array_list_ArrayListAligned_28u8_2cnull_29_allocatedSlice__4031(t8);
 t7 = (*t1);
 t10 = (struct mem_Allocator__206 *)&t7->allocator;
 t11 = (*t10);
 t12 = mem_Allocator_remap__anon_5400__7033(t11, t9, a1);
 t6 = t12.ptr != NULL;
 if (t6) {
  t9 = t12;
  t7 = (*t1);
  t13 = (nav__4021_43 *)&t7->items;
  t14 = &t13->ptr;
  t15 = t9.ptr;
  (*t14) = t15;
  t7 = (*t1);
  t2 = (uintptr_t *)&t7->capacity;
  t3 = t9.len;
  (*t2) = t3;
  goto zig_block_1;
 }
 t7 = (*t1);
 t10 = (struct mem_Allocator__206 *)&t7->allocator;
 t11 = (*t10);
 t16 = mem_Allocator_alignedAlloc__anon_5405__7034(t11, a1);
 if (t16.error) {
  t17 = t16.error;
  return t17;
 }
 t12 = t16.payload;
 t18 = t12;
 t19 = (nav__4021_43 const *)&t18;
 t13 = (nav__4021_43 *)&a0->items;
 t20 = (*t13);
 t3 = t20.len;
 t20 = (*t19);
 t15 = t20.ptr;
 t15 = (uint8_t *)(((uintptr_t)t15) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t20.ptr = t15;
 t20.len = t3;
 t13 = (nav__4021_43 *)&a0->items;
 t21 = (*t13);
 t15 = t21.ptr;
 if (t20.len != 0) memcpy(t20.ptr, t15, t20.len * sizeof(uint8_t));
 t7 = (*t1);
 t10 = (struct mem_Allocator__206 *)&t7->allocator;
 t11 = (*t10);
 mem_Allocator_free__anon_2612__4248(t11, t9);
 t7 = (*t1);
 t13 = (nav__4021_43 *)&t7->items;
 t14 = &t13->ptr;
 t15 = t12.ptr;
 (*t14) = t15;
 t7 = (*t1);
 t2 = (uintptr_t *)&t7->capacity;
 t3 = t12.len;
 (*t2) = t3;
 goto zig_block_1;

 zig_block_1:;
 return 0;
}

static nav__7033_39 mem_Allocator_remap__anon_5400__7033(struct mem_Allocator__206 const a0, nav__7033_39 const a1, uintptr_t const a2) {
 struct mem_Allocator__206 const *t1;
 nav__7033_39 const *t3;
 uint64_t t4;
 struct mem_Allocator__206 t6;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t15;
 nav__7033_39 t7;
 nav__7033_39 t10;
 nav__7033_39 t2;
 uint8_t *t8;
 uint8_t *t20;
 uint8_t *t21;
 uint8_t *t22;
 void *t9;
 uintptr_t t11;
 uintptr_t t13;
 nav__7033_50 t12;
 struct mem_Allocator_VTable__209 const *const *t16;
 struct mem_Allocator_VTable__209 const *t17;
 uint8_t *(*const *t18)(void *, nav__7033_39, uint8_t, uintptr_t, uintptr_t);
 uint8_t *(*t19)(void *, nav__7033_39, uint8_t, uintptr_t, uintptr_t);
 uint8_t *const *t23;
 bool t5;
 uint8_t t14;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = a1;
 t3 = (nav__7033_39 const *)&t2;
 t4 = a2;
 t5 = t4 == UINT64_C(0);
 if (t5) {
  t6 = (*t1);
  mem_Allocator_free__anon_2612__4248(t6, a1);
  t7 = (*t3);
  t8 = t7.ptr;
  t8 = (uint8_t *)(((uintptr_t)t8) + ((uintptr_t)0ul*sizeof(uint8_t)));
  t9 = (void *)t8;
  t7.ptr = t9;
  t7.len = (uintptr_t)0ul;
  t10 = t7;
  return t10;
 }
 goto zig_block_0;

 zig_block_0:;
 t11 = a1.len;
 t4 = t11;
 t5 = t4 == UINT64_C(0);
 if (t5) {
  return (nav__7033_39){NULL,(uintptr_t)0xaaaaaaaaaaaaaaaaul};
 }
 goto zig_block_1;

 zig_block_1:;
 t10 = mem_sliceAsBytes__anon_2965__4523(a1);
 t12 = math_mul__anon_4055__6836((uintptr_t)1ul, a2);
 t5 = t12.error == UINT16_C(0);
 if (t5) {
  t13 = t12.payload;
  t11 = t13;
  goto zig_block_2;
 }
 return (nav__7033_39){NULL,(uintptr_t)0xaaaaaaaaaaaaaaaaul};

 zig_block_2:;
 t6 = (*t1);
 t14 = mem_Alignment_fromByteUnits__628((uintptr_t)1ul);
 t13 = (uintptr_t)zig_return_address();
 t15 = t6;
 t1 = (struct mem_Allocator__206 const *)&t15;
 t16 = (struct mem_Allocator_VTable__209 const *const *)&t1->vtable;
 t17 = (*t16);
 t18 = (uint8_t *(*const *)(void *, nav__7033_39, uint8_t, uintptr_t, uintptr_t))&t17->remap;
 t19 = (*t18);
 t9 = t6.ptr;
 t20 = t19(t9, t10, t14, t11, t13);
 t5 = t20 != NULL;
 if (t5) {
  t21 = t20;
  t8 = t21;
  goto zig_block_3;
 }
 return (nav__7033_39){NULL,(uintptr_t)0xaaaaaaaaaaaaaaaaul};

 zig_block_3:;
 t22 = t8;
 t23 = (uint8_t *const *)&t22;
 t8 = (*t23);
 t8 = (uint8_t *)(((uintptr_t)t8) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t10.ptr = t8;
 t10.len = t11;
 memcpy(&t7, &t10, sizeof(nav__7033_39));
 t7 = mem_bytesAsSlice__anon_5420__7035(t7);
 t10 = t7;
 return t10;
}

static nav__7034_40 mem_Allocator_alignedAlloc__anon_5405__7034(struct mem_Allocator__206 const a0, uintptr_t const a1) {
 struct mem_Allocator__206 const *t1;
 struct mem_Allocator__206 t2;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t5;
 uintptr_t t3;
 nav__7034_40 t4;
 nav__7034_40 t8;
 nav__7034_51 t6;
 uint8_t *t9;
 uint8_t *t10;
 uint8_t *const *t11;
 nav__7034_39 t12;
 uint16_t t7;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = (*t1);
 t3 = (uintptr_t)zig_return_address();
 t5 = t2;
 t1 = (struct mem_Allocator__206 const *)&t5;
 t2 = (*t1);
 t6 = mem_Allocator_allocWithSizeAndAlignment__anon_2848__4494(t2, a1, t3);
 if (t6.error) {
  t7 = t6.error;
  t8.payload = (nav__7034_39){(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t8.error = t7;
  t4 = t8;
  goto zig_block_0;
 }
 t9 = t6.payload;
 t10 = t9;
 t11 = (uint8_t *const *)&t10;
 t9 = (*t11);
 t9 = (uint8_t *)(((uintptr_t)t9) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t12.ptr = t9;
 t12.len = a1;
 t8.payload = t12;
 t8.error = UINT16_C(0);
 t4 = t8;
 goto zig_block_0;

 zig_block_0:;
 return t4;
}

static nav__7035_39 mem_bytesAsSlice__anon_5420__7035(nav__7035_39 const a0) {
 uintptr_t t0;
 uint64_t t1;
 uint8_t *t3;
 uint8_t *t4;
 uint8_t *const *t5;
 nav__7035_39 t6;
 bool t2;
 t0 = a0.len;
 t1 = t0;
 t2 = t1 == UINT64_C(0);
 if (t2) {
  return (nav__7035_39){(uint8_t *)((void const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),(uintptr_t)0ul};
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = a0.ptr;
 t4 = t3;
 t5 = (uint8_t *const *)&t4;
 t0 = a0.len;
 t0 = t0 / (uintptr_t)1ul;
 t3 = (*t5);
 t3 = (uint8_t *)(((uintptr_t)t3) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t6.ptr = t3;
 t6.len = t0;
 return t6;
}

void c_instrument_hooks_deinit__232(struct instruments_root_InstrumentHooks__188 *const a0) {
 struct instruments_root_InstrumentHooks__188 *t1;
 struct instruments_root_InstrumentHooks__188 *t4;
 struct instruments_root_InstrumentHooks__188 *t2;
 struct instruments_root_InstrumentHooks__188 *t5;
 struct instruments_root_InstrumentHooks__188 *const *t3;
 struct instruments_root_InstrumentHooks__188 t6;
 struct instruments_perf_PerfInstrument__200 *t8;
 bool t0;
 uint8_t t7;
 t0 = a0 != NULL;
 if (t0) {
  t1 = a0;
  t2 = t1;
  t3 = (struct instruments_root_InstrumentHooks__188 *const *)&t2;
  t4 = (*t3);
  t5 = t4;
  t3 = (struct instruments_root_InstrumentHooks__188 *const *)&t5;
  t6 = (*t4);
  t7 = t6.tag;
  switch (t7) {
   case UINT8_C(0): {
    goto zig_block_1;
   }
   case UINT8_C(1): {
    t4 = (*t3);
    t8 = (struct instruments_perf_PerfInstrument__200 *)&t4->payload.perf;
    instruments_perf_PerfInstrument_deinit__338(t8);
    goto zig_block_1;
   }
   case UINT8_C(2): {
    goto zig_block_1;
   }
   default: zig_unreachable();
  }

  zig_block_1:;
  mem_Allocator_destroy__anon_5438__7036((struct mem_Allocator__206){((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)&heap_CAllocator_vtable__3476)}, t1);
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static void instruments_perf_PerfInstrument_deinit__338(struct instruments_perf_PerfInstrument__200 *const a0) {
 struct instruments_perf_PerfInstrument__200 *const *t1;
 struct instruments_perf_PerfInstrument__200 *t2;
 struct instruments_perf_PerfInstrument__200 *t0;
 struct fifo_UnixPipe_Writer__538 *t3;
 struct fifo_UnixPipe_Reader__540 *t4;
 t0 = a0;
 t1 = (struct instruments_perf_PerfInstrument__200 *const *)&t0;
 t2 = (*t1);
 t3 = (struct fifo_UnixPipe_Writer__538 *)&t2->writer;
 fifo_UnixPipe_Writer_deinit__992(t3);
 t2 = (*t1);
 t4 = (struct fifo_UnixPipe_Reader__540 *)&t2->reader;
 fifo_UnixPipe_Reader_deinit__999(t4);
 return;
}

static void mem_Allocator_destroy__anon_5438__7036(struct mem_Allocator__206 const a0, struct instruments_root_InstrumentHooks__188 *const a1) {
 struct mem_Allocator__206 const *t1;
 uint8_t *t2;
 uint8_t *t3;
 uint8_t *const *t4;
 struct mem_Allocator__206 t5;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t10;
 uint8_t (*t6)[72];
 nav__7036_52 t7;
 uintptr_t t9;
 struct mem_Allocator_VTable__209 const *const *t11;
 struct mem_Allocator_VTable__209 const *t12;
 void (*const *t13)(void *, nav__7036_52, uint8_t, uintptr_t);
 void (*t14)(void *, nav__7036_52, uint8_t, uintptr_t);
 void *t15;
 uint8_t t8;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = (uint8_t *)a1;
 t3 = t2;
 t4 = (uint8_t *const *)&t3;
 t5 = (*t1);
 t2 = (*t4);
 t2 = (uint8_t *)(((uintptr_t)t2) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t6 = (uint8_t (*)[72])t2;
 t7.ptr = &(*t6)[(uintptr_t)0ul];
 t7.len = (uintptr_t)72ul;
 t8 = mem_Alignment_fromByteUnits__628((uintptr_t)8ul);
 t9 = (uintptr_t)zig_return_address();
 t10 = t5;
 t1 = (struct mem_Allocator__206 const *)&t10;
 t11 = (struct mem_Allocator_VTable__209 const *const *)&t1->vtable;
 t12 = (*t11);
 t13 = (void (*const *)(void *, nav__7036_52, uint8_t, uintptr_t))&t12->free;
 t14 = (*t13);
 t15 = t5.ptr;
 t14(t15, t7, t8, t9);
 return;
}

static void fifo_UnixPipe_Writer_deinit__992(struct fifo_UnixPipe_Writer__538 *const a0) {
 struct fifo_UnixPipe_Writer__538 *const *t1;
 struct fifo_UnixPipe_Writer__538 *t2;
 struct fifo_UnixPipe_Writer__538 *t0;
 struct fs_File__546 *t3;
 struct fs_File__546 t4;
 t0 = a0;
 t1 = (struct fifo_UnixPipe_Writer__538 *const *)&t0;
 t2 = (*t1);
 t3 = (struct fs_File__546 *)&t2->file;
 t4 = (*t3);
 fs_File_close__1090(t4);
 return;
}

static void fifo_UnixPipe_Reader_deinit__999(struct fifo_UnixPipe_Reader__540 *const a0) {
 struct fifo_UnixPipe_Reader__540 *const *t1;
 struct fifo_UnixPipe_Reader__540 *t2;
 struct fifo_UnixPipe_Reader__540 *t0;
 struct fs_File__546 *t3;
 struct fs_File__546 t4;
 t0 = a0;
 t1 = (struct fifo_UnixPipe_Reader__540 *const *)&t0;
 t2 = (*t1);
 t3 = (struct fs_File__546 *)&t2->file;
 t4 = (*t3);
 fs_File_close__1090(t4);
 return;
}

static void fs_File_close__1090(struct fs_File__546 const a0) {
 int32_t t0;
 t0 = a0.handle;
 posix_close__1333(t0);
 return;
}

bool c_instrument_hooks_is_instrumented__233(struct instruments_root_InstrumentHooks__188 *const a0) {
 struct instruments_root_InstrumentHooks__188 *t1;
 struct instruments_root_InstrumentHooks__188 *t2;
 struct instruments_root_InstrumentHooks__188 *const *t3;
 struct instruments_root_InstrumentHooks__188 t4;
 struct instruments_perf_PerfInstrument__200 t8;
 struct instruments_perf_PerfInstrument__200 t9;
 bool t0;
 bool t6;
 bool t7;
 uint8_t t5;
 t0 = a0 != NULL;
 if (t0) {
  t1 = a0;
  t2 = t1;
  t3 = (struct instruments_root_InstrumentHooks__188 *const *)&t2;
  t1 = (*t3);
  t4 = (*t1);
  t5 = t4.tag;
  switch (t5) {
   case UINT8_C(0): {
    t5 = running_on_valgrind();
    t7 = t5 > UINT8_C(0);
    t6 = t7;
    goto zig_block_2;
   }
   case UINT8_C(1): {
    t8 = t4.payload.perf;
    t9 = t8;
    t7 = instruments_perf_PerfInstrument_is_instrumented__340(&t9);
    t0 = t7;
    goto zig_block_1;
   }
   case UINT8_C(2): {
    t6 = false;
    goto zig_block_2;
   }
   default: zig_unreachable();
  }

  zig_block_2:;
  t0 = t6;
  goto zig_block_1;

  zig_block_1:;
  return t0;
 }
 goto zig_block_0;

 zig_block_0:;
 return false;
}

static zig_cold uint16_t instruments_perf_PerfInstrument_start_benchmark__341(struct instruments_perf_PerfInstrument__200 *const a0) {
 struct instruments_perf_PerfInstrument__200 *const *t1;
 struct instruments_perf_PerfInstrument__200 *t2;
 struct instruments_perf_PerfInstrument__200 *t0;
 struct fifo_UnixPipe_Writer__538 *t3;
 struct fifo_UnixPipe_Reader__540 *t5;
 uint16_t t4;
 t0 = a0;
 t1 = (struct instruments_perf_PerfInstrument__200 *const *)&t0;
 t2 = (*t1);
 t3 = (struct fifo_UnixPipe_Writer__538 *)&t2->writer;
 t4 = fifo_UnixPipe_Writer_sendCmd__991(t3, (struct shared_Command__2004){{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(1)});
 if (t4) {
  return t4;
 }
 t2 = (*t1);
 t5 = (struct fifo_UnixPipe_Reader__540 *)&t2->reader;
 t4 = fifo_UnixPipe_Reader_waitForAck__998(t5, (nav__341_66){UINT64_C(0xaaaaaaaaaaaaaaaa),true});
 if (t4) {
  return t4;
 }
 return 0;
}

void c_instrument_hooks_start_benchmark__234(struct instruments_root_InstrumentHooks__188 *const a0) {
 struct instruments_root_InstrumentHooks__188 *t1;
 struct instruments_root_InstrumentHooks__188 *t2;
 struct instruments_root_InstrumentHooks__188 *t5;
 struct instruments_root_InstrumentHooks__188 *const *t3;
 struct instruments_root_InstrumentHooks__188 t6;
 struct instruments_perf_PerfInstrument__200 *t8;
 nav__234_61 t11;
 nav__234_63 t12;
 uint16_t t4;
 uint16_t t9;
 uint16_t t10;
 bool t0;
 uint8_t t7;
 t0 = a0 != NULL;
 if (t0) {
  t1 = a0;
  t2 = t1;
  t3 = (struct instruments_root_InstrumentHooks__188 *const *)&t2;
  t1 = (*t3);
  t5 = t1;
  t3 = (struct instruments_root_InstrumentHooks__188 *const *)&t5;
  t6 = (*t1);
  t7 = t6.tag;
  t0 = t7 == UINT8_C(1);
  if (t0) {
   t1 = (*t3);
   t8 = (struct instruments_perf_PerfInstrument__200 *)&t1->payload.perf;
   t9 = instruments_perf_PerfInstrument_start_benchmark__341(t8);
   memcpy(&t10, &t9, sizeof(uint16_t));
   t4 = t10;
   goto zig_block_2;
  }
  t6 = (*t1);
  t7 = t6.tag;
  t0 = t7 == UINT8_C(0);
  if (t0) {
   callgrind_zero_stats();
   callgrind_start_instrumentation();
   t4 = 0;
   goto zig_block_2;
  }
  goto zig_block_4;

  zig_block_4:;
  goto zig_block_3;

  zig_block_3:;
  t4 = 0;
  goto zig_block_2;

  zig_block_2:;
  memcpy(&t10, &t4, sizeof(uint16_t));
  t0 = t10 == UINT16_C(0);
  if (t0) {
   goto zig_block_1;
  }
  t11 = zig_errorName[t10 - 1];
  t12.f0 = t11;
  debug_print__anon_5494__7039(t12);
  goto zig_block_1;

  zig_block_1:;
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static void debug_print__anon_5494__7039(nav__7039_40 const a0) {
 struct fs_File__546 const *t2;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t5;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t7;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *t8;
 void const **t10;
 void const *t11;
 nav__7039_54 (**t12)(void const *, nav__7039_39);
 struct io_Writer__1950 t13;
 struct io_Writer__1950 t9;
 struct io_Writer__1950 t14;
 struct io_Writer__1950 const *t15;
 struct fs_File__546 t0;
 struct fs_File__546 t1;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t3;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t4;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t6;
 uint16_t t16;
 uint16_t t17;
 bool t18;
 debug_lockStdErr__161();
 t0 = io_getStdErr__3756();
 t1 = t0;
 t2 = (struct fs_File__546 const *)&t1;
 t0 = (*t2);
 t3 = fs_File_writer__1162(t0);
 t4 = t3;
 t5 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *)&t4;
 t3 = (*t5);
 t6 = t3;
 t5 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *)&t6;
 t7 = t5;
 t8 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *)&t7;
 t10 = (void const **)&t9.context;
 t5 = (*t8);
 t2 = (struct fs_File__546 const *)&t5->context;
 t11 = (void const *)t2;
 (*t10) = t11;
 t12 = (nav__7039_54 (**)(void const *, nav__7039_39))&t9.writeFn;
 (*t12) = &io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooB__3818;
 t13 = t9;
 t14 = t13;
 t15 = (struct io_Writer__1950 const *)&t14;
 t13 = (*t15);
 t16 = io_Writer_print__anon_5495__7040(t13, a0);
 memcpy(&t17, &t16, sizeof(uint16_t));
 t18 = t17 == UINT16_C(0);
 if (t18) {
  goto zig_block_0;
 }
 debug_unlockStdErr__162();
 return;

 zig_block_0:;
 debug_unlockStdErr__162();
 return;
}

static uint16_t io_Writer_print__anon_5495__7040(struct io_Writer__1950 const a0, nav__7040_41 const a1) {
 uint16_t t0;
 uint16_t t1;
 t0 = fmt_format__anon_5496__7041(a0, a1);
 memcpy(&t1, &t0, sizeof(uint16_t));
 return t1;
}

static uint16_t fmt_format__anon_5496__7041(struct io_Writer__1950 const a0, nav__7041_41 const a1) {
 struct io_Writer__1950 const *t1;
 struct io_Writer__1950 t2;
 struct io_Writer__1950 t0;
 nav__7041_40 t4;
 uint16_t t3;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__7041_40){(uint8_t const *)&__anon_5533,(uintptr_t)27ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f0;
 t3 = fmt_formatType__anon_3739__6704(t4, (struct fmt_FormatOptions__3656){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__7041_40){(uint8_t const *)&__anon_3745,(uintptr_t)1ul});
 if (t3) {
  return t3;
 }
 return 0;
}

static zig_cold uint16_t instruments_perf_PerfInstrument_stop_benchmark__342(struct instruments_perf_PerfInstrument__200 *const a0) {
 struct instruments_perf_PerfInstrument__200 *const *t1;
 struct instruments_perf_PerfInstrument__200 *t2;
 struct instruments_perf_PerfInstrument__200 *t0;
 struct fifo_UnixPipe_Writer__538 *t3;
 struct fifo_UnixPipe_Reader__540 *t5;
 uint16_t t4;
 t0 = a0;
 t1 = (struct instruments_perf_PerfInstrument__200 *const *)&t0;
 t2 = (*t1);
 t3 = (struct fifo_UnixPipe_Writer__538 *)&t2->writer;
 t4 = fifo_UnixPipe_Writer_sendCmd__991(t3, (struct shared_Command__2004){{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(2)});
 if (t4) {
  return t4;
 }
 t2 = (*t1);
 t5 = (struct fifo_UnixPipe_Reader__540 *)&t2->reader;
 t4 = fifo_UnixPipe_Reader_waitForAck__998(t5, (nav__342_66){UINT64_C(0xaaaaaaaaaaaaaaaa),true});
 if (t4) {
  return t4;
 }
 return 0;
}

void c_instrument_hooks_stop_benchmark__235(struct instruments_root_InstrumentHooks__188 *const a0) {
 struct instruments_root_InstrumentHooks__188 *t1;
 struct instruments_root_InstrumentHooks__188 *t2;
 struct instruments_root_InstrumentHooks__188 *t5;
 struct instruments_root_InstrumentHooks__188 *const *t3;
 struct instruments_root_InstrumentHooks__188 t6;
 struct instruments_perf_PerfInstrument__200 *t8;
 nav__235_61 t11;
 nav__235_63 t12;
 uint16_t t4;
 uint16_t t9;
 uint16_t t10;
 bool t0;
 uint8_t t7;
 t0 = a0 != NULL;
 if (t0) {
  t1 = a0;
  t2 = t1;
  t3 = (struct instruments_root_InstrumentHooks__188 *const *)&t2;
  t1 = (*t3);
  t5 = t1;
  t3 = (struct instruments_root_InstrumentHooks__188 *const *)&t5;
  t6 = (*t1);
  t7 = t6.tag;
  t0 = t7 == UINT8_C(0);
  if (t0) {
   callgrind_stop_instrumentation();
   t4 = 0;
   goto zig_block_2;
  }
  t6 = (*t1);
  t7 = t6.tag;
  t0 = t7 == UINT8_C(1);
  if (t0) {
   t1 = (*t3);
   t8 = (struct instruments_perf_PerfInstrument__200 *)&t1->payload.perf;
   t9 = instruments_perf_PerfInstrument_stop_benchmark__342(t8);
   memcpy(&t10, &t9, sizeof(uint16_t));
   t4 = t10;
   goto zig_block_2;
  }
  goto zig_block_4;

  zig_block_4:;
  goto zig_block_3;

  zig_block_3:;
  t4 = 0;
  goto zig_block_2;

  zig_block_2:;
  memcpy(&t10, &t4, sizeof(uint16_t));
  t0 = t10 == UINT16_C(0);
  if (t0) {
   goto zig_block_1;
  }
  t11 = zig_errorName[t10 - 1];
  t12.f0 = t11;
  debug_print__anon_5570__7043(t12);
  goto zig_block_1;

  zig_block_1:;
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static void debug_print__anon_5570__7043(nav__7043_40 const a0) {
 struct fs_File__546 const *t2;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t5;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t7;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *t8;
 void const **t10;
 void const *t11;
 nav__7043_54 (**t12)(void const *, nav__7043_39);
 struct io_Writer__1950 t13;
 struct io_Writer__1950 t9;
 struct io_Writer__1950 t14;
 struct io_Writer__1950 const *t15;
 struct fs_File__546 t0;
 struct fs_File__546 t1;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t3;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t4;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t6;
 uint16_t t16;
 uint16_t t17;
 bool t18;
 debug_lockStdErr__161();
 t0 = io_getStdErr__3756();
 t1 = t0;
 t2 = (struct fs_File__546 const *)&t1;
 t0 = (*t2);
 t3 = fs_File_writer__1162(t0);
 t4 = t3;
 t5 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *)&t4;
 t3 = (*t5);
 t6 = t3;
 t5 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *)&t6;
 t7 = t5;
 t8 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *)&t7;
 t10 = (void const **)&t9.context;
 t5 = (*t8);
 t2 = (struct fs_File__546 const *)&t5->context;
 t11 = (void const *)t2;
 (*t10) = t11;
 t12 = (nav__7043_54 (**)(void const *, nav__7043_39))&t9.writeFn;
 (*t12) = &io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooB__3818;
 t13 = t9;
 t14 = t13;
 t15 = (struct io_Writer__1950 const *)&t14;
 t13 = (*t15);
 t16 = io_Writer_print__anon_5571__7044(t13, a0);
 memcpy(&t17, &t16, sizeof(uint16_t));
 t18 = t17 == UINT16_C(0);
 if (t18) {
  goto zig_block_0;
 }
 debug_unlockStdErr__162();
 return;

 zig_block_0:;
 debug_unlockStdErr__162();
 return;
}

static uint16_t io_Writer_print__anon_5571__7044(struct io_Writer__1950 const a0, nav__7044_41 const a1) {
 uint16_t t0;
 uint16_t t1;
 t0 = fmt_format__anon_5572__7045(a0, a1);
 memcpy(&t1, &t0, sizeof(uint16_t));
 return t1;
}

static uint16_t fmt_format__anon_5572__7045(struct io_Writer__1950 const a0, nav__7045_41 const a1) {
 struct io_Writer__1950 const *t1;
 struct io_Writer__1950 t2;
 struct io_Writer__1950 t0;
 nav__7045_40 t4;
 uint16_t t3;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__7045_40){(uint8_t const *)&__anon_5608,(uintptr_t)26ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f0;
 t3 = fmt_formatType__anon_3739__6704(t4, (struct fmt_FormatOptions__3656){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__7045_40){(uint8_t const *)&__anon_3745,(uintptr_t)1ul});
 if (t3) {
  return t3;
 }
 return 0;
}

static uint16_t instruments_perf_PerfInstrument_set_executed_benchmark__343(struct instruments_perf_PerfInstrument__200 *const a0, uint32_t const a1, uint8_t const *const a2) {
 struct instruments_perf_PerfInstrument__200 *const *t1;
 struct instruments_perf_PerfInstrument__200 *t2;
 struct instruments_perf_PerfInstrument__200 *t0;
 struct fifo_UnixPipe_Writer__538 *t3;
 nav__343_56 t4;
 nav__343_56 t5;
 struct shared_Command__struct_2007__2007 t6;
 struct shared_Command__2004 t7;
 struct fifo_UnixPipe_Reader__540 *t9;
 uint16_t t8;
 t0 = a0;
 t1 = (struct instruments_perf_PerfInstrument__200 *const *)&t0;
 t2 = (*t1);
 t3 = (struct fifo_UnixPipe_Writer__538 *)&t2->writer;
 t4 = mem_span__anon_5655__7047(a2);
 memcpy(&t5, &t4, sizeof(nav__343_56));
 t6.uri = t5;
 t6.pid = a1;
 t7.tag = UINT8_C(0);
 t7.payload.ExecutedBenchmark = t6;
 t8 = fifo_UnixPipe_Writer_sendCmd__991(t3, t7);
 if (t8) {
  return t8;
 }
 t2 = (*t1);
 t9 = (struct fifo_UnixPipe_Reader__540 *)&t2->reader;
 t8 = fifo_UnixPipe_Reader_waitForAck__998(t9, (nav__343_66){UINT64_C(0xaaaaaaaaaaaaaaaa),true});
 if (t8) {
  return t8;
 }
 return 0;
}

void c_instrument_hooks_executed_benchmark__236(struct instruments_root_InstrumentHooks__188 *const a0, uint32_t const a1, uint8_t const *const a2) {
 struct instruments_root_InstrumentHooks__188 *t1;
 struct instruments_root_InstrumentHooks__188 *t2;
 struct instruments_root_InstrumentHooks__188 *t5;
 struct instruments_root_InstrumentHooks__188 *const *t3;
 struct instruments_root_InstrumentHooks__188 t6;
 uint8_t const *t8;
 struct instruments_perf_PerfInstrument__200 *t9;
 nav__236_61 t11;
 nav__236_63 t12;
 uint16_t t4;
 uint16_t t10;
 bool t0;
 uint8_t t7;
 t0 = a0 != NULL;
 if (t0) {
  t1 = a0;
  t2 = t1;
  t3 = (struct instruments_root_InstrumentHooks__188 *const *)&t2;
  t1 = (*t3);
  t5 = t1;
  t3 = (struct instruments_root_InstrumentHooks__188 *const *)&t5;
  t6 = (*t1);
  t7 = t6.tag;
  switch (t7) {
   case UINT8_C(0): {
    t8 = (uint8_t const *)a2;
    callgrind_dump_stats_at(t8);
    goto zig_block_3;
   }
   case UINT8_C(1): {
    t1 = (*t3);
    t9 = (struct instruments_perf_PerfInstrument__200 *)&t1->payload.perf;
    t10 = instruments_perf_PerfInstrument_set_executed_benchmark__343(t9, a1, a2);
    if (t10) {
     t4 = t10;
     goto zig_block_2;
    }
    goto zig_block_3;
   }
   case UINT8_C(2): {
    goto zig_block_3;
   }
   default: zig_unreachable();
  }

  zig_block_3:;
  t4 = 0;
  goto zig_block_2;

  zig_block_2:;
  memcpy(&t10, &t4, sizeof(uint16_t));
  t0 = t10 == UINT16_C(0);
  if (t0) {
   goto zig_block_1;
  }
  t11 = zig_errorName[t10 - 1];
  t12.f0 = t11;
  debug_print__anon_5663__7048(t12);
  goto zig_block_1;

  zig_block_1:;
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static nav__7047_39 mem_span__anon_5655__7047(uint8_t const *const a0) {
 uint8_t const *const *t1;
 uintptr_t t2;
 uint8_t const *t3;
 uint8_t const *t0;
 nav__7047_39 t4;
 t0 = a0;
 t1 = (uint8_t const *const *)&t0;
 t2 = mem_len__anon_5671__7049(a0);
 t3 = (*t1);
 t3 = (uint8_t const *)(((uintptr_t)t3) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t4.ptr = t3;
 t4.len = t2;
 return t4;
}

static void debug_print__anon_5663__7048(nav__7048_40 const a0) {
 struct fs_File__546 const *t2;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t5;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t7;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *t8;
 void const **t10;
 void const *t11;
 nav__7048_54 (**t12)(void const *, nav__7048_39);
 struct io_Writer__1950 t13;
 struct io_Writer__1950 t9;
 struct io_Writer__1950 t14;
 struct io_Writer__1950 const *t15;
 struct fs_File__546 t0;
 struct fs_File__546 t1;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t3;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t4;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t6;
 uint16_t t16;
 uint16_t t17;
 bool t18;
 debug_lockStdErr__161();
 t0 = io_getStdErr__3756();
 t1 = t0;
 t2 = (struct fs_File__546 const *)&t1;
 t0 = (*t2);
 t3 = fs_File_writer__1162(t0);
 t4 = t3;
 t5 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *)&t4;
 t3 = (*t5);
 t6 = t3;
 t5 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *)&t6;
 t7 = t5;
 t8 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *)&t7;
 t10 = (void const **)&t9.context;
 t5 = (*t8);
 t2 = (struct fs_File__546 const *)&t5->context;
 t11 = (void const *)t2;
 (*t10) = t11;
 t12 = (nav__7048_54 (**)(void const *, nav__7048_39))&t9.writeFn;
 (*t12) = &io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooB__3818;
 t13 = t9;
 t14 = t13;
 t15 = (struct io_Writer__1950 const *)&t14;
 t13 = (*t15);
 t16 = io_Writer_print__anon_5673__7050(t13, a0);
 memcpy(&t17, &t16, sizeof(uint16_t));
 t18 = t17 == UINT16_C(0);
 if (t18) {
  goto zig_block_0;
 }
 debug_unlockStdErr__162();
 return;

 zig_block_0:;
 debug_unlockStdErr__162();
 return;
}

static uintptr_t mem_len__anon_5671__7049(uint8_t const *const a0) {
 uint8_t const *t1;
 uintptr_t t2;
 bool t0;
 t0 = a0 != NULL;
 debug_assert__179(t0);
 t1 = (uint8_t const *)a0;
 t2 = mem_indexOfSentinel__anon_5679__7051(t1);
 return t2;
}

static uint16_t io_Writer_print__anon_5673__7050(struct io_Writer__1950 const a0, nav__7050_41 const a1) {
 uint16_t t0;
 uint16_t t1;
 t0 = fmt_format__anon_5680__7052(a0, a1);
 memcpy(&t1, &t0, sizeof(uint16_t));
 return t1;
}

static uintptr_t mem_indexOfSentinel__anon_5679__7051(uint8_t const *const a0) {
 static uint8_t const t11[32] = "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000";
 static uint8_t const t18[32] = "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000";
 uint8_t const *const *t1;
 uintptr_t t4;
 uintptr_t t6;
 uintptr_t t16;
 uintptr_t t2;
 uint8_t const *t5;
 uint8_t const *t0;
 uint64_t t7;
 uint8_t const (*t8)[32];
 uint8_t const (*t17)[32];
 bool t3;
 uint8_t t9[32];
 uint8_t t10[32];
 bool t12[32];
 nav__7051_45 t13;
 nav__7051_47 t14;
 uint8_t t15;
 t0 = a0;
 t1 = (uint8_t const *const *)&t0;
 t2 = (uintptr_t)0ul;
 t3 = math_isPowerOfTwo__anon_5692__7053();
 if (t3) {
  debug_assert__179(true);
  t4 = t2;
  t5 = (*t1);
  t5 = (uint8_t const *)&t5[t4];
  t4 = (uintptr_t)t5;
  t6 = t4 & (uintptr_t)4095ul;
  t7 = t6;
  t3 = t7 <= UINT64_C(4064);
  if (t3) {
   t6 = t2;
   t5 = (*t1);
   t5 = (uint8_t const *)(((uintptr_t)t5) + (t6*sizeof(uint8_t)));
   t8 = (uint8_t const (*)[32])t5;
   memcpy(t9, (const char *)t8, sizeof(uint8_t[32]));
   memcpy(&t10, &t9, sizeof(uint8_t[32]));
   for (t6 = (uintptr_t)0ul; t6 < (uintptr_t)32ul; t6 += (uintptr_t)1ul) {
    t12[t6] = t10[t6] == t11[t6];
   }
   t3 = false;
   for (t6 = (uintptr_t)0ul; t6 < (uintptr_t)32ul; t6 += (uintptr_t)1ul) {
    t3 |= t12[t6];
   }
   if (t3) {
    t4 = t2;
    memcpy(t13.array, t12, sizeof(nav__7051_45));
    t14 = simd_firstTrue__anon_5726__7060(t13);
    t15 = t14.payload;
    t6 = (uintptr_t)t15;
    t6 = t4 + t6;
    return t6;
   }
   goto zig_block_2;

   zig_block_2:;
   t6 = t2;
   t16 = mem_alignForward__anon_5729__7061(t4, (uintptr_t)32ul);
   t4 = t16 - t4;
   t4 = t4 / (uintptr_t)1ul;
   t4 = t6 + t4;
   t2 = t4;
   goto zig_block_1;
  }
  zig_loop_63:
  t4 = t2;
  t5 = (*t1);
  t5 = (uint8_t const *)&t5[t4];
  t4 = (uintptr_t)t5;
  t4 = t4 & (uintptr_t)31ul;
  t7 = t4;
  t3 = t7 != UINT64_C(0);
  if (t3) {
   t4 = t2;
   t15 = a0[t4];
   t3 = t15 == UINT8_C(0);
   if (t3) {
    t4 = t2;
    return t4;
   }
   goto zig_block_5;

   zig_block_5:;
   t4 = t2;
   t4 = t4 + (uintptr_t)1ul;
   t2 = t4;
   goto zig_block_4;
  }
  goto zig_block_3;

  zig_block_4:;
  goto zig_loop_63;

  zig_block_3:;
  goto zig_block_1;

  zig_block_1:;
  t6 = t2;
  t5 = (*t1);
  t5 = (uint8_t const *)&t5[t6];
  t6 = (uintptr_t)t5;
  t3 = mem_isAligned__499(t6, (uintptr_t)32ul);
  debug_assert__179(t3);
  zig_loop_98:
  t6 = t2;
  t5 = (*t1);
  t5 = (uint8_t const *)(((uintptr_t)t5) + (t6*sizeof(uint8_t)));
  t8 = (uint8_t const (*)[32])t5;
  t17 = (uint8_t const (*)[32])t8;
  memcpy(t10, (const char *)t17, sizeof(uint8_t[32]));
  for (t6 = (uintptr_t)0ul; t6 < (uintptr_t)32ul; t6 += (uintptr_t)1ul) {
   t12[t6] = t10[t6] == t18[t6];
  }
  t3 = false;
  for (t6 = (uintptr_t)0ul; t6 < (uintptr_t)32ul; t6 += (uintptr_t)1ul) {
   t3 |= t12[t6];
  }
  if (t3) {
   t6 = t2;
   memcpy(t13.array, t12, sizeof(nav__7051_45));
   t14 = simd_firstTrue__anon_5726__7060(t13);
   t15 = t14.payload;
   t4 = (uintptr_t)t15;
   t4 = t6 + t4;
   return t4;
  }
  goto zig_block_6;

  zig_block_6:;
  t6 = t2;
  t6 = t6 + (uintptr_t)32ul;
  t2 = t6;
  goto zig_loop_98;
 }
 goto zig_block_0;

 zig_block_0:;
 zig_loop_129:
 t16 = t2;
 t15 = a0[t16];
 t3 = t15 != UINT8_C(0);
 if (t3) {
  t16 = t2;
  t16 = t16 + (uintptr_t)1ul;
  t2 = t16;
  goto zig_block_8;
 }
 goto zig_block_7;

 zig_block_8:;
 goto zig_loop_129;

 zig_block_7:;
 t16 = t2;
 return t16;
}

static uint16_t fmt_format__anon_5680__7052(struct io_Writer__1950 const a0, nav__7052_41 const a1) {
 struct io_Writer__1950 const *t1;
 struct io_Writer__1950 t2;
 struct io_Writer__1950 t0;
 nav__7052_40 t4;
 uint16_t t3;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__7052_40){(uint8_t const *)&__anon_5776,(uintptr_t)34ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f0;
 t3 = fmt_formatType__anon_3739__6704(t4, (struct fmt_FormatOptions__3656){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__7052_40){(uint8_t const *)&__anon_3745,(uintptr_t)1ul});
 if (t3) {
  return t3;
 }
 return 0;
}

static bool math_isPowerOfTwo__anon_5692__7053(void) {
 debug_assert__179(true);
 return true;
}

static nav__7060_38 simd_firstTrue__anon_5726__7060(nav__7060_40 const a0) {
 static uint8_t const t2[32] = {UINT8_C(0),UINT8_C(1),UINT8_C(2),UINT8_C(3),UINT8_C(4),UINT8_C(5),UINT8_C(6),UINT8_C(7),UINT8_C(8),UINT8_C(9),UINT8_C(10),UINT8_C(11),UINT8_C(12),UINT8_C(13),UINT8_C(14),UINT8_C(15),UINT8_C(16),UINT8_C(17),UINT8_C(18),UINT8_C(19),UINT8_C(20),UINT8_C(21),UINT8_C(22),UINT8_C(23),UINT8_C(24),UINT8_C(25),UINT8_C(26),UINT8_C(27),UINT8_C(28),UINT8_C(29),UINT8_C(30),UINT8_C(31)};
 static uint8_t const t3[32] = {UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31)};
 uintptr_t t1;
 bool t0;
 uint8_t t4[32];
 uint8_t t5;
 nav__7060_38 t6;
 t0 = false;
 for (t1 = (uintptr_t)0ul; t1 < (uintptr_t)32ul; t1 += (uintptr_t)1ul) {
  t0 |= a0.array[t1];
 }
 t0 = !t0;
 if (t0) {
  return (nav__7060_38){true,UINT8_C(0xa)};
 }
 goto zig_block_0;

 zig_block_0:;
 for (t1 = (uintptr_t)0ul; t1 < (uintptr_t)32ul; t1 += (uintptr_t)1ul) {
  t4[t1] = a0.array[t1] ? t2[t1] : t3[t1];
 }
 t5 = UINT8_C(31);
 for (t1 = (uintptr_t)0ul; t1 < (uintptr_t)32ul; t1 += (uintptr_t)1ul) {
  t5 = t5 < t4[t1] ? t5 : t4[t1];
 }
 t6.is_null = false;
 t6.payload = t5;
 return t6;
}

static uintptr_t mem_alignForward__anon_5729__7061(uintptr_t const a0, uintptr_t const a1) {
 uintptr_t t1;
 bool t0;
 t0 = mem_isValidAlignGeneric__anon_5838__7062(a1);
 debug_assert__179(t0);
 t1 = a1 - (uintptr_t)1ul;
 t1 = a0 + t1;
 t1 = mem_alignBackward__anon_5839__7063(t1, a1);
 return t1;
}

static bool mem_isAligned__499(uintptr_t const a0, uintptr_t const a1) {
 uint64_t t0;
 uint64_t t1;
 bool t2;
 t0 = a0;
 t1 = a1;
 t2 = mem_isAlignedGeneric__anon_5843__7064(t0, t1);
 return t2;
}

static bool mem_isValidAlignGeneric__anon_5838__7062(uintptr_t const a0) {
 uint64_t t0;
 bool t1;
 bool t2;
 t0 = a0;
 t1 = t0 > UINT64_C(0);
 if (t1) {
  t1 = math_isPowerOfTwo__anon_3073__6141(a0);
  t2 = t1;
  goto zig_block_0;
 }
 t2 = false;
 goto zig_block_0;

 zig_block_0:;
 return t2;
}

static uintptr_t mem_alignBackward__anon_5839__7063(uintptr_t const a0, uintptr_t const a1) {
 uintptr_t t1;
 bool t0;
 t0 = mem_isValidAlignGeneric__anon_5838__7062(a1);
 debug_assert__179(t0);
 t1 = a1 - (uintptr_t)1ul;
 t1 = zig_not_u64(t1, UINT8_C(64));
 t1 = a0 & t1;
 return t1;
}

static bool mem_isAlignedGeneric__anon_5843__7064(uint64_t const a0, uint64_t const a1) {
 uint64_t t0;
 bool t1;
 t0 = mem_alignBackward__anon_5845__7065(a0, a1);
 t1 = t0 == a0;
 return t1;
}

static uint64_t mem_alignBackward__anon_5845__7065(uint64_t const a0, uint64_t const a1) {
 uint64_t t1;
 bool t0;
 t0 = mem_isValidAlignGeneric__anon_5847__7066(a1);
 debug_assert__179(t0);
 t1 = a1 - UINT64_C(1);
 t1 = zig_not_u64(t1, UINT8_C(64));
 t1 = a0 & t1;
 return t1;
}

static bool mem_isValidAlignGeneric__anon_5847__7066(uint64_t const a0) {
 bool t0;
 bool t1;
 t0 = a0 > UINT64_C(0);
 if (t0) {
  t0 = math_isPowerOfTwo__anon_5848__7067(a0);
  t1 = t0;
  goto zig_block_0;
 }
 t1 = false;
 goto zig_block_0;

 zig_block_0:;
 return t1;
}

static bool math_isPowerOfTwo__anon_5848__7067(uint64_t const a0) {
 uint64_t t1;
 bool t0;
 t0 = a0 > UINT64_C(0);
 debug_assert__179(t0);
 t1 = a0 - UINT64_C(1);
 t1 = a0 & t1;
 t0 = t1 == UINT64_C(0);
 return t0;
}

static uint16_t instruments_perf_PerfInstrument_set_integration__344(struct instruments_perf_PerfInstrument__200 *const a0, uint8_t const *const a1, uint8_t const *const a2) {
 struct instruments_perf_PerfInstrument__200 *const *t1;
 struct instruments_perf_PerfInstrument__200 *t2;
 struct instruments_perf_PerfInstrument__200 *t0;
 struct fifo_UnixPipe_Writer__538 *t3;
 nav__344_56 t4;
 nav__344_56 t5;
 nav__344_56 t6;
 struct shared_Command__struct_2008__2008 t7;
 struct shared_Command__2004 t8;
 struct fifo_UnixPipe_Reader__540 *t10;
 uint16_t t9;
 t0 = a0;
 t1 = (struct instruments_perf_PerfInstrument__200 *const *)&t0;
 t2 = (*t1);
 t3 = (struct fifo_UnixPipe_Writer__538 *)&t2->writer;
 t4 = mem_span__anon_5655__7047(a1);
 t5 = mem_span__anon_5655__7047(a2);
 memcpy(&t6, &t4, sizeof(nav__344_56));
 memcpy(&t4, &t5, sizeof(nav__344_56));
 t7.name = t6;
 t7.version = t4;
 t8.tag = UINT8_C(5);
 t8.payload.SetIntegration = t7;
 t9 = fifo_UnixPipe_Writer_sendCmd__991(t3, t8);
 if (t9) {
  return t9;
 }
 t2 = (*t1);
 t10 = (struct fifo_UnixPipe_Reader__540 *)&t2->reader;
 t9 = fifo_UnixPipe_Reader_waitForAck__998(t10, (nav__344_66){UINT64_C(0xaaaaaaaaaaaaaaaa),true});
 if (t9) {
  return t9;
 }
 return 0;
}

void c_instrument_hooks_set_integration__237(struct instruments_root_InstrumentHooks__188 *const a0, uint8_t const *const a1, uint8_t const *const a2) {
 struct instruments_root_InstrumentHooks__188 *t1;
 struct instruments_root_InstrumentHooks__188 *t2;
 struct instruments_root_InstrumentHooks__188 *t5;
 struct instruments_root_InstrumentHooks__188 *const *t3;
 struct instruments_root_InstrumentHooks__188 t6;
 struct instruments_valgrind_ValgrindInstrument__195 *t8;
 struct instruments_valgrind_ValgrindInstrument__195 t9;
 struct instruments_valgrind_ValgrindInstrument__195 t11;
 struct instruments_valgrind_ValgrindInstrument__195 const *t12;
 struct mem_Allocator__206 t13;
 nav__237_62 t14;
 nav__237_67 t15;
 nav__237_65 t17;
 uint8_t *t18;
 uint8_t const *t19;
 struct mem_Allocator__206 const *t20;
 struct instruments_perf_PerfInstrument__200 *t21;
 nav__237_71 t22;
 nav__237_73 t23;
 uint16_t t4;
 uint16_t t10;
 uint16_t t16;
 bool t0;
 uint8_t t7;
 t0 = a0 != NULL;
 if (t0) {
  t1 = a0;
  t2 = t1;
  t3 = (struct instruments_root_InstrumentHooks__188 *const *)&t2;
  t1 = (*t3);
  t5 = t1;
  t3 = (struct instruments_root_InstrumentHooks__188 *const *)&t5;
  t6 = (*t1);
  t7 = t6.tag;
  switch (t7) {
   case UINT8_C(0): {
    t1 = (*t3);
    t8 = (struct instruments_valgrind_ValgrindInstrument__195 *)&t1->payload.valgrind;
    t9 = (*t8);
    t11 = t9;
    t12 = (struct instruments_valgrind_ValgrindInstrument__195 const *)&t11;
    t13 = t9.allocator;
    t14.f0 = a1;
    t14.f1 = a2;
    t15 = fmt_allocPrintZ__anon_5881__7068(t13, t14);
    if (t15.error) {
     t16 = t15.error;
     t10 = t16;
     goto zig_block_4;
    }
    t17 = t15.payload;
    t18 = t17.ptr;
    t19 = (uint8_t const *)t18;
    callgrind_dump_stats_at(t19);
    t20 = (struct mem_Allocator__206 const *)&t12->allocator;
    t13 = (*t20);
    mem_Allocator_free__anon_5883__7069(t13, t17);
    t10 = 0;
    goto zig_block_4;

    zig_block_4:;
    memcpy(&t16, &t10, sizeof(uint16_t));
    if (t16) {
     t4 = t16;
     goto zig_block_2;
    }
    goto zig_block_3;
   }
   case UINT8_C(1): {
    t1 = (*t3);
    t21 = (struct instruments_perf_PerfInstrument__200 *)&t1->payload.perf;
    t16 = instruments_perf_PerfInstrument_set_integration__344(t21, a1, a2);
    if (t16) {
     t4 = t16;
     goto zig_block_2;
    }
    goto zig_block_3;
   }
   case UINT8_C(2): {
    goto zig_block_3;
   }
   default: zig_unreachable();
  }

  zig_block_3:;
  t4 = 0;
  goto zig_block_2;

  zig_block_2:;
  memcpy(&t16, &t4, sizeof(uint16_t));
  t0 = t16 == UINT16_C(0);
  if (t0) {
   goto zig_block_1;
  }
  t22 = zig_errorName[t16 - 1];
  t23.f0 = t22;
  debug_print__anon_5895__7070(t23);
  goto zig_block_1;

  zig_block_1:;
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static nav__7068_40 fmt_allocPrintZ__anon_5881__7068(struct mem_Allocator__206 const a0, nav__7068_43 const a1) {
 nav__7068_40 t0;
 nav__7068_39 t2;
 nav__7068_39 t3;
 nav__7068_39 const *t4;
 uintptr_t t5;
 uint8_t *t6;
 uint16_t t1;
 t0 = fmt_allocPrint__anon_5911__7071(a0, a1);
 if (t0.error) {
  t1 = t0.error;
  t0.payload = (nav__7068_39){(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t0.error = t1;
  return t0;
 }
 t2 = t0.payload;
 t3 = t2;
 t4 = (nav__7068_39 const *)&t3;
 t5 = t2.len;
 t5 = t5 - (uintptr_t)1ul;
 t2 = (*t4);
 t6 = t2.ptr;
 t6 = (uint8_t *)(((uintptr_t)t6) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t2.ptr = t6;
 t2.len = t5;
 t0.payload = t2;
 t0.error = UINT16_C(0);
 return t0;
}

static void mem_Allocator_free__anon_5883__7069(struct mem_Allocator__206 const a0, nav__7069_40 const a1) {
 struct mem_Allocator__206 const *t1;
 nav__7069_40 t2;
 uintptr_t t3;
 uint64_t t4;
 uint8_t *t6;
 uint8_t *t7;
 uint8_t *t8;
 uint8_t *const *t9;
 struct mem_Allocator__206 t10;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t12;
 struct mem_Allocator_VTable__209 const *const *t13;
 struct mem_Allocator_VTable__209 const *t14;
 void (*const *t15)(void *, nav__7069_40, uint8_t, uintptr_t);
 void (*t16)(void *, nav__7069_40, uint8_t, uintptr_t);
 void *t17;
 bool t5;
 uint8_t t11;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = mem_sliceAsBytes__anon_5918__7072(a1);
 t3 = t2.len;
 t3 = t3 + (uintptr_t)1ul;
 t4 = t3;
 t5 = t4 == UINT64_C(0);
 if (t5) {
  return;
 }
 goto zig_block_0;

 zig_block_0:;
 t6 = t2.ptr;
 t7 = (uint8_t *)t6;
 t8 = t7;
 t9 = (uint8_t *const *)&t8;
 t7 = (*t9);
 t7 = (uint8_t *)(((uintptr_t)t7) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t2.ptr = t7;
 t2.len = t3;
 t10 = (*t1);
 t7 = (*t9);
 t7 = (uint8_t *)(((uintptr_t)t7) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t2.ptr = t7;
 t2.len = t3;
 t11 = mem_Alignment_fromByteUnits__628((uintptr_t)1ul);
 t3 = (uintptr_t)zig_return_address();
 t12 = t10;
 t1 = (struct mem_Allocator__206 const *)&t12;
 t13 = (struct mem_Allocator_VTable__209 const *const *)&t1->vtable;
 t14 = (*t13);
 t15 = (void (*const *)(void *, nav__7069_40, uint8_t, uintptr_t))&t14->free;
 t16 = (*t15);
 t17 = t10.ptr;
 t16(t17, t2, t11, t3);
 return;
}

static void debug_print__anon_5895__7070(nav__7070_40 const a0) {
 struct fs_File__546 const *t2;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t5;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t7;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *t8;
 void const **t10;
 void const *t11;
 nav__7070_54 (**t12)(void const *, nav__7070_39);
 struct io_Writer__1950 t13;
 struct io_Writer__1950 t9;
 struct io_Writer__1950 t14;
 struct io_Writer__1950 const *t15;
 struct fs_File__546 t0;
 struct fs_File__546 t1;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t3;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t4;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 t6;
 uint16_t t16;
 uint16_t t17;
 bool t18;
 debug_lockStdErr__161();
 t0 = io_getStdErr__3756();
 t1 = t0;
 t2 = (struct fs_File__546 const *)&t1;
 t0 = (*t2);
 t3 = fs_File_writer__1162(t0);
 t4 = t3;
 t5 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *)&t4;
 t3 = (*t5);
 t6 = t3;
 t5 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *)&t6;
 t7 = t5;
 t8 = (struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *)&t7;
 t10 = (void const **)&t9.context;
 t5 = (*t8);
 t2 = (struct fs_File__546 const *)&t5->context;
 t11 = (void const *)t2;
 (*t10) = t11;
 t12 = (nav__7070_54 (**)(void const *, nav__7070_39))&t9.writeFn;
 (*t12) = &io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooB__3818;
 t13 = t9;
 t14 = t13;
 t15 = (struct io_Writer__1950 const *)&t14;
 t13 = (*t15);
 t16 = io_Writer_print__anon_5919__7073(t13, a0);
 memcpy(&t17, &t16, sizeof(uint16_t));
 t18 = t17 == UINT16_C(0);
 if (t18) {
  goto zig_block_0;
 }
 debug_unlockStdErr__162();
 return;

 zig_block_0:;
 debug_unlockStdErr__162();
 return;
}

static nav__7071_40 fmt_allocPrint__anon_5911__7071(struct mem_Allocator__206 const a0, nav__7071_43 const a1) {
 struct mem_Allocator__206 const *t1;
 uintptr_t t2;
 uintptr_t t6;
 uint64_t t3;
 nav__7071_54 t4;
 struct mem_Allocator__206 t7;
 struct mem_Allocator__206 t0;
 nav__7071_40 t8;
 nav__7071_40 t11;
 nav__7071_39 t10;
 uint16_t t9;
 bool t5;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t3 = fmt_count__anon_5926__7074(a1);
 t4 = math_cast__anon_5928__7075(t3);
 t5 = t4.is_null != true;
 if (t5) {
  t6 = t4.payload;
  t2 = t6;
  goto zig_block_0;
 }
 return (nav__7071_40){{(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},zig_error_OutOfMemory};

 zig_block_0:;
 t7 = (*t1);
 t8 = mem_Allocator_alloc__anon_2188__4131(t7, t2);
 if (t8.error) {
  t9 = t8.error;
  t8.payload = (nav__7071_39){(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t8.error = t9;
  return t8;
 }
 t10 = t8.payload;
 t8 = fmt_bufPrint__anon_5937__7076(t10, a1);
 t5 = t8.error == UINT16_C(0);
 if (t5) {
  t10 = t8.payload;
  t8.payload = t10;
  t8.error = UINT16_C(0);
  t11 = t8;
  goto zig_block_1;
 }
 t9 = t8.error;
 switch (t9) {
  case zig_error_NoSpaceLeft: {
   zig_unreachable();
  }
  default: zig_unreachable();
 }

 zig_block_1:;
 return t11;
}

static nav__7072_39 mem_sliceAsBytes__anon_5918__7072(nav__7072_39 const a0) {
 uintptr_t t0;
 uint64_t t1;
 uint8_t *t3;
 uint8_t *t4;
 uint8_t *t5;
 uint8_t *const *t6;
 nav__7072_39 t7;
 bool t2;
 t0 = a0.len;
 t1 = t0;
 t2 = t1 == UINT64_C(0);
 if (t2) {
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = a0.ptr;
 t4 = (uint8_t *)t3;
 t5 = t4;
 t6 = (uint8_t *const *)&t5;
 t0 = a0.len;
 t4 = (*t6);
 t4 = (uint8_t *)(((uintptr_t)t4) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t7.ptr = t4;
 t7.len = t0;
 return t7;
}

static uint16_t io_Writer_print__anon_5919__7073(struct io_Writer__1950 const a0, nav__7073_41 const a1) {
 uint16_t t0;
 uint16_t t1;
 t0 = fmt_format__anon_5940__7077(a0, a1);
 memcpy(&t1, &t0, sizeof(uint16_t));
 return t1;
}

static uint16_t fmt_format__anon_5992__7116(struct io_Writer__1950 const a0, nav__7116_40 const a1) {
 struct io_Writer__1950 const *t1;
 struct io_Writer__1950 t2;
 struct io_Writer__1950 t0;
 uint8_t const *t4;
 uint16_t t3;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__7116_44){(uint8_t const *)&__anon_6023,(uintptr_t)10ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f0;
 t3 = fmt_formatType__anon_6032__7117(t4, (struct fmt_FormatOptions__3656){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__7116_44){(uint8_t const *)&__anon_6038,(uintptr_t)1ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f1;
 t3 = fmt_formatType__anon_6032__7117(t4, (struct fmt_FormatOptions__3656){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__7116_44){(uint8_t const *)&__anon_6058,(uintptr_t)1ul});
 if (t3) {
  return t3;
 }
 return 0;
}

static uint64_t fmt_count__anon_5926__7074(nav__7074_39 const a0) {
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 t1;
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 t0;
 struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__5973 t2;
 struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__5973 t3;
 struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__5973 const *t4;
 struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__5973 const *t5;
 struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__5973 const *const *t6;
 void const **t8;
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *const *t9;
 void const *t10;
 nav__7074_53 (**t11)(void const *, nav__7074_54);
 struct io_Writer__1950 t12;
 struct io_Writer__1950 t7;
 uint64_t t15;
 uint16_t t13;
 bool t14;
 t1 = io_counting_writer_countingWriter__anon_5962__7102();
 t0 = t1;
 t2 = io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_writer__7101(&t0);
 t3 = t2;
 t4 = (struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__5973 const *)&t3;
 t5 = t4;
 t6 = (struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__5973 const *const *)&t5;
 t8 = (void const **)&t7.context;
 t4 = (*t6);
 t9 = (struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *const *)&t4->context;
 t10 = (void const *)t9;
 (*t8) = t10;
 t11 = (nav__7074_53 (**)(void const *, nav__7074_54))&t7.writeFn;
 (*t11) = &io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWr__7115;
 t12 = t7;
 t13 = fmt_format__anon_5992__7116(t12, a0);
 t14 = t13 == UINT16_C(0);
 if (t14) {
  goto zig_block_0;
 }
 zig_unreachable();

 zig_block_0:;
 t1 = t0;
 t15 = t1.bytes_written;
 return t15;
}

static nav__7075_38 math_cast__anon_5928__7075(uint64_t const a0) {
 uintptr_t t0;
 nav__7075_38 t1;
 t0 = a0;
 t1.is_null = false;
 t1.payload = t0;
 return t1;
}

static nav__7076_40 fmt_bufPrint__anon_5937__7076(nav__7076_39 const a0, nav__7076_42 const a1) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 t1;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 t0;
 struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6070 t2;
 struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6070 t3;
 struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6070 const *t4;
 struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6070 const *t5;
 struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6070 const *const *t6;
 void const **t8;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *t9;
 void const *t10;
 nav__7076_57 (**t11)(void const *, nav__7076_58);
 struct io_Writer__1950 t12;
 struct io_Writer__1950 t7;
 nav__7076_39 t15;
 nav__7076_40 t16;
 uint16_t t13;
 bool t14;
 t1 = io_fixed_buffer_stream_fixedBufferStream__anon_2210__4163(a0);
 t0 = t1;
 t2 = io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_writer__4153(&t0);
 t3 = t2;
 t4 = (struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6070 const *)&t3;
 t5 = t4;
 t6 = (struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6070 const *const *)&t5;
 t8 = (void const **)&t7.context;
 t4 = (*t6);
 t9 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *)&t4->context;
 t10 = (void const *)t9;
 (*t8) = t10;
 t11 = (nav__7076_57 (**)(void const *, nav__7076_58))&t7.writeFn;
 (*t11) = &io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write__7130;
 t12 = t7;
 t13 = fmt_format__anon_5992__7116(t12, a1);
 t14 = t13 == UINT16_C(0);
 if (t14) {
  goto zig_block_0;
 }
 switch (t13) {
  case zig_error_NoSpaceLeft: {
   return (nav__7076_40){{(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},zig_error_NoSpaceLeft};
  }
  default: {
   zig_unreachable();
  }
 }

 zig_block_0:;
 t1 = t0;
 t15 = io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_getWritten__4161(t1);
 t16.payload = t15;
 t16.error = UINT16_C(0);
 return t16;
}

static uint16_t fmt_format__anon_5940__7077(struct io_Writer__1950 const a0, nav__7077_41 const a1) {
 struct io_Writer__1950 const *t1;
 struct io_Writer__1950 t2;
 struct io_Writer__1950 t0;
 nav__7077_40 t4;
 uint16_t t3;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__7077_40){(uint8_t const *)&__anon_6125,(uintptr_t)27ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f0;
 t3 = fmt_formatType__anon_3739__6704(t4, (struct fmt_FormatOptions__3656){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__7077_40){(uint8_t const *)&__anon_3745,(uintptr_t)1ul});
 if (t3) {
  return t3;
 }
 return 0;
}

static struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 io_counting_writer_countingWriter__anon_5962__7102(void) {
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 t0;
 t0 = (struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959){UINT64_C(0)};
 return t0;
}

static struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__5973 io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_writer__7101(struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *const a0) {
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 **t1;
 struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__5973 t0;
 t1 = (struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 **)&t0.context;
 (*t1) = a0;
 return t0;
}

static nav__7115_38 io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWr__7115(void const *const a0, nav__7115_41 const a1) {
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *const *t0;
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *t1;
 nav__7115_38 t2;
 nav__7115_38 t3;
 t0 = (struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *const *)a0;
 t1 = (*t0);
 t2 = io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_write__7100(t1, a1);
 memcpy(&t3, &t2, sizeof(nav__7115_38));
 return t3;
}

static uint16_t fmt_formatType__anon_6032__7117(uint8_t const *const a0, struct fmt_FormatOptions__3656 const a1, struct io_Writer__1950 const a2, uintptr_t const a3) {
 nav__7117_47 t2;
 nav__7117_47 t3;
 uint8_t const *t0;
 struct io_Writer__1950 t1;
 uint16_t t4;
 uint16_t t5;
 (void)a3;
 t0 = a0;
 t1 = a2;
 t2 = mem_span__anon_5655__7047(a0);
 memcpy(&t3, &t2, sizeof(nav__7117_47));
 t4 = fmt_formatBuf__anon_4268__6841(t3, a1, a2);
 memcpy(&t5, &t4, sizeof(uint16_t));
 return t5;
}

static struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6070 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_writer__4153(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const a0) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 **t1;
 struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6070 t0;
 t1 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 **)&t0.context;
 (*t1) = a0;
 return t0;
}

static nav__7130_38 io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write__7130(void const *const a0, nav__7130_41 const a1) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *t0;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *t1;
 nav__7130_38 t2;
 nav__7130_38 t3;
 t0 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *)a0;
 t1 = (*t0);
 t2 = io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_write__4156(t1, a1);
 memcpy(&t3, &t2, sizeof(nav__7130_38));
 return t3;
}

static nav__4161_39 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_getWritten__4161(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 const a0) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 const *t1;
 nav__4161_39 const *t2;
 uintptr_t t3;
 nav__4161_39 t4;
 uint8_t *t5;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 t0;
 t0 = a0;
 t1 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 const *)&t0;
 t2 = (nav__4161_39 const *)&t1->buffer;
 t3 = a0.pos;
 t4 = (*t2);
 t5 = t4.ptr;
 t5 = (uint8_t *)(((uintptr_t)t5) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t4.ptr = t5;
 t4.len = t3;
 return t4;
}

static nav__7100_38 io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_write__7100(struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *const a0, nav__7100_42 const a1) {
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *const *t1;
 nav__7100_38 t2;
 uintptr_t t3;
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *t4;
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *t0;
 uint64_t *t5;
 uint64_t t6;
 uint64_t t7;
 t0 = a0;
 t1 = (struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__5959 *const *)&t0;
 t2 = io_dummyWrite__3796(a1);
 t3 = t2.payload;
 t4 = (*t1);
 t5 = (uint64_t *)&t4->bytes_written;
 t6 = (*t5);
 t7 = t3;
 t7 = t6 + t7;
 (*t5) = t7;
 t2.payload = t3;
 t2.error = UINT16_C(0);
 return t2;
}

static nav__4156_38 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_write__4156(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const a0, nav__4156_42 const a1) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *t1;
 nav__4156_42 const *t3;
 uintptr_t t4;
 uintptr_t t10;
 uint64_t t5;
 uint64_t t11;
 uintptr_t *t7;
 nav__4156_50 *t8;
 nav__4156_50 t9;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *t12;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *t0;
 uint8_t *t13;
 nav__4156_42 t14;
 nav__4156_42 t2;
 uint8_t const *t15;
 nav__4156_38 t16;
 bool t6;
 t0 = a0;
 t1 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2207 *const *)&t0;
 t2 = a1;
 t3 = (nav__4156_42 const *)&t2;
 t4 = a1.len;
 t5 = t4;
 t6 = t5 == UINT64_C(0);
 if (t6) {
  return (nav__4156_38){(uintptr_t)0ul,0};
 }
 goto zig_block_0;

 zig_block_0:;
 t7 = (uintptr_t *)&a0->pos;
 t4 = (*t7);
 t8 = (nav__4156_50 *)&a0->buffer;
 t9 = (*t8);
 t10 = t9.len;
 t5 = t4;
 t11 = t10;
 t6 = t5 >= t11;
 if (t6) {
  return (nav__4156_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_NoSpaceLeft};
 }
 goto zig_block_1;

 zig_block_1:;
 t8 = (nav__4156_50 *)&a0->buffer;
 t9 = (*t8);
 t10 = t9.len;
 t7 = (uintptr_t *)&a0->pos;
 t4 = (*t7);
 t4 = t10 - t4;
 t10 = a1.len;
 t10 = (t4 < t10) ? t4 : t10;
 t11 = t10;
 t12 = (*t1);
 t8 = (nav__4156_50 *)&t12->buffer;
 t7 = (uintptr_t *)&a0->pos;
 t10 = (*t7);
 t9 = (*t8);
 t13 = t9.ptr;
 t13 = (uint8_t *)(((uintptr_t)t13) + (t10*sizeof(uint8_t)));
 t10 = t11;
 t9.ptr = t13;
 t9.len = t10;
 t14 = (*t3);
 t15 = t14.ptr;
 t15 = (uint8_t const *)(((uintptr_t)t15) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t10 = t11;
 t14.ptr = t15;
 t14.len = t10;
 t15 = t14.ptr;
 if (t9.len != 0) memcpy(t9.ptr, t15, t9.len * sizeof(uint8_t));
 t12 = (*t1);
 t7 = (uintptr_t *)&t12->pos;
 t10 = (*t7);
 t4 = t11;
 t4 = t10 + t4;
 (*t7) = t4;
 t6 = t11 == UINT64_C(0);
 if (t6) {
  return (nav__4156_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_NoSpaceLeft};
 }
 goto zig_block_2;

 zig_block_2:;
 t4 = t11;
 t16.payload = t4;
 t16.error = UINT16_C(0);
 return t16;
}

static nav__3796_38 io_dummyWrite__3796(nav__3796_40 const a0) {
 uintptr_t t0;
 nav__3796_38 t1;
 t0 = a0.len;
 t1.payload = t0;
 t1.error = UINT16_C(0);
 return t1;
}

static uint64_t const builtin_zig_backend__242 = UINT64_C(3);

static bool const start_simplified_logic__109 = false;

static uint8_t const builtin_output_mode__243 = UINT8_C(1);

static uint8_t const builtin_link_mode__244 = UINT8_C(0);

static bool const builtin_link_libc__254 = true;

static bool const posix_use_libc__1196 = true;

static struct Target_Os__563 const builtin_os__250 = {{ .linux = {{{6ul,14ul,6ul,{NULL,0xaaaaaaaaaaaaaaaaul},{NULL,0xaaaaaaaaaaaaaaaaul}},{6ul,14ul,6ul,{NULL,0xaaaaaaaaaaaaaaaaul},{NULL,0xaaaaaaaaaaaaaaaaul}}},{2ul,39ul,0ul,{NULL,0xaaaaaaaaaaaaaaaaul},{NULL,0xaaaaaaaaaaaaaaaaul}},UINT32_C(14)} },UINT8_C(9)};

static uint8_t const c_native_os__1638 = UINT8_C(9);

static struct Target_DynamicLinker__737 const Target_DynamicLinker_none__3360 = {"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252",UINT8_C(0)};

static bool const builtin_is_test__246 = false;

static uint8_t *heap_CAllocator_alloc__3484(void *const a0, uintptr_t const a1, uint8_t const a2, uintptr_t const a3) {
 uint64_t t0;
 uint8_t *t2;
 bool t1;
 (void)a0;
 (void)a3;
 t0 = a1;
 t1 = t0 > UINT64_C(0);
 debug_assert__179(t1);
 t2 = heap_CAllocator_alignedAlloc__3481(a1, a2);
 return t2;
}

static bool heap_CAllocator_resize__3485(void *const a0, nav__3485_40 const a1, uint8_t const a2, uintptr_t const a3, uintptr_t const a4) {
 uintptr_t t0;
 uint64_t t1;
 uint64_t t2;
 uint8_t *t4;
 bool t3;
 (void)a0;
 (void)a2;
 (void)a4;
 t0 = a1.len;
 t1 = a3;
 t2 = t0;
 t3 = t1 <= t2;
 if (t3) {
  return true;
 }
 goto zig_block_0;

 zig_block_0:;
 t4 = a1.ptr;
 t0 = heap_CAllocator_alignedAllocSize__3483(t4);
 t2 = a3;
 t1 = t0;
 t3 = t2 <= t1;
 if (t3) {
  return true;
 }
 goto zig_block_1;

 zig_block_1:;
 return false;
}

static uint8_t *heap_CAllocator_remap__3486(void *const a0, nav__3486_40 const a1, uint8_t const a2, uintptr_t const a3, uintptr_t const a4) {
 uint8_t *t0;
 uint8_t *t2;
 uint8_t *t3;
 bool t1;
 t1 = heap_CAllocator_resize__3485(a0, a1, a2, a3, a4);
 if (t1) {
  t2 = a1.ptr;
  t3 = (uint8_t *)t2;
  t0 = t3;
  goto zig_block_0;
 }
 t0 = NULL;
 goto zig_block_0;

 zig_block_0:;
 return t0;
}

static void heap_CAllocator_free__3487(void *const a0, nav__3487_40 const a1, uint8_t const a2, uintptr_t const a3) {
 uint8_t *t0;
 (void)a0;
 (void)a2;
 (void)a3;
 t0 = a1.ptr;
 heap_CAllocator_alignedFree__3482(t0);
 return;
}

static uint8_t *heap_CAllocator_alignedAlloc__3481(uintptr_t const a0, uint8_t const a1) {
 uint8_t const *t1;
 uintptr_t t3;
 uint64_t t4;
 void *t9;
 void *t5;
 uint8_t *t10;
 int t6;
 int32_t t7;
 uint8_t t2;
 uint8_t t0;
 bool t8;
 t0 = a1;
 t1 = (uint8_t const *)&t0;
 t2 = (*t1);
 t3 = mem_Alignment_toByteUnits__627(t2);
 t3 = ((uintptr_t)8ul > t3) ? (uintptr_t)8ul : t3;
 t4 = t3;
 t3 = t4;
 t6 = posix_memalign(&t5, t3, a0);
 t7 = t6;
 t8 = t7 != INT32_C(0);
 if (t8) {
  return NULL;
 }
 goto zig_block_0;

 zig_block_0:;
 t9 = t5;
 t10 = (uint8_t *)t9;
 return t10;
}

static uintptr_t heap_CAllocator_alignedAllocSize__3483(uint8_t *const a0) {
 void const *t0;
 void const *t1;
 uintptr_t t2;
 t0 = (void const *)a0;
 t1 = t0;
 t2 = malloc_usable_size(t1);
 return t2;
}

static void heap_CAllocator_alignedFree__3482(uint8_t *const a0) {
 void *t0;
 void *t1;
 t0 = (void *)a0;
 t1 = t0;
 free(t1);
 return;
}

static uintptr_t mem_Alignment_toByteUnits__627(uint8_t const a0) {
 uintptr_t t1;
 uint8_t t0;
 t0 = a0;
 t1 = zig_shlw_u64((uintptr_t)1ul, t0, UINT8_C(64));
 return t1;
}

static struct mem_Allocator__206 const heap_c_allocator__3449 = {((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)&heap_CAllocator_vtable__3476)};

static struct mem_Allocator__206 const c_allocator__230 = {((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)&heap_CAllocator_vtable__3476)};

static struct Target_Cpu_Feature_Set__754 const Target_Cpu_Feature_Set_empty__3405 = {{0ul,0ul,0ul,0ul,0ul}};

static struct Target_Cpu__722 const builtin_cpu__249 = {((struct Target_Cpu_Model__749 const *)&Target_x86_cpu_alderlake__3509),{{9528139926881771760ul,4854352097251152009ul,15835263048482096792ul,3ul,0ul}},UINT8_C(42)};

static uint8_t const builtin_abi__248 = UINT8_C(1);

static uint8_t const builtin_object_format__252 = UINT8_C(0);

static struct Target__561 const builtin_target__251 = {{((struct Target_Cpu_Model__749 const *)&Target_x86_cpu_alderlake__3509),{{9528139926881771760ul,4854352097251152009ul,15835263048482096792ul,3ul,0ul}},UINT8_C(42)},{{ .linux = {{{6ul,14ul,6ul,{NULL,0xaaaaaaaaaaaaaaaaul},{NULL,0xaaaaaaaaaaaaaaaaul}},{6ul,14ul,6ul,{NULL,0xaaaaaaaaaaaaaaaaul},{NULL,0xaaaaaaaaaaaaaaaaul}}},{2ul,39ul,0ul,{NULL,0xaaaaaaaaaaaaaaaaul},{NULL,0xaaaaaaaaaaaaaaaaul}},UINT32_C(14)} },UINT8_C(9)},UINT8_C(1),UINT8_C(0),{"/nix/store/p9kdj55g5l39nbrxpjyz5wc1m0s7rzsx-glibc-2.40-66/lib/ld-linux-x86-64.so.2\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252",UINT8_C(82)}};

static struct builtin_CallingConvention__261 const builtin_CallingConvention_c__830 = {{ .x86_64_sysv = {{UINT64_C(0xaaaaaaaaaaaaaaaa),true}} },UINT8_C(4)};

static uint8_t const (*const shared_RUNNER_CTL_FIFO__3613)[21] = &__anon_1813;

static uint8_t const (*const shared_RUNNER_ACK_FIFO__3614)[21] = &__anon_1873;

static uint8_t const mem_native_endian__353 = UINT8_C(1);

static uint8_t const fs_path_native_os__3849 = UINT8_C(9);

static uint8_t const fs_native_os__1008 = UINT8_C(9);

static uint8_t const fs_Dir_native_os__3736 = UINT8_C(9);

static uint8_t const os_linux_native_arch__2544 = UINT8_C(42);

static int const cimport_EINTR__6008 = 4;

static bool const Progress_is_windows__4263 = false;

static uint8_t const Thread_native_os__6148 = UINT8_C(9);

static bool const Thread_use_pthreads__6159 = true;

static bool const builtin_single_threaded__247 = false;

static uint8_t const builtin_mode__253 = UINT8_C(3);

static uint32_t const Thread_Mutex_FutexImpl_unlocked__6331 = UINT32_C(0);

static uint32_t const Thread_Mutex_Recursive_invalid_thread_id__6330 = UINT32_MAX;

static struct Thread_Mutex_Recursive__3148 const Thread_Mutex_Recursive_init__6326 = {0ul,{{{UINT32_C(0)}}},UINT32_MAX};

static struct Thread_Mutex_Recursive__3148 Progress_stderr_mutex__4318 = {0ul,{{{UINT32_C(0)}}},UINT32_MAX};

static bool const io_is_windows__3743 = false;

static bool const fs_File_is_windows__1184 = false;

static uint16_t const fmt_max_format_args__4343 = UINT16_C(32);

static bool const debug_runtime_safety__159 = false;

static bool const debug_default_enable_segfault_handler__204 = false;

static uint8_t const log_default_level__6638 = UINT8_C(0);

static struct std_Options__3668 const std_options__97 = {{0xaaaaaaaaaaaaaaaaul,true},{0xaaaaaaaaaaaaaaaaul,true},3ul,false,UINT8_C(0),false,true,false,false,false,UINT8_C(2)};

static bool const fs_Dir_have_flock__3737 = true;

static uint8_t const posix_native_os__1194 = UINT8_C(9);

static struct Progress__2682 Progress_global_progress__4267 = {{{{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)}},true},UINT64_C(0xaaaaaaaaaaaaaaaa),UINT64_C(0xaaaaaaaaaaaaaaaa),{(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},{(uint8_t *)&Progress_node_parents_buffer__4269,83ul},{(struct Progress_Node_Storage__3095 *)&Progress_node_storage_buffer__4270,83ul},{(uint8_t *)&Progress_node_freelist_buffer__4271,83ul},{-INT32_C(0x55555556)},{{{UINT32_C(0)}}},UINT32_C(0),UINT16_C(0),UINT16_C(0),{UINT8_C(0)},false,false,UINT8_MAX};

static uint8_t const (*const Progress_clear__4286)[4] = &__anon_4135;

static uint8_t const (*const fmt_ANY__4346)[4] = &__anon_4232;

static bool const posix_lfs64_abi__1624 = true;

static uint8_t const c_native_abi__1636 = UINT8_C(1);

static bool const posix_unexpected_error_tracing__1625 = false;

static uint8_t const unicode_native_endian__6346 = UINT8_C(1);

static uint32_t const unicode_replacement_character__6347 = UINT32_C(65533);

static uint32_t const Thread_Mutex_FutexImpl_contended__6333 = UINT32_C(3);

static nav__3465_38 const heap_page_size_min_default__3465 = {4096ul,false};

static uintptr_t const heap_page_size_min__3444 = 4096ul;

static zig_threadlocal nav__6853_38 Thread_LinuxThreadImpl_tls_thread_id__6853 = {UINT32_C(0xaaaaaaaa),true};

static uint32_t const Thread_Mutex_FutexImpl_locked__6332 = UINT32_C(1);

static bool const mem_backend_supports_vectors__381 = true;

static bool const builtin_valgrind_support__257 = false;

static bool const os_linux_extern_getauxval__2608 = false;

static struct mem_Allocator_VTable__209 const heap_CAllocator_vtable__3476 = {&heap_CAllocator_alloc__3484,&heap_CAllocator_resize__3485,&heap_CAllocator_remap__3486,&heap_CAllocator_free__3487};

static bool const heap_CAllocator_supports_malloc_size__3477 = true;

static bool const heap_CAllocator_supports_posix_memalign__3479 = true;

static struct Target_Cpu_Model__749 const Target_x86_cpu_alderlake__3509 = {{(uint8_t const *)&__anon_6198,9ul},{(uint8_t const *)&__anon_6198,9ul},{{9516916112185360560ul,4872366487170699401ul,11223533324467504792ul,3ul,0ul}}};

static uint8_t Progress_node_parents_buffer__4269[83] = {UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa)};

static struct Progress_Node_Storage__3095 Progress_node_storage_buffer__4270[83] = {{UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}};

static uint8_t Progress_node_freelist_buffer__4271[83] = {UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa)};
#ifndef WRAPPER_H
#define WRAPPER_H

#include "valgrind.h"
#include "callgrind.h"
#include <stdint.h>

uint8_t running_on_valgrind() {
    return RUNNING_ON_VALGRIND > 0;
}

void callgrind_dump_stats() {
    CALLGRIND_DUMP_STATS;
}

void callgrind_dump_stats_at(uint8_t const * pos_str) {
    CALLGRIND_DUMP_STATS_AT(pos_str);
}

void callgrind_zero_stats() {
    CALLGRIND_ZERO_STATS;
}

void callgrind_start_instrumentation() {
    CALLGRIND_START_INSTRUMENTATION;
}

void callgrind_stop_instrumentation() {
    CALLGRIND_STOP_INSTRUMENTATION;
}

#endif
