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
typedef struct anon__lazy_184 nav__4228_38;
struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315;
struct anon__lazy_184 {
 uint32_t payload;
 uint16_t error;
};
struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292;
struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *context;
};
struct io_Reader__2439;
typedef struct anon__lazy_143 nav__4228_50;
typedef struct anon__lazy_119 nav__4228_52;
struct io_Reader__2439 {
 void const *context;
 struct anon__lazy_143 (*readFn)(void const *, struct anon__lazy_119);
};
typedef struct anon__lazy_202 nav__4228_64;
struct anon__lazy_202 {
 uint16_t error;
 uint8_t payload[4];
};
typedef struct anon__lazy_184 nav__4227_38;
typedef struct anon__lazy_119 nav__4270_39;
typedef struct anon__lazy_206 nav__4270_40;
struct anon__lazy_206 {
 struct anon__lazy_119 payload;
 uint16_t error;
};
typedef struct anon__lazy_143 nav__4270_59;
typedef struct anon__lazy_210 nav__4270_69;
struct anon__lazy_210 {
 uint64_t payload;
 uint16_t error;
};
typedef struct anon__lazy_212 nav__4270_72;
struct anon__lazy_212 {
 uint16_t error;
 uint8_t payload[8];
};
typedef struct anon__lazy_58 nav__4269_39;
typedef struct anon__lazy_215 nav__4269_40;
struct anon__lazy_215 {
 struct anon__lazy_58 payload;
 uint16_t error;
};
typedef struct anon__lazy_119 nav__4269_55;
typedef struct anon__lazy_206 nav__4269_57;
typedef struct anon__lazy_219 nav__4268_39;
typedef struct anon__lazy_58 nav__4268_44;
struct anon__lazy_219 {
 struct shared_Command__struct_2007__2007 payload;
 uint16_t error;
};
typedef struct anon__lazy_184 nav__4268_57;
typedef struct anon__lazy_215 nav__4268_60;
typedef struct anon__lazy_219 nav__4267_39;
typedef struct anon__lazy_58 nav__4267_44;
typedef struct anon__lazy_227 nav__4275_39;
typedef struct anon__lazy_58 nav__4275_44;
struct anon__lazy_227 {
 struct shared_Command__struct_2008__2008 payload;
 uint16_t error;
};
typedef struct anon__lazy_215 nav__4275_57;
typedef struct anon__lazy_227 nav__4274_39;
typedef struct anon__lazy_58 nav__4274_44;
typedef struct anon__lazy_231 nav__4226_39;
typedef struct anon__lazy_58 nav__4226_45;
struct anon__lazy_231 {
 struct shared_Command__2004 payload;
 uint16_t error;
};
typedef struct anon__lazy_184 nav__4226_61;
typedef struct anon__lazy_219 nav__4226_63;
typedef struct anon__lazy_227 nav__4226_65;
typedef struct anon__lazy_231 nav__4225_39;
typedef struct anon__lazy_58 nav__4225_45;
typedef struct anon__lazy_231 nav__996_39;
typedef struct anon__lazy_58 nav__996_45;
typedef struct anon__lazy_119 nav__996_66;
typedef struct anon__lazy_143 nav__996_69;
typedef struct anon__lazy_206 nav__996_73;
struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 {
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
typedef struct anon__lazy_244 nav__997_57;
struct anon__lazy_244 {
 zig_i128 f0;
 uint8_t f1;
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
typedef struct anon__lazy_274 nav__3694_49;
struct anon__lazy_274 {
 uint16_t error;
 uint8_t payload[4096];
};
typedef struct anon__lazy_84 nav__3630_39;
typedef struct anon__lazy_58 nav__3630_42;
typedef struct anon__lazy_274 nav__3630_53;
typedef struct anon__lazy_119 nav__3983_42;
typedef struct anon__lazy_58 nav__4089_46;
typedef struct anon__lazy_119 nav__3985_41;
typedef struct anon__lazy_58 nav__1144_40;
typedef struct anon__lazy_143 nav__1144_47;
typedef struct anon__lazy_293 nav__1144_49;
struct anon__lazy_293 {
 uintptr_t f0;
 uint8_t f1;
};
struct os_linux_timespec__struct_2902__2902;
struct os_linux_timespec__struct_2902__2902 {
 intptr_t sec;
 intptr_t nsec;
};
typedef struct anon__lazy_298 nav__4131_41;
struct anon__lazy_298 {
 struct os_linux_timespec__struct_2902__2902 payload;
 uint16_t error;
};
typedef struct anon__lazy_244 nav__4131_43;
typedef struct anon__lazy_143 nav__1134_38;
typedef struct anon__lazy_119 nav__1134_41;
typedef struct anon__lazy_293 nav__1134_49;
typedef struct anon__lazy_119 nav__4159_39;
typedef struct anon__lazy_206 nav__4159_40;
typedef struct anon__lazy_132 nav__4159_51;
typedef struct anon__lazy_119 nav__4191_40;
typedef struct anon__lazy_143 nav__4224_38;
typedef struct anon__lazy_119 nav__4224_41;
typedef struct anon__lazy_202 nav__4266_39;
typedef struct anon__lazy_143 nav__4266_44;
typedef struct anon__lazy_119 nav__4266_46;
typedef struct anon__lazy_212 nav__4271_39;
typedef struct anon__lazy_143 nav__4271_44;
typedef struct anon__lazy_119 nav__4271_46;
typedef struct anon__lazy_143 nav__4231_38;
typedef struct anon__lazy_119 nav__4231_41;
typedef struct anon__lazy_58 nav__4272_40;
typedef struct anon__lazy_319 nav__4272_42;
struct anon__lazy_319 {
 uintptr_t payload;
 bool is_null;
};
typedef struct anon__lazy_119 nav__4276_40;
typedef struct anon__lazy_327 nav__4294_42;
struct anon__lazy_327 {
 intptr_t payload;
 bool is_null;
};
typedef struct anon__lazy_58 nav__3933_43;
struct Thread_Mutex_Recursive__3253;
struct Thread_Mutex__3251;
struct Thread_Mutex_DebugImpl__3266;
struct atomic_Value_28u32_29__3233;
struct atomic_Value_28u32_29__3233 {
 uint32_t raw;
};
struct Thread_Mutex_FutexImpl__3281;
struct Thread_Mutex_FutexImpl__3281 {
 struct atomic_Value_28u32_29__3233 state;
};
struct Thread_Mutex_DebugImpl__3266 {
 struct atomic_Value_28u32_29__3233 locking_thread;
 struct Thread_Mutex_FutexImpl__3281 impl;
};
struct Thread_Mutex__3251 {
 struct Thread_Mutex_DebugImpl__3266 impl;
};
struct Thread_Mutex_Recursive__3253 {
 uintptr_t lock_count;
 struct Thread_Mutex__3251 mutex;
 uint32_t thread_id;
};
typedef struct anon__lazy_143 nav__1143_38;
typedef struct anon__lazy_58 nav__1143_41;
typedef struct anon__lazy_58 nav__4554_40;
typedef struct anon__lazy_127 nav__4554_41;
typedef struct anon__lazy_143 nav__4554_44;
struct fmt_FormatOptions__3758;
typedef struct anon__lazy_319 nav__4554_55;
struct fmt_FormatOptions__3758 {
 struct anon__lazy_319 precision;
 struct anon__lazy_319 width;
 uint32_t fill;
 uint8_t alignment;
};
typedef struct anon__lazy_58 nav__3876_39;
typedef struct anon__lazy_274 nav__1628_39;
typedef struct anon__lazy_58 nav__1628_41;
typedef struct anon__lazy_319 nav__1628_46;
typedef struct anon__lazy_119 nav__1628_49;
typedef struct anon__lazy_84 nav__3631_39;
typedef struct anon__lazy_359 nav__3631_50;
struct anon__lazy_359 {
 int32_t payload;
 uint16_t error;
};
typedef struct anon__lazy_58 nav__4567_46;
typedef struct anon__lazy_119 nav__4031_39;
typedef struct anon__lazy_298 nav__1544_39;
typedef struct anon__lazy_143 nav__1133_38;
typedef struct anon__lazy_119 nav__1133_41;
typedef struct anon__lazy_132 nav__4568_39;
typedef struct anon__lazy_143 nav__4568_49;
typedef struct anon__lazy_143 nav__4183_38;
typedef struct anon__lazy_119 nav__4183_42;
typedef struct anon__lazy_293 nav__4183_52;
typedef struct anon__lazy_119 nav__4233_40;
typedef struct anon__lazy_143 nav__4233_43;
typedef struct anon__lazy_143 nav__4232_38;
typedef struct anon__lazy_119 nav__4232_41;
typedef struct anon__lazy_293 nav__4232_52;
typedef struct anon__lazy_58 nav__4091_39;
typedef struct anon__lazy_319 nav__4091_40;
typedef struct anon__lazy_119 nav__4569_39;
typedef struct anon__lazy_327 nav__4633_38;
typedef struct anon__lazy_379 nav__2615_39;
struct anon__lazy_379 {
 intptr_t f0;
 uint8_t f1;
};
typedef struct anon__lazy_58 nav__4635_40;
typedef struct anon__lazy_119 nav__4635_51;
typedef struct anon__lazy_293 nav__4636_39;
typedef struct anon__lazy_293 nav__4763_55;
struct Progress__2767;
struct Thread__2699;
struct Thread_PosixThreadImpl__2986;
struct Thread_PosixThreadImpl__2986 {
 void *handle;
};
struct Thread__2699 {
 struct Thread_PosixThreadImpl__2986 impl;
};
typedef struct anon__lazy_393 nav__4366_45;
struct anon__lazy_393 {
 struct Thread__2699 payload;
 bool is_null;
};
typedef struct anon__lazy_119 nav__4366_48;
struct Progress_Node_Storage__3212;
typedef struct anon__lazy_397 nav__4366_52;
struct anon__lazy_397 {
 struct Progress_Node_Storage__3212 *ptr;
 uintptr_t len;
};
struct Thread_ResetEvent__3198;
struct Thread_ResetEvent_FutexImpl__3225;
struct Thread_ResetEvent_FutexImpl__3225 {
 struct atomic_Value_28u32_29__3233 state;
};
struct Thread_ResetEvent__3198 {
 struct Thread_ResetEvent_FutexImpl__3225 impl;
};
struct Progress_TerminalMode__3195;
struct Progress_TerminalMode__3195 {
 uint8_t tag;
};
struct Progress__2767 {
 struct anon__lazy_393 update_thread;
 uint64_t refresh_rate_ns;
 uint64_t initial_delay_ns;
 struct anon__lazy_119 draw_buffer;
 struct anon__lazy_119 node_parents;
 struct anon__lazy_397 node_storage;
 struct anon__lazy_119 node_freelist;
 struct fs_File__546 terminal;
 struct Thread_ResetEvent__3198 redraw_event;
 uint32_t node_end_index;
 uint16_t rows;
 uint16_t cols;
 struct Progress_TerminalMode__3195 terminal_mode;
 bool done;
 bool need_clear;
 uint8_t node_freelist_first;
};
typedef struct anon__lazy_58 nav__4366_68;
typedef struct anon__lazy_143 nav__1363_38;
typedef struct anon__lazy_58 nav__1363_40;
typedef struct anon__lazy_58 nav__3826_40;
typedef struct anon__lazy_143 nav__3826_43;
typedef struct anon__lazy_293 nav__3826_52;
typedef struct anon__lazy_58 nav__5142_39;
typedef struct anon__lazy_319 nav__5142_44;
typedef struct anon__lazy_143 nav__5142_48;
typedef struct anon__lazy_293 nav__4764_52;
typedef struct anon__lazy_319 nav__5143_38;
typedef struct anon__lazy_58 nav__5143_40;
typedef struct anon__lazy_359 nav__1375_38;
typedef struct anon__lazy_58 nav__5215_45;
typedef struct anon__lazy_58 nav__5217_45;
typedef struct anon__lazy_143 nav__1355_38;
typedef struct anon__lazy_119 nav__1355_40;
typedef struct anon__lazy_143 nav__5220_38;
typedef struct anon__lazy_293 nav__5220_42;
typedef struct anon__lazy_132 nav__5221_39;
typedef struct anon__lazy_119 nav__5221_52;
typedef struct anon__lazy_143 nav__4230_38;
typedef struct anon__lazy_119 nav__4230_41;
typedef struct anon__lazy_58 nav__5243_39;
typedef struct anon__lazy_58 nav__4744_56;
typedef struct anon__lazy_319 nav__4744_58;
typedef struct anon__lazy_58 nav__4385_39;
typedef struct anon__lazy_393 nav__4385_52;
typedef struct anon__lazy_119 nav__4385_55;
typedef struct anon__lazy_397 nav__4385_59;
typedef struct anon__lazy_143 nav__3825_38;
typedef struct anon__lazy_58 nav__3825_41;
typedef struct anon__lazy_459 nav__4787_38;
struct anon__lazy_459 {
 uint16_t error;
 uint8_t payload;
};
typedef struct anon__lazy_143 nav__4803_38;
typedef struct anon__lazy_58 nav__4803_40;
typedef struct anon__lazy_293 nav__4803_46;
typedef struct anon__lazy_459 nav__4803_50;
typedef struct anon__lazy_184 nav__4803_52;
typedef struct anon__lazy_58 nav__5246_39;
typedef struct anon__lazy_319 nav__5246_44;
typedef struct anon__lazy_143 nav__5246_48;
typedef struct anon__lazy_293 nav__5246_55;
typedef struct anon__lazy_119 nav__5246_59;
typedef struct anon__lazy_459 nav__5246_62;
typedef struct anon__lazy_319 nav__5247_38;
typedef struct anon__lazy_58 nav__5247_40;
typedef struct anon__lazy_293 nav__5247_46;
typedef struct anon__lazy_474 nav__5247_52;
struct anon__lazy_474 {
 bool array[32];
};
typedef struct anon__lazy_476 nav__5247_54;
struct anon__lazy_476 {
 bool is_null;
 uint8_t payload;
};
typedef struct anon__lazy_481 nav__5247_60;
struct anon__lazy_481 {
 bool array[16];
};
typedef struct anon__lazy_143 nav__5251_48;
typedef struct anon__lazy_58 nav__5251_50;
typedef struct anon__lazy_58 nav__5252_45;
typedef struct anon__lazy_58 nav__5253_45;
typedef struct anon__lazy_184 nav__4793_38;
typedef struct anon__lazy_58 nav__4793_40;
typedef struct anon__lazy_492 nav__4793_48;
struct anon__lazy_492 {
 uint8_t array[2];
};
typedef struct anon__lazy_494 nav__4793_52;
struct anon__lazy_494 {
 uint8_t array[3];
};
typedef struct anon__lazy_496 nav__4793_56;
struct anon__lazy_496 {
 uint8_t array[4];
};
typedef struct anon__lazy_459 nav__4786_38;
typedef struct anon__lazy_459 nav__5276_38;
typedef struct anon__lazy_119 nav__5276_40;
typedef struct anon__lazy_459 nav__4788_38;
typedef struct anon__lazy_119 nav__4788_40;
typedef struct anon__lazy_58 nav__3830_40;
typedef struct anon__lazy_143 nav__3830_43;
typedef struct anon__lazy_293 nav__3830_50;
typedef struct anon__lazy_476 nav__5263_38;
typedef struct anon__lazy_474 nav__5263_40;
typedef struct anon__lazy_476 nav__5264_38;
typedef struct anon__lazy_481 nav__5264_40;
typedef struct anon__lazy_143 nav__4088_38;
typedef struct anon__lazy_58 nav__4088_41;
typedef struct anon__lazy_58 nav__5265_40;
typedef struct anon__lazy_511 nav__5269_39;
struct anon__lazy_511 {
 uint32_t payload;
 bool is_null;
};
typedef struct anon__lazy_184 nav__4795_38;
typedef struct anon__lazy_492 nav__4795_40;
typedef struct anon__lazy_184 nav__4797_38;
typedef struct anon__lazy_494 nav__4797_40;
typedef struct anon__lazy_184 nav__4801_38;
typedef struct anon__lazy_496 nav__4801_40;
typedef struct anon__lazy_143 nav__4009_38;
typedef struct anon__lazy_58 nav__4009_42;
typedef struct anon__lazy_58 nav__5305_40;
typedef struct anon__lazy_143 nav__5305_51;
typedef struct anon__lazy_240 nav__5286_41;
typedef struct anon__lazy_184 nav__4799_38;
typedef struct anon__lazy_494 nav__4799_40;
typedef struct anon__lazy_526 nav__5350_45;
struct anon__lazy_526 {
 int32_t payload;
 bool is_null;
};
typedef struct anon__lazy_58 nav__4003_41;
typedef struct anon__lazy_240 nav__5349_40;
typedef struct anon__lazy_526 nav__5367_38;
typedef struct anon__lazy_119 nav__4022_43;
typedef struct anon__lazy_143 nav__4022_52;
typedef struct anon__lazy_58 nav__4004_41;
typedef struct anon__lazy_119 nav__4004_47;
typedef struct anon__lazy_293 nav__4004_56;
typedef struct anon__lazy_143 nav__3947_38;
typedef struct anon__lazy_293 nav__3947_42;
typedef struct anon__lazy_119 nav__4020_43;
typedef struct anon__lazy_293 nav__5426_39;
typedef struct anon__lazy_119 nav__4021_43;
typedef struct anon__lazy_206 nav__4021_55;
typedef struct anon__lazy_119 nav__5427_39;
typedef struct anon__lazy_143 nav__5427_50;
typedef struct anon__lazy_119 nav__5428_39;
typedef struct anon__lazy_206 nav__5428_40;
typedef struct anon__lazy_132 nav__5428_51;
typedef struct anon__lazy_119 nav__5429_39;
typedef struct anon__lazy_119 nav__232_63;
typedef struct anon__lazy_119 nav__5431_52;
typedef struct anon__lazy_58 nav__341_58;
typedef struct anon__lazy_240 nav__341_66;
typedef struct anon__lazy_58 nav__234_61;
typedef struct anon__lazy_127 nav__234_63;
typedef struct anon__lazy_58 nav__5434_39;
typedef struct anon__lazy_127 nav__5434_40;
typedef struct anon__lazy_143 nav__5434_54;
typedef struct anon__lazy_58 nav__5435_40;
typedef struct anon__lazy_127 nav__5435_41;
typedef struct anon__lazy_143 nav__5435_44;
typedef struct anon__lazy_58 nav__5436_40;
typedef struct anon__lazy_127 nav__5436_41;
typedef struct anon__lazy_143 nav__5436_44;
typedef struct anon__lazy_319 nav__5436_55;
typedef struct anon__lazy_58 nav__342_58;
typedef struct anon__lazy_240 nav__342_66;
typedef struct anon__lazy_58 nav__235_61;
typedef struct anon__lazy_127 nav__235_63;
typedef struct anon__lazy_58 nav__5438_39;
typedef struct anon__lazy_127 nav__5438_40;
typedef struct anon__lazy_143 nav__5438_54;
typedef struct anon__lazy_58 nav__5439_40;
typedef struct anon__lazy_127 nav__5439_41;
typedef struct anon__lazy_143 nav__5439_44;
typedef struct anon__lazy_58 nav__5440_40;
typedef struct anon__lazy_127 nav__5440_41;
typedef struct anon__lazy_143 nav__5440_44;
typedef struct anon__lazy_319 nav__5440_55;
typedef struct anon__lazy_58 nav__343_56;
typedef struct anon__lazy_240 nav__343_66;
typedef struct anon__lazy_58 nav__236_61;
typedef struct anon__lazy_127 nav__236_63;
typedef struct anon__lazy_58 nav__5442_39;
typedef struct anon__lazy_58 nav__5443_39;
typedef struct anon__lazy_127 nav__5443_40;
typedef struct anon__lazy_143 nav__5443_54;
typedef struct anon__lazy_58 nav__5446_40;
typedef struct anon__lazy_127 nav__5446_41;
typedef struct anon__lazy_143 nav__5446_44;
typedef struct anon__lazy_474 nav__5447_45;
typedef struct anon__lazy_476 nav__5447_47;
typedef struct anon__lazy_293 nav__5447_49;
typedef struct anon__lazy_58 nav__5448_40;
typedef struct anon__lazy_127 nav__5448_41;
typedef struct anon__lazy_143 nav__5448_44;
typedef struct anon__lazy_319 nav__5448_55;
typedef struct anon__lazy_293 nav__5449_39;
typedef struct anon__lazy_293 nav__5451_39;
typedef struct anon__lazy_573 nav__5453_39;
struct anon__lazy_573 {
 uint64_t f0;
 uint8_t f1;
};
typedef struct anon__lazy_573 nav__5455_39;
typedef struct anon__lazy_58 nav__344_56;
typedef struct anon__lazy_240 nav__344_66;
typedef struct anon__lazy_580 nav__237_62;
struct anon__lazy_580 {
 uint8_t const *f0;
 uint8_t const *f1;
};
typedef struct anon__lazy_119 nav__237_65;
typedef struct anon__lazy_206 nav__237_67;
typedef struct anon__lazy_58 nav__237_71;
typedef struct anon__lazy_127 nav__237_73;
typedef struct anon__lazy_119 nav__5456_39;
typedef struct anon__lazy_206 nav__5456_40;
typedef struct anon__lazy_580 nav__5456_43;
typedef struct anon__lazy_293 nav__5456_54;
typedef struct anon__lazy_119 nav__5457_40;
typedef struct anon__lazy_293 nav__5457_49;
typedef struct anon__lazy_58 nav__5458_39;
typedef struct anon__lazy_127 nav__5458_40;
typedef struct anon__lazy_143 nav__5458_54;
typedef struct anon__lazy_119 nav__5459_39;
typedef struct anon__lazy_206 nav__5459_40;
typedef struct anon__lazy_580 nav__5459_43;
typedef struct anon__lazy_319 nav__5459_54;
typedef struct anon__lazy_119 nav__5460_39;
typedef struct anon__lazy_58 nav__5461_40;
typedef struct anon__lazy_127 nav__5461_41;
typedef struct anon__lazy_143 nav__5461_44;
typedef struct anon__lazy_580 nav__5504_40;
typedef struct anon__lazy_143 nav__5504_43;
typedef struct anon__lazy_58 nav__5504_44;
typedef struct anon__lazy_319 nav__5504_55;
typedef struct anon__lazy_580 nav__5462_39;
struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021;
struct io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29__6013;
struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 {
 uint64_t bytes_written;
};
struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__6035;
struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__6035 {
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *context;
};
typedef struct anon__lazy_143 nav__5462_53;
typedef struct anon__lazy_58 nav__5462_54;
typedef struct anon__lazy_319 nav__5463_38;
typedef struct anon__lazy_119 nav__5464_39;
typedef struct anon__lazy_206 nav__5464_40;
typedef struct anon__lazy_580 nav__5464_42;
struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6131;
struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6131 {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *context;
};
typedef struct anon__lazy_143 nav__5464_57;
typedef struct anon__lazy_58 nav__5464_58;
typedef struct anon__lazy_58 nav__5465_40;
typedef struct anon__lazy_127 nav__5465_41;
typedef struct anon__lazy_143 nav__5465_44;
typedef struct anon__lazy_319 nav__5465_55;
typedef struct anon__lazy_143 nav__5503_38;
typedef struct anon__lazy_58 nav__5503_41;
typedef struct anon__lazy_319 nav__5505_42;
typedef struct anon__lazy_143 nav__5505_46;
typedef struct anon__lazy_58 nav__5505_47;
typedef struct anon__lazy_143 nav__5518_38;
typedef struct anon__lazy_58 nav__5518_41;
typedef struct anon__lazy_119 nav__4189_39;
typedef struct anon__lazy_143 nav__5488_38;
typedef struct anon__lazy_58 nav__5488_42;
typedef struct anon__lazy_573 nav__5488_51;
typedef struct anon__lazy_143 nav__4184_38;
typedef struct anon__lazy_58 nav__4184_42;
typedef struct anon__lazy_119 nav__4184_50;
typedef struct anon__lazy_293 nav__4184_55;
typedef struct anon__lazy_143 nav__3796_38;
typedef struct anon__lazy_58 nav__3796_40;
struct Target_Os__563;
struct Target_Os_VersionRange__619;
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
struct Target_Os_VersionRange__619 {
 union {
  struct SemanticVersion_Range__625 semver;
  struct Target_Os_HurdVersionRange__627 hurd;
  struct Target_Os_LinuxVersionRange__629 linux;
  struct Target_Os_WindowsVersion_Range__685 windows;
 } payload;
 uint8_t tag;
};
struct Target_Os__563 {
 struct Target_Os_VersionRange__619 version_range;
 uint8_t tag;
};
struct Target_DynamicLinker__738;
struct Target_DynamicLinker__738 {
 uint8_t buffer[255];
 uint8_t len;
};
typedef struct anon__lazy_119 nav__3485_40;
typedef struct anon__lazy_119 nav__3486_40;
typedef struct anon__lazy_119 nav__3487_40;
typedef struct anon__lazy_119 nav__3449_46;
typedef struct anon__lazy_119 nav__230_46;
struct Target_Cpu_Feature_Set__755;
struct Target_Cpu_Feature_Set__755 {
 uintptr_t ints[5];
};
struct Target_Cpu__723;
struct Target_Cpu_Model__750;
struct Target_Cpu__723 {
 struct Target_Cpu_Model__750 const *model;
 struct Target_Cpu_Feature_Set__755 features;
 uint8_t arch;
};
typedef struct anon__lazy_58 nav__249_46;
struct Target_Cpu_Model__750 {
 struct anon__lazy_58 name;
 struct anon__lazy_58 llvm_name;
 struct Target_Cpu_Feature_Set__755 features;
};
struct Target__561;
typedef struct anon__lazy_58 nav__251_51;
struct Target__561 {
 struct Target_Cpu__723 cpu;
 struct Target_Os__563 os;
 uint8_t abi;
 uint8_t ofmt;
 struct Target_DynamicLinker__738 dynamic_linker;
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
struct std_Options__3770;
typedef struct anon__lazy_319 nav__97_39;
struct std_Options__3770 {
 struct anon__lazy_319 page_size_min;
 struct anon__lazy_319 page_size_max;
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
typedef struct anon__lazy_393 nav__4341_44;
typedef struct anon__lazy_119 nav__4341_47;
typedef struct anon__lazy_397 nav__4341_51;
struct Progress_Node_Storage__3212 {
 uint32_t completed_count;
 uint32_t estimated_total_count;
 zig_align(8) uint8_t name[40];
};
typedef struct anon__lazy_319 nav__3465_38;
typedef struct anon__lazy_511 nav__5268_38;
typedef struct anon__lazy_119 nav__3476_43;
typedef struct anon__lazy_58 nav__3509_40;
static uint8_t const __anon_1813[21];
static uint8_t const __anon_1873[21];
static uint8_t const __anon_2953[89];
static uint8_t const __anon_3408[36];
static uint8_t const __anon_3852[1];
static uint8_t const __anon_4593[4];
static uint8_t const __anon_4727[8];
static uint8_t const __anon_4962[18];
static uint8_t const __anon_5070[3];
static uint8_t const __anon_5680[27];
static uint8_t const __anon_5755[26];
static uint8_t const __anon_5889[34];
static uint8_t const __anon_6085[10];
static uint8_t const __anon_6100[1];
static uint8_t const __anon_6119[1];
static uint8_t const __anon_6186[27];
static uint8_t const __anon_4687[4];
static uint8_t const __anon_6259[10];
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
static nav__4228_38 bincode_deserializeInt__anon_2425__4228(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315);
static nav__4227_38 bincode_deserializeAlloc__anon_2414__4227(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315, struct mem_Allocator__206);
static nav__4270_40 bincode_deserializePointerAlloc__anon_2549__4270(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315, struct mem_Allocator__206);
static nav__4269_40 bincode_deserializeAlloc__anon_2536__4269(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315, struct mem_Allocator__206);
static nav__4268_39 bincode_deserializeStructAlloc__anon_2511__4268(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315, struct mem_Allocator__206);
static nav__4267_39 bincode_deserializeAlloc__anon_2482__4267(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315, struct mem_Allocator__206);
static uint16_t bincode_deserializeAlloc__anon_2600__4273(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315, struct mem_Allocator__206);
static nav__4275_39 bincode_deserializeStructAlloc__anon_2662__4275(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315, struct mem_Allocator__206);
static nav__4274_39 bincode_deserializeAlloc__anon_2643__4274(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315, struct mem_Allocator__206);
static zig_cold nav__4226_39 bincode_deserializeUnionAlloc__anon_2409__4226(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315, struct mem_Allocator__206);
static nav__4225_39 bincode_deserializeAlloc__anon_2323__4225(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315, struct mem_Allocator__206);
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
static zig_cold zig_noreturn void debug_no_panic_castTruncatedData__4103(void);
static uint8_t const (*mem_asBytes__anon_2188__4118(uint32_t const *))[4];
static uint16_t fs_File_writeAll__1144(struct fs_File__546, nav__1144_40);
static zig_i128 time_nanoTimestamp__4131(void);
static zig_cold zig_noreturn void debug_no_panic_integerOverflow__4105(void);
static nav__1134_38 fs_File_readAll__1134(struct fs_File__546, nav__1134_41);
static nav__4159_40 mem_Allocator_alloc__anon_2273__4159(struct mem_Allocator__206, uintptr_t);
static struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 io_fixed_buffer_stream_fixedBufferStream__anon_2295__4191(nav__4191_40);
static struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_reader__4180(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *);
static nav__4224_38 io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29_typeEras__4224(void const *, nav__4224_41);
static nav__4266_39 io_Reader_readBytesNoEof__anon_2468__4266(struct io_Reader__2439);
static zig_cold zig_noreturn void debug_no_panic_invalidEnumValue__4113(void);
static nav__4271_39 io_Reader_readBytesNoEof__anon_2562__4271(struct io_Reader__2439);
static nav__4231_38 io_Reader_readAll__4231(struct io_Reader__2439, nav__4231_41);
static zig_cold zig_noreturn void bincode_invalidProtocol__anon_2585__4272(void);
static zig_cold zig_noreturn void debug_no_panic_reachedUnreachable__4098(void);
static void mem_Allocator_free__anon_2696__4276(struct mem_Allocator__206, nav__4276_40);
static void Thread_sleep__4294(uint64_t);
static void shared_Command_deinit__3933(struct shared_Command__2004, struct mem_Allocator__206);
static uint8_t mem_Alignment_fromByteUnits__628(uintptr_t);
static zig_cold zig_noreturn void debug_no_panic_startGreaterThanEnd__4095(uintptr_t, uintptr_t);
static zig_cold zig_noreturn void debug_no_panic_outOfBounds__4094(uintptr_t, uintptr_t);
static zig_cold zig_noreturn void debug_no_panic_incorrectAlignment__4101(void);
static void Progress_lockStdErr__4355(void);
static int32_t io_getStdErrHandle__3755(void);
static nav__1143_38 fs_File_write__1143(struct fs_File__546, nav__1143_41);
static uint16_t fmt_format__anon_2786__4554(struct io_Writer__1950, nav__4554_41);
static void Progress_unlockStdErr__4356(void);
static bool fs_path_isAbsolutePosix__3876(nav__3876_39);
static nav__1628_39 posix_toPosixPath__1628(nav__1628_41);
static uint16_t fs_Dir_accessZ__3695(struct fs_Dir__1822, uint8_t const *, struct fs_File_OpenFlags__1820);
static nav__3631_39 fs_Dir_openFileZ__3631(struct fs_Dir__1822, uint8_t const *, struct fs_File_OpenFlags__1820);
static uint16_t bincode_serializeUnion__anon_2872__4567(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, struct shared_Command__2004);
static nav__4031_39 array_list_ArrayListAligned_28u8_2cnull_29_allocatedSlice__4031(struct array_list_ArrayListAligned_28u8_2cnull_29__2035);
static nav__1544_39 posix_clock_gettime__1544(uint32_t);
static zig_cold zig_noreturn void debug_no_panic_corruptSwitch__4111(void);
static nav__1133_38 fs_File_read__1133(struct fs_File__546, nav__1133_41);
static nav__4568_39 mem_Allocator_allocWithSizeAndAlignment__anon_2933__4568(struct mem_Allocator__206, uintptr_t, uintptr_t);
static nav__4183_38 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_read__4183(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *, nav__4183_42);
static uint16_t io_Reader_readNoEof__4233(struct io_Reader__2439, nav__4233_40);
static nav__4232_38 io_Reader_readAtLeast__4232(struct io_Reader__2439, nav__4232_41, uintptr_t);
static zig_cold zig_noreturn void debug_no_panic_call__4091(nav__4091_39, nav__4091_40);
static nav__4569_39 mem_sliceAsBytes__anon_2970__4569(nav__4569_39);
static nav__4633_38 math_cast__anon_3009__4633(uint64_t);
static uintptr_t os_linux_clock_nanosleep__2718(uint32_t, uint32_t, struct os_linux_timespec__struct_2902__2902 const *, struct os_linux_timespec__struct_2902__2902 *);
static uint16_t os_linux_errnoFromSyscall__2615(uintptr_t);
static void mem_Allocator_free__anon_3189__4635(struct mem_Allocator__206, nav__4635_40);
static bool math_isPowerOfTwo__anon_3191__4636(uintptr_t);
static void Thread_Mutex_Recursive_lock__4763(struct Thread_Mutex_Recursive__3253 *);
static uint16_t Progress_clearWrittenWithEscapeCodes__4366(void);
static nav__1363_38 posix_write__1363(int32_t, nav__1363_40);
static uint16_t io_Writer_writeAll__3826(struct io_Writer__1950, nav__3826_40);
static uint16_t fmt_formatType__anon_3846__5142(nav__5142_39, struct fmt_FormatOptions__3758, struct io_Writer__1950, uintptr_t);
static void Thread_Mutex_Recursive_unlock__4764(struct Thread_Mutex_Recursive__3253 *);
static nav__5143_38 mem_indexOfScalar__anon_3870__5143(nav__5143_40, uint8_t);
static zig_cold zig_noreturn void debug_no_panic_memcpyLenMismatch__4115(void);
static zig_cold zig_noreturn void debug_no_panic_memcpyAlias__4116(void);
static uint16_t posix_faccessatZ__1519(int32_t, uint8_t const *, uint32_t, uint32_t);
static nav__1375_38 posix_openatZ__1375(int32_t, uint8_t const *, uint32_t, uintptr_t);
static uint16_t posix_flock__1536(int32_t, int32_t);
static void posix_close__1333(int32_t);
static uint16_t bincode_serialize__anon_3993__5213(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, uint32_t);
static zig_cold zig_noreturn void debug_no_panic_inactiveUnionField__anon_3995__5214(uint8_t, uint8_t);
static uint16_t bincode_serialize__anon_3997__5215(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, struct shared_Command__struct_2007__2007);
static uint16_t bincode_serialize__anon_3999__5216(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060);
static uint16_t bincode_serialize__anon_4001__5217(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, struct shared_Command__struct_2008__2008);
static uint16_t posix_errno__anon_4014__5219(int);
static uint16_t posix_unexpectedErrno__1627(uint16_t);
static nav__1355_38 posix_read__1355(int32_t, nav__1355_40);
static nav__5220_38 math_mul__anon_4028__5220(uintptr_t, uintptr_t);
static nav__5221_39 mem_Allocator_allocBytesWithAlignment__anon_4030__5221(struct mem_Allocator__206, uintptr_t, uintptr_t);
static nav__4230_38 io_Reader_read__4230(struct io_Reader__2439, nav__4230_41);
static uintptr_t os_linux_x86_64_syscall4__4598(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
static nav__5243_39 mem_sliceAsBytes__anon_4546__5243(nav__5243_39);
static uint32_t Thread_getCurrentId__4303(void);
static void Thread_Mutex_lock__4744(struct Thread_Mutex__3251 *);
static uint16_t Progress_write__4385(nav__4385_39);
static uint16_t posix_errno__anon_4609__5245(intptr_t);
static zig_cold zig_noreturn void debug_no_panic_negativeToUnsigned__4104(void);
static nav__3825_38 io_Writer_write__3825(struct io_Writer__1950, nav__3825_41);
static nav__4787_38 unicode_utf8ByteSequenceLength__4787(uint8_t);
static nav__4803_38 unicode_utf8CountCodepoints__4803(nav__4803_40);
static uint16_t fmt_formatBuf__anon_4737__5246(nav__5246_39, struct fmt_FormatOptions__3758, struct io_Writer__1950);
static void Thread_Mutex_unlock__4745(struct Thread_Mutex__3251 *);
static nav__5247_38 mem_indexOfScalarPos__anon_4748__5247(nav__5247_40, uintptr_t, uint8_t);
static uint16_t bincode_serializeInt__anon_4870__5251(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, uint32_t);
static uint16_t bincode_serializeStruct__anon_4875__5252(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, struct shared_Command__struct_2007__2007);
static uint16_t bincode_serializeStruct__anon_4876__5253(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, struct shared_Command__struct_2008__2008);
static uint32_t Thread_PosixThreadImpl_getCurrentId__4572(void);
static void Thread_Mutex_FutexImpl_lock__4772(struct Thread_Mutex_FutexImpl__3281 *);
static nav__4793_38 unicode_utf8Decode__4793(nav__4793_40);
static nav__4786_38 unicode_utf8CodepointSequenceLength__4786(uint32_t);
static nav__5276_38 unicode_utf8EncodeImpl__anon_5201__5276(uint32_t, nav__5276_40);
static nav__4788_38 unicode_utf8Encode__4788(uint32_t, nav__4788_40);
static uint16_t io_Writer_writeBytesNTimes__3830(struct io_Writer__1950, nav__3830_40, uintptr_t);
static void Thread_Mutex_FutexImpl_unlock__4775(struct Thread_Mutex_FutexImpl__3281 *);
static bool math_isPowerOfTwo__anon_5093__5256(void);
static nav__5263_38 simd_firstTrue__anon_5122__5263(nav__5263_40);
static zig_cold zig_noreturn void debug_no_panic_unwrapNull__4099(void);
static nav__5264_38 simd_firstTrue__anon_5143__5264(nav__5264_40);
static nav__4088_38 io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29___4088(void const *, nav__4088_41);
static uint16_t bincode_serialize__anon_5173__5265(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, nav__5265_40);
static uint32_t Thread_LinuxThreadImpl_getCurrentId__5269(void);
static bool Thread_Mutex_FutexImpl_tryLock__4773(struct Thread_Mutex_FutexImpl__3281 *);
static zig_cold void Thread_Mutex_FutexImpl_lockSlow__4774(struct Thread_Mutex_FutexImpl__3281 *);
static nav__4795_38 unicode_utf8Decode2__4795(nav__4795_40);
static nav__4797_38 unicode_utf8Decode3__4797(nav__4797_40);
static nav__4801_38 unicode_utf8Decode4__4801(nav__4801_40);
static zig_cold zig_noreturn void debug_no_panic_shiftRhsTooBig__4112(void);
static bool unicode_isSurrogateCodepoint__4866(uint32_t);
static zig_cold void Thread_Futex_wake__5288(struct atomic_Value_28u32_29__3233 const *, uint32_t);
static nav__4009_38 array_list_ArrayListAligned_28u8_2cnull_29_appendWrite__4009(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *, nav__4009_42);
static uint16_t bincode_serializePointer__anon_5319__5305(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060, nav__5305_40);
static int32_t os_linux_gettid__2743(void);
static zig_cold void Thread_Futex_wait__5286(struct atomic_Value_28u32_29__3233 const *, uint32_t);
static nav__4799_38 unicode_utf8Decode3AllowSurrogateHalf__4799(nav__4799_40);
static void Thread_Futex_LinuxImpl_wake__5350(struct atomic_Value_28u32_29__3233 const *, uint32_t);
static uint16_t array_list_ArrayListAligned_28u8_2cnull_29_appendSlice__4003(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *, nav__4003_41);
static uintptr_t os_linux_x86_64_syscall0__4594(uintptr_t);
static uint16_t Thread_Futex_LinuxImpl_wait__5349(struct atomic_Value_28u32_29__3233 const *, uint32_t, nav__5349_40);
static zig_cold zig_noreturn void debug_no_panic_unwrapError__4093(uint16_t);
static nav__5367_38 math_cast__anon_5474__5367(uint32_t);
static uintptr_t os_linux_futex_wake__2629(int32_t const *, uint32_t, int32_t);
static uint16_t array_list_ArrayListAligned_28u8_2cnull_29_ensureUnusedCapacity__4022(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *, uintptr_t);
static void array_list_ArrayListAligned_28u8_2cnull_29_appendSliceAssumeCapacity__4004(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *, nav__4004_41);
static uintptr_t os_linux_futex_wait__2628(int32_t const *, uint32_t, int32_t, struct os_linux_timespec__struct_2902__2902 const *);
static uintptr_t os_linux_x86_64_syscall3__4597(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
static nav__3947_38 array_list_addOrOom__3947(uintptr_t, uintptr_t);
static uint16_t array_list_ArrayListAligned_28u8_2cnull_29_ensureTotalCapacity__4020(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *, uintptr_t);
static uintptr_t array_list_ArrayListAlignedUnmanaged_28u8_2cnull_29_growCapacity__5426(uintptr_t, uintptr_t);
static uint16_t array_list_ArrayListAligned_28u8_2cnull_29_ensureTotalCapacityPrecise__4021(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *, uintptr_t);
static nav__5427_39 mem_Allocator_remap__anon_5545__5427(struct mem_Allocator__206, nav__5427_39, uintptr_t);
static nav__5428_40 mem_Allocator_alignedAlloc__anon_5550__5428(struct mem_Allocator__206, uintptr_t);
static nav__5429_39 mem_bytesAsSlice__anon_5565__5429(nav__5429_39);
static zig_cold zig_noreturn void debug_no_panic_exactDivisionRemainder__4109(void);
#define c_instrument_hooks_deinit__232 instrument_hooks_deinit
zig_extern void instrument_hooks_deinit(struct instruments_root_InstrumentHooks__188 *);
static zig_cold zig_noreturn void debug_no_panic_inactiveUnionField__anon_5577__5430(uint8_t, uint8_t);
static void instruments_perf_PerfInstrument_deinit__338(struct instruments_perf_PerfInstrument__200 *);
static void mem_Allocator_destroy__anon_5585__5431(struct mem_Allocator__206, struct instruments_root_InstrumentHooks__188 *);
static void fifo_UnixPipe_Writer_deinit__992(struct fifo_UnixPipe_Writer__538 *);
static void fifo_UnixPipe_Reader_deinit__999(struct fifo_UnixPipe_Reader__540 *);
static void fs_File_close__1090(struct fs_File__546);
#define c_instrument_hooks_is_instrumented__233 instrument_hooks_is_instrumented
zig_extern bool instrument_hooks_is_instrumented(struct instruments_root_InstrumentHooks__188 *);
static zig_cold uint16_t instruments_perf_PerfInstrument_start_benchmark__341(struct instruments_perf_PerfInstrument__200 *);
#define c_instrument_hooks_start_benchmark__234 instrument_hooks_start_benchmark
zig_extern void instrument_hooks_start_benchmark(struct instruments_root_InstrumentHooks__188 *);
static void debug_print__anon_5641__5434(nav__5434_40);
static uint16_t io_Writer_print__anon_5642__5435(struct io_Writer__1950, nav__5435_41);
static uint16_t fmt_format__anon_5643__5436(struct io_Writer__1950, nav__5436_41);
static zig_cold uint16_t instruments_perf_PerfInstrument_stop_benchmark__342(struct instruments_perf_PerfInstrument__200 *);
#define c_instrument_hooks_stop_benchmark__235 instrument_hooks_stop_benchmark
zig_extern void instrument_hooks_stop_benchmark(struct instruments_root_InstrumentHooks__188 *);
static void debug_print__anon_5717__5438(nav__5438_40);
static uint16_t io_Writer_print__anon_5718__5439(struct io_Writer__1950, nav__5439_41);
static uint16_t fmt_format__anon_5719__5440(struct io_Writer__1950, nav__5440_41);
static uint16_t instruments_perf_PerfInstrument_set_executed_benchmark__343(struct instruments_perf_PerfInstrument__200 *, uint32_t, uint8_t const *);
#define c_instrument_hooks_executed_benchmark__236 instrument_hooks_executed_benchmark
zig_extern void instrument_hooks_executed_benchmark(struct instruments_root_InstrumentHooks__188 *, uint32_t, uint8_t const *);
static zig_cold zig_noreturn void debug_no_panic_castToNull__4100(void);
static nav__5442_39 mem_span__anon_5802__5442(uint8_t const *);
static void debug_print__anon_5810__5443(nav__5443_40);
static uintptr_t mem_len__anon_5818__5444(uint8_t const *);
static zig_cold zig_noreturn void debug_no_panic_sentinelMismatch__anon_5821__5445(uint8_t, uint8_t);
static uint16_t io_Writer_print__anon_5822__5446(struct io_Writer__1950, nav__5446_41);
static uintptr_t mem_indexOfSentinel__anon_5828__5447(uint8_t const *);
static uint16_t fmt_format__anon_5829__5448(struct io_Writer__1950, nav__5448_41);
static uintptr_t mem_alignForward__anon_5842__5449(uintptr_t, uintptr_t);
static bool mem_isAligned__499(uintptr_t, uintptr_t);
static bool mem_isValidAlignGeneric__anon_5900__5450(uintptr_t);
static uintptr_t mem_alignBackward__anon_5901__5451(uintptr_t, uintptr_t);
static bool mem_isAlignedGeneric__anon_5905__5452(uint64_t, uint64_t);
static uint64_t mem_alignBackward__anon_5907__5453(uint64_t, uint64_t);
static bool mem_isValidAlignGeneric__anon_5909__5454(uint64_t);
static bool math_isPowerOfTwo__anon_5911__5455(uint64_t);
static uint16_t instruments_perf_PerfInstrument_set_integration__344(struct instruments_perf_PerfInstrument__200 *, uint8_t const *, uint8_t const *);
#define c_instrument_hooks_set_integration__237 instrument_hooks_set_integration
zig_extern void instrument_hooks_set_integration(struct instruments_root_InstrumentHooks__188 *, uint8_t const *, uint8_t const *);
static nav__5456_40 fmt_allocPrintZ__anon_5943__5456(struct mem_Allocator__206, nav__5456_43);
static void mem_Allocator_free__anon_5945__5457(struct mem_Allocator__206, nav__5457_40);
static void debug_print__anon_5957__5458(nav__5458_40);
static nav__5459_40 fmt_allocPrint__anon_5973__5459(struct mem_Allocator__206, nav__5459_43);
static nav__5460_39 mem_sliceAsBytes__anon_5980__5460(nav__5460_39);
static uint16_t io_Writer_print__anon_5981__5461(struct io_Writer__1950, nav__5461_41);
static uint16_t fmt_format__anon_6054__5504(struct io_Writer__1950, nav__5504_40);
static uint64_t fmt_count__anon_5988__5462(nav__5462_39);
static nav__5463_38 math_cast__anon_5990__5463(uint64_t);
static nav__5464_40 fmt_bufPrint__anon_5999__5464(nav__5464_39, nav__5464_42);
static uint16_t fmt_format__anon_6002__5465(struct io_Writer__1950, nav__5465_41);
static struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 io_counting_writer_countingWriter__anon_6024__5490(void);
static struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__6035 io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_writer__5489(struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *);
static nav__5503_38 io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWr__5503(void const *, nav__5503_41);
static uint16_t fmt_formatType__anon_6094__5505(uint8_t const *, struct fmt_FormatOptions__3758, struct io_Writer__1950, uintptr_t);
static struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6131 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_writer__4181(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *);
static nav__5518_38 io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write__5518(void const *, nav__5518_41);
static nav__4189_39 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_getWritten__4189(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292);
static nav__5488_38 io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_write__5488(struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *, nav__5488_42);
static nav__4184_38 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_write__4184(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *, nav__4184_42);
static nav__3796_38 io_dummyWrite__3796(nav__3796_40);
static uint64_t const builtin_zig_backend__242;
static bool const start_simplified_logic__109;
static uint8_t const builtin_output_mode__243;
static uint8_t const builtin_link_mode__244;
static bool const builtin_link_libc__254;
static bool const posix_use_libc__1196;
static struct Target_Os__563 const builtin_os__250;
static uint8_t const c_native_os__1638;
static struct Target_DynamicLinker__738 const Target_DynamicLinker_none__3360;
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
static struct Target_Cpu_Feature_Set__755 const Target_Cpu_Feature_Set_empty__3405;
static struct Target_Cpu__723 const builtin_cpu__249;
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
static uint8_t const Thread_native_os__4282;
static bool const Thread_use_pthreads__4293;
static bool const Progress_is_windows__4337;
static bool const builtin_single_threaded__247;
static uint8_t const builtin_mode__253;
static uint32_t const Thread_Mutex_FutexImpl_unlocked__4769;
static uint32_t const Thread_Mutex_Recursive_invalid_thread_id__4765;
static struct Thread_Mutex_Recursive__3253 const Thread_Mutex_Recursive_init__4761;
static struct Thread_Mutex_Recursive__3253 Progress_stderr_mutex__4392;
static bool const io_is_windows__3743;
static bool const fs_File_is_windows__1184;
static uint16_t const fmt_max_format_args__4417;
static bool const debug_runtime_safety__159;
static uint8_t const debug_native_os__145;
static bool const debug_have_segfault_handling_support__202;
static bool const debug_default_enable_segfault_handler__204;
static uint8_t const log_default_level__5076;
static struct std_Options__3770 const std_options__97;
zig_extern int flock(int32_t, int);
static bool const fs_Dir_have_flock__3737;
static uint8_t const posix_native_os__1194;
zig_extern int clock_gettime(uint32_t, struct os_linux_timespec__struct_2902__2902 *);
static struct Progress__2767 Progress_global_progress__4341;
static uint8_t const (*const Progress_clear__4360)[4];
zig_extern intptr_t write(int32_t, uint8_t const *, uintptr_t);
static uint8_t const (*const fmt_ANY__4420)[4];
zig_extern int faccessat(int32_t, uint8_t const *, unsigned int, unsigned int);
static bool const posix_lfs64_abi__1624;
zig_extern int openat64(int, uint8_t const *, uint32_t, ...);
zig_extern int close(int32_t);
static uint8_t const c_native_abi__1636;
zig_extern int *zig_e___errno_location(void) zig_mangled(zig_e___errno_location, "__errno_location");
static bool const posix_unexpected_error_tracing__1625;
zig_extern intptr_t read(int32_t, uint8_t *, uintptr_t);
static uint8_t const unicode_native_endian__4784;
static uint32_t const unicode_replacement_character__4785;
static bool const mem_backend_supports_vectors__381;
static bool const builtin_valgrind_support__257;
static uint32_t const Thread_Mutex_FutexImpl_contended__4771;
static nav__3465_38 const heap_page_size_min_default__3465;
static uintptr_t const heap_page_size_min__3444;
static zig_threadlocal nav__5268_38 Thread_LinuxThreadImpl_tls_thread_id__5268;
static uint32_t const Thread_Mutex_FutexImpl_locked__4770;
zig_extern void callgrind_zero_stats(void);
zig_extern void callgrind_start_instrumentation(void);
zig_extern void callgrind_stop_instrumentation(void);
zig_extern void callgrind_dump_stats_at(uint8_t const *);
static bool const os_linux_extern_getauxval__2608;
static struct mem_Allocator_VTable__209 const heap_CAllocator_vtable__3476;
zig_extern uintptr_t malloc_usable_size(void const *);
static bool const heap_CAllocator_supports_malloc_size__3477;
static bool const heap_CAllocator_supports_posix_memalign__3479;
zig_extern int posix_memalign(void **, uintptr_t, uintptr_t);
zig_extern void free(void *);
static struct Target_Cpu_Model__750 const Target_x86_cpu_alderlake__3509;
static uint8_t Progress_node_parents_buffer__4343[83];
static struct Progress_Node_Storage__3212 Progress_node_storage_buffer__4344[83];
static uint8_t Progress_node_freelist_buffer__4345[83];
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

static uint8_t const __anon_2953[89] = "Invalid protocol detected: The stream end was found before all required bytes were read.";

static uint8_t const __anon_3408[36] = "Failed to allocate InstrumentHooks: ";

static uint8_t const __anon_3852[1] = "\n";

static uint8_t const __anon_4593[4] = "\033[J";

static uint8_t const __anon_4727[8] = "{ ... }";

static uint8_t const __anon_4962[18] = "Deadlock detected";

static uint8_t const __anon_5070[3] = "\357\277\275";

static uint8_t const __anon_5680[27] = "Failed to start benchmark: ";

static uint8_t const __anon_5755[26] = "Failed to stop benchmark: ";

static uint8_t const __anon_5889[34] = "Failed to set executed benchmark: ";

static uint8_t const __anon_6085[10] = "Metadata: ";

static uint8_t const __anon_6100[1] = " ";

static uint8_t const __anon_6119[1] = "\000";

static uint8_t const __anon_6186[27] = "Failed to set integration: ";

static uint8_t const __anon_4687[4] = "any";

static uint8_t const __anon_6259[10] = "alderlake";

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
 uint32_t const *t16;
 uint8_t const (*t17)[4];
 nav__991_44 t18;
 struct fs_File__546 t11;
 uint32_t t14;
 uint32_t t15;
 uint16_t t7;
 bool t13;
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
 t13 = t12 <= (uintptr_t)4294967295ul;
 if (t13) {
  goto zig_block_0;
 }
 debug_no_panic_castTruncatedData__4103();
 zig_unreachable();

 zig_block_0:;
 t14 = (uint32_t)t12;
 t15 = t14;
 t16 = (uint32_t const *)&t15;
 t17 = mem_asBytes__anon_2188__4118(t16);
 t18.ptr = &(*t17)[(uintptr_t)0ul];
 t18.len = (uintptr_t)4ul;
 t7 = fs_File_writeAll__1144(t11, t18);
 if (t7) {
  t5 = t2;
  array_list_ArrayListAligned_28u8_2cnull_29_deinit__3985(t5);
  return t7;
 }
 t9 = (*t1);
 t10 = (struct fs_File__546 *)&t9->file;
 t11 = (*t10);
 memcpy(&t18, &t8, sizeof(nav__991_44));
 t7 = fs_File_writeAll__1144(t11, t18);
 if (t7) {
  t5 = t2;
  array_list_ArrayListAligned_28u8_2cnull_29_deinit__3985(t5);
  return t7;
 }
 t5 = t2;
 array_list_ArrayListAligned_28u8_2cnull_29_deinit__3985(t5);
 return 0;
}

static nav__4228_38 bincode_deserializeInt__anon_2425__4228(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const a0) {
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *t1;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *t4;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 t2;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 t0;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 t3;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *const *t5;
 void const **t7;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *t8;
 void const *t9;
 nav__4228_50 (**t10)(void const *, nav__4228_52);
 struct io_Reader__2439 t11;
 struct io_Reader__2439 t6;
 struct io_Reader__2439 t12;
 struct io_Reader__2439 t15;
 struct io_Reader__2439 const *t13;
 uint8_t const (*t21)[4];
 nav__4228_38 t14;
 nav__4228_38 t18;
 uint32_t t22;
 nav__4228_64 t16;
 uint16_t t17;
 uint8_t t19[4];
 uint8_t t20[4];
 t0 = a0;
 t1 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *)&t0;
 t2 = (*t1);
 t3 = t2;
 t1 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *)&t3;
 t4 = t1;
 t5 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *const *)&t4;
 t7 = (void const **)&t6.context;
 t1 = (*t5);
 t8 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *)&t1->context;
 t9 = (void const *)t8;
 (*t7) = t9;
 t10 = (nav__4228_50 (**)(void const *, nav__4228_52))&t6.readFn;
 (*t10) = &io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29_typeEras__4224;
 t11 = t6;
 t12 = t11;
 t13 = (struct io_Reader__2439 const *)&t12;
 t11 = (*t13);
 t15 = t11;
 t13 = (struct io_Reader__2439 const *)&t15;
 t11 = (*t13);
 t16 = io_Reader_readBytesNoEof__anon_2468__4266(t11);
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
 memcpy(&t18, &t14, sizeof(nav__4228_38));
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

static nav__4227_38 bincode_deserializeAlloc__anon_2414__4227(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const a0, struct mem_Allocator__206 const a1) {
 nav__4227_38 t0;
 uint32_t t2;
 uint16_t t1;
 (void)a1;
 t0 = bincode_deserializeInt__anon_2425__4228(a0);
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

static nav__4270_40 bincode_deserializePointerAlloc__anon_2549__4270(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const a0, struct mem_Allocator__206 const a1) {
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *t1;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *t6;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *t7;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *t32;
 struct mem_Allocator__206 const *t3;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 t4;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 t0;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 t5;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 t31;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *const *t8;
 void const **t10;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *t11;
 void const *t12;
 nav__4270_59 (**t13)(void const *, nav__4270_39);
 struct io_Reader__2439 t14;
 struct io_Reader__2439 t9;
 struct io_Reader__2439 t15;
 struct io_Reader__2439 t18;
 struct io_Reader__2439 t33;
 struct io_Reader__2439 t34;
 struct io_Reader__2439 const *t16;
 nav__4270_69 t17;
 nav__4270_69 t21;
 uint8_t const (*t24)[8];
 uint64_t t25;
 uint64_t t38;
 nav__4270_40 t26;
 uintptr_t t27;
 uintptr_t t37;
 struct mem_Allocator__206 t29;
 struct mem_Allocator__206 t2;
 nav__4270_39 t30;
 nav__4270_39 t28;
 nav__4270_59 t35;
 nav__4270_59 t36;
 nav__4270_72 t19;
 uint16_t t20;
 uint8_t t22[8];
 uint8_t t23[8];
 bool t39;
 t0 = a0;
 t1 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *)&t0;
 t2 = a1;
 t3 = (struct mem_Allocator__206 const *)&t2;
 t4 = (*t1);
 t5 = t4;
 t6 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *)&t5;
 t7 = t6;
 t8 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *const *)&t7;
 t10 = (void const **)&t9.context;
 t6 = (*t8);
 t11 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *)&t6->context;
 t12 = (void const *)t11;
 (*t10) = t12;
 t13 = (nav__4270_59 (**)(void const *, nav__4270_39))&t9.readFn;
 (*t13) = &io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29_typeEras__4224;
 t14 = t9;
 t15 = t14;
 t16 = (struct io_Reader__2439 const *)&t15;
 t14 = (*t16);
 t18 = t14;
 t16 = (struct io_Reader__2439 const *)&t18;
 t14 = (*t16);
 t19 = io_Reader_readBytesNoEof__anon_2562__4271(t14);
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
 memcpy(&t21, &t17, sizeof(nav__4270_69));
 if (t21.error) {
  t20 = t21.error;
  t26.payload = (nav__4270_39){(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t26.error = t20;
  return t26;
 }
 t25 = t21.payload;
 t27 = t25;
 t29 = (*t3);
 t26 = mem_Allocator_alloc__anon_2273__4159(t29, t27);
 if (t26.error) {
  t20 = t26.error;
  t26.payload = (nav__4270_39){(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t26.error = t20;
  return t26;
 }
 t30 = t26.payload;
 t28 = t30;
 t4 = (*t1);
 t30 = t28;
 t31 = t4;
 t1 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *)&t31;
 t32 = t1;
 t8 = (struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const *const *)&t32;
 t10 = (void const **)&t33.context;
 t1 = (*t8);
 t11 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *)&t1->context;
 t12 = (void const *)t11;
 (*t10) = t12;
 t13 = (nav__4270_59 (**)(void const *, nav__4270_39))&t33.readFn;
 (*t13) = &io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29_typeEras__4224;
 t14 = t33;
 t34 = t14;
 t16 = (struct io_Reader__2439 const *)&t34;
 t14 = (*t16);
 t35 = io_Reader_readAll__4231(t14, t30);
 memcpy(&t36, &t35, sizeof(nav__4270_59));
 t37 = t36.payload;
 t25 = t37;
 t38 = t27;
 t39 = t25 != t38;
 if (t39) {
  bincode_invalidProtocol__anon_2585__4272();
  zig_unreachable();
 }
 goto zig_block_1;

 zig_block_1:;
 t30 = t28;
 t26.payload = t30;
 t26.error = UINT16_C(0);
 return t26;
}

static nav__4269_40 bincode_deserializeAlloc__anon_2536__4269(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const a0, struct mem_Allocator__206 const a1) {
 nav__4269_57 t0;
 nav__4269_40 t2;
 nav__4269_55 t3;
 nav__4269_39 t4;
 uint16_t t1;
 t0 = bincode_deserializePointerAlloc__anon_2549__4270(a0, a1);
 if (t0.error) {
  t1 = t0.error;
  t2.payload = (nav__4269_39){(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t2.error = t1;
  return t2;
 }
 t3 = t0.payload;
 memcpy(&t4, &t3, sizeof(nav__4269_39));
 t2.payload = t4;
 t2.error = UINT16_C(0);
 return t2;
}

static nav__4268_39 bincode_deserializeStructAlloc__anon_2511__4268(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const a0, struct mem_Allocator__206 const a1) {
 uint32_t *t1;
 nav__4268_39 t4;
 nav__4268_44 *t6;
 nav__4268_60 t7;
 nav__4268_44 t8;
 struct shared_Command__struct_2007__2007 t9;
 struct shared_Command__struct_2007__2007 t0;
 nav__4268_57 t2;
 uint32_t t5;
 uint16_t t3;
 memset(&t0, 0xaa, sizeof(struct shared_Command__struct_2007__2007));
 t1 = (uint32_t *)&t0.pid;
 t2 = bincode_deserializeAlloc__anon_2414__4227(a0, a1);
 if (t2.error) {
  t3 = t2.error;
  t4.payload = (struct shared_Command__struct_2007__2007){{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)};
  t4.error = t3;
  return t4;
 }
 t5 = t2.payload;
 (*t1) = t5;
 t6 = (nav__4268_44 *)&t0.uri;
 t7 = bincode_deserializeAlloc__anon_2536__4269(a0, a1);
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

static nav__4267_39 bincode_deserializeAlloc__anon_2482__4267(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const a0, struct mem_Allocator__206 const a1) {
 nav__4267_39 t0;
 struct shared_Command__struct_2007__2007 t2;
 uint16_t t1;
 t0 = bincode_deserializeStructAlloc__anon_2511__4268(a0, a1);
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

static uint16_t bincode_deserializeAlloc__anon_2600__4273(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const a0, struct mem_Allocator__206 const a1) {
 (void)a0;
 (void)a1;
 return 0;
}

static nav__4275_39 bincode_deserializeStructAlloc__anon_2662__4275(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const a0, struct mem_Allocator__206 const a1) {
 nav__4275_44 *t1;
 nav__4275_57 t2;
 nav__4275_39 t4;
 nav__4275_44 t5;
 struct shared_Command__struct_2008__2008 t6;
 struct shared_Command__struct_2008__2008 t0;
 uint16_t t3;
 memset(&t0, 0xaa, sizeof(struct shared_Command__struct_2008__2008));
 t1 = (nav__4275_44 *)&t0.name;
 t2 = bincode_deserializeAlloc__anon_2536__4269(a0, a1);
 if (t2.error) {
  t3 = t2.error;
  t4.payload = (struct shared_Command__struct_2008__2008){{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul}};
  t4.error = t3;
  return t4;
 }
 t5 = t2.payload;
 (*t1) = t5;
 t1 = (nav__4275_44 *)&t0.version;
 t2 = bincode_deserializeAlloc__anon_2536__4269(a0, a1);
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

static nav__4274_39 bincode_deserializeAlloc__anon_2643__4274(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const a0, struct mem_Allocator__206 const a1) {
 nav__4274_39 t0;
 struct shared_Command__struct_2008__2008 t2;
 uint16_t t1;
 t0 = bincode_deserializeStructAlloc__anon_2662__4275(a0, a1);
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

static zig_cold nav__4226_39 bincode_deserializeUnionAlloc__anon_2409__4226(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const a0, struct mem_Allocator__206 const a1) {
 nav__4226_39 t2;
 nav__4226_63 t6;
 struct shared_Command__struct_2007__2007 t7;
 struct shared_Command__2004 t8;
 nav__4226_65 t9;
 struct shared_Command__struct_2008__2008 t10;
 nav__4226_61 t0;
 uint32_t t3;
 uint16_t t1;
 bool t4;
 uint8_t t5;
 t0 = bincode_deserializeAlloc__anon_2414__4227(a0, a1);
 if (t0.error) {
  t1 = t0.error;
  t2.payload = (struct shared_Command__2004){{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(0x2)};
  t2.error = t1;
  return t2;
 }
 t3 = t0.payload;
 t4 = t3 <= UINT32_C(7);
 if (t4) {
  goto zig_block_0;
 }
 debug_no_panic_invalidEnumValue__4113();
 zig_unreachable();

 zig_block_0:;
 t5 = (uint8_t)t3;
 t4 = t5 == UINT8_C(0);
 if (t4) {
  t6 = bincode_deserializeAlloc__anon_2482__4267(a0, a1);
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
 goto zig_block_1;

 zig_block_1:;
 t4 = t5 == UINT8_C(1);
 if (t4) {
  (void)bincode_deserializeAlloc__anon_2600__4273(a0, a1);
  return (nav__4226_39){{{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(1)},0};
 }
 goto zig_block_2;

 zig_block_2:;
 t4 = t5 == UINT8_C(2);
 if (t4) {
  (void)bincode_deserializeAlloc__anon_2600__4273(a0, a1);
  return (nav__4226_39){{{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(2)},0};
 }
 goto zig_block_3;

 zig_block_3:;
 t4 = t5 == UINT8_C(3);
 if (t4) {
  (void)bincode_deserializeAlloc__anon_2600__4273(a0, a1);
  return (nav__4226_39){{{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(3)},0};
 }
 goto zig_block_4;

 zig_block_4:;
 t4 = t5 == UINT8_C(4);
 if (t4) {
  (void)bincode_deserializeAlloc__anon_2600__4273(a0, a1);
  return (nav__4226_39){{{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(4)},0};
 }
 goto zig_block_5;

 zig_block_5:;
 t4 = t5 == UINT8_C(5);
 if (t4) {
  t9 = bincode_deserializeAlloc__anon_2643__4274(a0, a1);
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
 goto zig_block_6;

 zig_block_6:;
 t4 = t5 == UINT8_C(6);
 if (t4) {
  (void)bincode_deserializeAlloc__anon_2600__4273(a0, a1);
  return (nav__4226_39){{{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(6)},0};
 }
 goto zig_block_7;

 zig_block_7:;
 debug_no_panic_reachedUnreachable__4098();
 zig_unreachable();
}

static nav__4225_39 bincode_deserializeAlloc__anon_2323__4225(struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 const a0, struct mem_Allocator__206 const a1) {
 nav__4225_39 t0;
 struct shared_Command__2004 t2;
 uint16_t t1;
 t0 = bincode_deserializeUnionAlloc__anon_2409__4226(a0, a1);
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
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 t19;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 t18;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 t20;
 struct shared_Command__2004 t21;
 struct fs_File__546 t5;
 uint32_t t12;
 uint16_t t8;
 uint8_t t11[4];
 uint8_t t2[4];
 bool t17;
 t0 = a0;
 t1 = (struct fifo_UnixPipe_Reader__540 *const *)&t0;
 memset(&t2, 0xaa, sizeof(uint8_t[4]));
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
 t16 = mem_Allocator_alloc__anon_2273__4159(t14, t15);
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
 t19 = io_fixed_buffer_stream_fixedBufferStream__anon_2295__4191(t6);
 t18 = t19;
 t20 = io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_reader__4180(&t18);
 t13 = (struct mem_Allocator__206 *)&a0->allocator;
 t14 = (*t13);
 t9 = bincode_deserializeAlloc__anon_2323__4225(t20, t14);
 if (t9.error) {
  t8 = t9.error;
  t3 = (*t1);
  t13 = (struct mem_Allocator__206 *)&t3->allocator;
  t14 = (*t13);
  mem_Allocator_free__anon_2696__4276(t14, t6);
  t9.payload = (struct shared_Command__2004){{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(0x2)};
  t9.error = t8;
  return t9;
 }
 t21 = t9.payload;
 t3 = (*t1);
 t13 = (struct mem_Allocator__206 *)&t3->allocator;
 t14 = (*t13);
 mem_Allocator_free__anon_2696__4276(t14, t6);
 t9.payload = t21;
 t9.error = UINT16_C(0);
 return t9;
}

static nav__997_39 fifo_UnixPipe_Reader_waitForResponse__997(struct fifo_UnixPipe_Reader__540 *const a0, nav__997_42 const a1) {
 zig_i128 t2;
 zig_i128 t6;
 zig_i128 t9;
 nav__997_57 t7;
 zig_u128 t10;
 struct fifo_UnixPipe_Reader__540 *const *t1;
 uint64_t t3;
 uint64_t t5;
 struct shared_Command__2004 t11;
 struct shared_Command__2004 t14;
 struct fifo_UnixPipe_Reader__540 *t12;
 struct fifo_UnixPipe_Reader__540 *t0;
 nav__997_39 t13;
 bool t4;
 uint8_t t8;
 t0 = a0;
 t1 = (struct fifo_UnixPipe_Reader__540 *const *)&t0;
 t2 = time_nanoTimestamp__4131();
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
 t6 = time_nanoTimestamp__4131();
 t7.f1 = zig_subo_i128(&t7.f0, t6, t2, UINT8_C(128));
 t8 = t7.f1;
 t4 = t8 == UINT8_C(0);
 if (t4) {
  goto zig_block_2;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_2:;
 t6 = t7.f0;
 t9 = zig_subw_i128(zig_make_i128(INT64_C(0), UINT64_MAX), t6, UINT8_C(128));
 memcpy(&t10, &t9, sizeof(zig_u128));
 t10 = zig_wrap_u128(t10, UINT8_C(128));
 t4 = zig_cmp_u128(t10, zig_make_u128(UINT64_C(0), UINT64_MAX)) <= INT32_C(0);
 if (t4) {
  goto zig_block_3;
 }
 debug_no_panic_castTruncatedData__4103();
 zig_unreachable();

 zig_block_3:;
 t5 = zig_lo_i128(t6);
 t4 = t5 > t3;
 if (t4) {
  return (nav__997_39){{{{{(uint8_t const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},UINT32_C(0xaaaaaaaa)}},UINT8_C(0x2)},zig_error_AckTimeout};
 }
 goto zig_block_4;

 zig_block_4:;
 t12 = (*t1);
 t13 = fifo_UnixPipe_Reader_recvCmd__996(t12);
 t4 = t13.error == UINT16_C(0);
 if (t4) {
  t14 = t13.payload;
  t11 = t14;
  goto zig_block_5;
 }
 Thread_sleep__4294(UINT64_C(10000000));
 goto zig_block_1;

 zig_block_5:;
 t13.payload = t11;
 t13.error = UINT16_C(0);
 return t13;

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
 uintptr_t t18;
 nav__3738_39 t19;
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
 t3 = (uintptr_t)0ul <= a1;
 if (t3) {
  goto zig_block_2;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, a1);
 zig_unreachable();

 zig_block_2:;
 t3 = (uintptr_t)0ul <= a1;
 if (t3) {
  goto zig_block_3;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, a1);
 zig_unreachable();

 zig_block_3:;
 t17.ptr = t14;
 t17.len = a1;
 memset(t17.ptr, 0xaa, t17.len);
 t18 = (uintptr_t)t4;
 t18 = t18 & (uintptr_t)7ul;
 t3 = t18 == (uintptr_t)0ul;
 if (t3) {
  goto zig_block_4;
 }
 debug_no_panic_incorrectAlignment__4101();
 zig_unreachable();

 zig_block_4:;
 t14 = (uint8_t *)t4;
 t19.payload = t14;
 t19.error = UINT16_C(0);
 return t19;
}

static void debug_lockStdErr__161(void) {
 Progress_lockStdErr__4355();
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
 uintptr_t t0;
 struct fs_File__546 const *t2;
 nav__3818_38 t4;
 nav__3818_38 t5;
 struct fs_File__546 t3;
 bool t1;
 t0 = (uintptr_t)a0;
 t0 = t0 & (uintptr_t)3ul;
 t1 = t0 == (uintptr_t)0ul;
 if (t1) {
  goto zig_block_0;
 }
 debug_no_panic_incorrectAlignment__4101();
 zig_unreachable();

 zig_block_0:;
 t2 = (struct fs_File__546 const *)a0;
 t3 = (*t2);
 t4 = fs_File_write__1143(t3, a1);
 memcpy(&t5, &t4, sizeof(nav__3818_38));
 return t5;
}

static uint16_t io_Writer_print__anon_1973__3835(struct io_Writer__1950 const a0, nav__3835_41 const a1) {
 uint16_t t0;
 uint16_t t1;
 t0 = fmt_format__anon_2786__4554(a0, a1);
 memcpy(&t1, &t0, sizeof(uint16_t));
 return t1;
}

static void debug_unlockStdErr__162(void) {
 Progress_unlockStdErr__4356();
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
  debug_no_panic_reachedUnreachable__4098();
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
 t0 = bincode_serializeUnion__anon_2872__4567(a0, a1);
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
 mem_Allocator_free__anon_2696__4276(t3, t5);
 return;
}

static zig_cold zig_noreturn void debug_no_panic_castTruncatedData__4103(void) {
 zig_trap();
}

static uint8_t const (*mem_asBytes__anon_2188__4118(uint32_t const *const a0))[4] {
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
 uintptr_t t14;
 uintptr_t t15;
 uintptr_t t4;
 uint64_t t7;
 uint64_t t8;
 nav__1144_40 t11;
 nav__1144_40 t2;
 uint8_t const *t12;
 nav__1144_47 t16;
 nav__1144_49 t18;
 struct fs_File__546 t10;
 struct fs_File__546 t0;
 uint16_t t17;
 bool t9;
 uint8_t t19;
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
  t9 = t5 <= t13;
  if (t9) {
   goto zig_block_2;
  }
  debug_no_panic_startGreaterThanEnd__4095(t5, t13);
  zig_unreachable();

  zig_block_2:;
  t14 = t13 - t5;
  t15 = t11.len;
  t9 = t13 <= t15;
  if (t9) {
   goto zig_block_3;
  }
  debug_no_panic_outOfBounds__4094(t13, t15);
  zig_unreachable();

  zig_block_3:;
  t9 = t5 <= t13;
  if (t9) {
   goto zig_block_4;
  }
  debug_no_panic_outOfBounds__4094(t5, t13);
  zig_unreachable();

  zig_block_4:;
  t11.ptr = t12;
  t11.len = t14;
  t16 = fs_File_write__1143(t10, t11);
  if (t16.error) {
   t17 = t16.error;
   return t17;
  }
  t14 = t16.payload;
  t18.f1 = zig_addo_u64(&t18.f0, t6, t14, UINT8_C(64));
  t19 = t18.f1;
  t9 = t19 == UINT8_C(0);
  if (t9) {
   goto zig_block_5;
  }
  debug_no_panic_integerOverflow__4105();
  zig_unreachable();

  zig_block_5:;
  t14 = t18.f0;
  t4 = t14;
  goto zig_block_1;
 }
 goto zig_block_0;

 zig_block_1:;
 goto zig_loop_11;

 zig_block_0:;
 return 0;
}

static zig_i128 time_nanoTimestamp__4131(void) {
 zig_i128 t6;
 zig_i128 t9;
 nav__4131_43 t7;
 nav__4131_41 t0;
 struct os_linux_timespec__struct_2902__2902 t2;
 struct os_linux_timespec__struct_2902__2902 t3;
 intptr_t t5;
 uint16_t t4;
 bool t1;
 uint8_t t8;
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
  default: {
   debug_no_panic_corruptSwitch__4111();
   zig_unreachable();
  }
 }

 zig_block_0:;
 t5 = t2.sec;
 t6 = zig_make_i128(0, t5);
 t7.f1 = zig_mulo_i128(&t7.f0, t6, zig_make_i128(INT64_C(0), UINT64_C(1000000000)), UINT8_C(128));
 t8 = t7.f1;
 t1 = t8 == UINT8_C(0);
 if (t1) {
  goto zig_block_1;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_1:;
 t6 = t7.f0;
 t5 = t2.nsec;
 t9 = zig_make_i128(0, t5);
 t7.f1 = zig_addo_i128(&t7.f0, t6, t9, UINT8_C(128));
 t8 = t7.f1;
 t1 = t8 == UINT8_C(0);
 if (t1) {
  goto zig_block_2;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_2:;
 t9 = t7.f0;
 return t9;
}

static zig_cold zig_noreturn void debug_no_panic_integerOverflow__4105(void) {
 zig_trap();
}

static nav__1134_38 fs_File_readAll__1134(struct fs_File__546 const a0, nav__1134_41 const a1) {
 struct fs_File__546 const *t1;
 nav__1134_41 const *t3;
 uintptr_t t5;
 uintptr_t t6;
 uintptr_t t13;
 uintptr_t t14;
 uintptr_t t4;
 uint64_t t7;
 uint64_t t8;
 nav__1134_41 t11;
 nav__1134_41 t2;
 uint8_t *t12;
 nav__1134_38 t15;
 nav__1134_49 t17;
 struct fs_File__546 t10;
 struct fs_File__546 t0;
 uint16_t t16;
 bool t9;
 uint8_t t18;
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
  t9 = t6 <= t5;
  if (t9) {
   goto zig_block_2;
  }
  debug_no_panic_startGreaterThanEnd__4095(t6, t5);
  zig_unreachable();

  zig_block_2:;
  t13 = t5 - t6;
  t14 = t11.len;
  t9 = t5 <= t14;
  if (t9) {
   goto zig_block_3;
  }
  debug_no_panic_outOfBounds__4094(t5, t14);
  zig_unreachable();

  zig_block_3:;
  t9 = t6 <= t5;
  if (t9) {
   goto zig_block_4;
  }
  debug_no_panic_outOfBounds__4094(t6, t5);
  zig_unreachable();

  zig_block_4:;
  t11.ptr = t12;
  t11.len = t13;
  t15 = fs_File_read__1133(t10, t11);
  if (t15.error) {
   t16 = t15.error;
   t15.payload = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
   t15.error = t16;
   return t15;
  }
  t13 = t15.payload;
  t8 = t13;
  t9 = t8 == UINT64_C(0);
  if (t9) {
   goto zig_block_0;
  }
  goto zig_block_5;

  zig_block_5:;
  t6 = t4;
  t17.f1 = zig_addo_u64(&t17.f0, t6, t13, UINT8_C(64));
  t18 = t17.f1;
  t9 = t18 == UINT8_C(0);
  if (t9) {
   goto zig_block_6;
  }
  debug_no_panic_integerOverflow__4105();
  zig_unreachable();

  zig_block_6:;
  t13 = t17.f0;
  t4 = t13;
  goto zig_block_1;
 }
 goto zig_block_0;

 zig_block_1:;
 goto zig_loop_11;

 zig_block_0:;
 t14 = t4;
 t15.payload = t14;
 t15.error = UINT16_C(0);
 return t15;
}

static nav__4159_40 mem_Allocator_alloc__anon_2273__4159(struct mem_Allocator__206 const a0, uintptr_t const a1) {
 struct mem_Allocator__206 const *t1;
 struct mem_Allocator__206 t2;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t5;
 uintptr_t t3;
 nav__4159_40 t4;
 nav__4159_40 t8;
 nav__4159_51 t6;
 uint8_t *t9;
 uint8_t *t10;
 uint8_t *const *t11;
 nav__4159_39 t13;
 uint16_t t7;
 bool t12;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = (*t1);
 t3 = (uintptr_t)zig_return_address();
 t5 = t2;
 t1 = (struct mem_Allocator__206 const *)&t5;
 t2 = (*t1);
 t6 = mem_Allocator_allocWithSizeAndAlignment__anon_2933__4568(t2, a1, t3);
 if (t6.error) {
  t7 = t6.error;
  t8.payload = (nav__4159_39){(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t8.error = t7;
  t4 = t8;
  goto zig_block_0;
 }
 t9 = t6.payload;
 t10 = t9;
 t11 = (uint8_t *const *)&t10;
 t9 = (*t11);
 t9 = (uint8_t *)(((uintptr_t)t9) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t12 = (uintptr_t)0ul <= a1;
 if (t12) {
  goto zig_block_1;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, a1);
 zig_unreachable();

 zig_block_1:;
 t12 = (uintptr_t)0ul <= a1;
 if (t12) {
  goto zig_block_2;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, a1);
 zig_unreachable();

 zig_block_2:;
 t13.ptr = t9;
 t13.len = a1;
 t8.payload = t13;
 t8.error = UINT16_C(0);
 t4 = t8;
 goto zig_block_0;

 zig_block_0:;
 return t4;
}

static struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 io_fixed_buffer_stream_fixedBufferStream__anon_2295__4191(nav__4191_40 const a0) {
 nav__4191_40 *t1;
 uintptr_t *t2;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 t0;
 t1 = (nav__4191_40 *)&t0.buffer;
 (*t1) = a0;
 t2 = (uintptr_t *)&t0.pos;
 (*t2) = (uintptr_t)0ul;
 return t0;
}

static struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_reader__4180(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const a0) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 **t1;
 struct io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29__2315 t0;
 t1 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 **)&t0.context;
 (*t1) = a0;
 return t0;
}

static nav__4224_38 io_GenericReader_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7b_7d_2c_28function_20_27read_27_29_29_typeEras__4224(void const *const a0, nav__4224_41 const a1) {
 uintptr_t t0;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *t2;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *t3;
 nav__4224_38 t4;
 nav__4224_38 t5;
 bool t1;
 t0 = (uintptr_t)a0;
 t0 = t0 & (uintptr_t)7ul;
 t1 = t0 == (uintptr_t)0ul;
 if (t1) {
  goto zig_block_0;
 }
 debug_no_panic_incorrectAlignment__4101();
 zig_unreachable();

 zig_block_0:;
 t2 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *)a0;
 t3 = (*t2);
 t4 = io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_read__4183(t3, a1);
 memcpy(&t5, &t4, sizeof(nav__4224_38));
 return t5;
}

static nav__4266_39 io_Reader_readBytesNoEof__anon_2468__4266(struct io_Reader__2439 const a0) {
 struct io_Reader__2439 const *t1;
 struct io_Reader__2439 t3;
 struct io_Reader__2439 t0;
 nav__4266_46 t4;
 uint16_t t5;
 nav__4266_39 t6;
 uint8_t t7[4];
 uint8_t t2[4];
 t0 = a0;
 t1 = (struct io_Reader__2439 const *)&t0;
 memset(&t2, 0xaa, sizeof(uint8_t[4]));
 t3 = (*t1);
 t4.ptr = &t2[(uintptr_t)0ul];
 t4.len = (uintptr_t)4ul;
 t5 = io_Reader_readNoEof__4233(t3, t4);
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

static zig_cold zig_noreturn void debug_no_panic_invalidEnumValue__4113(void) {
 zig_trap();
}

static nav__4271_39 io_Reader_readBytesNoEof__anon_2562__4271(struct io_Reader__2439 const a0) {
 struct io_Reader__2439 const *t1;
 struct io_Reader__2439 t3;
 struct io_Reader__2439 t0;
 nav__4271_46 t4;
 uint16_t t5;
 nav__4271_39 t6;
 uint8_t t7[8];
 uint8_t t2[8];
 t0 = a0;
 t1 = (struct io_Reader__2439 const *)&t0;
 memset(&t2, 0xaa, sizeof(uint8_t[8]));
 t3 = (*t1);
 t4.ptr = &t2[(uintptr_t)0ul];
 t4.len = (uintptr_t)8ul;
 t5 = io_Reader_readNoEof__4233(t3, t4);
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

static nav__4231_38 io_Reader_readAll__4231(struct io_Reader__2439 const a0, nav__4231_41 const a1) {
 uintptr_t t0;
 nav__4231_38 t1;
 t0 = a1.len;
 t1 = io_Reader_readAtLeast__4232(a0, a1, t0);
 return t1;
}

static zig_cold zig_noreturn void bincode_invalidProtocol__anon_2585__4272(void) {
 debug_no_panic_call__4091((nav__4272_40){(uint8_t const *)&__anon_2953,(uintptr_t)88ul}, (nav__4272_42){(uintptr_t)0xaaaaaaaaaaaaaaaaul,true});
 zig_unreachable();
}

static zig_cold zig_noreturn void debug_no_panic_reachedUnreachable__4098(void) {
 zig_trap();
}

static void mem_Allocator_free__anon_2696__4276(struct mem_Allocator__206 const a0, nav__4276_40 const a1) {
 struct mem_Allocator__206 const *t1;
 nav__4276_40 t2;
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
 void (*const *t15)(void *, nav__4276_40, uint8_t, uintptr_t);
 void (*t16)(void *, nav__4276_40, uint8_t, uintptr_t);
 void *t17;
 bool t5;
 uint8_t t11;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = mem_sliceAsBytes__anon_2970__4569(a1);
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
 t5 = (uintptr_t)0ul <= t3;
 if (t5) {
  goto zig_block_1;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_1:;
 t5 = (uintptr_t)0ul <= t3;
 if (t5) {
  goto zig_block_2;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_2:;
 t2.ptr = t7;
 t2.len = t3;
 memset(t2.ptr, 0xaa, t2.len);
 t10 = (*t1);
 t7 = (*t9);
 t7 = (uint8_t *)(((uintptr_t)t7) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t5 = (uintptr_t)0ul <= t3;
 if (t5) {
  goto zig_block_3;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_3:;
 t5 = (uintptr_t)0ul <= t3;
 if (t5) {
  goto zig_block_4;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_4:;
 t2.ptr = t7;
 t2.len = t3;
 t11 = mem_Alignment_fromByteUnits__628((uintptr_t)1ul);
 t3 = (uintptr_t)zig_return_address();
 t12 = t10;
 t1 = (struct mem_Allocator__206 const *)&t12;
 t13 = (struct mem_Allocator_VTable__209 const *const *)&t1->vtable;
 t14 = (*t13);
 t15 = (void (*const *)(void *, nav__4276_40, uint8_t, uintptr_t))&t14->free;
 t16 = (*t15);
 t17 = t10.ptr;
 t16(t17, t2, t11, t3);
 return;
}

static void Thread_sleep__4294(uint64_t const a0) {
 uint64_t t0;
 uint64_t t1;
 intptr_t *t3;
 intptr_t t4;
 intptr_t t7;
 nav__4294_42 t5;
 struct os_linux_timespec__struct_2902__2902 const *t9;
 struct os_linux_timespec__struct_2902__2902 *t10;
 uintptr_t t11;
 struct os_linux_timespec__struct_2902__2902 t13;
 struct os_linux_timespec__struct_2902__2902 t2;
 struct os_linux_timespec__struct_2902__2902 t8;
 uint16_t t12;
 bool t6;
 t0 = a0 / UINT64_C(1000000000);
 t1 = a0 % UINT64_C(1000000000);
 t3 = (intptr_t *)&t2.sec;
 t5 = math_cast__anon_3009__4633(t0);
 t6 = t5.is_null != true;
 if (t6) {
  t7 = t5.payload;
  t4 = t7;
  goto zig_block_0;
 }
 t4 = INTPTR_MAX;
 goto zig_block_0;

 zig_block_0:;
 (*t3) = t4;
 t3 = (intptr_t *)&t2.nsec;
 t5 = math_cast__anon_3009__4633(t1);
 t6 = t5.is_null != true;
 if (t6) {
  t7 = t5.payload;
  t4 = t7;
  goto zig_block_1;
 }
 t4 = INTPTR_MAX;
 goto zig_block_1;

 zig_block_1:;
 (*t3) = t4;
 memset(&t8, 0xaa, sizeof(struct os_linux_timespec__struct_2902__2902));
 zig_loop_35:
 t9 = (struct os_linux_timespec__struct_2902__2902 const *)&t2;
 t10 = (struct os_linux_timespec__struct_2902__2902 *)&t8;
 t11 = os_linux_clock_nanosleep__2718(UINT32_C(1), ((uint32_t)false | (uint32_t)UINT32_C(0) << UINT8_C(1)), t9, t10);
 t12 = os_linux_errnoFromSyscall__2615(t11);
 switch (t12) {
  case UINT16_C(0): {
   return;
  }
  case UINT16_C(4): {
   t13 = t8;
   t2 = t13;
   goto zig_block_2;
  }
  case UINT16_C(14):
  case UINT16_C(22):
  case UINT16_C(95): {
   debug_no_panic_reachedUnreachable__4098();
   zig_unreachable();
  }
  default: {
   return;
  }
 }

 zig_block_2:;
 goto zig_loop_35;
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
   mem_Allocator_free__anon_3189__4635(t4, t5);
   t4 = (*t1);
   t5 = t3.version;
   mem_Allocator_free__anon_3189__4635(t4, t5);
   goto zig_block_0;
  }
  case UINT8_C(0): {
   t6 = a0.payload.ExecutedBenchmark;
   t4 = (*t1);
   t5 = t6.uri;
   mem_Allocator_free__anon_3189__4635(t4, t5);
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
 t0 = math_isPowerOfTwo__anon_3191__4636(a0);
 debug_assert__179(t0);
 t1 = zig_ctz_u64(a0, UINT8_C(64));
 t0 = t1 <= UINT8_C(63);
 if (t0) {
  goto zig_block_0;
 }
 debug_no_panic_invalidEnumValue__4113();
 zig_unreachable();

 zig_block_0:;
 return t1;
}

static zig_cold zig_noreturn void debug_no_panic_startGreaterThanEnd__4095(uintptr_t const a0, uintptr_t const a1) {
 (void)a0;
 (void)a1;
 zig_trap();
}

static zig_cold zig_noreturn void debug_no_panic_outOfBounds__4094(uintptr_t const a0, uintptr_t const a1) {
 (void)a0;
 (void)a1;
 zig_trap();
}

static zig_cold zig_noreturn void debug_no_panic_incorrectAlignment__4101(void) {
 zig_trap();
}

static void Progress_lockStdErr__4355(void) {
 uint16_t t0;
 bool t1;
 Thread_Mutex_Recursive_lock__4763(((struct Thread_Mutex_Recursive__3253 *)&Progress_stderr_mutex__4392));
 t0 = Progress_clearWrittenWithEscapeCodes__4366();
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

static uint16_t fmt_format__anon_2786__4554(struct io_Writer__1950 const a0, nav__4554_41 const a1) {
 struct io_Writer__1950 const *t1;
 struct io_Writer__1950 t2;
 struct io_Writer__1950 t0;
 nav__4554_40 t4;
 uint16_t t3;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__4554_40){(uint8_t const *)&__anon_3408,(uintptr_t)36ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f0;
 t3 = fmt_formatType__anon_3846__5142(t4, (struct fmt_FormatOptions__3758){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__4554_40){(uint8_t const *)&__anon_3852,(uintptr_t)1ul});
 if (t3) {
  return t3;
 }
 return 0;
}

static void Progress_unlockStdErr__4356(void) {
 Thread_Mutex_Recursive_unlock__4764(((struct Thread_Mutex_Recursive__3253 *)&Progress_stderr_mutex__4392));
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
  t0 = a0.len;
  t2 = (uintptr_t)0ul < t0;
  if (t2) {
   goto zig_block_1;
  }
  debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t0);
  zig_unreachable();

  zig_block_1:;
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
 nav__1628_46 t0;
 uintptr_t t3;
 uintptr_t t7;
 uint64_t t4;
 uint8_t *t5;
 uint8_t *t10;
 nav__1628_49 t6;
 uint8_t const *t8;
 uint8_t const *t9;
 nav__1628_39 t13;
 bool t1;
 bool t11;
 uint8_t t12[4096];
 uint8_t t2[4096];
 t0 = mem_indexOfScalar__anon_3870__5143(a0, UINT8_C(0));
 t1 = t0.is_null == true;
 debug_assert__179(t1);
 memset(&t2, 0xaa, sizeof(uint8_t[4096]));
 t3 = a0.len;
 t4 = t3;
 t1 = t4 >= UINT64_C(4096);
 if (t1) {
  return (nav__1628_39){zig_error_NameTooLong,{'\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa','\xaa'}};
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = a0.len;
 t5 = (uint8_t *)&t2;
 t5 = (uint8_t *)(((uintptr_t)t5) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t1 = (uintptr_t)0ul <= t3;
 if (t1) {
  goto zig_block_1;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_1:;
 t1 = t3 <= (uintptr_t)4096ul;
 if (t1) {
  goto zig_block_2;
 }
 debug_no_panic_outOfBounds__4094(t3, (uintptr_t)4096ul);
 zig_unreachable();

 zig_block_2:;
 t1 = (uintptr_t)0ul <= t3;
 if (t1) {
  goto zig_block_3;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_3:;
 t6.ptr = t5;
 t6.len = t3;
 t3 = t6.len;
 t7 = a0.len;
 t1 = t3 == t7;
 if (t1) {
  goto zig_block_4;
 }
 debug_no_panic_memcpyLenMismatch__4115();
 zig_unreachable();

 zig_block_4:;
 t8 = a0.ptr;
 t5 = t6.ptr;
 t9 = (uint8_t const *)(((uintptr_t)t8) + (t3*sizeof(uint8_t)));
 t10 = (uint8_t *)(((uintptr_t)t5) + (t3*sizeof(uint8_t)));
 t1 = t5 >= t9;
 t11 = t8 >= t10;
 t11 = t1 | t11;
 if (t11) {
  goto zig_block_5;
 }
 debug_no_panic_memcpyAlias__4116();
 zig_unreachable();

 zig_block_5:;
 if (t6.len != 0) memcpy(t6.ptr, t8, t6.len * sizeof(uint8_t));
 t3 = a0.len;
 t11 = t3 <= (uintptr_t)4095ul;
 if (t11) {
  goto zig_block_6;
 }
 debug_no_panic_outOfBounds__4094(t3, (uintptr_t)4095ul);
 zig_unreachable();

 zig_block_6:;
 t10 = (uint8_t *)&t2[t3];
 (*t10) = UINT8_C(0);
 memcpy(t12, (const char *)&t2, sizeof(uint8_t[4096]));
 memcpy(t13.payload, t12, sizeof(uint8_t[4096]));
 t13.error = UINT16_C(0);
 return t13;
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
  default: {
   debug_no_panic_corruptSwitch__4111();
   zig_unreachable();
  }
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
  default: {
   debug_no_panic_corruptSwitch__4111();
   zig_unreachable();
  }
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
    debug_no_panic_reachedUnreachable__4098();
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
   default: {
    debug_no_panic_corruptSwitch__4111();
    zig_unreachable();
   }
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

static uint16_t bincode_serializeUnion__anon_2872__4567(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, struct shared_Command__2004 const a1) {
 struct shared_Command__struct_2007__2007 t4;
 struct shared_Command__struct_2008__2008 t5;
 uint32_t t1;
 uint16_t t2;
 uint8_t t0;
 bool t3;
 t0 = a1.tag;
 t1 = (uint32_t)t0;
 t2 = bincode_serialize__anon_3993__5213(a0, t1);
 if (t2) {
  return t2;
 }
 t0 = a1.tag;
 t3 = t0 == UINT8_C(0);
 if (t3) {
  t0 = a1.tag;
  t3 = t0 == UINT8_C(0);
  if (t3) {
   goto zig_block_1;
  }
  debug_no_panic_inactiveUnionField__anon_3995__5214(t0, UINT8_C(0));
  zig_unreachable();

  zig_block_1:;
  t4 = a1.payload.ExecutedBenchmark;
  t2 = bincode_serialize__anon_3997__5215(a0, t4);
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
  t0 = a1.tag;
  t3 = t0 == UINT8_C(1);
  if (t3) {
   goto zig_block_3;
  }
  debug_no_panic_inactiveUnionField__anon_3995__5214(t0, UINT8_C(1));
  zig_unreachable();

  zig_block_3:;
  t2 = bincode_serialize__anon_3999__5216(a0);
  if (t2) {
   return t2;
  }
  goto zig_block_2;
 }
 goto zig_block_2;

 zig_block_2:;
 t0 = a1.tag;
 t3 = t0 == UINT8_C(2);
 if (t3) {
  t0 = a1.tag;
  t3 = t0 == UINT8_C(2);
  if (t3) {
   goto zig_block_5;
  }
  debug_no_panic_inactiveUnionField__anon_3995__5214(t0, UINT8_C(2));
  zig_unreachable();

  zig_block_5:;
  t2 = bincode_serialize__anon_3999__5216(a0);
  if (t2) {
   return t2;
  }
  goto zig_block_4;
 }
 goto zig_block_4;

 zig_block_4:;
 t0 = a1.tag;
 t3 = t0 == UINT8_C(3);
 if (t3) {
  t0 = a1.tag;
  t3 = t0 == UINT8_C(3);
  if (t3) {
   goto zig_block_7;
  }
  debug_no_panic_inactiveUnionField__anon_3995__5214(t0, UINT8_C(3));
  zig_unreachable();

  zig_block_7:;
  t2 = bincode_serialize__anon_3999__5216(a0);
  if (t2) {
   return t2;
  }
  goto zig_block_6;
 }
 goto zig_block_6;

 zig_block_6:;
 t0 = a1.tag;
 t3 = t0 == UINT8_C(4);
 if (t3) {
  t0 = a1.tag;
  t3 = t0 == UINT8_C(4);
  if (t3) {
   goto zig_block_9;
  }
  debug_no_panic_inactiveUnionField__anon_3995__5214(t0, UINT8_C(4));
  zig_unreachable();

  zig_block_9:;
  t2 = bincode_serialize__anon_3999__5216(a0);
  if (t2) {
   return t2;
  }
  goto zig_block_8;
 }
 goto zig_block_8;

 zig_block_8:;
 t0 = a1.tag;
 t3 = t0 == UINT8_C(5);
 if (t3) {
  t0 = a1.tag;
  t3 = t0 == UINT8_C(5);
  if (t3) {
   goto zig_block_11;
  }
  debug_no_panic_inactiveUnionField__anon_3995__5214(t0, UINT8_C(5));
  zig_unreachable();

  zig_block_11:;
  t5 = a1.payload.SetIntegration;
  t2 = bincode_serialize__anon_4001__5217(a0, t5);
  if (t2) {
   return t2;
  }
  goto zig_block_10;
 }
 goto zig_block_10;

 zig_block_10:;
 t0 = a1.tag;
 t3 = t0 == UINT8_C(6);
 if (t3) {
  t0 = a1.tag;
  t3 = t0 == UINT8_C(6);
  if (t3) {
   goto zig_block_13;
  }
  debug_no_panic_inactiveUnionField__anon_3995__5214(t0, UINT8_C(6));
  zig_unreachable();

  zig_block_13:;
  t2 = bincode_serialize__anon_3999__5216(a0);
  if (t2) {
   return t2;
  }
  goto zig_block_12;
 }
 goto zig_block_12;

 zig_block_12:;
 return 0;
}

static nav__4031_39 array_list_ArrayListAligned_28u8_2cnull_29_allocatedSlice__4031(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 const a0) {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 const *t1;
 nav__4031_39 const *t2;
 uint8_t *const *t3;
 uintptr_t t4;
 uint8_t *t5;
 nav__4031_39 t7;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 t0;
 bool t6;
 t0 = a0;
 t1 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 const *)&t0;
 t2 = (nav__4031_39 const *)&t1->items;
 t3 = &t2->ptr;
 t4 = a0.capacity;
 t5 = (*t3);
 t5 = (uint8_t *)(((uintptr_t)t5) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t6 = (uintptr_t)0ul <= t4;
 if (t6) {
  goto zig_block_0;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t4);
 zig_unreachable();

 zig_block_0:;
 t6 = (uintptr_t)0ul <= t4;
 if (t6) {
  goto zig_block_1;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t4);
 zig_unreachable();

 zig_block_1:;
 t7.ptr = t5;
 t7.len = t4;
 return t7;
}

static nav__1544_39 posix_clock_gettime__1544(uint32_t const a0) {
 struct os_linux_timespec__struct_2902__2902 t3;
 struct os_linux_timespec__struct_2902__2902 t0;
 nav__1544_39 t4;
 int t1;
 uint16_t t2;
 memset(&t0, 0xaa, sizeof(struct os_linux_timespec__struct_2902__2902));
 t1 = clock_gettime(a0, &t0);
 t2 = posix_errno__anon_4014__5219(t1);
 switch (t2) {
  case UINT16_C(0): {
   t3 = t0;
   t4.payload = t3;
   t4.error = UINT16_C(0);
   return t4;
  }
  case UINT16_C(14): {
   debug_no_panic_reachedUnreachable__4098();
   zig_unreachable();
  }
  case UINT16_C(22): {
   return (nav__1544_39){{-(intptr_t)0x5555555555555556,-(intptr_t)0x5555555555555556},zig_error_UnsupportedClock};
  }
  default: {
   t2 = posix_unexpectedErrno__1627(t2);
   t4.payload = (struct os_linux_timespec__struct_2902__2902){-(intptr_t)0x5555555555555556,-(intptr_t)0x5555555555555556};
   t4.error = t2;
   return t4;
  }
 }
}

static zig_cold zig_noreturn void debug_no_panic_corruptSwitch__4111(void) {
 zig_trap();
}

static nav__1133_38 fs_File_read__1133(struct fs_File__546 const a0, nav__1133_41 const a1) {
 nav__1133_38 t1;
 int32_t t0;
 t0 = a0.handle;
 t1 = posix_read__1355(t0, a1);
 return t1;
}

static nav__4568_39 mem_Allocator_allocWithSizeAndAlignment__anon_2933__4568(struct mem_Allocator__206 const a0, uintptr_t const a1, uintptr_t const a2) {
 struct mem_Allocator__206 const *t1;
 uintptr_t t2;
 uintptr_t t5;
 nav__4568_49 t3;
 struct mem_Allocator__206 t6;
 struct mem_Allocator__206 t0;
 nav__4568_39 t7;
 bool t4;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t3 = math_mul__anon_4028__5220((uintptr_t)1ul, a1);
 t4 = t3.error == UINT16_C(0);
 if (t4) {
  t5 = t3.payload;
  t2 = t5;
  goto zig_block_0;
 }
 return (nav__4568_39){((uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),zig_error_OutOfMemory};

 zig_block_0:;
 t6 = (*t1);
 t7 = mem_Allocator_allocBytesWithAlignment__anon_4030__5221(t6, t2, a2);
 return t7;
}

static nav__4183_38 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_read__4183(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const a0, nav__4183_42 const a1) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *t1;
 nav__4183_42 const *t3;
 uintptr_t t4;
 uintptr_t t7;
 uintptr_t t9;
 uintptr_t t17;
 nav__4183_42 *t5;
 nav__4183_42 t6;
 nav__4183_42 t16;
 nav__4183_42 t2;
 uintptr_t *t8;
 nav__4183_52 t10;
 uint64_t t13;
 uint8_t *t14;
 uint8_t *t18;
 uint8_t *t19;
 uint8_t *t20;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *t15;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *t0;
 nav__4183_38 t22;
 uint8_t t11;
 bool t12;
 bool t21;
 t0 = a0;
 t1 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *)&t0;
 t2 = a1;
 t3 = (nav__4183_42 const *)&t2;
 t4 = a1.len;
 t5 = (nav__4183_42 *)&a0->buffer;
 t6 = (*t5);
 t7 = t6.len;
 t8 = (uintptr_t *)&a0->pos;
 t9 = (*t8);
 t10.f1 = zig_subo_u64(&t10.f0, t7, t9, UINT8_C(64));
 t11 = t10.f1;
 t12 = t11 == UINT8_C(0);
 if (t12) {
  goto zig_block_0;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_0:;
 t9 = t10.f0;
 t9 = (t4 < t9) ? t4 : t9;
 t13 = t9;
 t8 = (uintptr_t *)&a0->pos;
 t9 = (*t8);
 t4 = t13;
 t10.f1 = zig_addo_u64(&t10.f0, t9, t4, UINT8_C(64));
 t11 = t10.f1;
 t12 = t11 == UINT8_C(0);
 if (t12) {
  goto zig_block_1;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_1:;
 t4 = t10.f0;
 t6 = (*t3);
 t14 = t6.ptr;
 t14 = (uint8_t *)(((uintptr_t)t14) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t9 = t13;
 t12 = (uintptr_t)0ul <= t9;
 if (t12) {
  goto zig_block_2;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t9);
 zig_unreachable();

 zig_block_2:;
 t7 = t6.len;
 t12 = t9 <= t7;
 if (t12) {
  goto zig_block_3;
 }
 debug_no_panic_outOfBounds__4094(t9, t7);
 zig_unreachable();

 zig_block_3:;
 t12 = (uintptr_t)0ul <= t9;
 if (t12) {
  goto zig_block_4;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t9);
 zig_unreachable();

 zig_block_4:;
 t6.ptr = t14;
 t6.len = t9;
 t15 = (*t1);
 t5 = (nav__4183_42 *)&t15->buffer;
 t8 = (uintptr_t *)&a0->pos;
 t9 = (*t8);
 t16 = (*t5);
 t14 = t16.ptr;
 t14 = (uint8_t *)(((uintptr_t)t14) + (t9*sizeof(uint8_t)));
 t12 = t9 <= t4;
 if (t12) {
  goto zig_block_5;
 }
 debug_no_panic_startGreaterThanEnd__4095(t9, t4);
 zig_unreachable();

 zig_block_5:;
 t7 = t4 - t9;
 t17 = t16.len;
 t12 = t4 <= t17;
 if (t12) {
  goto zig_block_6;
 }
 debug_no_panic_outOfBounds__4094(t4, t17);
 zig_unreachable();

 zig_block_6:;
 t12 = t9 <= t4;
 if (t12) {
  goto zig_block_7;
 }
 debug_no_panic_outOfBounds__4094(t9, t4);
 zig_unreachable();

 zig_block_7:;
 t16.ptr = t14;
 t16.len = t7;
 t7 = t6.len;
 t9 = t16.len;
 t12 = t7 == t9;
 if (t12) {
  goto zig_block_8;
 }
 debug_no_panic_memcpyLenMismatch__4115();
 zig_unreachable();

 zig_block_8:;
 t14 = t16.ptr;
 t18 = t6.ptr;
 t19 = (uint8_t *)(((uintptr_t)t14) + (t7*sizeof(uint8_t)));
 t20 = (uint8_t *)(((uintptr_t)t18) + (t7*sizeof(uint8_t)));
 t12 = t18 >= t19;
 t21 = t14 >= t20;
 t21 = t12 | t21;
 if (t21) {
  goto zig_block_9;
 }
 debug_no_panic_memcpyAlias__4116();
 zig_unreachable();

 zig_block_9:;
 if (t6.len != 0) memcpy(t6.ptr, t14, t6.len * sizeof(uint8_t));
 t15 = (*t1);
 t8 = (uintptr_t *)&t15->pos;
 (*t8) = t4;
 t4 = t13;
 t22.payload = t4;
 t22.error = UINT16_C(0);
 return t22;
}

static uint16_t io_Reader_readNoEof__4233(struct io_Reader__2439 const a0, nav__4233_40 const a1) {
 struct io_Reader__2439 const *t1;
 struct io_Reader__2439 t2;
 struct io_Reader__2439 t0;
 nav__4233_43 t3;
 uintptr_t t5;
 uintptr_t t6;
 uint64_t t7;
 uint64_t t8;
 uint16_t t4;
 bool t9;
 t0 = a0;
 t1 = (struct io_Reader__2439 const *)&t0;
 t2 = (*t1);
 t3 = io_Reader_readAll__4231(t2, a1);
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

static nav__4232_38 io_Reader_readAtLeast__4232(struct io_Reader__2439 const a0, nav__4232_41 const a1, uintptr_t const a2) {
 struct io_Reader__2439 const *t1;
 nav__4232_41 const *t3;
 uintptr_t t4;
 uintptr_t t12;
 uintptr_t t13;
 uintptr_t t14;
 uintptr_t t8;
 uint64_t t5;
 uint64_t t6;
 struct io_Reader__2439 t9;
 struct io_Reader__2439 t0;
 nav__4232_41 t10;
 nav__4232_41 t2;
 uint8_t *t11;
 nav__4232_38 t15;
 nav__4232_52 t17;
 uint16_t t16;
 bool t7;
 uint8_t t18;
 t0 = a0;
 t1 = (struct io_Reader__2439 const *)&t0;
 t2 = a1;
 t3 = (nav__4232_41 const *)&t2;
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
  t7 = t4 <= t12;
  if (t7) {
   goto zig_block_2;
  }
  debug_no_panic_startGreaterThanEnd__4095(t4, t12);
  zig_unreachable();

  zig_block_2:;
  t13 = t12 - t4;
  t14 = t10.len;
  t7 = t12 <= t14;
  if (t7) {
   goto zig_block_3;
  }
  debug_no_panic_outOfBounds__4094(t12, t14);
  zig_unreachable();

  zig_block_3:;
  t7 = t4 <= t12;
  if (t7) {
   goto zig_block_4;
  }
  debug_no_panic_outOfBounds__4094(t4, t12);
  zig_unreachable();

  zig_block_4:;
  t10.ptr = t11;
  t10.len = t13;
  t15 = io_Reader_read__4230(t9, t10);
  if (t15.error) {
   t16 = t15.error;
   t15.payload = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
   t15.error = t16;
   return t15;
  }
  t13 = t15.payload;
  t5 = t13;
  t7 = t5 == UINT64_C(0);
  if (t7) {
   goto zig_block_0;
  }
  goto zig_block_5;

  zig_block_5:;
  t12 = t8;
  t17.f1 = zig_addo_u64(&t17.f0, t12, t13, UINT8_C(64));
  t18 = t17.f1;
  t7 = t18 == UINT8_C(0);
  if (t7) {
   goto zig_block_6;
  }
  debug_no_panic_integerOverflow__4105();
  zig_unreachable();

  zig_block_6:;
  t13 = t17.f0;
  t8 = t13;
  goto zig_block_1;
 }
 goto zig_block_0;

 zig_block_1:;
 goto zig_loop_17;

 zig_block_0:;
 t14 = t8;
 t15.payload = t14;
 t15.error = UINT16_C(0);
 return t15;
}

static zig_cold zig_noreturn void debug_no_panic_call__4091(nav__4091_39 const a0, nav__4091_40 const a1) {
 (void)a0;
 (void)a1;
 zig_trap();
}

static nav__4569_39 mem_sliceAsBytes__anon_2970__4569(nav__4569_39 const a0) {
 uintptr_t t0;
 uint64_t t1;
 uint8_t *t4;
 uint8_t *t5;
 uint8_t *const *t6;
 nav__4569_39 t7;
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
  return (nav__4569_39){(uint8_t *)((void const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),(uintptr_t)0ul};
 }
 goto zig_block_0;

 zig_block_0:;
 t4 = a0.ptr;
 t5 = t4;
 t6 = (uint8_t *const *)&t5;
 t0 = a0.len;
 t4 = (*t6);
 t4 = (uint8_t *)(((uintptr_t)t4) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t3 = (uintptr_t)0ul <= t0;
 if (t3) {
  goto zig_block_2;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t0);
 zig_unreachable();

 zig_block_2:;
 t3 = (uintptr_t)0ul <= t0;
 if (t3) {
  goto zig_block_3;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t0);
 zig_unreachable();

 zig_block_3:;
 t7.ptr = t4;
 t7.len = t0;
 return t7;
}

static nav__4633_38 math_cast__anon_3009__4633(uint64_t const a0) {
 intptr_t t1;
 nav__4633_38 t2;
 bool t0;
 t0 = a0 > UINT64_C(9223372036854775807);
 if (t0) {
  return (nav__4633_38){-(intptr_t)0x5555555555555556,true};
 }
 t0 = a0 <= UINT64_C(9223372036854775807);
 if (t0) {
  goto zig_block_0;
 }
 debug_no_panic_castTruncatedData__4103();
 zig_unreachable();

 zig_block_0:;
 t1 = (intptr_t)a0;
 t2.is_null = false;
 t2.payload = t1;
 return t2;
}

static uintptr_t os_linux_clock_nanosleep__2718(uint32_t const a0, uint32_t const a1, struct os_linux_timespec__struct_2902__2902 const *const a2, struct os_linux_timespec__struct_2902__2902 *const a3) {
 uintptr_t t1;
 uintptr_t t2;
 uintptr_t t3;
 uintptr_t t4;
 uint32_t t0;
 t0 = a0;
 t1 = (uintptr_t)t0;
 t0 = a1;
 t2 = (uintptr_t)t0;
 t3 = (uintptr_t)a2;
 t4 = (uintptr_t)a3;
 t4 = os_linux_x86_64_syscall4__4598((uintptr_t)230ul, t1, t2, t3, t4);
 return t4;
}

static uint16_t os_linux_errnoFromSyscall__2615(uintptr_t const a0) {
 intptr_t t0;
 intptr_t t1;
 int64_t t2;
 nav__2615_39 t5;
 uint64_t t7;
 uint16_t t8;
 bool t3;
 bool t4;
 uint8_t t6;
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
  t5.f1 = zig_subo_i64(&t5.f0, (intptr_t)0, t0, UINT8_C(64));
  t6 = t5.f1;
  t4 = t6 == UINT8_C(0);
  if (t4) {
   goto zig_block_2;
  }
  debug_no_panic_integerOverflow__4105();
  zig_unreachable();

  zig_block_2:;
  t0 = t5.f0;
  t1 = t0;
  goto zig_block_0;
 }
 t1 = (intptr_t)0;
 goto zig_block_0;

 zig_block_0:;
 t0 = zig_subw_i64((intptr_t)65535, t1, UINT8_C(64));
 memcpy(&t7, &t0, sizeof(uint64_t));
 t7 = zig_wrap_u64(t7, UINT8_C(64));
 t4 = t7 <= UINT64_C(65535);
 if (t4) {
  goto zig_block_3;
 }
 debug_no_panic_invalidEnumValue__4113();
 zig_unreachable();

 zig_block_3:;
 t8 = (uint16_t)t1;
 return t8;
}

static void mem_Allocator_free__anon_3189__4635(struct mem_Allocator__206 const a0, nav__4635_40 const a1) {
 struct mem_Allocator__206 const *t1;
 nav__4635_40 t2;
 uintptr_t t3;
 uint64_t t4;
 uint8_t const *t6;
 uint8_t *t7;
 uint8_t *t8;
 uint8_t *const *t9;
 nav__4635_51 t10;
 struct mem_Allocator__206 t11;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t13;
 struct mem_Allocator_VTable__209 const *const *t14;
 struct mem_Allocator_VTable__209 const *t15;
 void (*const *t16)(void *, nav__4635_51, uint8_t, uintptr_t);
 void (*t17)(void *, nav__4635_51, uint8_t, uintptr_t);
 void *t18;
 bool t5;
 uint8_t t12;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = mem_sliceAsBytes__anon_4546__5243(a1);
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
 t5 = (uintptr_t)0ul <= t3;
 if (t5) {
  goto zig_block_1;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_1:;
 t5 = (uintptr_t)0ul <= t3;
 if (t5) {
  goto zig_block_2;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_2:;
 t10.ptr = t7;
 t10.len = t3;
 memset(t10.ptr, 0xaa, t10.len);
 t11 = (*t1);
 t7 = (*t9);
 t7 = (uint8_t *)(((uintptr_t)t7) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t5 = (uintptr_t)0ul <= t3;
 if (t5) {
  goto zig_block_3;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_3:;
 t5 = (uintptr_t)0ul <= t3;
 if (t5) {
  goto zig_block_4;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_4:;
 t10.ptr = t7;
 t10.len = t3;
 t12 = mem_Alignment_fromByteUnits__628((uintptr_t)1ul);
 t3 = (uintptr_t)zig_return_address();
 t13 = t11;
 t1 = (struct mem_Allocator__206 const *)&t13;
 t14 = (struct mem_Allocator_VTable__209 const *const *)&t1->vtable;
 t15 = (*t14);
 t16 = (void (*const *)(void *, nav__4635_51, uint8_t, uintptr_t))&t15->free;
 t17 = (*t16);
 t18 = t11.ptr;
 t17(t18, t10, t12, t3);
 return;
}

static bool math_isPowerOfTwo__anon_3191__4636(uintptr_t const a0) {
 uint64_t t0;
 nav__4636_39 t2;
 uintptr_t t4;
 bool t1;
 uint8_t t3;
 t0 = a0;
 t1 = t0 > UINT64_C(0);
 debug_assert__179(t1);
 t2.f1 = zig_subo_u64(&t2.f0, a0, (uintptr_t)1ul, UINT8_C(64));
 t3 = t2.f1;
 t1 = t3 == UINT8_C(0);
 if (t1) {
  goto zig_block_0;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_0:;
 t4 = t2.f0;
 t4 = a0 & t4;
 t0 = t4;
 t1 = t0 == UINT64_C(0);
 return t1;
}

static void Thread_Mutex_Recursive_lock__4763(struct Thread_Mutex_Recursive__3253 *const a0) {
 struct Thread_Mutex_Recursive__3253 *const *t1;
 struct Thread_Mutex_Recursive__3253 *t3;
 struct Thread_Mutex_Recursive__3253 *t0;
 uint32_t *t4;
 uint32_t const *t5;
 struct Thread_Mutex__3251 *t8;
 uintptr_t *t9;
 uintptr_t t10;
 uint64_t t11;
 nav__4763_55 t12;
 uint32_t t2;
 uint32_t t6;
 bool t7;
 uint8_t t13;
 t0 = a0;
 t1 = (struct Thread_Mutex_Recursive__3253 *const *)&t0;
 t2 = Thread_getCurrentId__4303();
 t3 = (*t1);
 t4 = (uint32_t *)&t3->thread_id;
 t5 = (uint32_t const *)t4;
 zig_atomic_load(t6, (zig_atomic(uint32_t) *)t5, zig_memory_order_relaxed, u32, uint32_t);
 t7 = t6 != t2;
 if (t7) {
  t3 = (*t1);
  t8 = (struct Thread_Mutex__3251 *)&t3->mutex;
  Thread_Mutex_lock__4744(t8);
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
 t12.f1 = zig_addo_u64(&t12.f0, t10, (uintptr_t)1ul, UINT8_C(64));
 t13 = t12.f1;
 t7 = t13 == UINT8_C(0);
 if (t7) {
  goto zig_block_1;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_1:;
 t10 = t12.f0;
 (*t9) = t10;
 return;
}

static uint16_t Progress_clearWrittenWithEscapeCodes__4366(void) {
 struct Progress__2767 t0;
 uint16_t t2;
 bool t1;
 t0 = (*((struct Progress__2767 *)&Progress_global_progress__4341));
 t1 = t0.need_clear;
 t1 = !t1;
 if (t1) {
  return 0;
 }
 goto zig_block_0;

 zig_block_0:;
 (*&(((struct Progress__2767 *)&Progress_global_progress__4341))->need_clear) = false;
 t2 = Progress_write__4385((nav__4366_68){(uint8_t const *)&__anon_4593,(uintptr_t)3ul});
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
 t6 = posix_errno__anon_4609__5245(t5);
 switch (t6) {
  case UINT16_C(0): {
   t2 = t5 >= (intptr_t)0;
   if (t2) {
    goto zig_block_2;
   }
   debug_no_panic_negativeToUnsigned__4104();
   zig_unreachable();

   zig_block_2:;
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
   debug_no_panic_reachedUnreachable__4098();
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
   debug_no_panic_reachedUnreachable__4098();
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
 uintptr_t t14;
 uintptr_t t15;
 uintptr_t t4;
 uint64_t t7;
 uint64_t t8;
 struct io_Writer__1950 t10;
 struct io_Writer__1950 t0;
 nav__3826_40 t11;
 nav__3826_40 t2;
 uint8_t const *t12;
 nav__3826_43 t16;
 nav__3826_52 t18;
 uint16_t t17;
 bool t9;
 uint8_t t19;
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
  t9 = t5 <= t13;
  if (t9) {
   goto zig_block_2;
  }
  debug_no_panic_startGreaterThanEnd__4095(t5, t13);
  zig_unreachable();

  zig_block_2:;
  t14 = t13 - t5;
  t15 = t11.len;
  t9 = t13 <= t15;
  if (t9) {
   goto zig_block_3;
  }
  debug_no_panic_outOfBounds__4094(t13, t15);
  zig_unreachable();

  zig_block_3:;
  t9 = t5 <= t13;
  if (t9) {
   goto zig_block_4;
  }
  debug_no_panic_outOfBounds__4094(t5, t13);
  zig_unreachable();

  zig_block_4:;
  t11.ptr = t12;
  t11.len = t14;
  t16 = io_Writer_write__3825(t10, t11);
  if (t16.error) {
   t17 = t16.error;
   return t17;
  }
  t14 = t16.payload;
  t18.f1 = zig_addo_u64(&t18.f0, t6, t14, UINT8_C(64));
  t19 = t18.f1;
  t9 = t19 == UINT8_C(0);
  if (t9) {
   goto zig_block_5;
  }
  debug_no_panic_integerOverflow__4105();
  zig_unreachable();

  zig_block_5:;
  t14 = t18.f0;
  t4 = t14;
  goto zig_block_1;
 }
 goto zig_block_0;

 zig_block_1:;
 goto zig_loop_11;

 zig_block_0:;
 return 0;
}

static uint16_t fmt_formatType__anon_3846__5142(nav__5142_39 const a0, struct fmt_FormatOptions__3758 const a1, struct io_Writer__1950 const a2, uintptr_t const a3) {
 struct io_Writer__1950 const *t2;
 uint64_t t3;
 struct io_Writer__1950 t5;
 struct io_Writer__1950 t1;
 nav__5142_39 t7;
 nav__5142_39 t0;
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
  t6 = io_Writer_writeAll__3826(t5, (nav__5142_39){(uint8_t const *)&__anon_4727,(uintptr_t)7ul});
  return t6;
 }
 goto zig_block_0;

 zig_block_0:;
 memcpy(&t7, &a0, sizeof(nav__5142_39));
 t6 = fmt_formatBuf__anon_4737__5246(t7, a1, a2);
 memcpy(&t8, &t6, sizeof(uint16_t));
 return t8;
}

static void Thread_Mutex_Recursive_unlock__4764(struct Thread_Mutex_Recursive__3253 *const a0) {
 struct Thread_Mutex_Recursive__3253 *const *t1;
 struct Thread_Mutex_Recursive__3253 *t2;
 struct Thread_Mutex_Recursive__3253 *t0;
 uintptr_t *t3;
 uintptr_t t4;
 nav__4764_52 t5;
 uint64_t t8;
 uint32_t *t9;
 struct Thread_Mutex__3251 *t11;
 uint32_t t10;
 uint8_t t6;
 bool t7;
 t0 = a0;
 t1 = (struct Thread_Mutex_Recursive__3253 *const *)&t0;
 t2 = (*t1);
 t3 = (uintptr_t *)&t2->lock_count;
 t4 = (*t3);
 t5.f1 = zig_subo_u64(&t5.f0, t4, (uintptr_t)1ul, UINT8_C(64));
 t6 = t5.f1;
 t7 = t6 == UINT8_C(0);
 if (t7) {
  goto zig_block_0;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_0:;
 t4 = t5.f0;
 (*t3) = t4;
 t3 = (uintptr_t *)&a0->lock_count;
 t4 = (*t3);
 t8 = t4;
 t7 = t8 == UINT64_C(0);
 if (t7) {
  t2 = (*t1);
  t9 = (uint32_t *)&t2->thread_id;
  t10 = UINT32_MAX;
  zig_atomic_store((zig_atomic(uint32_t) *)t9, t10, zig_memory_order_relaxed, u32, uint32_t);
  t2 = (*t1);
  t11 = (struct Thread_Mutex__3251 *)&t2->mutex;
  Thread_Mutex_unlock__4745(t11);
  goto zig_block_1;
 }
 goto zig_block_1;

 zig_block_1:;
 return;
}

static nav__5143_38 mem_indexOfScalar__anon_3870__5143(nav__5143_40 const a0, uint8_t const a1) {
 nav__5143_38 t0;
 t0 = mem_indexOfScalarPos__anon_4748__5247(a0, (uintptr_t)0ul, a1);
 return t0;
}

static zig_cold zig_noreturn void debug_no_panic_memcpyLenMismatch__4115(void) {
 zig_trap();
}

static zig_cold zig_noreturn void debug_no_panic_memcpyAlias__4116(void) {
 zig_trap();
}

static uint16_t posix_faccessatZ__1519(int32_t const a0, uint8_t const *const a1, uint32_t const a2, uint32_t const a3) {
 unsigned int t0;
 unsigned int t1;
 int t2;
 uint16_t t3;
 t0 = a2;
 t1 = a3;
 t2 = faccessat(a0, a1, t0, t1);
 t3 = posix_errno__anon_4014__5219(t2);
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
   debug_no_panic_reachedUnreachable__4098();
   zig_unreachable();
  }
  case UINT16_C(14): {
   debug_no_panic_reachedUnreachable__4098();
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
 t2 = posix_errno__anon_4014__5219(t0);
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
   debug_no_panic_reachedUnreachable__4098();
   zig_unreachable();
  }
  case UINT16_C(22): {
   return (nav__1375_38){-INT32_C(0x55555556),zig_error_BadPathName};
  }
  case UINT16_C(9): {
   debug_no_panic_reachedUnreachable__4098();
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
 t1 = posix_errno__anon_4014__5219(t0);
 switch (t1) {
  case UINT16_C(0): {
   return 0;
  }
  case UINT16_C(9): {
   debug_no_panic_reachedUnreachable__4098();
   zig_unreachable();
  }
  case UINT16_C(4): {
   goto zig_block_0;
  }
  case UINT16_C(22): {
   debug_no_panic_reachedUnreachable__4098();
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
 t1 = posix_errno__anon_4014__5219(t0);
 switch (t1) {
  case UINT16_C(9): {
   debug_no_panic_reachedUnreachable__4098();
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

static uint16_t bincode_serialize__anon_3993__5213(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, uint32_t const a1) {
 uint16_t t0;
 t0 = bincode_serializeInt__anon_4870__5251(a0, a1);
 if (t0) {
  return t0;
 }
 return 0;
}

static zig_cold zig_noreturn void debug_no_panic_inactiveUnionField__anon_3995__5214(uint8_t const a0, uint8_t const a1) {
 (void)a0;
 (void)a1;
 zig_trap();
}

static uint16_t bincode_serialize__anon_3997__5215(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, struct shared_Command__struct_2007__2007 const a1) {
 uint16_t t0;
 t0 = bincode_serializeStruct__anon_4875__5252(a0, a1);
 if (t0) {
  return t0;
 }
 return 0;
}

static uint16_t bincode_serialize__anon_3999__5216(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0) {
 (void)a0;
 return 0;
}

static uint16_t bincode_serialize__anon_4001__5217(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, struct shared_Command__struct_2008__2008 const a1) {
 uint16_t t0;
 t0 = bincode_serializeStruct__anon_4876__5253(a0, a1);
 if (t0) {
  return t0;
 }
 return 0;
}

static uint16_t posix_errno__anon_4014__5219(int const a0) {
 int *t3;
 int32_t t1;
 int t4;
 int t5;
 uint32_t t6;
 uint16_t t0;
 uint16_t t7;
 bool t2;
 t1 = a0;
 t2 = t1 == -INT32_C(1);
 if (t2) {
  t3 = zig_e___errno_location();
  t4 = (*t3);
  t5 = zig_subw_i32(65535, t4, UINT8_C(32));
  memcpy(&t6, &t5, sizeof(uint32_t));
  t6 = zig_wrap_u32(t6, UINT8_C(32));
  t2 = t6 <= UINT32_C(65535);
  if (t2) {
   goto zig_block_1;
  }
  debug_no_panic_invalidEnumValue__4113();
  zig_unreachable();

  zig_block_1:;
  t7 = (uint16_t)t4;
  t0 = t7;
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
 t6 = posix_errno__anon_4609__5245(t5);
 switch (t6) {
  case UINT16_C(0): {
   t2 = t5 >= (intptr_t)0;
   if (t2) {
    goto zig_block_2;
   }
   debug_no_panic_negativeToUnsigned__4104();
   zig_unreachable();

   zig_block_2:;
   t0 = (uintptr_t)t5;
   t7.payload = t0;
   t7.error = UINT16_C(0);
   return t7;
  }
  case UINT16_C(4): {
   goto zig_block_1;
  }
  case UINT16_C(22): {
   debug_no_panic_reachedUnreachable__4098();
   zig_unreachable();
  }
  case UINT16_C(14): {
   debug_no_panic_reachedUnreachable__4098();
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

static nav__5220_38 math_mul__anon_4028__5220(uintptr_t const a0, uintptr_t const a1) {
 nav__5220_42 t0;
 uintptr_t t3;
 nav__5220_38 t4;
 uint8_t t1;
 bool t2;
 t0.f1 = zig_mulo_u64(&t0.f0, a0, a1, UINT8_C(64));
 t1 = t0.f1;
 t2 = t1 != UINT8_C(0);
 if (t2) {
  return (nav__5220_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_Overflow};
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = t0.f0;
 t4.payload = t3;
 t4.error = UINT16_C(0);
 return t4;
}

static nav__5221_39 mem_Allocator_allocBytesWithAlignment__anon_4030__5221(struct mem_Allocator__206 const a0, uintptr_t const a1, uintptr_t const a2) {
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
 nav__5221_52 t17;
 nav__5221_39 t18;
 bool t3;
 uint8_t t6;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = a1;
 t3 = t2 == UINT64_C(0);
 if (t3) {
  return (nav__5221_39){(uint8_t *)UINTPTR_MAX,0};
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
 return (nav__5221_39){((uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),zig_error_OutOfMemory};

 zig_block_1:;
 t15 = t4;
 t16 = (uint8_t *const *)&t15;
 t14 = (*t16);
 t14 = (uint8_t *)(((uintptr_t)t14) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t3 = (uintptr_t)0ul <= a1;
 if (t3) {
  goto zig_block_2;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, a1);
 zig_unreachable();

 zig_block_2:;
 t3 = (uintptr_t)0ul <= a1;
 if (t3) {
  goto zig_block_3;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, a1);
 zig_unreachable();

 zig_block_3:;
 t17.ptr = t14;
 t17.len = a1;
 memset(t17.ptr, 0xaa, t17.len);
 t18.payload = t4;
 t18.error = UINT16_C(0);
 return t18;
}

static nav__4230_38 io_Reader_read__4230(struct io_Reader__2439 const a0, nav__4230_41 const a1) {
 struct io_Reader__2439 const *t1;
 nav__4230_38 (*const *t2)(void const *, nav__4230_41);
 nav__4230_38 (*t3)(void const *, nav__4230_41);
 void const *t4;
 nav__4230_38 t5;
 struct io_Reader__2439 t0;
 t0 = a0;
 t1 = (struct io_Reader__2439 const *)&t0;
 t2 = (nav__4230_38 (*const *)(void const *, nav__4230_41))&t1->readFn;
 t3 = (*t2);
 t4 = a0.context;
 t5 = t3(t4, a1);
 return t5;
}

static uintptr_t os_linux_x86_64_syscall4__4598(uintptr_t const a0, uintptr_t const a1, uintptr_t const a2, uintptr_t const a3, uintptr_t const a4) {
 uintptr_t t0;
 uintptr_t t1;
 t0 = a0;
 t1 = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
 register uintptr_t t2 __asm("rax") = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
 register uintptr_t const t3 __asm("rax") = t0;
 register uintptr_t const t4 __asm("rdi") = a1;
 register uintptr_t const t5 __asm("rsi") = a2;
 register uintptr_t const t6 __asm("rdx") = a3;
 register uintptr_t const t7 __asm("r10") = a4;
 __asm volatile("syscall": [ret]"=r"(t2): [number]"r"(t3), [arg1]"r"(t4), [arg2]"r"(t5), [arg3]"r"(t6), [arg4]"r"(t7): "rcx", "r11", "memory");
 t1 = t2;
 return t1;
}

static nav__5243_39 mem_sliceAsBytes__anon_4546__5243(nav__5243_39 const a0) {
 uintptr_t t0;
 uint64_t t1;
 uint8_t const *t4;
 uint8_t const *t5;
 uint8_t const *const *t6;
 nav__5243_39 t7;
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
  return (nav__5243_39){(uint8_t const *)((void const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),(uintptr_t)0ul};
 }
 goto zig_block_0;

 zig_block_0:;
 t4 = a0.ptr;
 t5 = t4;
 t6 = (uint8_t const *const *)&t5;
 t0 = a0.len;
 t4 = (*t6);
 t4 = (uint8_t const *)(((uintptr_t)t4) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t3 = (uintptr_t)0ul <= t0;
 if (t3) {
  goto zig_block_2;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t0);
 zig_unreachable();

 zig_block_2:;
 t3 = (uintptr_t)0ul <= t0;
 if (t3) {
  goto zig_block_3;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t0);
 zig_unreachable();

 zig_block_3:;
 t7.ptr = t4;
 t7.len = t0;
 return t7;
}

static uint32_t Thread_getCurrentId__4303(void) {
 uint32_t t0;
 t0 = Thread_PosixThreadImpl_getCurrentId__4572();
 return t0;
}

static void Thread_Mutex_lock__4744(struct Thread_Mutex__3251 *const a0) {
 struct Thread_Mutex__3251 *const *t1;
 struct Thread_Mutex__3251 *t2;
 struct Thread_Mutex__3251 *t0;
 struct Thread_Mutex_DebugImpl__3266 *t3;
 struct Thread_Mutex_DebugImpl__3266 *t4;
 struct Thread_Mutex_DebugImpl__3266 *const *t5;
 struct atomic_Value_28u32_29__3233 *t7;
 struct atomic_Value_28u32_29__3233 *t16;
 struct atomic_Value_28u32_29__3233 const *t8;
 struct atomic_Value_28u32_29__3233 const *t9;
 struct atomic_Value_28u32_29__3233 const *const *t10;
 uint32_t const *t11;
 struct Thread_Mutex_FutexImpl__3281 *t15;
 struct atomic_Value_28u32_29__3233 *const *t17;
 uint32_t *t18;
 uint32_t t6;
 uint32_t t12;
 bool t13;
 bool t14;
 t0 = a0;
 t1 = (struct Thread_Mutex__3251 *const *)&t0;
 t2 = (*t1);
 t3 = (struct Thread_Mutex_DebugImpl__3266 *)&t2->impl;
 t4 = t3;
 t5 = (struct Thread_Mutex_DebugImpl__3266 *const *)&t4;
 t6 = Thread_getCurrentId__4303();
 t3 = (*t5);
 t7 = (struct atomic_Value_28u32_29__3233 *)&t3->locking_thread;
 t8 = (struct atomic_Value_28u32_29__3233 const *)t7;
 t9 = t8;
 t10 = (struct atomic_Value_28u32_29__3233 const *const *)&t9;
 t8 = (*t10);
 t11 = (uint32_t const *)&t8->raw;
 zig_atomic_load(t12, (zig_atomic(uint32_t) *)t11, zig_memory_order_relaxed, u32, uint32_t);
 t13 = t12 == t6;
 if (t13) {
  t13 = t6 != UINT32_C(0);
  t14 = t13;
  goto zig_block_1;
 }
 t14 = false;
 goto zig_block_1;

 zig_block_1:;
 if (t14) {
  debug_no_panic_call__4091((nav__4744_56){(uint8_t const *)&__anon_4962,(uintptr_t)17ul}, (nav__4744_58){(uintptr_t)0xaaaaaaaaaaaaaaaaul,true});
  zig_unreachable();
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = (*t5);
 t15 = (struct Thread_Mutex_FutexImpl__3281 *)&t3->impl;
 Thread_Mutex_FutexImpl_lock__4772(t15);
 t3 = (*t5);
 t7 = (struct atomic_Value_28u32_29__3233 *)&t3->locking_thread;
 t16 = t7;
 t17 = (struct atomic_Value_28u32_29__3233 *const *)&t16;
 t7 = (*t17);
 t18 = (uint32_t *)&t7->raw;
 zig_atomic_store((zig_atomic(uint32_t) *)t18, t6, zig_memory_order_relaxed, u32, uint32_t);
 return;
}

static uint16_t Progress_write__4385(nav__4385_39 const a0) {
 struct fs_File__546 t0;
 uint16_t t1;
 t0 = (*&(((struct Progress__2767 *)&Progress_global_progress__4341))->terminal);
 t1 = fs_File_writeAll__1144(t0, a0);
 if (t1) {
  return t1;
 }
 return 0;
}

static uint16_t posix_errno__anon_4609__5245(intptr_t const a0) {
 int64_t t1;
 int *t3;
 int t4;
 int t5;
 uint32_t t6;
 uint16_t t0;
 uint16_t t7;
 bool t2;
 t1 = a0;
 t2 = t1 == -INT64_C(1);
 if (t2) {
  t3 = zig_e___errno_location();
  t4 = (*t3);
  t5 = zig_subw_i32(65535, t4, UINT8_C(32));
  memcpy(&t6, &t5, sizeof(uint32_t));
  t6 = zig_wrap_u32(t6, UINT8_C(32));
  t2 = t6 <= UINT32_C(65535);
  if (t2) {
   goto zig_block_1;
  }
  debug_no_panic_invalidEnumValue__4113();
  zig_unreachable();

  zig_block_1:;
  t7 = (uint16_t)t4;
  t0 = t7;
  goto zig_block_0;
 }
 t0 = UINT16_C(0);
 goto zig_block_0;

 zig_block_0:;
 return t0;
}

static zig_cold zig_noreturn void debug_no_panic_negativeToUnsigned__4104(void) {
 zig_trap();
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

static nav__4787_38 unicode_utf8ByteSequenceLength__4787(uint8_t const a0) {
 nav__4787_38 t0;
 switch (a0) {
  default: if ((a0 >= UINT8_C(0) && a0 <= UINT8_C(127))) {
   t0 = (nav__4787_38){0,UINT8_C(1)};
   goto zig_block_0;
  }if ((a0 >= UINT8_C(192) && a0 <= UINT8_C(223))) {
   t0 = (nav__4787_38){0,UINT8_C(2)};
   goto zig_block_0;
  }if ((a0 >= UINT8_C(224) && a0 <= UINT8_C(239))) {
   t0 = (nav__4787_38){0,UINT8_C(3)};
   goto zig_block_0;
  }if ((a0 >= UINT8_C(240) && a0 <= UINT8_C(247))) {
   t0 = (nav__4787_38){0,UINT8_C(4)};
   goto zig_block_0;
  }{
   t0 = (nav__4787_38){zig_error_Utf8InvalidStartByte,UINT8_C(0x2)};
   goto zig_block_0;
  }
 }

 zig_block_0:;
 return t0;
}

static nav__4803_38 unicode_utf8CountCodepoints__4803(nav__4803_40 const a0) {
 nav__4803_40 const *t1;
 uintptr_t t4;
 uintptr_t t5;
 uintptr_t t19;
 uintptr_t t20;
 uintptr_t t2;
 uintptr_t t3;
 uint64_t t6;
 uint64_t t7;
 nav__4803_46 t9;
 nav__4803_40 t11;
 nav__4803_40 t0;
 uint8_t const *t12;
 uint8_t const (*t13)[8];
 nav__4803_38 t17;
 nav__4803_52 t21;
 nav__4803_50 t15;
 uint16_t t16;
 bool t8;
 uint8_t t10;
 uint8_t t18;
 uint8_t t14[8];
 t0 = a0;
 t1 = (nav__4803_40 const *)&t0;
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
  t9.f1 = zig_addo_u64(&t9.f0, t5, (uintptr_t)8ul, UINT8_C(64));
  t10 = t9.f1;
  t8 = t10 == UINT8_C(0);
  if (t8) {
   goto zig_block_4;
  }
  debug_no_panic_integerOverflow__4105();
  zig_unreachable();

  zig_block_4:;
  t5 = t9.f0;
  t4 = a0.len;
  t7 = t5;
  t6 = t4;
  t8 = t7 <= t6;
  if (t8) {
   t4 = t3;
   t11 = (*t1);
   t12 = t11.ptr;
   t12 = (uint8_t const *)(((uintptr_t)t12) + (t4*sizeof(uint8_t)));
   t4 = t4 + (uintptr_t)8ul;
   t13 = (uint8_t const (*)[8])t12;
   t5 = t11.len;
   t8 = t4 <= t5;
   if (t8) {
    goto zig_block_5;
   }
   debug_no_panic_outOfBounds__4094(t4, t5);
   zig_unreachable();

   zig_block_5:;
   memcpy(t14, (const char *)t13, sizeof(uint8_t[8]));
   memcpy(&t5, &t14, sizeof(uintptr_t));
   t5 = zig_wrap_u64(t5, UINT8_C(64));
   t5 = t5 & (uintptr_t)9259542123273814144ul;
   t6 = t5;
   t8 = t6 != UINT64_C(0);
   if (t8) {
    goto zig_block_2;
   }
   goto zig_block_6;

   zig_block_6:;
   t5 = t2;
   t9.f1 = zig_addo_u64(&t9.f0, t5, (uintptr_t)8ul, UINT8_C(64));
   t10 = t9.f1;
   t8 = t10 == UINT8_C(0);
   if (t8) {
    goto zig_block_7;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_7:;
   t5 = t9.f0;
   t2 = t5;
   t5 = t3;
   t9.f1 = zig_addo_u64(&t9.f0, t5, (uintptr_t)8ul, UINT8_C(64));
   t10 = t9.f1;
   t8 = t10 == UINT8_C(0);
   if (t8) {
    goto zig_block_8;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_8:;
   t5 = t9.f0;
   t3 = t5;
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
   t5 = a0.len;
   t8 = t4 < t5;
   if (t8) {
    goto zig_block_10;
   }
   debug_no_panic_outOfBounds__4094(t4, t5);
   zig_unreachable();

   zig_block_10:;
   t10 = a0.ptr[t4];
   t15 = unicode_utf8ByteSequenceLength__4787(t10);
   if (t15.error) {
    t16 = t15.error;
    t17.payload = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
    t17.error = t16;
    return t17;
   }
   t10 = t15.payload;
   t4 = t3;
   t5 = (uintptr_t)t10;
   t9.f1 = zig_addo_u64(&t9.f0, t4, t5, UINT8_C(64));
   t18 = t9.f1;
   t8 = t18 == UINT8_C(0);
   if (t8) {
    goto zig_block_12;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_12:;
   t5 = t9.f0;
   t4 = a0.len;
   t6 = t5;
   t7 = t4;
   t8 = t6 > t7;
   if (t8) {
    return (nav__4803_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_TruncatedInput};
   }
   goto zig_block_11;

   zig_block_11:;
   switch (t10) {
    case UINT8_C(1): {
     goto zig_block_13;
    }
    default: {
     t4 = t3;
     t11 = (*t1);
     t12 = t11.ptr;
     t12 = (uint8_t const *)(((uintptr_t)t12) + (t4*sizeof(uint8_t)));
     t5 = (uintptr_t)t10;
     t5 = t4 + t5;
     t19 = (uintptr_t)t10;
     t20 = t11.len;
     t8 = t5 <= t20;
     if (t8) {
      goto zig_block_14;
     }
     debug_no_panic_outOfBounds__4094(t5, t20);
     zig_unreachable();

     zig_block_14:;
     t8 = t4 <= t5;
     if (t8) {
      goto zig_block_15;
     }
     debug_no_panic_outOfBounds__4094(t4, t5);
     zig_unreachable();

     zig_block_15:;
     t11.ptr = t12;
     t11.len = t19;
     t21 = unicode_utf8Decode__4793(t11);
     if (t21.error) {
      t16 = t21.error;
      t17.payload = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
      t17.error = t16;
      return t17;
     }
     goto zig_block_13;
    }
   }

   zig_block_13:;
   t20 = t3;
   t19 = (uintptr_t)t10;
   t9.f1 = zig_addo_u64(&t9.f0, t20, t19, UINT8_C(64));
   t10 = t9.f1;
   t8 = t10 == UINT8_C(0);
   if (t8) {
    goto zig_block_16;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_16:;
   t19 = t9.f0;
   t3 = t19;
   t19 = t2;
   t9.f1 = zig_addo_u64(&t9.f0, t19, (uintptr_t)1ul, UINT8_C(64));
   t10 = t9.f1;
   t8 = t10 == UINT8_C(0);
   if (t8) {
    goto zig_block_17;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_17:;
   t19 = t9.f0;
   t2 = t19;
   goto zig_block_9;
  }
  goto zig_block_9;

  zig_block_9:;
  goto zig_block_1;
 }
 goto zig_block_0;

 zig_block_1:;
 goto zig_loop_9;

 zig_block_0:;
 t20 = t2;
 t17.payload = t20;
 t17.error = UINT16_C(0);
 return t17;
}

static uint16_t fmt_formatBuf__anon_4737__5246(nav__5246_39 const a0, struct fmt_FormatOptions__3758 const a1, struct io_Writer__1950 const a2) {
 struct io_Writer__1950 const *t1;
 nav__5246_44 t2;
 uintptr_t t4;
 uintptr_t t5;
 uintptr_t t7;
 nav__5246_48 t6;
 uint64_t t8;
 uint64_t t9;
 nav__5246_55 t10;
 struct io_Writer__1950 t12;
 struct io_Writer__1950 t0;
 nav__5246_59 t17;
 nav__5246_39 t19;
 nav__5246_39 t21;
 uint8_t *t20;
 uint32_t t16;
 uint16_t t13;
 uint16_t t14;
 nav__5246_62 t18;
 bool t3;
 uint8_t t11;
 uint8_t t15[4];
 t0 = a2;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = a1.width;
 t3 = t2.is_null != true;
 if (t3) {
  t4 = t2.payload;
  t6 = unicode_utf8CountCodepoints__4803(a0);
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
   t10.f1 = zig_subo_u64(&t10.f0, t4, t5, UINT8_C(64));
   t11 = t10.f1;
   t3 = t11 == UINT8_C(0);
   if (t3) {
    goto zig_block_3;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_3:;
   t5 = t10.f0;
   t7 = t5;
   goto zig_block_2;
  }
  t7 = (uintptr_t)0ul;
  goto zig_block_2;

  zig_block_2:;
  t9 = t7;
  t3 = t9 == UINT64_C(0);
  if (t3) {
   t12 = (*t1);
   t13 = io_Writer_writeAll__3826(t12, a0);
   memcpy(&t14, &t13, sizeof(uint16_t));
   return t14;
  }
  goto zig_block_4;

  zig_block_4:;
  memset(&t15, 0xaa, sizeof(uint8_t[4]));
  t16 = a1.fill;
  t17.ptr = &t15[(uintptr_t)0ul];
  t17.len = (uintptr_t)4ul;
  t18 = unicode_utf8Encode__4788(t16, t17);
  t3 = t18.error == UINT16_C(0);
  if (t3) {
   t11 = t18.payload;
   t20 = (uint8_t *)&t15;
   t20 = (uint8_t *)(((uintptr_t)t20) + ((uintptr_t)0ul*sizeof(uint8_t)));
   t5 = (uintptr_t)t11;
   t3 = (uintptr_t)0ul <= t5;
   if (t3) {
    goto zig_block_6;
   }
   debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t5);
   zig_unreachable();

   zig_block_6:;
   t3 = t5 <= (uintptr_t)4ul;
   if (t3) {
    goto zig_block_7;
   }
   debug_no_panic_outOfBounds__4094(t5, (uintptr_t)4ul);
   zig_unreachable();

   zig_block_7:;
   t3 = (uintptr_t)0ul <= t5;
   if (t3) {
    goto zig_block_8;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t5);
   zig_unreachable();

   zig_block_8:;
   t17.ptr = t20;
   t17.len = t5;
   memcpy(&t21, &t17, sizeof(nav__5246_39));
   t19 = t21;
   goto zig_block_5;

  }
  t14 = t18.error;
  switch (t14) {
   case zig_error_Utf8CannotEncodeSurrogateHalf:
   case zig_error_CodepointTooLarge: {
    t19 = (nav__5246_39){(uint8_t const *)&__anon_5070,(uintptr_t)3ul};
    goto zig_block_5;
   }
   default: {
    debug_no_panic_corruptSwitch__4111();
    zig_unreachable();
   }
  }

  zig_block_5:;
  t11 = a1.alignment;
  switch (t11) {
   case UINT8_C(0): {
    t12 = (*t1);
    t14 = io_Writer_writeAll__3826(t12, a0);
    if (t14) {
     return t14;
    }
    t12 = (*t1);
    t14 = io_Writer_writeBytesNTimes__3830(t12, t19, t7);
    if (t14) {
     return t14;
    }
    goto zig_block_10;
   }
   case UINT8_C(1): {
    t5 = t7 / (uintptr_t)2ul;
    t10.f1 = zig_addo_u64(&t10.f0, t7, (uintptr_t)1ul, UINT8_C(64));
    t11 = t10.f1;
    t3 = t11 == UINT8_C(0);
    if (t3) {
     goto zig_block_11;
    }
    debug_no_panic_integerOverflow__4105();
    zig_unreachable();

    zig_block_11:;
    t7 = t10.f0;
    t7 = t7 / (uintptr_t)2ul;
    t12 = (*t1);
    t14 = io_Writer_writeBytesNTimes__3830(t12, t19, t5);
    if (t14) {
     return t14;
    }
    t12 = (*t1);
    t14 = io_Writer_writeAll__3826(t12, a0);
    if (t14) {
     return t14;
    }
    t12 = (*t1);
    t14 = io_Writer_writeBytesNTimes__3830(t12, t19, t7);
    if (t14) {
     return t14;
    }
    goto zig_block_10;
   }
   case UINT8_C(2): {
    t12 = (*t1);
    t14 = io_Writer_writeBytesNTimes__3830(t12, t19, t7);
    if (t14) {
     return t14;
    }
    t12 = (*t1);
    t14 = io_Writer_writeAll__3826(t12, a0);
    if (t14) {
     return t14;
    }
    goto zig_block_10;
   }
   default: {
    debug_no_panic_corruptSwitch__4111();
    zig_unreachable();
   }
  }

  zig_block_10:;
  goto zig_block_0;
 }
 t12 = (*t1);
 t14 = io_Writer_writeAll__3826(t12, a0);
 if (t14) {
  return t14;
 }
 goto zig_block_0;

 zig_block_0:;
 return 0;
}

static void Thread_Mutex_unlock__4745(struct Thread_Mutex__3251 *const a0) {
 struct Thread_Mutex__3251 *const *t1;
 struct Thread_Mutex__3251 *t2;
 struct Thread_Mutex__3251 *t0;
 struct Thread_Mutex_DebugImpl__3266 *t3;
 struct Thread_Mutex_DebugImpl__3266 *t4;
 struct Thread_Mutex_DebugImpl__3266 *const *t5;
 struct atomic_Value_28u32_29__3233 *t6;
 struct atomic_Value_28u32_29__3233 *t14;
 struct atomic_Value_28u32_29__3233 const *t7;
 struct atomic_Value_28u32_29__3233 const *t8;
 struct atomic_Value_28u32_29__3233 const *const *t9;
 uint32_t const *t10;
 struct atomic_Value_28u32_29__3233 *const *t15;
 uint32_t *t16;
 struct Thread_Mutex_FutexImpl__3281 *t17;
 uint32_t t11;
 uint32_t t12;
 bool t13;
 t0 = a0;
 t1 = (struct Thread_Mutex__3251 *const *)&t0;
 t2 = (*t1);
 t3 = (struct Thread_Mutex_DebugImpl__3266 *)&t2->impl;
 t4 = t3;
 t5 = (struct Thread_Mutex_DebugImpl__3266 *const *)&t4;
 t3 = (*t5);
 t6 = (struct atomic_Value_28u32_29__3233 *)&t3->locking_thread;
 t7 = (struct atomic_Value_28u32_29__3233 const *)t6;
 t8 = t7;
 t9 = (struct atomic_Value_28u32_29__3233 const *const *)&t8;
 t7 = (*t9);
 t10 = (uint32_t const *)&t7->raw;
 zig_atomic_load(t11, (zig_atomic(uint32_t) *)t10, zig_memory_order_relaxed, u32, uint32_t);
 t12 = Thread_getCurrentId__4303();
 t13 = t11 == t12;
 debug_assert__179(t13);
 t3 = (*t5);
 t6 = (struct atomic_Value_28u32_29__3233 *)&t3->locking_thread;
 t14 = t6;
 t15 = (struct atomic_Value_28u32_29__3233 *const *)&t14;
 t6 = (*t15);
 t16 = (uint32_t *)&t6->raw;
 t12 = UINT32_C(0);
 zig_atomic_store((zig_atomic(uint32_t) *)t16, t12, zig_memory_order_relaxed, u32, uint32_t);
 t3 = (*t5);
 t17 = (struct Thread_Mutex_FutexImpl__3281 *)&t3->impl;
 Thread_Mutex_FutexImpl_unlock__4775(t17);
 return;
}

static nav__5247_38 mem_indexOfScalarPos__anon_4748__5247(nav__5247_40 const a0, uintptr_t const a1, uint8_t const a2) {
 nav__5247_40 const *t1;
 uintptr_t t2;
 uintptr_t t9;
 uintptr_t t27;
 uintptr_t t28;
 uintptr_t t6;
 uintptr_t t26;
 uint64_t t3;
 uint64_t t4;
 nav__5247_46 t7;
 nav__5247_40 t11;
 nav__5247_40 t0;
 uint8_t const *t12;
 uint8_t const (*t13)[32];
 nav__5247_38 t19;
 uint8_t const (*t21)[16];
 bool t5;
 uint8_t t8;
 uint8_t t29;
 uint8_t t10[32];
 uint8_t t15[32];
 uint8_t t14[32];
 bool t16[32];
 nav__5247_52 t17;
 nav__5247_54 t18;
 uint8_t t20[16];
 uint8_t t23[16];
 uint8_t t22[16];
 bool t24[16];
 nav__5247_60 t25;
 t0 = a0;
 t1 = (nav__5247_40 const *)&t0;
 t2 = a0.len;
 t3 = a1;
 t4 = t2;
 t5 = t3 >= t4;
 if (t5) {
  return (nav__5247_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,true};
 }
 goto zig_block_0;

 zig_block_0:;
 t6 = a1;
 t5 = math_isPowerOfTwo__anon_5093__5256();
 if (t5) {
  t2 = t6;
  t7.f1 = zig_addo_u64(&t7.f0, t2, (uintptr_t)64ul, UINT8_C(64));
  t8 = t7.f1;
  t5 = t8 == UINT8_C(0);
  if (t5) {
   goto zig_block_3;
  }
  debug_no_panic_integerOverflow__4105();
  zig_unreachable();

  zig_block_3:;
  t2 = t7.f0;
  t9 = a0.len;
  t4 = t2;
  t3 = t9;
  t5 = t4 < t3;
  if (t5) {
   for (t9 = (uintptr_t)0ul; t9 < (uintptr_t)32ul; t9 += (uintptr_t)1ul) {
    t10[t9] = a2;
   }
   zig_loop_41:
   t9 = t6;
   t11 = (*t1);
   t12 = t11.ptr;
   t12 = (uint8_t const *)(((uintptr_t)t12) + (t9*sizeof(uint8_t)));
   t9 = t9 + (uintptr_t)32ul;
   t13 = (uint8_t const (*)[32])t12;
   t2 = t11.len;
   t5 = t9 <= t2;
   if (t5) {
    goto zig_block_5;
   }
   debug_no_panic_outOfBounds__4094(t9, t2);
   zig_unreachable();

   zig_block_5:;
   memcpy(t14, (const char *)t13, sizeof(uint8_t[32]));
   memcpy(&t15, &t14, sizeof(uint8_t[32]));
   for (t9 = (uintptr_t)0ul; t9 < (uintptr_t)32ul; t9 += (uintptr_t)1ul) {
    t16[t9] = t15[t9] == t10[t9];
   }
   t5 = false;
   for (t9 = (uintptr_t)0ul; t9 < (uintptr_t)32ul; t9 += (uintptr_t)1ul) {
    t5 |= t16[t9];
   }
   if (t5) {
    t9 = t6;
    memcpy(t17.array, t16, sizeof(nav__5247_52));
    t18 = simd_firstTrue__anon_5122__5263(t17);
    t5 = t18.is_null != true;
    if (t5) {
     goto zig_block_7;
    }
    debug_no_panic_unwrapNull__4099();
    zig_unreachable();

    zig_block_7:;
    t8 = t18.payload;
    t2 = (uintptr_t)t8;
    t7.f1 = zig_addo_u64(&t7.f0, t9, t2, UINT8_C(64));
    t8 = t7.f1;
    t5 = t8 == UINT8_C(0);
    if (t5) {
     goto zig_block_8;
    }
    debug_no_panic_integerOverflow__4105();
    zig_unreachable();

    zig_block_8:;
    t2 = t7.f0;
    t19.is_null = false;
    t19.payload = t2;
    return t19;
   }
   goto zig_block_6;

   zig_block_6:;
   t9 = t6;
   t7.f1 = zig_addo_u64(&t7.f0, t9, (uintptr_t)32ul, UINT8_C(64));
   t8 = t7.f1;
   t5 = t8 == UINT8_C(0);
   if (t5) {
    goto zig_block_9;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_9:;
   t9 = t7.f0;
   t6 = t9;
   t9 = t6;
   t11 = (*t1);
   t12 = t11.ptr;
   t12 = (uint8_t const *)(((uintptr_t)t12) + (t9*sizeof(uint8_t)));
   t9 = t9 + (uintptr_t)32ul;
   t13 = (uint8_t const (*)[32])t12;
   t2 = t11.len;
   t5 = t9 <= t2;
   if (t5) {
    goto zig_block_10;
   }
   debug_no_panic_outOfBounds__4094(t9, t2);
   zig_unreachable();

   zig_block_10:;
   memcpy(t14, (const char *)t13, sizeof(uint8_t[32]));
   memcpy(&t15, &t14, sizeof(uint8_t[32]));
   for (t9 = (uintptr_t)0ul; t9 < (uintptr_t)32ul; t9 += (uintptr_t)1ul) {
    t16[t9] = t15[t9] == t10[t9];
   }
   t5 = false;
   for (t9 = (uintptr_t)0ul; t9 < (uintptr_t)32ul; t9 += (uintptr_t)1ul) {
    t5 |= t16[t9];
   }
   if (t5) {
    t9 = t6;
    memcpy(t17.array, t16, sizeof(nav__5247_52));
    t18 = simd_firstTrue__anon_5122__5263(t17);
    t5 = t18.is_null != true;
    if (t5) {
     goto zig_block_12;
    }
    debug_no_panic_unwrapNull__4099();
    zig_unreachable();

    zig_block_12:;
    t8 = t18.payload;
    t2 = (uintptr_t)t8;
    t7.f1 = zig_addo_u64(&t7.f0, t9, t2, UINT8_C(64));
    t8 = t7.f1;
    t5 = t8 == UINT8_C(0);
    if (t5) {
     goto zig_block_13;
    }
    debug_no_panic_integerOverflow__4105();
    zig_unreachable();

    zig_block_13:;
    t2 = t7.f0;
    t19.is_null = false;
    t19.payload = t2;
    return t19;
   }
   goto zig_block_11;

   zig_block_11:;
   t9 = t6;
   t7.f1 = zig_addo_u64(&t7.f0, t9, (uintptr_t)32ul, UINT8_C(64));
   t8 = t7.f1;
   t5 = t8 == UINT8_C(0);
   if (t5) {
    goto zig_block_14;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_14:;
   t9 = t7.f0;
   t6 = t9;
   t9 = t6;
   t7.f1 = zig_addo_u64(&t7.f0, t9, (uintptr_t)64ul, UINT8_C(64));
   t8 = t7.f1;
   t5 = t8 == UINT8_C(0);
   if (t5) {
    goto zig_block_16;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_16:;
   t9 = t7.f0;
   t2 = a0.len;
   t3 = t9;
   t4 = t2;
   t5 = t3 >= t4;
   if (t5) {
    goto zig_block_4;
   }
   goto zig_block_15;

   zig_block_15:;
   goto zig_loop_41;

   zig_block_4:;
   goto zig_block_2;
  }
  goto zig_block_2;

  zig_block_2:;
  t9 = t6;
  t7.f1 = zig_addo_u64(&t7.f0, t9, (uintptr_t)32ul, UINT8_C(64));
  t8 = t7.f1;
  t5 = t8 == UINT8_C(0);
  if (t5) {
   goto zig_block_18;
  }
  debug_no_panic_integerOverflow__4105();
  zig_unreachable();

  zig_block_18:;
  t9 = t7.f0;
  t2 = a0.len;
  t4 = t9;
  t3 = t2;
  t5 = t4 < t3;
  if (t5) {
   for (t2 = (uintptr_t)0ul; t2 < (uintptr_t)32ul; t2 += (uintptr_t)1ul) {
    t15[t2] = a2;
   }
   t2 = t6;
   t11 = (*t1);
   t12 = t11.ptr;
   t12 = (uint8_t const *)(((uintptr_t)t12) + (t2*sizeof(uint8_t)));
   t2 = t2 + (uintptr_t)32ul;
   t13 = (uint8_t const (*)[32])t12;
   t9 = t11.len;
   t5 = t2 <= t9;
   if (t5) {
    goto zig_block_19;
   }
   debug_no_panic_outOfBounds__4094(t2, t9);
   zig_unreachable();

   zig_block_19:;
   memcpy(t14, (const char *)t13, sizeof(uint8_t[32]));
   memcpy(&t10, &t14, sizeof(uint8_t[32]));
   for (t9 = (uintptr_t)0ul; t9 < (uintptr_t)32ul; t9 += (uintptr_t)1ul) {
    t16[t9] = t10[t9] == t15[t9];
   }
   t5 = false;
   for (t9 = (uintptr_t)0ul; t9 < (uintptr_t)32ul; t9 += (uintptr_t)1ul) {
    t5 |= t16[t9];
   }
   if (t5) {
    t9 = t6;
    memcpy(t17.array, t16, sizeof(nav__5247_52));
    t18 = simd_firstTrue__anon_5122__5263(t17);
    t5 = t18.is_null != true;
    if (t5) {
     goto zig_block_21;
    }
    debug_no_panic_unwrapNull__4099();
    zig_unreachable();

    zig_block_21:;
    t8 = t18.payload;
    t2 = (uintptr_t)t8;
    t7.f1 = zig_addo_u64(&t7.f0, t9, t2, UINT8_C(64));
    t8 = t7.f1;
    t5 = t8 == UINT8_C(0);
    if (t5) {
     goto zig_block_22;
    }
    debug_no_panic_integerOverflow__4105();
    zig_unreachable();

    zig_block_22:;
    t2 = t7.f0;
    t19.is_null = false;
    t19.payload = t2;
    return t19;
   }
   goto zig_block_20;

   zig_block_20:;
   t9 = t6;
   t7.f1 = zig_addo_u64(&t7.f0, t9, (uintptr_t)32ul, UINT8_C(64));
   t8 = t7.f1;
   t5 = t8 == UINT8_C(0);
   if (t5) {
    goto zig_block_23;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_23:;
   t9 = t7.f0;
   t6 = t9;
   goto zig_block_17;
  }
  goto zig_block_17;

  zig_block_17:;
  t9 = t6;
  t7.f1 = zig_addo_u64(&t7.f0, t9, (uintptr_t)16ul, UINT8_C(64));
  t8 = t7.f1;
  t5 = t8 == UINT8_C(0);
  if (t5) {
   goto zig_block_25;
  }
  debug_no_panic_integerOverflow__4105();
  zig_unreachable();

  zig_block_25:;
  t9 = t7.f0;
  t2 = a0.len;
  t4 = t9;
  t3 = t2;
  t5 = t4 < t3;
  if (t5) {
   for (t2 = (uintptr_t)0ul; t2 < (uintptr_t)16ul; t2 += (uintptr_t)1ul) {
    t20[t2] = a2;
   }
   t2 = t6;
   t11 = (*t1);
   t12 = t11.ptr;
   t12 = (uint8_t const *)(((uintptr_t)t12) + (t2*sizeof(uint8_t)));
   t2 = t2 + (uintptr_t)16ul;
   t21 = (uint8_t const (*)[16])t12;
   t9 = t11.len;
   t5 = t2 <= t9;
   if (t5) {
    goto zig_block_26;
   }
   debug_no_panic_outOfBounds__4094(t2, t9);
   zig_unreachable();

   zig_block_26:;
   memcpy(t22, (const char *)t21, sizeof(uint8_t[16]));
   memcpy(&t23, &t22, sizeof(uint8_t[16]));
   for (t9 = (uintptr_t)0ul; t9 < (uintptr_t)16ul; t9 += (uintptr_t)1ul) {
    t24[t9] = t23[t9] == t20[t9];
   }
   t5 = false;
   for (t9 = (uintptr_t)0ul; t9 < (uintptr_t)16ul; t9 += (uintptr_t)1ul) {
    t5 |= t24[t9];
   }
   if (t5) {
    t9 = t6;
    memcpy(t25.array, t24, sizeof(nav__5247_60));
    t18 = simd_firstTrue__anon_5143__5264(t25);
    t5 = t18.is_null != true;
    if (t5) {
     goto zig_block_28;
    }
    debug_no_panic_unwrapNull__4099();
    zig_unreachable();

    zig_block_28:;
    t8 = t18.payload;
    t2 = (uintptr_t)t8;
    t7.f1 = zig_addo_u64(&t7.f0, t9, t2, UINT8_C(64));
    t8 = t7.f1;
    t5 = t8 == UINT8_C(0);
    if (t5) {
     goto zig_block_29;
    }
    debug_no_panic_integerOverflow__4105();
    zig_unreachable();

    zig_block_29:;
    t2 = t7.f0;
    t19.is_null = false;
    t19.payload = t2;
    return t19;
   }
   goto zig_block_27;

   zig_block_27:;
   t9 = t6;
   t7.f1 = zig_addo_u64(&t7.f0, t9, (uintptr_t)16ul, UINT8_C(64));
   t8 = t7.f1;
   t5 = t8 == UINT8_C(0);
   if (t5) {
    goto zig_block_30;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_30:;
   t9 = t7.f0;
   t6 = t9;
   goto zig_block_24;
  }
  goto zig_block_24;

  zig_block_24:;
  goto zig_block_1;
 }
 goto zig_block_1;

 zig_block_1:;
 t26 = (uintptr_t)0ul;
 t9 = t6;
 t11 = (*t1);
 t12 = t11.ptr;
 t12 = (uint8_t const *)(((uintptr_t)t12) + (t9*sizeof(uint8_t)));
 t2 = t11.len;
 t5 = t9 <= t2;
 if (t5) {
  goto zig_block_31;
 }
 debug_no_panic_startGreaterThanEnd__4095(t9, t2);
 zig_unreachable();

 zig_block_31:;
 t27 = t2 - t9;
 t28 = t11.len;
 t5 = t2 <= t28;
 if (t5) {
  goto zig_block_32;
 }
 debug_no_panic_outOfBounds__4094(t2, t28);
 zig_unreachable();

 zig_block_32:;
 t5 = t9 <= t2;
 if (t5) {
  goto zig_block_33;
 }
 debug_no_panic_outOfBounds__4094(t9, t2);
 zig_unreachable();

 zig_block_33:;
 t11.ptr = t12;
 t11.len = t27;
 t27 = t6;
 t2 = t11.len;
 zig_loop_374:
 t9 = t26;
 t4 = t9;
 t3 = t2;
 t5 = t4 < t3;
 if (t5) {
  t8 = t11.ptr[t9];
  t7.f1 = zig_addo_u64(&t7.f0, t27, t9, UINT8_C(64));
  t29 = t7.f1;
  t5 = t29 == UINT8_C(0);
  if (t5) {
   goto zig_block_36;
  }
  debug_no_panic_integerOverflow__4105();
  zig_unreachable();

  zig_block_36:;
  t28 = t7.f0;
  t5 = t8 == a2;
  if (t5) {
   t19.is_null = false;
   t19.payload = t28;
   return t19;
  }
  goto zig_block_37;

  zig_block_37:;
  goto zig_block_35;
 }
 goto zig_block_34;

 zig_block_35:;
 t9 = t9 + (uintptr_t)1ul;
 t26 = t9;
 goto zig_loop_374;

 zig_block_34:;
 return (nav__5247_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,true};
}

static uint16_t bincode_serializeInt__anon_4870__5251(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, uint32_t const a1) {
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *t1;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *t4;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 t2;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 t0;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 t3;
 struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const *const *t5;
 void const **t7;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *t8;
 void const *t9;
 nav__5251_48 (**t10)(void const *, nav__5251_50);
 struct io_Writer__1950 t11;
 struct io_Writer__1950 t6;
 struct io_Writer__1950 t12;
 struct io_Writer__1950 t14;
 struct io_Writer__1950 const *t13;
 nav__5251_50 t17;
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
 t10 = (nav__5251_48 (**)(void const *, nav__5251_50))&t6.writeFn;
 (*t10) = &io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29___4088;
 t11 = t6;
 t12 = t11;
 t13 = (struct io_Writer__1950 const *)&t12;
 t11 = (*t13);
 t14 = t11;
 t13 = (struct io_Writer__1950 const *)&t14;
 memset(&t15, 0xaa, sizeof(uint8_t[4]));
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

static uint16_t bincode_serializeStruct__anon_4875__5252(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, struct shared_Command__struct_2007__2007 const a1) {
 nav__5252_45 t2;
 uint32_t t0;
 uint16_t t1;
 t0 = a1.pid;
 t1 = bincode_serialize__anon_3993__5213(a0, t0);
 if (t1) {
  return t1;
 }
 t2 = a1.uri;
 t1 = bincode_serialize__anon_5173__5265(a0, t2);
 if (t1) {
  return t1;
 }
 return 0;
}

static uint16_t bincode_serializeStruct__anon_4876__5253(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, struct shared_Command__struct_2008__2008 const a1) {
 nav__5253_45 t0;
 uint16_t t1;
 t0 = a1.name;
 t1 = bincode_serialize__anon_5173__5265(a0, t0);
 if (t1) {
  return t1;
 }
 t0 = a1.version;
 t1 = bincode_serialize__anon_5173__5265(a0, t0);
 if (t1) {
  return t1;
 }
 return 0;
}

static uint32_t Thread_PosixThreadImpl_getCurrentId__4572(void) {
 uint32_t t0;
 t0 = Thread_LinuxThreadImpl_getCurrentId__5269();
 return t0;
}

static void Thread_Mutex_FutexImpl_lock__4772(struct Thread_Mutex_FutexImpl__3281 *const a0) {
 struct Thread_Mutex_FutexImpl__3281 *const *t1;
 struct Thread_Mutex_FutexImpl__3281 *t2;
 struct Thread_Mutex_FutexImpl__3281 *t0;
 bool t3;
 t0 = a0;
 t1 = (struct Thread_Mutex_FutexImpl__3281 *const *)&t0;
 t2 = (*t1);
 t3 = Thread_Mutex_FutexImpl_tryLock__4773(t2);
 t3 = !t3;
 if (t3) {
  t2 = (*t1);
  Thread_Mutex_FutexImpl_lockSlow__4774(t2);
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static nav__4793_38 unicode_utf8Decode__4793(nav__4793_40 const a0) {
 nav__4793_40 const *t1;
 uintptr_t t2;
 nav__4793_40 t8;
 nav__4793_40 t0;
 uint8_t const *t9;
 uint8_t const (*t10)[2];
 uint8_t const (*t14)[3];
 uint8_t const (*t17)[4];
 nav__4793_38 t3;
 nav__4793_38 t7;
 nav__4793_38 t13;
 uint32_t t6;
 bool t4;
 uint8_t t5;
 uint8_t t11[2];
 nav__4793_48 t12;
 uint8_t t15[3];
 nav__4793_52 t16;
 uint8_t t18[4];
 nav__4793_56 t19;
 t0 = a0;
 t1 = (nav__4793_40 const *)&t0;
 t2 = a0.len;
 switch (t2) {
  case (uintptr_t)1ul: {
   t2 = a0.len;
   t4 = (uintptr_t)0ul < t2;
   if (t4) {
    goto zig_block_1;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t2);
   zig_unreachable();

   zig_block_1:;
   t5 = a0.ptr[(uintptr_t)0ul];
   t6 = (uint32_t)t5;
   t7.payload = t6;
   t7.error = UINT16_C(0);
   t3 = t7;
   goto zig_block_0;
  }
  case (uintptr_t)2ul: {
   t8 = (*t1);
   t9 = t8.ptr;
   t9 = (uint8_t const *)(((uintptr_t)t9) + ((uintptr_t)0ul*sizeof(uint8_t)));
   t10 = (uint8_t const (*)[2])t9;
   t2 = t8.len;
   t4 = (uintptr_t)2ul <= t2;
   if (t4) {
    goto zig_block_2;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)2ul, t2);
   zig_unreachable();

   zig_block_2:;
   memcpy(t11, (const char *)t10, sizeof(uint8_t[2]));
   memcpy(t12.array, t11, sizeof(nav__4793_48));
   t7 = unicode_utf8Decode2__4795(t12);
   memcpy(&t13, &t7, sizeof(nav__4793_38));
   t3 = t13;
   goto zig_block_0;
  }
  case (uintptr_t)3ul: {
   t8 = (*t1);
   t9 = t8.ptr;
   t9 = (uint8_t const *)(((uintptr_t)t9) + ((uintptr_t)0ul*sizeof(uint8_t)));
   t14 = (uint8_t const (*)[3])t9;
   t2 = t8.len;
   t4 = (uintptr_t)3ul <= t2;
   if (t4) {
    goto zig_block_3;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)3ul, t2);
   zig_unreachable();

   zig_block_3:;
   memcpy(t15, (const char *)t14, sizeof(uint8_t[3]));
   memcpy(t16.array, t15, sizeof(nav__4793_52));
   t13 = unicode_utf8Decode3__4797(t16);
   memcpy(&t7, &t13, sizeof(nav__4793_38));
   t3 = t7;
   goto zig_block_0;
  }
  case (uintptr_t)4ul: {
   t8 = (*t1);
   t9 = t8.ptr;
   t9 = (uint8_t const *)(((uintptr_t)t9) + ((uintptr_t)0ul*sizeof(uint8_t)));
   t17 = (uint8_t const (*)[4])t9;
   t2 = t8.len;
   t4 = (uintptr_t)4ul <= t2;
   if (t4) {
    goto zig_block_4;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)4ul, t2);
   zig_unreachable();

   zig_block_4:;
   memcpy(t18, (const char *)t17, sizeof(uint8_t[4]));
   memcpy(t19.array, t18, sizeof(nav__4793_56));
   t13 = unicode_utf8Decode4__4801(t19);
   memcpy(&t7, &t13, sizeof(nav__4793_38));
   t3 = t7;
   goto zig_block_0;
  }
  default: {
   debug_no_panic_reachedUnreachable__4098();
   zig_unreachable();
  }
 }

 zig_block_0:;
 return t3;
}

static nav__4786_38 unicode_utf8CodepointSequenceLength__4786(uint32_t const a0) {
 bool t0;
 t0 = a0 < UINT32_C(128);
 if (t0) {
  return (nav__4786_38){0,UINT8_C(1)};
 }
 goto zig_block_0;

 zig_block_0:;
 t0 = a0 < UINT32_C(2048);
 if (t0) {
  return (nav__4786_38){0,UINT8_C(2)};
 }
 goto zig_block_1;

 zig_block_1:;
 t0 = a0 < UINT32_C(65536);
 if (t0) {
  return (nav__4786_38){0,UINT8_C(3)};
 }
 goto zig_block_2;

 zig_block_2:;
 t0 = a0 < UINT32_C(1114112);
 if (t0) {
  return (nav__4786_38){0,UINT8_C(4)};
 }
 goto zig_block_3;

 zig_block_3:;
 return (nav__4786_38){zig_error_CodepointTooLarge,UINT8_C(0x2)};
}

static nav__5276_38 unicode_utf8EncodeImpl__anon_5201__5276(uint32_t const a0, nav__5276_40 const a1) {
 nav__5276_40 const *t1;
 uintptr_t t5;
 uint64_t t6;
 uint64_t t7;
 nav__5276_40 t9;
 nav__5276_40 t0;
 uint8_t *t10;
 uint32_t t12;
 nav__5276_38 t2;
 uint16_t t3;
 uint8_t t4;
 uint8_t t11;
 bool t8;
 t0 = a1;
 t1 = (nav__5276_40 const *)&t0;
 t2 = unicode_utf8CodepointSequenceLength__4786(a0);
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
   t5 = t9.len;
   t8 = (uintptr_t)0ul < t5;
   if (t8) {
    goto zig_block_1;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t5);
   zig_unreachable();

   zig_block_1:;
   t10 = &t9.ptr[(uintptr_t)0ul];
   t8 = a0 <= UINT32_C(255);
   if (t8) {
    goto zig_block_2;
   }
   debug_no_panic_castTruncatedData__4103();
   zig_unreachable();

   zig_block_2:;
   t11 = (uint8_t)a0;
   (*t10) = t11;
   goto zig_block_0;
  }
  case UINT8_C(2): {
   t9 = (*t1);
   t5 = t9.len;
   t8 = (uintptr_t)0ul < t5;
   if (t8) {
    goto zig_block_3;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t5);
   zig_unreachable();

   zig_block_3:;
   t10 = &t9.ptr[(uintptr_t)0ul];
   t12 = zig_shr_u32(a0, UINT8_C(6));
   t8 = UINT8_C(6) < UINT8_C(21);
   if (t8) {
    goto zig_block_4;
   }
   debug_no_panic_shiftRhsTooBig__4112();
   zig_unreachable();

   zig_block_4:;
   t12 = UINT32_C(192) | t12;
   t8 = t12 <= UINT32_C(255);
   if (t8) {
    goto zig_block_5;
   }
   debug_no_panic_castTruncatedData__4103();
   zig_unreachable();

   zig_block_5:;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   t9 = (*t1);
   t5 = t9.len;
   t8 = (uintptr_t)1ul < t5;
   if (t8) {
    goto zig_block_6;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)1ul, t5);
   zig_unreachable();

   zig_block_6:;
   t10 = &t9.ptr[(uintptr_t)1ul];
   t12 = a0 & UINT32_C(63);
   t12 = UINT32_C(128) | t12;
   t8 = t12 <= UINT32_C(255);
   if (t8) {
    goto zig_block_7;
   }
   debug_no_panic_castTruncatedData__4103();
   zig_unreachable();

   zig_block_7:;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   goto zig_block_0;
  }
  case UINT8_C(3): {
   t8 = unicode_isSurrogateCodepoint__4866(a0);
   if (t8) {
    return (nav__5276_38){zig_error_Utf8CannotEncodeSurrogateHalf,UINT8_C(0x2)};
   }
   goto zig_block_8;

   zig_block_8:;
   t9 = (*t1);
   t5 = t9.len;
   t8 = (uintptr_t)0ul < t5;
   if (t8) {
    goto zig_block_9;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t5);
   zig_unreachable();

   zig_block_9:;
   t10 = &t9.ptr[(uintptr_t)0ul];
   t12 = zig_shr_u32(a0, UINT8_C(12));
   t8 = UINT8_C(12) < UINT8_C(21);
   if (t8) {
    goto zig_block_10;
   }
   debug_no_panic_shiftRhsTooBig__4112();
   zig_unreachable();

   zig_block_10:;
   t12 = UINT32_C(224) | t12;
   t8 = t12 <= UINT32_C(255);
   if (t8) {
    goto zig_block_11;
   }
   debug_no_panic_castTruncatedData__4103();
   zig_unreachable();

   zig_block_11:;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   t9 = (*t1);
   t5 = t9.len;
   t8 = (uintptr_t)1ul < t5;
   if (t8) {
    goto zig_block_12;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)1ul, t5);
   zig_unreachable();

   zig_block_12:;
   t10 = &t9.ptr[(uintptr_t)1ul];
   t12 = zig_shr_u32(a0, UINT8_C(6));
   t8 = UINT8_C(6) < UINT8_C(21);
   if (t8) {
    goto zig_block_13;
   }
   debug_no_panic_shiftRhsTooBig__4112();
   zig_unreachable();

   zig_block_13:;
   t12 = t12 & UINT32_C(63);
   t12 = UINT32_C(128) | t12;
   t8 = t12 <= UINT32_C(255);
   if (t8) {
    goto zig_block_14;
   }
   debug_no_panic_castTruncatedData__4103();
   zig_unreachable();

   zig_block_14:;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   t9 = (*t1);
   t5 = t9.len;
   t8 = (uintptr_t)2ul < t5;
   if (t8) {
    goto zig_block_15;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)2ul, t5);
   zig_unreachable();

   zig_block_15:;
   t10 = &t9.ptr[(uintptr_t)2ul];
   t12 = a0 & UINT32_C(63);
   t12 = UINT32_C(128) | t12;
   t8 = t12 <= UINT32_C(255);
   if (t8) {
    goto zig_block_16;
   }
   debug_no_panic_castTruncatedData__4103();
   zig_unreachable();

   zig_block_16:;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   goto zig_block_0;
  }
  case UINT8_C(4): {
   t9 = (*t1);
   t5 = t9.len;
   t8 = (uintptr_t)0ul < t5;
   if (t8) {
    goto zig_block_17;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t5);
   zig_unreachable();

   zig_block_17:;
   t10 = &t9.ptr[(uintptr_t)0ul];
   t12 = zig_shr_u32(a0, UINT8_C(18));
   t8 = UINT8_C(18) < UINT8_C(21);
   if (t8) {
    goto zig_block_18;
   }
   debug_no_panic_shiftRhsTooBig__4112();
   zig_unreachable();

   zig_block_18:;
   t12 = UINT32_C(240) | t12;
   t8 = t12 <= UINT32_C(255);
   if (t8) {
    goto zig_block_19;
   }
   debug_no_panic_castTruncatedData__4103();
   zig_unreachable();

   zig_block_19:;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   t9 = (*t1);
   t5 = t9.len;
   t8 = (uintptr_t)1ul < t5;
   if (t8) {
    goto zig_block_20;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)1ul, t5);
   zig_unreachable();

   zig_block_20:;
   t10 = &t9.ptr[(uintptr_t)1ul];
   t12 = zig_shr_u32(a0, UINT8_C(12));
   t8 = UINT8_C(12) < UINT8_C(21);
   if (t8) {
    goto zig_block_21;
   }
   debug_no_panic_shiftRhsTooBig__4112();
   zig_unreachable();

   zig_block_21:;
   t12 = t12 & UINT32_C(63);
   t12 = UINT32_C(128) | t12;
   t8 = t12 <= UINT32_C(255);
   if (t8) {
    goto zig_block_22;
   }
   debug_no_panic_castTruncatedData__4103();
   zig_unreachable();

   zig_block_22:;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   t9 = (*t1);
   t5 = t9.len;
   t8 = (uintptr_t)2ul < t5;
   if (t8) {
    goto zig_block_23;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)2ul, t5);
   zig_unreachable();

   zig_block_23:;
   t10 = &t9.ptr[(uintptr_t)2ul];
   t12 = zig_shr_u32(a0, UINT8_C(6));
   t8 = UINT8_C(6) < UINT8_C(21);
   if (t8) {
    goto zig_block_24;
   }
   debug_no_panic_shiftRhsTooBig__4112();
   zig_unreachable();

   zig_block_24:;
   t12 = t12 & UINT32_C(63);
   t12 = UINT32_C(128) | t12;
   t8 = t12 <= UINT32_C(255);
   if (t8) {
    goto zig_block_25;
   }
   debug_no_panic_castTruncatedData__4103();
   zig_unreachable();

   zig_block_25:;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   t9 = (*t1);
   t5 = t9.len;
   t8 = (uintptr_t)3ul < t5;
   if (t8) {
    goto zig_block_26;
   }
   debug_no_panic_outOfBounds__4094((uintptr_t)3ul, t5);
   zig_unreachable();

   zig_block_26:;
   t10 = &t9.ptr[(uintptr_t)3ul];
   t12 = a0 & UINT32_C(63);
   t12 = UINT32_C(128) | t12;
   t8 = t12 <= UINT32_C(255);
   if (t8) {
    goto zig_block_27;
   }
   debug_no_panic_castTruncatedData__4103();
   zig_unreachable();

   zig_block_27:;
   t11 = (uint8_t)t12;
   (*t10) = t11;
   goto zig_block_0;
  }
  default: {
   debug_no_panic_reachedUnreachable__4098();
   zig_unreachable();
  }
 }

 zig_block_0:;
 t2.payload = t4;
 t2.error = UINT16_C(0);
 return t2;
}

static nav__4788_38 unicode_utf8Encode__4788(uint32_t const a0, nav__4788_40 const a1) {
 nav__4788_38 t0;
 nav__4788_38 t1;
 t0 = unicode_utf8EncodeImpl__anon_5201__5276(a0, a1);
 memcpy(&t1, &t0, sizeof(nav__4788_38));
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
 nav__3830_50 t9;
 uint16_t t8;
 bool t6;
 uint8_t t10;
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
  t9.f1 = zig_addo_u64(&t9.f0, t3, (uintptr_t)1ul, UINT8_C(64));
  t10 = t9.f1;
  t6 = t10 == UINT8_C(0);
  if (t6) {
   goto zig_block_2;
  }
  debug_no_panic_integerOverflow__4105();
  zig_unreachable();

  zig_block_2:;
  t3 = t9.f0;
  t2 = t3;
  goto zig_block_1;
 }
 goto zig_block_0;

 zig_block_1:;
 goto zig_loop_9;

 zig_block_0:;
 return 0;
}

static void Thread_Mutex_FutexImpl_unlock__4775(struct Thread_Mutex_FutexImpl__3281 *const a0) {
 struct Thread_Mutex_FutexImpl__3281 *const *t1;
 struct Thread_Mutex_FutexImpl__3281 *t2;
 struct Thread_Mutex_FutexImpl__3281 *t0;
 struct atomic_Value_28u32_29__3233 *t3;
 struct atomic_Value_28u32_29__3233 *t4;
 struct atomic_Value_28u32_29__3233 *const *t5;
 uint32_t *t6;
 struct atomic_Value_28u32_29__3233 const *t10;
 uint32_t t7;
 uint32_t t8;
 bool t9;
 t0 = a0;
 t1 = (struct Thread_Mutex_FutexImpl__3281 *const *)&t0;
 t2 = (*t1);
 t3 = (struct atomic_Value_28u32_29__3233 *)&t2->state;
 t4 = t3;
 t5 = (struct atomic_Value_28u32_29__3233 *const *)&t4;
 t3 = (*t5);
 t6 = (uint32_t *)&t3->raw;
 t7 = UINT32_C(0);
 zig_atomicrmw_xchg(t8, (zig_atomic(uint32_t) *)t6, t7, zig_memory_order_release, u32, uint32_t);
 t9 = t8 != UINT32_C(0);
 debug_assert__179(t9);
 t9 = t8 == UINT32_C(3);
 if (t9) {
  t2 = (*t1);
  t3 = (struct atomic_Value_28u32_29__3233 *)&t2->state;
  t10 = (struct atomic_Value_28u32_29__3233 const *)t3;
  Thread_Futex_wake__5288(t10, UINT32_C(1));
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static bool math_isPowerOfTwo__anon_5093__5256(void) {
 debug_assert__179(true);
 return true;
}

static nav__5263_38 simd_firstTrue__anon_5122__5263(nav__5263_40 const a0) {
 static uint8_t const t2[32] = {UINT8_C(0),UINT8_C(1),UINT8_C(2),UINT8_C(3),UINT8_C(4),UINT8_C(5),UINT8_C(6),UINT8_C(7),UINT8_C(8),UINT8_C(9),UINT8_C(10),UINT8_C(11),UINT8_C(12),UINT8_C(13),UINT8_C(14),UINT8_C(15),UINT8_C(16),UINT8_C(17),UINT8_C(18),UINT8_C(19),UINT8_C(20),UINT8_C(21),UINT8_C(22),UINT8_C(23),UINT8_C(24),UINT8_C(25),UINT8_C(26),UINT8_C(27),UINT8_C(28),UINT8_C(29),UINT8_C(30),UINT8_C(31)};
 static uint8_t const t3[32] = {UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31),UINT8_C(31)};
 uintptr_t t1;
 bool t0;
 uint8_t t4[32];
 uint8_t t5;
 nav__5263_38 t6;
 t0 = false;
 for (t1 = (uintptr_t)0ul; t1 < (uintptr_t)32ul; t1 += (uintptr_t)1ul) {
  t0 |= a0.array[t1];
 }
 t0 = !t0;
 if (t0) {
  return (nav__5263_38){true,UINT8_C(0xa)};
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

static zig_cold zig_noreturn void debug_no_panic_unwrapNull__4099(void) {
 zig_trap();
}

static nav__5264_38 simd_firstTrue__anon_5143__5264(nav__5264_40 const a0) {
 static uint8_t const t2[16] = {UINT8_C(0),UINT8_C(1),UINT8_C(2),UINT8_C(3),UINT8_C(4),UINT8_C(5),UINT8_C(6),UINT8_C(7),UINT8_C(8),UINT8_C(9),UINT8_C(10),UINT8_C(11),UINT8_C(12),UINT8_C(13),UINT8_C(14),UINT8_C(15)};
 static uint8_t const t3[16] = {UINT8_C(15),UINT8_C(15),UINT8_C(15),UINT8_C(15),UINT8_C(15),UINT8_C(15),UINT8_C(15),UINT8_C(15),UINT8_C(15),UINT8_C(15),UINT8_C(15),UINT8_C(15),UINT8_C(15),UINT8_C(15),UINT8_C(15),UINT8_C(15)};
 uintptr_t t1;
 bool t0;
 uint8_t t4[16];
 uint8_t t5;
 nav__5264_38 t6;
 t0 = false;
 for (t1 = (uintptr_t)0ul; t1 < (uintptr_t)16ul; t1 += (uintptr_t)1ul) {
  t0 |= a0.array[t1];
 }
 t0 = !t0;
 if (t0) {
  return (nav__5264_38){true,UINT8_C(0xa)};
 }
 goto zig_block_0;

 zig_block_0:;
 for (t1 = (uintptr_t)0ul; t1 < (uintptr_t)16ul; t1 += (uintptr_t)1ul) {
  t4[t1] = a0.array[t1] ? t2[t1] : t3[t1];
 }
 t5 = UINT8_C(15);
 for (t1 = (uintptr_t)0ul; t1 < (uintptr_t)16ul; t1 += (uintptr_t)1ul) {
  t5 = t5 < t4[t1] ? t5 : t4[t1];
 }
 t6.is_null = false;
 t6.payload = t5;
 return t6;
}

static nav__4088_38 io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29___4088(void const *const a0, nav__4088_41 const a1) {
 uintptr_t t0;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *t2;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t3;
 nav__4088_38 t4;
 nav__4088_38 t5;
 bool t1;
 t0 = (uintptr_t)a0;
 t0 = t0 & (uintptr_t)7ul;
 t1 = t0 == (uintptr_t)0ul;
 if (t1) {
  goto zig_block_0;
 }
 debug_no_panic_incorrectAlignment__4101();
 zig_unreachable();

 zig_block_0:;
 t2 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *)a0;
 t3 = (*t2);
 t4 = array_list_ArrayListAligned_28u8_2cnull_29_appendWrite__4009(t3, a1);
 memcpy(&t5, &t4, sizeof(nav__4088_38));
 return t5;
}

static uint16_t bincode_serialize__anon_5173__5265(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, nav__5265_40 const a1) {
 uint16_t t0;
 t0 = bincode_serializePointer__anon_5319__5305(a0, a1);
 if (t0) {
  return t0;
 }
 return 0;
}

static uint32_t Thread_LinuxThreadImpl_getCurrentId__5269(void) {
 uint32_t t0;
 uint32_t t3;
 nav__5269_39 t1;
 int32_t t4;
 bool t2;
 t1 = (*((nav__5269_39 *)&Thread_LinuxThreadImpl_tls_thread_id__5268));
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
 (*((nav__5269_39 *)&Thread_LinuxThreadImpl_tls_thread_id__5268)) = t1;
 return t3;

 zig_block_0:;
 return t0;
}

static bool Thread_Mutex_FutexImpl_tryLock__4773(struct Thread_Mutex_FutexImpl__3281 *const a0) {
 struct Thread_Mutex_FutexImpl__3281 *const *t1;
 struct Thread_Mutex_FutexImpl__3281 *t2;
 struct Thread_Mutex_FutexImpl__3281 *t0;
 struct atomic_Value_28u32_29__3233 *t3;
 struct atomic_Value_28u32_29__3233 *t4;
 struct atomic_Value_28u32_29__3233 *t6;
 struct atomic_Value_28u32_29__3233 *const *t5;
 uint32_t *t7;
 uint32_t t8;
 uint32_t t9;
 bool t10;
 uint8_t t11;
 t0 = a0;
 t1 = (struct Thread_Mutex_FutexImpl__3281 *const *)&t0;
 t2 = (*t1);
 t3 = (struct atomic_Value_28u32_29__3233 *)&t2->state;
 t4 = t3;
 t5 = (struct atomic_Value_28u32_29__3233 *const *)&t4;
 t3 = (*t5);
 t6 = t3;
 t5 = (struct atomic_Value_28u32_29__3233 *const *)&t6;
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

static zig_cold void Thread_Mutex_FutexImpl_lockSlow__4774(struct Thread_Mutex_FutexImpl__3281 *const a0) {
 struct Thread_Mutex_FutexImpl__3281 *const *t1;
 struct Thread_Mutex_FutexImpl__3281 *t2;
 struct Thread_Mutex_FutexImpl__3281 *t0;
 struct atomic_Value_28u32_29__3233 *t3;
 struct atomic_Value_28u32_29__3233 *t10;
 struct atomic_Value_28u32_29__3233 const *t4;
 struct atomic_Value_28u32_29__3233 const *t5;
 struct atomic_Value_28u32_29__3233 const *const *t6;
 uint32_t const *t7;
 struct atomic_Value_28u32_29__3233 *const *t11;
 uint32_t *t12;
 uint32_t t8;
 uint32_t t13;
 bool t9;
 t0 = a0;
 t1 = (struct Thread_Mutex_FutexImpl__3281 *const *)&t0;
 t2 = (*t1);
 t3 = (struct atomic_Value_28u32_29__3233 *)&t2->state;
 t4 = (struct atomic_Value_28u32_29__3233 const *)t3;
 t5 = t4;
 t6 = (struct atomic_Value_28u32_29__3233 const *const *)&t5;
 t4 = (*t6);
 t7 = (uint32_t const *)&t4->raw;
 zig_atomic_load(t8, (zig_atomic(uint32_t) *)t7, zig_memory_order_relaxed, u32, uint32_t);
 t9 = t8 == UINT32_C(3);
 if (t9) {
  t2 = (*t1);
  t3 = (struct atomic_Value_28u32_29__3233 *)&t2->state;
  t4 = (struct atomic_Value_28u32_29__3233 const *)t3;
  Thread_Futex_wait__5286(t4, UINT32_C(3));
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 zig_loop_25:
 t2 = (*t1);
 t3 = (struct atomic_Value_28u32_29__3233 *)&t2->state;
 t10 = t3;
 t11 = (struct atomic_Value_28u32_29__3233 *const *)&t10;
 t3 = (*t11);
 t12 = (uint32_t *)&t3->raw;
 t8 = UINT32_C(3);
 zig_atomicrmw_xchg(t13, (zig_atomic(uint32_t) *)t12, t8, zig_memory_order_acquire, u32, uint32_t);
 t9 = t13 != UINT32_C(0);
 if (t9) {
  t2 = (*t1);
  t3 = (struct atomic_Value_28u32_29__3233 *)&t2->state;
  t4 = (struct atomic_Value_28u32_29__3233 const *)t3;
  Thread_Futex_wait__5286(t4, UINT32_C(3));
  goto zig_block_2;
 }
 goto zig_block_1;

 zig_block_2:;
 goto zig_loop_25;

 zig_block_1:;
 return;
}

static nav__4795_38 unicode_utf8Decode2__4795(nav__4795_40 const a0) {
 uint32_t t3;
 uint32_t t4;
 uint32_t t2;
 nav__4795_38 t5;
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
  return (nav__4795_38){UINT32_C(0xaaaaa),zig_error_Utf8ExpectedContinuation};
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = t2;
 t1 = UINT8_C(6) < UINT8_C(21);
 if (t1) {
  goto zig_block_1;
 }
 debug_no_panic_shiftRhsTooBig__4112();
 zig_unreachable();

 zig_block_1:;
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
  return (nav__4795_38){UINT32_C(0xaaaaa),zig_error_Utf8OverlongEncoding};
 }
 goto zig_block_2;

 zig_block_2:;
 t4 = t2;
 t5.payload = t4;
 t5.error = UINT16_C(0);
 return t5;
}

static nav__4797_38 unicode_utf8Decode3__4797(nav__4797_40 const a0) {
 nav__4797_38 t1;
 uint32_t t3;
 uint16_t t2;
 nav__4797_40 t0;
 bool t4;
 bool t5;
 memcpy(t0.array, a0.array, sizeof(nav__4797_40));
 t1 = unicode_utf8Decode3AllowSurrogateHalf__4799(t0);
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
  return (nav__4797_38){UINT32_C(0xaaaaa),zig_error_Utf8EncodesSurrogateHalf};
 }
 goto zig_block_0;

 zig_block_0:;
 t1.payload = t3;
 t1.error = UINT16_C(0);
 return t1;
}

static nav__4801_38 unicode_utf8Decode4__4801(nav__4801_40 const a0) {
 uint32_t t3;
 uint32_t t4;
 uint32_t t2;
 nav__4801_38 t5;
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
  return (nav__4801_38){UINT32_C(0xaaaaa),zig_error_Utf8ExpectedContinuation};
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = t2;
 t1 = UINT8_C(6) < UINT8_C(21);
 if (t1) {
  goto zig_block_1;
 }
 debug_no_panic_shiftRhsTooBig__4112();
 zig_unreachable();

 zig_block_1:;
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
  return (nav__4801_38){UINT32_C(0xaaaaa),zig_error_Utf8ExpectedContinuation};
 }
 goto zig_block_2;

 zig_block_2:;
 t4 = t2;
 t1 = UINT8_C(6) < UINT8_C(21);
 if (t1) {
  goto zig_block_3;
 }
 debug_no_panic_shiftRhsTooBig__4112();
 zig_unreachable();

 zig_block_3:;
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
  return (nav__4801_38){UINT32_C(0xaaaaa),zig_error_Utf8ExpectedContinuation};
 }
 goto zig_block_4;

 zig_block_4:;
 t3 = t2;
 t1 = UINT8_C(6) < UINT8_C(21);
 if (t1) {
  goto zig_block_5;
 }
 debug_no_panic_shiftRhsTooBig__4112();
 zig_unreachable();

 zig_block_5:;
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
  return (nav__4801_38){UINT32_C(0xaaaaa),zig_error_Utf8OverlongEncoding};
 }
 goto zig_block_6;

 zig_block_6:;
 t4 = t2;
 t1 = t4 > UINT32_C(1114111);
 if (t1) {
  return (nav__4801_38){UINT32_C(0xaaaaa),zig_error_Utf8CodepointTooLarge};
 }
 goto zig_block_7;

 zig_block_7:;
 t4 = t2;
 t5.payload = t4;
 t5.error = UINT16_C(0);
 return t5;
}

static zig_cold zig_noreturn void debug_no_panic_shiftRhsTooBig__4112(void) {
 zig_trap();
}

static bool unicode_isSurrogateCodepoint__4866(uint32_t const a0) {
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

static zig_cold void Thread_Futex_wake__5288(struct atomic_Value_28u32_29__3233 const *const a0, uint32_t const a1) {
 bool t0;
 t0 = a1 == UINT32_C(0);
 if (t0) {
  return;
 }
 goto zig_block_0;

 zig_block_0:;
 Thread_Futex_LinuxImpl_wake__5350(a0, a1);
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

static uint16_t bincode_serializePointer__anon_5319__5305(struct io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29__2060 const a0, nav__5305_40 const a1) {
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
 nav__5305_51 (**t13)(void const *, nav__5305_40);
 struct io_Writer__1950 t14;
 struct io_Writer__1950 t9;
 struct io_Writer__1950 t15;
 struct io_Writer__1950 t17;
 struct io_Writer__1950 t25;
 struct io_Writer__1950 t26;
 struct io_Writer__1950 const *t16;
 nav__5305_40 t20;
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
 t13 = (nav__5305_51 (**)(void const *, nav__5305_40))&t9.writeFn;
 (*t13) = &io_GenericWriter_28_2aarray_list_ArrayListAligned_28u8_2cnull_29_2cerror_7bOutOfMemory_7d_2c_28function_20_27appendWrite_27_29_29___4088;
 t14 = t9;
 t15 = t14;
 t16 = (struct io_Writer__1950 const *)&t15;
 t14 = (*t16);
 t17 = t14;
 t16 = (struct io_Writer__1950 const *)&t17;
 memset(&t18, 0xaa, sizeof(uint8_t[8]));
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
 t13 = (nav__5305_51 (**)(void const *, nav__5305_40))&t25.writeFn;
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
 t0 = os_linux_x86_64_syscall0__4594((uintptr_t)186ul);
 t1 = (uint32_t)t0;
 memcpy(&t2, &t1, sizeof(int32_t));
 t2 = zig_wrap_i32(t2, UINT8_C(32));
 return t2;
}

static zig_cold void Thread_Futex_wait__5286(struct atomic_Value_28u32_29__3233 const *const a0, uint32_t const a1) {
 uint16_t t0;
 bool t1;
 t0 = Thread_Futex_LinuxImpl_wait__5349(a0, a1, (nav__5286_41){UINT64_C(0xaaaaaaaaaaaaaaaa),true});
 t1 = t0 == UINT16_C(0);
 if (t1) {
  goto zig_block_0;
 }
 switch (t0) {
  case zig_error_Timeout: {
   debug_no_panic_unwrapError__4093(t0);
   zig_unreachable();
  }
  default: {
   debug_no_panic_corruptSwitch__4111();
   zig_unreachable();
  }
 }

 zig_block_0:;
 return;
}

static nav__4799_38 unicode_utf8Decode3AllowSurrogateHalf__4799(nav__4799_40 const a0) {
 uint32_t t3;
 uint32_t t4;
 uint32_t t2;
 nav__4799_38 t5;
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
  return (nav__4799_38){UINT32_C(0xaaaaa),zig_error_Utf8ExpectedContinuation};
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = t2;
 t1 = UINT8_C(6) < UINT8_C(21);
 if (t1) {
  goto zig_block_1;
 }
 debug_no_panic_shiftRhsTooBig__4112();
 zig_unreachable();

 zig_block_1:;
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
  return (nav__4799_38){UINT32_C(0xaaaaa),zig_error_Utf8ExpectedContinuation};
 }
 goto zig_block_2;

 zig_block_2:;
 t4 = t2;
 t1 = UINT8_C(6) < UINT8_C(21);
 if (t1) {
  goto zig_block_3;
 }
 debug_no_panic_shiftRhsTooBig__4112();
 zig_unreachable();

 zig_block_3:;
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
  return (nav__4799_38){UINT32_C(0xaaaaa),zig_error_Utf8OverlongEncoding};
 }
 goto zig_block_4;

 zig_block_4:;
 t3 = t2;
 t5.payload = t3;
 t5.error = UINT16_C(0);
 return t5;
}

static void Thread_Futex_LinuxImpl_wake__5350(struct atomic_Value_28u32_29__3233 const *const a0, uint32_t const a1) {
 struct atomic_Value_28u32_29__3233 const *const *t1;
 struct atomic_Value_28u32_29__3233 const *t2;
 struct atomic_Value_28u32_29__3233 const *t0;
 uint32_t const *t3;
 int32_t const *t4;
 uintptr_t t9;
 int32_t t5;
 int32_t t8;
 nav__5350_45 t6;
 uint16_t t10;
 bool t7;
 t0 = a0;
 t1 = (struct atomic_Value_28u32_29__3233 const *const *)&t0;
 t2 = (*t1);
 t3 = (uint32_t const *)&t2->raw;
 t4 = (int32_t const *)t3;
 t6 = math_cast__anon_5474__5367(a1);
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
   debug_no_panic_reachedUnreachable__4098();
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

static uintptr_t os_linux_x86_64_syscall0__4594(uintptr_t const a0) {
 uintptr_t t0;
 uintptr_t t1;
 t0 = a0;
 t1 = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
 register uintptr_t t2 __asm("rax") = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
 register uintptr_t const t3 __asm("rax") = t0;
 __asm volatile("syscall": [ret]"=r"(t2): [number]"r"(t3): "rcx", "r11", "memory");
 t1 = t2;
 return t1;
}

static uint16_t Thread_Futex_LinuxImpl_wait__5349(struct atomic_Value_28u32_29__3233 const *const a0, uint32_t const a1, nav__5349_40 const a2) {
 struct atomic_Value_28u32_29__3233 const *const *t1;
 uint64_t t4;
 uint64_t t6;
 intptr_t *t5;
 intptr_t t7;
 struct atomic_Value_28u32_29__3233 const *t8;
 struct atomic_Value_28u32_29__3233 const *t0;
 uint32_t const *t9;
 int32_t const *t10;
 struct os_linux_timespec__struct_2902__2902 const *t12;
 struct os_linux_timespec__struct_2902__2902 const *t13;
 uintptr_t t14;
 struct os_linux_timespec__struct_2902__2902 t2;
 int32_t t11;
 uint16_t t15;
 bool t3;
 t0 = a0;
 t1 = (struct atomic_Value_28u32_29__3233 const *const *)&t0;
 memset(&t2, 0xaa, sizeof(struct os_linux_timespec__struct_2902__2902));
 t3 = a2.is_null != true;
 if (t3) {
  t4 = a2.payload;
  t5 = (intptr_t *)&t2.sec;
  t6 = t4 / UINT64_C(1000000000);
  t3 = t6 <= UINT64_C(9223372036854775807);
  if (t3) {
   goto zig_block_1;
  }
  debug_no_panic_castTruncatedData__4103();
  zig_unreachable();

  zig_block_1:;
  t7 = (intptr_t)t6;
  (*t5) = t7;
  t5 = (intptr_t *)&t2.nsec;
  t4 = t4 % UINT64_C(1000000000);
  t3 = t4 <= UINT64_C(9223372036854775807);
  if (t3) {
   goto zig_block_2;
  }
  debug_no_panic_castTruncatedData__4103();
  zig_unreachable();

  zig_block_2:;
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
  t13 = (struct os_linux_timespec__struct_2902__2902 const *)&t2;
  t12 = t13;
  goto zig_block_3;
 }
 t12 = NULL;
 goto zig_block_3;

 zig_block_3:;
 t14 = os_linux_futex_wait__2628(t10, UINT32_C(128), t11, t12);
 t15 = os_linux_errnoFromSyscall__2615(t14);
 switch (t15) {
  case UINT16_C(0): {
   goto zig_block_4;
  }
  case UINT16_C(4): {
   goto zig_block_4;
  }
  case UINT16_C(11): {
   goto zig_block_4;
  }
  case UINT16_C(110): {
   t3 = a2.is_null != true;
   debug_assert__179(t3);
   return zig_error_Timeout;
  }
  case UINT16_C(22): {
   goto zig_block_4;
  }
  case UINT16_C(14): {
   debug_no_panic_reachedUnreachable__4098();
   zig_unreachable();
  }
  default: {
   debug_no_panic_reachedUnreachable__4098();
   zig_unreachable();
  }
 }

 zig_block_4:;
 return 0;
}

static zig_cold zig_noreturn void debug_no_panic_unwrapError__4093(uint16_t const a0) {
 (void)a0;
 zig_trap();
}

static nav__5367_38 math_cast__anon_5474__5367(uint32_t const a0) {
 int32_t t1;
 nav__5367_38 t2;
 bool t0;
 t0 = a0 > UINT32_C(2147483647);
 if (t0) {
  return (nav__5367_38){-INT32_C(0x55555556),true};
 }
 t0 = a0 <= UINT32_C(2147483647);
 if (t0) {
  goto zig_block_0;
 }
 debug_no_panic_castTruncatedData__4103();
 zig_unreachable();

 zig_block_0:;
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
 t3 = os_linux_x86_64_syscall3__4597((uintptr_t)202ul, t0, t1, t3);
 return t3;
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
 uintptr_t t10;
 uintptr_t t15;
 nav__4004_56 t6;
 uintptr_t *t9;
 uint64_t t11;
 uint64_t t12;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t13;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t0;
 uint8_t *t14;
 uint8_t *t18;
 uint8_t const *t16;
 uint8_t const *t17;
 uint8_t t7;
 bool t8;
 bool t19;
 t0 = a0;
 t1 = (struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *)&t0;
 t2 = (nav__4004_47 *)&a0->items;
 t3 = (*t2);
 t4 = t3.len;
 t5 = a1.len;
 t6.f1 = zig_addo_u64(&t6.f0, t4, t5, UINT8_C(64));
 t7 = t6.f1;
 t8 = t7 == UINT8_C(0);
 if (t8) {
  goto zig_block_0;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_0:;
 t5 = t6.f0;
 t9 = (uintptr_t *)&a0->capacity;
 t10 = (*t9);
 t11 = t5;
 t12 = t10;
 t8 = t11 <= t12;
 debug_assert__179(t8);
 t13 = (*t1);
 t2 = (nav__4004_47 *)&t13->items;
 t9 = &t2->len;
 (*t9) = t5;
 t13 = (*t1);
 t2 = (nav__4004_47 *)&t13->items;
 t5 = a1.len;
 t3 = (*t2);
 t14 = t3.ptr;
 t14 = (uint8_t *)(((uintptr_t)t14) + (t4*sizeof(uint8_t)));
 t10 = t4 + t5;
 t15 = t3.len;
 t8 = t10 <= t15;
 if (t8) {
  goto zig_block_1;
 }
 debug_no_panic_outOfBounds__4094(t10, t15);
 zig_unreachable();

 zig_block_1:;
 t8 = t4 <= t10;
 if (t8) {
  goto zig_block_2;
 }
 debug_no_panic_outOfBounds__4094(t4, t10);
 zig_unreachable();

 zig_block_2:;
 t3.ptr = t14;
 t3.len = t5;
 t5 = t3.len;
 t10 = a1.len;
 t8 = t5 == t10;
 if (t8) {
  goto zig_block_3;
 }
 debug_no_panic_memcpyLenMismatch__4115();
 zig_unreachable();

 zig_block_3:;
 t16 = a1.ptr;
 t14 = t3.ptr;
 t17 = (uint8_t const *)(((uintptr_t)t16) + (t5*sizeof(uint8_t)));
 t18 = (uint8_t *)(((uintptr_t)t14) + (t5*sizeof(uint8_t)));
 t8 = t14 >= t17;
 t19 = t16 >= t18;
 t19 = t8 | t19;
 if (t19) {
  goto zig_block_4;
 }
 debug_no_panic_memcpyAlias__4116();
 zig_unreachable();

 zig_block_4:;
 if (t3.len != 0) memcpy(t3.ptr, t16, t3.len * sizeof(uint8_t));
 return;
}

static uintptr_t os_linux_futex_wait__2628(int32_t const *const a0, uint32_t const a1, int32_t const a2, struct os_linux_timespec__struct_2902__2902 const *const a3) {
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
 t4 = os_linux_x86_64_syscall4__4598((uintptr_t)202ul, t0, t1, t3, t4);
 return t4;
}

static uintptr_t os_linux_x86_64_syscall3__4597(uintptr_t const a0, uintptr_t const a1, uintptr_t const a2, uintptr_t const a3) {
 uintptr_t t0;
 uintptr_t t1;
 t0 = a0;
 t1 = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
 register uintptr_t t2 __asm("rax") = (uintptr_t)0xaaaaaaaaaaaaaaaaul;
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
 t3 = array_list_ArrayListAlignedUnmanaged_28u8_2cnull_29_growCapacity__5426(t3, a1);
 t7 = (*t1);
 t8 = array_list_ArrayListAligned_28u8_2cnull_29_ensureTotalCapacityPrecise__4021(t7, t3);
 return t8;
}

static uintptr_t array_list_ArrayListAlignedUnmanaged_28u8_2cnull_29_growCapacity__5426(uintptr_t const a0, uintptr_t const a1) {
 uintptr_t t1;
 uintptr_t t2;
 uintptr_t t0;
 nav__5426_39 t3;
 uint64_t t6;
 uint64_t t7;
 uint8_t t4;
 bool t5;
 t0 = a0;
 zig_loop_6:
 t1 = t0;
 t2 = t0;
 t2 = t2 / (uintptr_t)2ul;
 t3.f1 = zig_addo_u64(&t3.f0, t2, (uintptr_t)128ul, UINT8_C(64));
 t4 = t3.f1;
 t5 = t4 == UINT8_C(0);
 if (t5) {
  goto zig_block_0;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_0:;
 t2 = t3.f0;
 t2 = zig_adds_u64(t1, t2, UINT8_C(64));
 t0 = t2;
 t2 = t0;
 t6 = t2;
 t7 = a1;
 t5 = t6 >= t7;
 if (t5) {
  t2 = t0;
  return t2;
 }
 goto zig_block_1;

 zig_block_1:;
 goto zig_loop_6;
}

static uint16_t array_list_ArrayListAligned_28u8_2cnull_29_ensureTotalCapacityPrecise__4021(struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const a0, uintptr_t const a1) {
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *const *t1;
 uintptr_t *t2;
 uintptr_t t3;
 uintptr_t t21;
 uint64_t t4;
 uint64_t t5;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t7;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 *t0;
 struct array_list_ArrayListAligned_28u8_2cnull_29__2035 t8;
 nav__4021_43 t9;
 nav__4021_43 t12;
 nav__4021_43 t20;
 nav__4021_43 t22;
 nav__4021_43 t18;
 struct mem_Allocator__206 *t10;
 struct mem_Allocator__206 t11;
 nav__4021_43 *t13;
 uint8_t **t14;
 uint8_t *t15;
 uint8_t *t23;
 uint8_t *t24;
 uint8_t *t25;
 nav__4021_55 t16;
 nav__4021_43 const *t19;
 uint16_t t17;
 bool t6;
 bool t26;
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
 t12 = mem_Allocator_remap__anon_5545__5427(t11, t9, a1);
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
 t16 = mem_Allocator_alignedAlloc__anon_5550__5428(t11, a1);
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
 t6 = (uintptr_t)0ul <= t3;
 if (t6) {
  goto zig_block_2;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_2:;
 t21 = t20.len;
 t6 = t3 <= t21;
 if (t6) {
  goto zig_block_3;
 }
 debug_no_panic_outOfBounds__4094(t3, t21);
 zig_unreachable();

 zig_block_3:;
 t6 = (uintptr_t)0ul <= t3;
 if (t6) {
  goto zig_block_4;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_4:;
 t20.ptr = t15;
 t20.len = t3;
 t13 = (nav__4021_43 *)&a0->items;
 t22 = (*t13);
 t3 = t20.len;
 t21 = t22.len;
 t6 = t3 == t21;
 if (t6) {
  goto zig_block_5;
 }
 debug_no_panic_memcpyLenMismatch__4115();
 zig_unreachable();

 zig_block_5:;
 t15 = t22.ptr;
 t23 = t20.ptr;
 t24 = (uint8_t *)(((uintptr_t)t15) + (t3*sizeof(uint8_t)));
 t25 = (uint8_t *)(((uintptr_t)t23) + (t3*sizeof(uint8_t)));
 t6 = t23 >= t24;
 t26 = t15 >= t25;
 t26 = t6 | t26;
 if (t26) {
  goto zig_block_6;
 }
 debug_no_panic_memcpyAlias__4116();
 zig_unreachable();

 zig_block_6:;
 if (t20.len != 0) memcpy(t20.ptr, t15, t20.len * sizeof(uint8_t));
 t7 = (*t1);
 t10 = (struct mem_Allocator__206 *)&t7->allocator;
 t11 = (*t10);
 mem_Allocator_free__anon_2696__4276(t11, t9);
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

static nav__5427_39 mem_Allocator_remap__anon_5545__5427(struct mem_Allocator__206 const a0, nav__5427_39 const a1, uintptr_t const a2) {
 struct mem_Allocator__206 const *t1;
 nav__5427_39 const *t3;
 uint64_t t4;
 struct mem_Allocator__206 t6;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t15;
 nav__5427_39 t7;
 nav__5427_39 t11;
 nav__5427_39 t2;
 uint8_t *t8;
 uint8_t *t20;
 uint8_t *t21;
 uint8_t *t22;
 void *t9;
 uintptr_t t10;
 uintptr_t t13;
 nav__5427_50 t12;
 struct mem_Allocator_VTable__209 const *const *t16;
 struct mem_Allocator_VTable__209 const *t17;
 uint8_t *(*const *t18)(void *, nav__5427_39, uint8_t, uintptr_t, uintptr_t);
 uint8_t *(*t19)(void *, nav__5427_39, uint8_t, uintptr_t, uintptr_t);
 uint8_t *const *t23;
 bool t5;
 uint8_t t14;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = a1;
 t3 = (nav__5427_39 const *)&t2;
 t4 = a2;
 t5 = t4 == UINT64_C(0);
 if (t5) {
  t6 = (*t1);
  mem_Allocator_free__anon_2696__4276(t6, a1);
  t7 = (*t3);
  t8 = t7.ptr;
  t8 = (uint8_t *)(((uintptr_t)t8) + ((uintptr_t)0ul*sizeof(uint8_t)));
  t9 = (void *)t8;
  t10 = t7.len;
  t5 = (uintptr_t)0ul <= t10;
  if (t5) {
   goto zig_block_1;
  }
  debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t10);
  zig_unreachable();

  zig_block_1:;
  t7.ptr = t9;
  t7.len = (uintptr_t)0ul;
  t11 = t7;
  return t11;
 }
 goto zig_block_0;

 zig_block_0:;
 t10 = a1.len;
 t4 = t10;
 t5 = t4 == UINT64_C(0);
 if (t5) {
  return (nav__5427_39){NULL,(uintptr_t)0xaaaaaaaaaaaaaaaaul};
 }
 goto zig_block_2;

 zig_block_2:;
 t11 = mem_sliceAsBytes__anon_2970__4569(a1);
 t12 = math_mul__anon_4028__5220((uintptr_t)1ul, a2);
 t5 = t12.error == UINT16_C(0);
 if (t5) {
  t13 = t12.payload;
  t10 = t13;
  goto zig_block_3;
 }
 return (nav__5427_39){NULL,(uintptr_t)0xaaaaaaaaaaaaaaaaul};

 zig_block_3:;
 t6 = (*t1);
 t14 = mem_Alignment_fromByteUnits__628((uintptr_t)1ul);
 t13 = (uintptr_t)zig_return_address();
 t15 = t6;
 t1 = (struct mem_Allocator__206 const *)&t15;
 t16 = (struct mem_Allocator_VTable__209 const *const *)&t1->vtable;
 t17 = (*t16);
 t18 = (uint8_t *(*const *)(void *, nav__5427_39, uint8_t, uintptr_t, uintptr_t))&t17->remap;
 t19 = (*t18);
 t9 = t6.ptr;
 t20 = t19(t9, t11, t14, t10, t13);
 t5 = t20 != NULL;
 if (t5) {
  t21 = t20;
  t8 = t21;
  goto zig_block_4;
 }
 return (nav__5427_39){NULL,(uintptr_t)0xaaaaaaaaaaaaaaaaul};

 zig_block_4:;
 t22 = t8;
 t23 = (uint8_t *const *)&t22;
 t8 = (*t23);
 t8 = (uint8_t *)(((uintptr_t)t8) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t5 = (uintptr_t)0ul <= t10;
 if (t5) {
  goto zig_block_5;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t10);
 zig_unreachable();

 zig_block_5:;
 t5 = (uintptr_t)0ul <= t10;
 if (t5) {
  goto zig_block_6;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t10);
 zig_unreachable();

 zig_block_6:;
 t11.ptr = t8;
 t11.len = t10;
 memcpy(&t7, &t11, sizeof(nav__5427_39));
 t7 = mem_bytesAsSlice__anon_5565__5429(t7);
 t11 = t7;
 return t11;
}

static nav__5428_40 mem_Allocator_alignedAlloc__anon_5550__5428(struct mem_Allocator__206 const a0, uintptr_t const a1) {
 struct mem_Allocator__206 const *t1;
 struct mem_Allocator__206 t2;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t5;
 uintptr_t t3;
 nav__5428_40 t4;
 nav__5428_40 t8;
 nav__5428_51 t6;
 uint8_t *t9;
 uint8_t *t10;
 uint8_t *const *t11;
 nav__5428_39 t13;
 uint16_t t7;
 bool t12;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = (*t1);
 t3 = (uintptr_t)zig_return_address();
 t5 = t2;
 t1 = (struct mem_Allocator__206 const *)&t5;
 t2 = (*t1);
 t6 = mem_Allocator_allocWithSizeAndAlignment__anon_2933__4568(t2, a1, t3);
 if (t6.error) {
  t7 = t6.error;
  t8.payload = (nav__5428_39){(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t8.error = t7;
  t4 = t8;
  goto zig_block_0;
 }
 t9 = t6.payload;
 t10 = t9;
 t11 = (uint8_t *const *)&t10;
 t9 = (*t11);
 t9 = (uint8_t *)(((uintptr_t)t9) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t12 = (uintptr_t)0ul <= a1;
 if (t12) {
  goto zig_block_1;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, a1);
 zig_unreachable();

 zig_block_1:;
 t12 = (uintptr_t)0ul <= a1;
 if (t12) {
  goto zig_block_2;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, a1);
 zig_unreachable();

 zig_block_2:;
 t13.ptr = t9;
 t13.len = a1;
 t8.payload = t13;
 t8.error = UINT16_C(0);
 t4 = t8;
 goto zig_block_0;

 zig_block_0:;
 return t4;
}

static nav__5429_39 mem_bytesAsSlice__anon_5565__5429(nav__5429_39 const a0) {
 uintptr_t t0;
 uintptr_t t6;
 uint64_t t1;
 uint8_t *t3;
 uint8_t *t4;
 uint8_t *const *t5;
 nav__5429_39 t7;
 bool t2;
 t0 = a0.len;
 t1 = t0;
 t2 = t1 == UINT64_C(0);
 if (t2) {
  return (nav__5429_39){(uint8_t *)((void const *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),(uintptr_t)0ul};
 }
 goto zig_block_0;

 zig_block_0:;
 t3 = a0.ptr;
 t4 = t3;
 t5 = (uint8_t *const *)&t4;
 t0 = a0.len;
 t6 = t0 / (uintptr_t)1ul;
 t0 = t0 % (uintptr_t)1ul;
 t2 = t0 == (uintptr_t)0ul;
 if (t2) {
  goto zig_block_1;
 }
 debug_no_panic_exactDivisionRemainder__4109();
 zig_unreachable();

 zig_block_1:;
 t3 = (*t5);
 t3 = (uint8_t *)(((uintptr_t)t3) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t2 = (uintptr_t)0ul <= t6;
 if (t2) {
  goto zig_block_2;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t6);
 zig_unreachable();

 zig_block_2:;
 t2 = (uintptr_t)0ul <= t6;
 if (t2) {
  goto zig_block_3;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t6);
 zig_unreachable();

 zig_block_3:;
 t7.ptr = t3;
 t7.len = t6;
 return t7;
}

static zig_cold zig_noreturn void debug_no_panic_exactDivisionRemainder__4109(void) {
 zig_trap();
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
    t6 = (*t4);
    t7 = t6.tag;
    t0 = t7 == UINT8_C(1);
    if (t0) {
     goto zig_block_2;
    }
    debug_no_panic_inactiveUnionField__anon_5577__5430(t7, UINT8_C(1));
    zig_unreachable();

    zig_block_2:;
    t8 = (struct instruments_perf_PerfInstrument__200 *)&t4->payload.perf;
    instruments_perf_PerfInstrument_deinit__338(t8);
    goto zig_block_1;
   }
   case UINT8_C(2): {
    goto zig_block_1;
   }
   default: {
    debug_no_panic_corruptSwitch__4111();
    zig_unreachable();
   }
  }

  zig_block_1:;
  mem_Allocator_destroy__anon_5585__5431((struct mem_Allocator__206){((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul),((struct mem_Allocator_VTable__209 const *)&heap_CAllocator_vtable__3476)}, t1);
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static zig_cold zig_noreturn void debug_no_panic_inactiveUnionField__anon_5577__5430(uint8_t const a0, uint8_t const a1) {
 (void)a0;
 (void)a1;
 zig_trap();
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

static void mem_Allocator_destroy__anon_5585__5431(struct mem_Allocator__206 const a0, struct instruments_root_InstrumentHooks__188 *const a1) {
 struct mem_Allocator__206 const *t1;
 uint8_t *t2;
 uint8_t *t3;
 uint8_t *const *t4;
 struct mem_Allocator__206 t5;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t10;
 uint8_t (*t6)[72];
 nav__5431_52 t7;
 uintptr_t t9;
 struct mem_Allocator_VTable__209 const *const *t11;
 struct mem_Allocator_VTable__209 const *t12;
 void (*const *t13)(void *, nav__5431_52, uint8_t, uintptr_t);
 void (*t14)(void *, nav__5431_52, uint8_t, uintptr_t);
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
 t13 = (void (*const *)(void *, nav__5431_52, uint8_t, uintptr_t))&t12->free;
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
   default: {
    debug_no_panic_corruptSwitch__4111();
    zig_unreachable();
   }
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
   t6 = (*t1);
   t7 = t6.tag;
   t0 = t7 == UINT8_C(1);
   if (t0) {
    goto zig_block_4;
   }
   debug_no_panic_inactiveUnionField__anon_5577__5430(t7, UINT8_C(1));
   zig_unreachable();

   zig_block_4:;
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
  goto zig_block_5;

  zig_block_5:;
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
  debug_print__anon_5641__5434(t12);
  goto zig_block_1;

  zig_block_1:;
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static void debug_print__anon_5641__5434(nav__5434_40 const a0) {
 struct fs_File__546 const *t2;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t5;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t7;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *t8;
 void const **t10;
 void const *t11;
 nav__5434_54 (**t12)(void const *, nav__5434_39);
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
 t12 = (nav__5434_54 (**)(void const *, nav__5434_39))&t9.writeFn;
 (*t12) = &io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooB__3818;
 t13 = t9;
 t14 = t13;
 t15 = (struct io_Writer__1950 const *)&t14;
 t13 = (*t15);
 t16 = io_Writer_print__anon_5642__5435(t13, a0);
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

static uint16_t io_Writer_print__anon_5642__5435(struct io_Writer__1950 const a0, nav__5435_41 const a1) {
 uint16_t t0;
 uint16_t t1;
 t0 = fmt_format__anon_5643__5436(a0, a1);
 memcpy(&t1, &t0, sizeof(uint16_t));
 return t1;
}

static uint16_t fmt_format__anon_5643__5436(struct io_Writer__1950 const a0, nav__5436_41 const a1) {
 struct io_Writer__1950 const *t1;
 struct io_Writer__1950 t2;
 struct io_Writer__1950 t0;
 nav__5436_40 t4;
 uint16_t t3;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__5436_40){(uint8_t const *)&__anon_5680,(uintptr_t)27ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f0;
 t3 = fmt_formatType__anon_3846__5142(t4, (struct fmt_FormatOptions__3758){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__5436_40){(uint8_t const *)&__anon_3852,(uintptr_t)1ul});
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
   t6 = (*t1);
   t7 = t6.tag;
   t0 = t7 == UINT8_C(1);
   if (t0) {
    goto zig_block_5;
   }
   debug_no_panic_inactiveUnionField__anon_5577__5430(t7, UINT8_C(1));
   zig_unreachable();

   zig_block_5:;
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
  debug_print__anon_5717__5438(t12);
  goto zig_block_1;

  zig_block_1:;
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static void debug_print__anon_5717__5438(nav__5438_40 const a0) {
 struct fs_File__546 const *t2;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t5;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t7;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *t8;
 void const **t10;
 void const *t11;
 nav__5438_54 (**t12)(void const *, nav__5438_39);
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
 t12 = (nav__5438_54 (**)(void const *, nav__5438_39))&t9.writeFn;
 (*t12) = &io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooB__3818;
 t13 = t9;
 t14 = t13;
 t15 = (struct io_Writer__1950 const *)&t14;
 t13 = (*t15);
 t16 = io_Writer_print__anon_5718__5439(t13, a0);
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

static uint16_t io_Writer_print__anon_5718__5439(struct io_Writer__1950 const a0, nav__5439_41 const a1) {
 uint16_t t0;
 uint16_t t1;
 t0 = fmt_format__anon_5719__5440(a0, a1);
 memcpy(&t1, &t0, sizeof(uint16_t));
 return t1;
}

static uint16_t fmt_format__anon_5719__5440(struct io_Writer__1950 const a0, nav__5440_41 const a1) {
 struct io_Writer__1950 const *t1;
 struct io_Writer__1950 t2;
 struct io_Writer__1950 t0;
 nav__5440_40 t4;
 uint16_t t3;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__5440_40){(uint8_t const *)&__anon_5755,(uintptr_t)26ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f0;
 t3 = fmt_formatType__anon_3846__5142(t4, (struct fmt_FormatOptions__3758){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__5440_40){(uint8_t const *)&__anon_3852,(uintptr_t)1ul});
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
 t4 = mem_span__anon_5802__5442(a2);
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
 uintptr_t t8;
 uint8_t const *t9;
 struct instruments_perf_PerfInstrument__200 *t10;
 nav__236_61 t12;
 nav__236_63 t13;
 uint16_t t4;
 uint16_t t11;
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
    t8 = (uintptr_t)a2;
    t0 = t8 != (uintptr_t)0ul;
    if (t0) {
     goto zig_block_4;
    }
    debug_no_panic_castToNull__4100();
    zig_unreachable();

    zig_block_4:;
    t9 = (uint8_t const *)a2;
    callgrind_dump_stats_at(t9);
    goto zig_block_3;
   }
   case UINT8_C(1): {
    t1 = (*t3);
    t6 = (*t1);
    t7 = t6.tag;
    t0 = t7 == UINT8_C(1);
    if (t0) {
     goto zig_block_5;
    }
    debug_no_panic_inactiveUnionField__anon_5577__5430(t7, UINT8_C(1));
    zig_unreachable();

    zig_block_5:;
    t10 = (struct instruments_perf_PerfInstrument__200 *)&t1->payload.perf;
    t11 = instruments_perf_PerfInstrument_set_executed_benchmark__343(t10, a1, a2);
    if (t11) {
     t4 = t11;
     goto zig_block_2;
    }
    goto zig_block_3;
   }
   case UINT8_C(2): {
    goto zig_block_3;
   }
   default: {
    debug_no_panic_corruptSwitch__4111();
    zig_unreachable();
   }
  }

  zig_block_3:;
  t4 = 0;
  goto zig_block_2;

  zig_block_2:;
  memcpy(&t11, &t4, sizeof(uint16_t));
  t0 = t11 == UINT16_C(0);
  if (t0) {
   goto zig_block_1;
  }
  t12 = zig_errorName[t11 - 1];
  t13.f0 = t12;
  debug_print__anon_5810__5443(t13);
  goto zig_block_1;

  zig_block_1:;
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static zig_cold zig_noreturn void debug_no_panic_castToNull__4100(void) {
 zig_trap();
}

static nav__5442_39 mem_span__anon_5802__5442(uint8_t const *const a0) {
 uint8_t const *const *t1;
 uintptr_t t2;
 uint8_t const *t3;
 uint8_t const *t4;
 uint8_t const *t0;
 nav__5442_39 t6;
 bool t5;
 uint8_t t7;
 t0 = a0;
 t1 = (uint8_t const *const *)&t0;
 t2 = mem_len__anon_5818__5444(a0);
 t3 = (*t1);
 t4 = (uint8_t const *)(((uintptr_t)t3) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t5 = (uintptr_t)0ul <= t2;
 if (t5) {
  goto zig_block_0;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t2);
 zig_unreachable();

 zig_block_0:;
 t5 = t3 != NULL;
 if (t5) {
  goto zig_block_1;
 }
 debug_no_panic_unwrapNull__4099();
 zig_unreachable();

 zig_block_1:;
 t5 = (uintptr_t)0ul <= t2;
 if (t5) {
  goto zig_block_2;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t2);
 zig_unreachable();

 zig_block_2:;
 t6.ptr = t4;
 t6.len = t2;
 t7 = t6.ptr[t2];
 t5 = UINT8_C(0) == t7;
 if (t5) {
  goto zig_block_3;
 }
 debug_no_panic_sentinelMismatch__anon_5821__5445(UINT8_C(0), t7);
 zig_unreachable();

 zig_block_3:;
 return t6;
}

static void debug_print__anon_5810__5443(nav__5443_40 const a0) {
 struct fs_File__546 const *t2;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t5;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t7;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *t8;
 void const **t10;
 void const *t11;
 nav__5443_54 (**t12)(void const *, nav__5443_39);
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
 t12 = (nav__5443_54 (**)(void const *, nav__5443_39))&t9.writeFn;
 (*t12) = &io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooB__3818;
 t13 = t9;
 t14 = t13;
 t15 = (struct io_Writer__1950 const *)&t14;
 t13 = (*t15);
 t16 = io_Writer_print__anon_5822__5446(t13, a0);
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

static uintptr_t mem_len__anon_5818__5444(uint8_t const *const a0) {
 uintptr_t t1;
 uint8_t const *t2;
 bool t0;
 t0 = a0 != NULL;
 debug_assert__179(t0);
 t1 = (uintptr_t)a0;
 t0 = t1 != (uintptr_t)0ul;
 if (t0) {
  goto zig_block_0;
 }
 debug_no_panic_castToNull__4100();
 zig_unreachable();

 zig_block_0:;
 t2 = (uint8_t const *)a0;
 t1 = mem_indexOfSentinel__anon_5828__5447(t2);
 return t1;
}

static zig_cold zig_noreturn void debug_no_panic_sentinelMismatch__anon_5821__5445(uint8_t const a0, uint8_t const a1) {
 (void)a0;
 (void)a1;
 zig_trap();
}

static uint16_t io_Writer_print__anon_5822__5446(struct io_Writer__1950 const a0, nav__5446_41 const a1) {
 uint16_t t0;
 uint16_t t1;
 t0 = fmt_format__anon_5829__5448(a0, a1);
 memcpy(&t1, &t0, sizeof(uint16_t));
 return t1;
}

static uintptr_t mem_indexOfSentinel__anon_5828__5447(uint8_t const *const a0) {
 static uint8_t const t11[32] = "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000";
 static uint8_t const t19[32] = "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000";
 uint8_t const *const *t1;
 uintptr_t t4;
 uintptr_t t6;
 uintptr_t t17;
 uintptr_t t2;
 uint8_t const *t5;
 uint8_t const *t0;
 uint64_t t7;
 uint8_t const (*t8)[32];
 nav__5447_49 t16;
 uint8_t const (*t18)[32];
 bool t3;
 uint8_t t9[32];
 uint8_t t10[32];
 bool t12[32];
 nav__5447_45 t13;
 nav__5447_47 t14;
 uint8_t t15;
 t0 = a0;
 t1 = (uint8_t const *const *)&t0;
 t2 = (uintptr_t)0ul;
 t3 = math_isPowerOfTwo__anon_5093__5256();
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
    memcpy(t13.array, t12, sizeof(nav__5447_45));
    t14 = simd_firstTrue__anon_5122__5263(t13);
    t3 = t14.is_null != true;
    if (t3) {
     goto zig_block_3;
    }
    debug_no_panic_unwrapNull__4099();
    zig_unreachable();

    zig_block_3:;
    t15 = t14.payload;
    t6 = (uintptr_t)t15;
    t16.f1 = zig_addo_u64(&t16.f0, t4, t6, UINT8_C(64));
    t15 = t16.f1;
    t3 = t15 == UINT8_C(0);
    if (t3) {
     goto zig_block_4;
    }
    debug_no_panic_integerOverflow__4105();
    zig_unreachable();

    zig_block_4:;
    t6 = t16.f0;
    return t6;
   }
   goto zig_block_2;

   zig_block_2:;
   t6 = t2;
   t17 = mem_alignForward__anon_5842__5449(t4, (uintptr_t)32ul);
   t16.f1 = zig_subo_u64(&t16.f0, t17, t4, UINT8_C(64));
   t15 = t16.f1;
   t3 = t15 == UINT8_C(0);
   if (t3) {
    goto zig_block_5;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_5:;
   t4 = t16.f0;
   t17 = t4 / (uintptr_t)1ul;
   t4 = t4 % (uintptr_t)1ul;
   t3 = t4 == (uintptr_t)0ul;
   if (t3) {
    goto zig_block_6;
   }
   debug_no_panic_exactDivisionRemainder__4109();
   zig_unreachable();

   zig_block_6:;
   t16.f1 = zig_addo_u64(&t16.f0, t6, t17, UINT8_C(64));
   t15 = t16.f1;
   t3 = t15 == UINT8_C(0);
   if (t3) {
    goto zig_block_7;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_7:;
   t17 = t16.f0;
   t2 = t17;
   goto zig_block_1;
  }
  zig_loop_90:
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
   goto zig_block_10;

   zig_block_10:;
   t4 = t2;
   t16.f1 = zig_addo_u64(&t16.f0, t4, (uintptr_t)1ul, UINT8_C(64));
   t15 = t16.f1;
   t3 = t15 == UINT8_C(0);
   if (t3) {
    goto zig_block_11;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_11:;
   t4 = t16.f0;
   t2 = t4;
   goto zig_block_9;
  }
  goto zig_block_8;

  zig_block_9:;
  goto zig_loop_90;

  zig_block_8:;
  goto zig_block_1;

  zig_block_1:;
  t6 = t2;
  t5 = (*t1);
  t5 = (uint8_t const *)&t5[t6];
  t6 = (uintptr_t)t5;
  t3 = mem_isAligned__499(t6, (uintptr_t)32ul);
  debug_assert__179(t3);
  zig_loop_133:
  t6 = t2;
  t5 = (*t1);
  t5 = (uint8_t const *)(((uintptr_t)t5) + (t6*sizeof(uint8_t)));
  t8 = (uint8_t const (*)[32])t5;
  t18 = (uint8_t const (*)[32])t8;
  memcpy(t10, (const char *)t18, sizeof(uint8_t[32]));
  for (t6 = (uintptr_t)0ul; t6 < (uintptr_t)32ul; t6 += (uintptr_t)1ul) {
   t12[t6] = t10[t6] == t19[t6];
  }
  t3 = false;
  for (t6 = (uintptr_t)0ul; t6 < (uintptr_t)32ul; t6 += (uintptr_t)1ul) {
   t3 |= t12[t6];
  }
  if (t3) {
   t6 = t2;
   memcpy(t13.array, t12, sizeof(nav__5447_45));
   t14 = simd_firstTrue__anon_5122__5263(t13);
   t3 = t14.is_null != true;
   if (t3) {
    goto zig_block_13;
   }
   debug_no_panic_unwrapNull__4099();
   zig_unreachable();

   zig_block_13:;
   t15 = t14.payload;
   t4 = (uintptr_t)t15;
   t16.f1 = zig_addo_u64(&t16.f0, t6, t4, UINT8_C(64));
   t15 = t16.f1;
   t3 = t15 == UINT8_C(0);
   if (t3) {
    goto zig_block_14;
   }
   debug_no_panic_integerOverflow__4105();
   zig_unreachable();

   zig_block_14:;
   t4 = t16.f0;
   return t4;
  }
  goto zig_block_12;

  zig_block_12:;
  t6 = t2;
  t16.f1 = zig_addo_u64(&t16.f0, t6, (uintptr_t)32ul, UINT8_C(64));
  t15 = t16.f1;
  t3 = t15 == UINT8_C(0);
  if (t3) {
   goto zig_block_15;
  }
  debug_no_panic_integerOverflow__4105();
  zig_unreachable();

  zig_block_15:;
  t6 = t16.f0;
  t2 = t6;
  goto zig_loop_133;
 }
 goto zig_block_0;

 zig_block_0:;
 zig_loop_186:
 t17 = t2;
 t15 = a0[t17];
 t3 = t15 != UINT8_C(0);
 if (t3) {
  t17 = t2;
  t16.f1 = zig_addo_u64(&t16.f0, t17, (uintptr_t)1ul, UINT8_C(64));
  t15 = t16.f1;
  t3 = t15 == UINT8_C(0);
  if (t3) {
   goto zig_block_18;
  }
  debug_no_panic_integerOverflow__4105();
  zig_unreachable();

  zig_block_18:;
  t17 = t16.f0;
  t2 = t17;
  goto zig_block_17;
 }
 goto zig_block_16;

 zig_block_17:;
 goto zig_loop_186;

 zig_block_16:;
 t17 = t2;
 return t17;
}

static uint16_t fmt_format__anon_5829__5448(struct io_Writer__1950 const a0, nav__5448_41 const a1) {
 struct io_Writer__1950 const *t1;
 struct io_Writer__1950 t2;
 struct io_Writer__1950 t0;
 nav__5448_40 t4;
 uint16_t t3;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__5448_40){(uint8_t const *)&__anon_5889,(uintptr_t)34ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f0;
 t3 = fmt_formatType__anon_3846__5142(t4, (struct fmt_FormatOptions__3758){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__5448_40){(uint8_t const *)&__anon_3852,(uintptr_t)1ul});
 if (t3) {
  return t3;
 }
 return 0;
}

static uintptr_t mem_alignForward__anon_5842__5449(uintptr_t const a0, uintptr_t const a1) {
 nav__5449_39 t1;
 uintptr_t t3;
 bool t0;
 uint8_t t2;
 t0 = mem_isValidAlignGeneric__anon_5900__5450(a1);
 debug_assert__179(t0);
 t1.f1 = zig_subo_u64(&t1.f0, a1, (uintptr_t)1ul, UINT8_C(64));
 t2 = t1.f1;
 t0 = t2 == UINT8_C(0);
 if (t0) {
  goto zig_block_0;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_0:;
 t3 = t1.f0;
 t1.f1 = zig_addo_u64(&t1.f0, a0, t3, UINT8_C(64));
 t2 = t1.f1;
 t0 = t2 == UINT8_C(0);
 if (t0) {
  goto zig_block_1;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_1:;
 t3 = t1.f0;
 t3 = mem_alignBackward__anon_5901__5451(t3, a1);
 return t3;
}

static bool mem_isAligned__499(uintptr_t const a0, uintptr_t const a1) {
 uint64_t t0;
 uint64_t t1;
 bool t2;
 t0 = a0;
 t1 = a1;
 t2 = mem_isAlignedGeneric__anon_5905__5452(t0, t1);
 return t2;
}

static bool mem_isValidAlignGeneric__anon_5900__5450(uintptr_t const a0) {
 uint64_t t0;
 bool t1;
 bool t2;
 t0 = a0;
 t1 = t0 > UINT64_C(0);
 if (t1) {
  t1 = math_isPowerOfTwo__anon_3191__4636(a0);
  t2 = t1;
  goto zig_block_0;
 }
 t2 = false;
 goto zig_block_0;

 zig_block_0:;
 return t2;
}

static uintptr_t mem_alignBackward__anon_5901__5451(uintptr_t const a0, uintptr_t const a1) {
 nav__5451_39 t1;
 uintptr_t t3;
 bool t0;
 uint8_t t2;
 t0 = mem_isValidAlignGeneric__anon_5900__5450(a1);
 debug_assert__179(t0);
 t1.f1 = zig_subo_u64(&t1.f0, a1, (uintptr_t)1ul, UINT8_C(64));
 t2 = t1.f1;
 t0 = t2 == UINT8_C(0);
 if (t0) {
  goto zig_block_0;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_0:;
 t3 = t1.f0;
 t3 = zig_not_u64(t3, UINT8_C(64));
 t3 = a0 & t3;
 return t3;
}

static bool mem_isAlignedGeneric__anon_5905__5452(uint64_t const a0, uint64_t const a1) {
 uint64_t t0;
 bool t1;
 t0 = mem_alignBackward__anon_5907__5453(a0, a1);
 t1 = t0 == a0;
 return t1;
}

static uint64_t mem_alignBackward__anon_5907__5453(uint64_t const a0, uint64_t const a1) {
 nav__5453_39 t1;
 uint64_t t3;
 bool t0;
 uint8_t t2;
 t0 = mem_isValidAlignGeneric__anon_5909__5454(a1);
 debug_assert__179(t0);
 t1.f1 = zig_subo_u64(&t1.f0, a1, UINT64_C(1), UINT8_C(64));
 t2 = t1.f1;
 t0 = t2 == UINT8_C(0);
 if (t0) {
  goto zig_block_0;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_0:;
 t3 = t1.f0;
 t3 = zig_not_u64(t3, UINT8_C(64));
 t3 = a0 & t3;
 return t3;
}

static bool mem_isValidAlignGeneric__anon_5909__5454(uint64_t const a0) {
 bool t0;
 bool t1;
 t0 = a0 > UINT64_C(0);
 if (t0) {
  t0 = math_isPowerOfTwo__anon_5911__5455(a0);
  t1 = t0;
  goto zig_block_0;
 }
 t1 = false;
 goto zig_block_0;

 zig_block_0:;
 return t1;
}

static bool math_isPowerOfTwo__anon_5911__5455(uint64_t const a0) {
 nav__5455_39 t1;
 uint64_t t3;
 bool t0;
 uint8_t t2;
 t0 = a0 > UINT64_C(0);
 debug_assert__179(t0);
 t1.f1 = zig_subo_u64(&t1.f0, a0, UINT64_C(1), UINT8_C(64));
 t2 = t1.f1;
 t0 = t2 == UINT8_C(0);
 if (t0) {
  goto zig_block_0;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_0:;
 t3 = t1.f0;
 t3 = a0 & t3;
 t0 = t3 == UINT64_C(0);
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
 t4 = mem_span__anon_5802__5442(a1);
 t5 = mem_span__anon_5802__5442(a2);
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
    t6 = (*t1);
    t7 = t6.tag;
    t0 = t7 == UINT8_C(0);
    if (t0) {
     goto zig_block_4;
    }
    debug_no_panic_inactiveUnionField__anon_5577__5430(t7, UINT8_C(0));
    zig_unreachable();

    zig_block_4:;
    t8 = (struct instruments_valgrind_ValgrindInstrument__195 *)&t1->payload.valgrind;
    t9 = (*t8);
    t11 = t9;
    t12 = (struct instruments_valgrind_ValgrindInstrument__195 const *)&t11;
    t13 = t9.allocator;
    t14.f0 = a1;
    t14.f1 = a2;
    t15 = fmt_allocPrintZ__anon_5943__5456(t13, t14);
    if (t15.error) {
     t16 = t15.error;
     t10 = t16;
     goto zig_block_5;
    }
    t17 = t15.payload;
    t18 = t17.ptr;
    t19 = (uint8_t const *)t18;
    callgrind_dump_stats_at(t19);
    t20 = (struct mem_Allocator__206 const *)&t12->allocator;
    t13 = (*t20);
    mem_Allocator_free__anon_5945__5457(t13, t17);
    t10 = 0;
    goto zig_block_5;

    zig_block_5:;
    memcpy(&t16, &t10, sizeof(uint16_t));
    if (t16) {
     t4 = t16;
     goto zig_block_2;
    }
    goto zig_block_3;
   }
   case UINT8_C(1): {
    t1 = (*t3);
    t6 = (*t1);
    t7 = t6.tag;
    t0 = t7 == UINT8_C(1);
    if (t0) {
     goto zig_block_6;
    }
    debug_no_panic_inactiveUnionField__anon_5577__5430(t7, UINT8_C(1));
    zig_unreachable();

    zig_block_6:;
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
   default: {
    debug_no_panic_corruptSwitch__4111();
    zig_unreachable();
   }
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
  debug_print__anon_5957__5458(t23);
  goto zig_block_1;

  zig_block_1:;
  goto zig_block_0;
 }
 goto zig_block_0;

 zig_block_0:;
 return;
}

static nav__5456_40 fmt_allocPrintZ__anon_5943__5456(struct mem_Allocator__206 const a0, nav__5456_43 const a1) {
 nav__5456_40 t0;
 nav__5456_39 t2;
 nav__5456_39 t3;
 nav__5456_39 const *t4;
 uintptr_t t5;
 uintptr_t t10;
 uintptr_t t11;
 nav__5456_54 t6;
 uint8_t *t9;
 uint16_t t1;
 uint8_t t7;
 bool t8;
 t0 = fmt_allocPrint__anon_5973__5459(a0, a1);
 if (t0.error) {
  t1 = t0.error;
  t0.payload = (nav__5456_39){(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t0.error = t1;
  return t0;
 }
 t2 = t0.payload;
 t3 = t2;
 t4 = (nav__5456_39 const *)&t3;
 t5 = t2.len;
 t6.f1 = zig_subo_u64(&t6.f0, t5, (uintptr_t)1ul, UINT8_C(64));
 t7 = t6.f1;
 t8 = t7 == UINT8_C(0);
 if (t8) {
  goto zig_block_0;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_0:;
 t5 = t6.f0;
 t2 = (*t4);
 t9 = t2.ptr;
 t9 = (uint8_t *)(((uintptr_t)t9) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t8 = (uintptr_t)0ul <= t5;
 if (t8) {
  goto zig_block_1;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t5);
 zig_unreachable();

 zig_block_1:;
 t10 = t2.len;
 t6.f1 = zig_addo_u64(&t6.f0, t5, (uintptr_t)1ul, UINT8_C(64));
 t7 = t6.f1;
 t8 = t7 == UINT8_C(0);
 if (t8) {
  goto zig_block_2;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_2:;
 t11 = t6.f0;
 t8 = t11 <= t10;
 if (t8) {
  goto zig_block_3;
 }
 debug_no_panic_outOfBounds__4094(t11, t10);
 zig_unreachable();

 zig_block_3:;
 t8 = (uintptr_t)0ul <= t5;
 if (t8) {
  goto zig_block_4;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t5);
 zig_unreachable();

 zig_block_4:;
 t2.ptr = t9;
 t2.len = t5;
 t7 = t2.ptr[t5];
 t8 = UINT8_C(0) == t7;
 if (t8) {
  goto zig_block_5;
 }
 debug_no_panic_sentinelMismatch__anon_5821__5445(UINT8_C(0), t7);
 zig_unreachable();

 zig_block_5:;
 t0.payload = t2;
 t0.error = UINT16_C(0);
 return t0;
}

static void mem_Allocator_free__anon_5945__5457(struct mem_Allocator__206 const a0, nav__5457_40 const a1) {
 struct mem_Allocator__206 const *t1;
 nav__5457_40 t2;
 uintptr_t t3;
 nav__5457_49 t4;
 uint64_t t7;
 uint8_t *t8;
 uint8_t *t9;
 uint8_t *t10;
 uint8_t *const *t11;
 struct mem_Allocator__206 t12;
 struct mem_Allocator__206 t0;
 struct mem_Allocator__206 t13;
 struct mem_Allocator_VTable__209 const *const *t14;
 struct mem_Allocator_VTable__209 const *t15;
 void (*const *t16)(void *, nav__5457_40, uint8_t, uintptr_t);
 void (*t17)(void *, nav__5457_40, uint8_t, uintptr_t);
 void *t18;
 uint8_t t5;
 bool t6;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t2 = mem_sliceAsBytes__anon_5980__5460(a1);
 t3 = t2.len;
 t4.f1 = zig_addo_u64(&t4.f0, t3, (uintptr_t)1ul, UINT8_C(64));
 t5 = t4.f1;
 t6 = t5 == UINT8_C(0);
 if (t6) {
  goto zig_block_0;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_0:;
 t3 = t4.f0;
 t7 = t3;
 t6 = t7 == UINT64_C(0);
 if (t6) {
  return;
 }
 goto zig_block_1;

 zig_block_1:;
 t8 = t2.ptr;
 t9 = (uint8_t *)t8;
 t10 = t9;
 t11 = (uint8_t *const *)&t10;
 t9 = (*t11);
 t9 = (uint8_t *)(((uintptr_t)t9) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t6 = (uintptr_t)0ul <= t3;
 if (t6) {
  goto zig_block_2;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_2:;
 t6 = (uintptr_t)0ul <= t3;
 if (t6) {
  goto zig_block_3;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_3:;
 t2.ptr = t9;
 t2.len = t3;
 memset(t2.ptr, 0xaa, t2.len);
 t12 = (*t1);
 t9 = (*t11);
 t9 = (uint8_t *)(((uintptr_t)t9) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t6 = (uintptr_t)0ul <= t3;
 if (t6) {
  goto zig_block_4;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_4:;
 t6 = (uintptr_t)0ul <= t3;
 if (t6) {
  goto zig_block_5;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_5:;
 t2.ptr = t9;
 t2.len = t3;
 t5 = mem_Alignment_fromByteUnits__628((uintptr_t)1ul);
 t3 = (uintptr_t)zig_return_address();
 t13 = t12;
 t1 = (struct mem_Allocator__206 const *)&t13;
 t14 = (struct mem_Allocator_VTable__209 const *const *)&t1->vtable;
 t15 = (*t14);
 t16 = (void (*const *)(void *, nav__5457_40, uint8_t, uintptr_t))&t15->free;
 t17 = (*t16);
 t18 = t12.ptr;
 t17(t18, t2, t5, t3);
 return;
}

static void debug_print__anon_5957__5458(nav__5458_40 const a0) {
 struct fs_File__546 const *t2;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t5;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *t7;
 struct io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooBig_2cNoSpaceLeft_2cDeviceBusy_2cWouldBlock_2cDiskQuota_2cInvalidArgument_2cBrokenPipe_2cOperationAborted_2cNotOpenForWriting_2cLockViolation_2cConnectionResetByPeer_2cProcessNotFound_7d_2c_28function_20_27write_27_29_29__1934 const *const *t8;
 void const **t10;
 void const *t11;
 nav__5458_54 (**t12)(void const *, nav__5458_39);
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
 t12 = (nav__5458_54 (**)(void const *, nav__5458_39))&t9.writeFn;
 (*t12) = &io_GenericWriter_28fs_File_2cerror_7bInputOutput_2cSystemResources_2cUnexpected_2cAccessDenied_2cNoDevice_2cFileTooB__3818;
 t13 = t9;
 t14 = t13;
 t15 = (struct io_Writer__1950 const *)&t14;
 t13 = (*t15);
 t16 = io_Writer_print__anon_5981__5461(t13, a0);
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

static nav__5459_40 fmt_allocPrint__anon_5973__5459(struct mem_Allocator__206 const a0, nav__5459_43 const a1) {
 struct mem_Allocator__206 const *t1;
 uintptr_t t2;
 uintptr_t t6;
 uint64_t t3;
 nav__5459_54 t4;
 struct mem_Allocator__206 t7;
 struct mem_Allocator__206 t0;
 nav__5459_40 t8;
 nav__5459_40 t11;
 nav__5459_39 t10;
 uint16_t t9;
 bool t5;
 t0 = a0;
 t1 = (struct mem_Allocator__206 const *)&t0;
 t3 = fmt_count__anon_5988__5462(a1);
 t4 = math_cast__anon_5990__5463(t3);
 t5 = t4.is_null != true;
 if (t5) {
  t6 = t4.payload;
  t2 = t6;
  goto zig_block_0;
 }
 return (nav__5459_40){{(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},zig_error_OutOfMemory};

 zig_block_0:;
 t7 = (*t1);
 t8 = mem_Allocator_alloc__anon_2273__4159(t7, t2);
 if (t8.error) {
  t9 = t8.error;
  t8.payload = (nav__5459_39){(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul};
  t8.error = t9;
  return t8;
 }
 t10 = t8.payload;
 t8 = fmt_bufPrint__anon_5999__5464(t10, a1);
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
   debug_no_panic_unwrapError__4093(t9);
   zig_unreachable();
  }
  default: {
   debug_no_panic_corruptSwitch__4111();
   zig_unreachable();
  }
 }

 zig_block_1:;
 return t11;
}

static nav__5460_39 mem_sliceAsBytes__anon_5980__5460(nav__5460_39 const a0) {
 uintptr_t t0;
 uint64_t t1;
 uint8_t *t3;
 uint8_t *t4;
 uint8_t *t5;
 uint8_t *const *t6;
 nav__5460_39 t7;
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
 t2 = (uintptr_t)0ul <= t0;
 if (t2) {
  goto zig_block_1;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t0);
 zig_unreachable();

 zig_block_1:;
 t2 = (uintptr_t)0ul <= t0;
 if (t2) {
  goto zig_block_2;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t0);
 zig_unreachable();

 zig_block_2:;
 t7.ptr = t4;
 t7.len = t0;
 return t7;
}

static uint16_t io_Writer_print__anon_5981__5461(struct io_Writer__1950 const a0, nav__5461_41 const a1) {
 uint16_t t0;
 uint16_t t1;
 t0 = fmt_format__anon_6002__5465(a0, a1);
 memcpy(&t1, &t0, sizeof(uint16_t));
 return t1;
}

static uint16_t fmt_format__anon_6054__5504(struct io_Writer__1950 const a0, nav__5504_40 const a1) {
 struct io_Writer__1950 const *t1;
 struct io_Writer__1950 t2;
 struct io_Writer__1950 t0;
 uint8_t const *t4;
 uint16_t t3;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__5504_44){(uint8_t const *)&__anon_6085,(uintptr_t)10ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f0;
 t3 = fmt_formatType__anon_6094__5505(t4, (struct fmt_FormatOptions__3758){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__5504_44){(uint8_t const *)&__anon_6100,(uintptr_t)1ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f1;
 t3 = fmt_formatType__anon_6094__5505(t4, (struct fmt_FormatOptions__3758){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__5504_44){(uint8_t const *)&__anon_6119,(uintptr_t)1ul});
 if (t3) {
  return t3;
 }
 return 0;
}

static uint64_t fmt_count__anon_5988__5462(nav__5462_39 const a0) {
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 t1;
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 t0;
 struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__6035 t2;
 struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__6035 t3;
 struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__6035 const *t4;
 struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__6035 const *t5;
 struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__6035 const *const *t6;
 void const **t8;
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *const *t9;
 void const *t10;
 nav__5462_53 (**t11)(void const *, nav__5462_54);
 struct io_Writer__1950 t12;
 struct io_Writer__1950 t7;
 uint64_t t15;
 uint16_t t13;
 bool t14;
 t1 = io_counting_writer_countingWriter__anon_6024__5490();
 t0 = t1;
 t2 = io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_writer__5489(&t0);
 t3 = t2;
 t4 = (struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__6035 const *)&t3;
 t5 = t4;
 t6 = (struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__6035 const *const *)&t5;
 t8 = (void const **)&t7.context;
 t4 = (*t6);
 t9 = (struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *const *)&t4->context;
 t10 = (void const *)t9;
 (*t8) = t10;
 t11 = (nav__5462_53 (**)(void const *, nav__5462_54))&t7.writeFn;
 (*t11) = &io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWr__5503;
 t12 = t7;
 t13 = fmt_format__anon_6054__5504(t12, a0);
 t14 = t13 == UINT16_C(0);
 if (t14) {
  goto zig_block_0;
 }
 debug_no_panic_unwrapError__4093(t13);
 zig_unreachable();

 zig_block_0:;
 t1 = t0;
 t15 = t1.bytes_written;
 return t15;
}

static nav__5463_38 math_cast__anon_5990__5463(uint64_t const a0) {
 uintptr_t t0;
 nav__5463_38 t1;
 t0 = a0;
 t1.is_null = false;
 t1.payload = t0;
 return t1;
}

static nav__5464_40 fmt_bufPrint__anon_5999__5464(nav__5464_39 const a0, nav__5464_42 const a1) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 t1;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 t0;
 struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6131 t2;
 struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6131 t3;
 struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6131 const *t4;
 struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6131 const *t5;
 struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6131 const *const *t6;
 void const **t8;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *t9;
 void const *t10;
 nav__5464_57 (**t11)(void const *, nav__5464_58);
 struct io_Writer__1950 t12;
 struct io_Writer__1950 t7;
 nav__5464_39 t15;
 nav__5464_40 t16;
 uint16_t t13;
 bool t14;
 t1 = io_fixed_buffer_stream_fixedBufferStream__anon_2295__4191(a0);
 t0 = t1;
 t2 = io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_writer__4181(&t0);
 t3 = t2;
 t4 = (struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6131 const *)&t3;
 t5 = t4;
 t6 = (struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6131 const *const *)&t5;
 t8 = (void const **)&t7.context;
 t4 = (*t6);
 t9 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *)&t4->context;
 t10 = (void const *)t9;
 (*t8) = t10;
 t11 = (nav__5464_57 (**)(void const *, nav__5464_58))&t7.writeFn;
 (*t11) = &io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write__5518;
 t12 = t7;
 t13 = fmt_format__anon_6054__5504(t12, a1);
 t14 = t13 == UINT16_C(0);
 if (t14) {
  goto zig_block_0;
 }
 switch (t13) {
  case zig_error_NoSpaceLeft: {
   return (nav__5464_40){{(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},zig_error_NoSpaceLeft};
  }
  default: {
   debug_no_panic_unwrapError__4093(t13);
   zig_unreachable();
  }
 }

 zig_block_0:;
 t1 = t0;
 t15 = io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_getWritten__4189(t1);
 t16.payload = t15;
 t16.error = UINT16_C(0);
 return t16;
}

static uint16_t fmt_format__anon_6002__5465(struct io_Writer__1950 const a0, nav__5465_41 const a1) {
 struct io_Writer__1950 const *t1;
 struct io_Writer__1950 t2;
 struct io_Writer__1950 t0;
 nav__5465_40 t4;
 uint16_t t3;
 t0 = a0;
 t1 = (struct io_Writer__1950 const *)&t0;
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__5465_40){(uint8_t const *)&__anon_6186,(uintptr_t)27ul});
 if (t3) {
  return t3;
 }
 t4 = a1.f0;
 t3 = fmt_formatType__anon_3846__5142(t4, (struct fmt_FormatOptions__3758){{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},{(uintptr_t)0xaaaaaaaaaaaaaaaaul,true},UINT32_C(32),UINT8_C(2)}, a0, (uintptr_t)3ul);
 if (t3) {
  return t3;
 }
 t2 = (*t1);
 t3 = io_Writer_writeAll__3826(t2, (nav__5465_40){(uint8_t const *)&__anon_3852,(uintptr_t)1ul});
 if (t3) {
  return t3;
 }
 return 0;
}

static struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 io_counting_writer_countingWriter__anon_6024__5490(void) {
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 t0;
 t0 = (struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021){UINT64_C(0)};
 return t0;
}

static struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__6035 io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_writer__5489(struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *const a0) {
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 **t1;
 struct io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_2cerror_7b_7d_2c_28function_20_27write_27_29_29__6035 t0;
 t1 = (struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 **)&t0.context;
 (*t1) = a0;
 return t0;
}

static nav__5503_38 io_GenericWriter_28_2aio_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWr__5503(void const *const a0, nav__5503_41 const a1) {
 uintptr_t t0;
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *const *t2;
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *t3;
 nav__5503_38 t4;
 nav__5503_38 t5;
 bool t1;
 t0 = (uintptr_t)a0;
 t0 = t0 & (uintptr_t)7ul;
 t1 = t0 == (uintptr_t)0ul;
 if (t1) {
  goto zig_block_0;
 }
 debug_no_panic_incorrectAlignment__4101();
 zig_unreachable();

 zig_block_0:;
 t2 = (struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *const *)a0;
 t3 = (*t2);
 t4 = io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_write__5488(t3, a1);
 memcpy(&t5, &t4, sizeof(nav__5503_38));
 return t5;
}

static uint16_t fmt_formatType__anon_6094__5505(uint8_t const *const a0, struct fmt_FormatOptions__3758 const a1, struct io_Writer__1950 const a2, uintptr_t const a3) {
 nav__5505_47 t2;
 nav__5505_47 t3;
 uint8_t const *t0;
 struct io_Writer__1950 t1;
 uint16_t t4;
 uint16_t t5;
 (void)a3;
 t0 = a0;
 t1 = a2;
 t2 = mem_span__anon_5802__5442(a0);
 memcpy(&t3, &t2, sizeof(nav__5505_47));
 t4 = fmt_formatBuf__anon_4737__5246(t3, a1, a2);
 memcpy(&t5, &t4, sizeof(uint16_t));
 return t5;
}

static struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6131 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_writer__4181(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const a0) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 **t1;
 struct io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write_27_29_29__6131 t0;
 t1 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 **)&t0.context;
 (*t1) = a0;
 return t0;
}

static nav__5518_38 io_GenericWriter_28_2aio_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_2cerror_7bNoSpaceLeft_7d_2c_28function_20_27write__5518(void const *const a0, nav__5518_41 const a1) {
 uintptr_t t0;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *t2;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *t3;
 nav__5518_38 t4;
 nav__5518_38 t5;
 bool t1;
 t0 = (uintptr_t)a0;
 t0 = t0 & (uintptr_t)7ul;
 t1 = t0 == (uintptr_t)0ul;
 if (t1) {
  goto zig_block_0;
 }
 debug_no_panic_incorrectAlignment__4101();
 zig_unreachable();

 zig_block_0:;
 t2 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *)a0;
 t3 = (*t2);
 t4 = io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_write__4184(t3, a1);
 memcpy(&t5, &t4, sizeof(nav__5518_38));
 return t5;
}

static nav__4189_39 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_getWritten__4189(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 const a0) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 const *t1;
 nav__4189_39 const *t2;
 uintptr_t t3;
 uintptr_t t7;
 nav__4189_39 t4;
 uint8_t *t5;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 t0;
 bool t6;
 t0 = a0;
 t1 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 const *)&t0;
 t2 = (nav__4189_39 const *)&t1->buffer;
 t3 = a0.pos;
 t4 = (*t2);
 t5 = t4.ptr;
 t5 = (uint8_t *)(((uintptr_t)t5) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t6 = (uintptr_t)0ul <= t3;
 if (t6) {
  goto zig_block_0;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_0:;
 t7 = t4.len;
 t6 = t3 <= t7;
 if (t6) {
  goto zig_block_1;
 }
 debug_no_panic_outOfBounds__4094(t3, t7);
 zig_unreachable();

 zig_block_1:;
 t6 = (uintptr_t)0ul <= t3;
 if (t6) {
  goto zig_block_2;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t3);
 zig_unreachable();

 zig_block_2:;
 t4.ptr = t5;
 t4.len = t3;
 return t4;
}

static nav__5488_38 io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29_write__5488(struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *const a0, nav__5488_42 const a1) {
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *const *t1;
 nav__5488_38 t2;
 uintptr_t t3;
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *t4;
 struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *t0;
 uint64_t *t5;
 uint64_t t6;
 uint64_t t7;
 nav__5488_51 t8;
 uint8_t t9;
 bool t10;
 t0 = a0;
 t1 = (struct io_counting_writer_CountingWriter_28io_GenericWriter_28void_2cerror_7b_7d_2c_28function_20_27dummyWrite_27_29_29_29__6021 *const *)&t0;
 t2 = io_dummyWrite__3796(a1);
 t3 = t2.payload;
 t4 = (*t1);
 t5 = (uint64_t *)&t4->bytes_written;
 t6 = (*t5);
 t7 = t3;
 t8.f1 = zig_addo_u64(&t8.f0, t6, t7, UINT8_C(64));
 t9 = t8.f1;
 t10 = t9 == UINT8_C(0);
 if (t10) {
  goto zig_block_0;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_0:;
 t7 = t8.f0;
 (*t5) = t7;
 t2.payload = t3;
 t2.error = UINT16_C(0);
 return t2;
}

static nav__4184_38 io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29_write__4184(struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const a0, nav__4184_42 const a1) {
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *t1;
 nav__4184_42 const *t3;
 uintptr_t t4;
 uintptr_t t10;
 uintptr_t t16;
 uintptr_t t17;
 uint64_t t5;
 uint64_t t11;
 uintptr_t *t7;
 nav__4184_50 *t8;
 nav__4184_50 t9;
 nav__4184_55 t12;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *t14;
 struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *t0;
 uint8_t *t15;
 uint8_t *t21;
 nav__4184_42 t18;
 nav__4184_42 t2;
 uint8_t const *t19;
 uint8_t const *t20;
 nav__4184_38 t23;
 bool t6;
 bool t22;
 uint8_t t13;
 t0 = a0;
 t1 = (struct io_fixed_buffer_stream_FixedBufferStream_28_5b_5du8_29__2292 *const *)&t0;
 t2 = a1;
 t3 = (nav__4184_42 const *)&t2;
 t4 = a1.len;
 t5 = t4;
 t6 = t5 == UINT64_C(0);
 if (t6) {
  return (nav__4184_38){(uintptr_t)0ul,0};
 }
 goto zig_block_0;

 zig_block_0:;
 t7 = (uintptr_t *)&a0->pos;
 t4 = (*t7);
 t8 = (nav__4184_50 *)&a0->buffer;
 t9 = (*t8);
 t10 = t9.len;
 t5 = t4;
 t11 = t10;
 t6 = t5 >= t11;
 if (t6) {
  return (nav__4184_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_NoSpaceLeft};
 }
 goto zig_block_1;

 zig_block_1:;
 t8 = (nav__4184_50 *)&a0->buffer;
 t9 = (*t8);
 t10 = t9.len;
 t7 = (uintptr_t *)&a0->pos;
 t4 = (*t7);
 t12.f1 = zig_subo_u64(&t12.f0, t10, t4, UINT8_C(64));
 t13 = t12.f1;
 t6 = t13 == UINT8_C(0);
 if (t6) {
  goto zig_block_2;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_2:;
 t4 = t12.f0;
 t10 = a1.len;
 t10 = (t4 < t10) ? t4 : t10;
 t11 = t10;
 t14 = (*t1);
 t8 = (nav__4184_50 *)&t14->buffer;
 t7 = (uintptr_t *)&a0->pos;
 t10 = (*t7);
 t9 = (*t8);
 t15 = t9.ptr;
 t15 = (uint8_t *)(((uintptr_t)t15) + (t10*sizeof(uint8_t)));
 t4 = t11;
 t4 = t10 + t4;
 t16 = t11;
 t17 = t9.len;
 t6 = t4 <= t17;
 if (t6) {
  goto zig_block_3;
 }
 debug_no_panic_outOfBounds__4094(t4, t17);
 zig_unreachable();

 zig_block_3:;
 t6 = t10 <= t4;
 if (t6) {
  goto zig_block_4;
 }
 debug_no_panic_outOfBounds__4094(t10, t4);
 zig_unreachable();

 zig_block_4:;
 t9.ptr = t15;
 t9.len = t16;
 t18 = (*t3);
 t19 = t18.ptr;
 t19 = (uint8_t const *)(((uintptr_t)t19) + ((uintptr_t)0ul*sizeof(uint8_t)));
 t16 = t11;
 t6 = (uintptr_t)0ul <= t16;
 if (t6) {
  goto zig_block_5;
 }
 debug_no_panic_startGreaterThanEnd__4095((uintptr_t)0ul, t16);
 zig_unreachable();

 zig_block_5:;
 t4 = t18.len;
 t6 = t16 <= t4;
 if (t6) {
  goto zig_block_6;
 }
 debug_no_panic_outOfBounds__4094(t16, t4);
 zig_unreachable();

 zig_block_6:;
 t6 = (uintptr_t)0ul <= t16;
 if (t6) {
  goto zig_block_7;
 }
 debug_no_panic_outOfBounds__4094((uintptr_t)0ul, t16);
 zig_unreachable();

 zig_block_7:;
 t18.ptr = t19;
 t18.len = t16;
 t16 = t9.len;
 t4 = t18.len;
 t6 = t16 == t4;
 if (t6) {
  goto zig_block_8;
 }
 debug_no_panic_memcpyLenMismatch__4115();
 zig_unreachable();

 zig_block_8:;
 t19 = t18.ptr;
 t15 = t9.ptr;
 t20 = (uint8_t const *)(((uintptr_t)t19) + (t16*sizeof(uint8_t)));
 t21 = (uint8_t *)(((uintptr_t)t15) + (t16*sizeof(uint8_t)));
 t6 = t15 >= t20;
 t22 = t19 >= t21;
 t22 = t6 | t22;
 if (t22) {
  goto zig_block_9;
 }
 debug_no_panic_memcpyAlias__4116();
 zig_unreachable();

 zig_block_9:;
 if (t9.len != 0) memcpy(t9.ptr, t19, t9.len * sizeof(uint8_t));
 t14 = (*t1);
 t7 = (uintptr_t *)&t14->pos;
 t16 = (*t7);
 t4 = t11;
 t12.f1 = zig_addo_u64(&t12.f0, t16, t4, UINT8_C(64));
 t13 = t12.f1;
 t22 = t13 == UINT8_C(0);
 if (t22) {
  goto zig_block_10;
 }
 debug_no_panic_integerOverflow__4105();
 zig_unreachable();

 zig_block_10:;
 t4 = t12.f0;
 (*t7) = t4;
 t22 = t11 == UINT64_C(0);
 if (t22) {
  return (nav__4184_38){(uintptr_t)0xaaaaaaaaaaaaaaaaul,zig_error_NoSpaceLeft};
 }
 goto zig_block_11;

 zig_block_11:;
 t4 = t11;
 t23.payload = t4;
 t23.error = UINT16_C(0);
 return t23;
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

static struct Target_Os__563 const builtin_os__250 = {{{ .linux = {{{6ul,14ul,5ul,{NULL,0xaaaaaaaaaaaaaaaaul},{NULL,0xaaaaaaaaaaaaaaaaul}},{6ul,14ul,5ul,{NULL,0xaaaaaaaaaaaaaaaaul},{NULL,0xaaaaaaaaaaaaaaaaul}}},{2ul,39ul,0ul,{NULL,0xaaaaaaaaaaaaaaaaul},{NULL,0xaaaaaaaaaaaaaaaaul}},UINT32_C(14)} },UINT8_C(3)},UINT8_C(9)};

static uint8_t const c_native_os__1638 = UINT8_C(9);

static struct Target_DynamicLinker__738 const Target_DynamicLinker_none__3360 = {"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252",UINT8_C(0)};

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
 memset(&t5, 0xaa, sizeof(void *));
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

static struct Target_Cpu_Feature_Set__755 const Target_Cpu_Feature_Set_empty__3405 = {{0ul,0ul,0ul,0ul,0ul}};

static struct Target_Cpu__723 const builtin_cpu__249 = {((struct Target_Cpu_Model__750 const *)&Target_x86_cpu_alderlake__3509),{{9528139926881771760ul,4854352097251152009ul,15835263048482096792ul,3ul,0ul}},UINT8_C(42)};

static uint8_t const builtin_abi__248 = UINT8_C(1);

static uint8_t const builtin_object_format__252 = UINT8_C(0);

static struct Target__561 const builtin_target__251 = {{((struct Target_Cpu_Model__750 const *)&Target_x86_cpu_alderlake__3509),{{9528139926881771760ul,4854352097251152009ul,15835263048482096792ul,3ul,0ul}},UINT8_C(42)},{{{ .linux = {{{6ul,14ul,5ul,{NULL,0xaaaaaaaaaaaaaaaaul},{NULL,0xaaaaaaaaaaaaaaaaul}},{6ul,14ul,5ul,{NULL,0xaaaaaaaaaaaaaaaaul},{NULL,0xaaaaaaaaaaaaaaaaul}}},{2ul,39ul,0ul,{NULL,0xaaaaaaaaaaaaaaaaul},{NULL,0xaaaaaaaaaaaaaaaaul}},UINT32_C(14)} },UINT8_C(3)},UINT8_C(9)},UINT8_C(1),UINT8_C(0),{"/nix/store/vbrdc5wgzn0w1zdp10xd2favkjn5fk7y-glibc-2.40-66/lib/ld-linux-x86-64.so.2\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252",UINT8_C(82)}};

static struct builtin_CallingConvention__261 const builtin_CallingConvention_c__830 = {{ .x86_64_sysv = {{UINT64_C(0xaaaaaaaaaaaaaaaa),true}} },UINT8_C(4)};

static uint8_t const (*const shared_RUNNER_CTL_FIFO__3613)[21] = &__anon_1813;

static uint8_t const (*const shared_RUNNER_ACK_FIFO__3614)[21] = &__anon_1873;

static uint8_t const mem_native_endian__353 = UINT8_C(1);

static uint8_t const fs_path_native_os__3849 = UINT8_C(9);

static uint8_t const fs_native_os__1008 = UINT8_C(9);

static uint8_t const fs_Dir_native_os__3736 = UINT8_C(9);

static uint8_t const os_linux_native_arch__2544 = UINT8_C(42);

static uint8_t const Thread_native_os__4282 = UINT8_C(9);

static bool const Thread_use_pthreads__4293 = true;

static bool const Progress_is_windows__4337 = false;

static bool const builtin_single_threaded__247 = false;

static uint8_t const builtin_mode__253 = UINT8_C(0);

static uint32_t const Thread_Mutex_FutexImpl_unlocked__4769 = UINT32_C(0);

static uint32_t const Thread_Mutex_Recursive_invalid_thread_id__4765 = UINT32_MAX;

static struct Thread_Mutex_Recursive__3253 const Thread_Mutex_Recursive_init__4761 = {0ul,{{{UINT32_C(0)},{{UINT32_C(0)}}}},UINT32_MAX};

static struct Thread_Mutex_Recursive__3253 Progress_stderr_mutex__4392 = {0ul,{{{UINT32_C(0)},{{UINT32_C(0)}}}},UINT32_MAX};

static bool const io_is_windows__3743 = false;

static bool const fs_File_is_windows__1184 = false;

static uint16_t const fmt_max_format_args__4417 = UINT16_C(32);

static bool const debug_runtime_safety__159 = true;

static uint8_t const debug_native_os__145 = UINT8_C(9);

static bool const debug_have_segfault_handling_support__202 = true;

static bool const debug_default_enable_segfault_handler__204 = true;

static uint8_t const log_default_level__5076 = UINT8_C(3);

static struct std_Options__3770 const std_options__97 = {{0xaaaaaaaaaaaaaaaaul,true},{0xaaaaaaaaaaaaaaaaul,true},3ul,true,UINT8_C(3),false,true,false,false,true,UINT8_C(2)};

static bool const fs_Dir_have_flock__3737 = true;

static uint8_t const posix_native_os__1194 = UINT8_C(9);

static struct Progress__2767 Progress_global_progress__4341 = {{{{((void *)(uintptr_t)0xaaaaaaaaaaaaaaaaul)}},true},UINT64_C(0xaaaaaaaaaaaaaaaa),UINT64_C(0xaaaaaaaaaaaaaaaa),{(uint8_t *)(uintptr_t)0xaaaaaaaaaaaaaaaaul, (uintptr_t)0xaaaaaaaaaaaaaaaaul},{(uint8_t *)&Progress_node_parents_buffer__4343,83ul},{(struct Progress_Node_Storage__3212 *)&Progress_node_storage_buffer__4344,83ul},{(uint8_t *)&Progress_node_freelist_buffer__4345,83ul},{-INT32_C(0x55555556)},{{{UINT32_C(0)}}},UINT32_C(0),UINT16_C(0),UINT16_C(0),{UINT8_C(0)},false,false,UINT8_MAX};

static uint8_t const (*const Progress_clear__4360)[4] = &__anon_4593;

static uint8_t const (*const fmt_ANY__4420)[4] = &__anon_4687;

static bool const posix_lfs64_abi__1624 = true;

static uint8_t const c_native_abi__1636 = UINT8_C(1);

static bool const posix_unexpected_error_tracing__1625 = false;

static uint8_t const unicode_native_endian__4784 = UINT8_C(1);

static uint32_t const unicode_replacement_character__4785 = UINT32_C(65533);

static bool const mem_backend_supports_vectors__381 = true;

static bool const builtin_valgrind_support__257 = false;

static uint32_t const Thread_Mutex_FutexImpl_contended__4771 = UINT32_C(3);

static nav__3465_38 const heap_page_size_min_default__3465 = {4096ul,false};

static uintptr_t const heap_page_size_min__3444 = 4096ul;

static zig_threadlocal nav__5268_38 Thread_LinuxThreadImpl_tls_thread_id__5268 = {UINT32_C(0xaaaaaaaa),true};

static uint32_t const Thread_Mutex_FutexImpl_locked__4770 = UINT32_C(1);

static bool const os_linux_extern_getauxval__2608 = false;

static struct mem_Allocator_VTable__209 const heap_CAllocator_vtable__3476 = {&heap_CAllocator_alloc__3484,&heap_CAllocator_resize__3485,&heap_CAllocator_remap__3486,&heap_CAllocator_free__3487};

static bool const heap_CAllocator_supports_malloc_size__3477 = true;

static bool const heap_CAllocator_supports_posix_memalign__3479 = true;

static struct Target_Cpu_Model__750 const Target_x86_cpu_alderlake__3509 = {{(uint8_t const *)&__anon_6259,9ul},{(uint8_t const *)&__anon_6259,9ul},{{9516916112185360560ul,4872366487170699401ul,11223533324467504792ul,3ul,0ul}}};

static uint8_t Progress_node_parents_buffer__4343[83] = {UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa)};

static struct Progress_Node_Storage__3212 Progress_node_storage_buffer__4344[83] = {{UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}, {UINT32_C(0xaaaaaaaa),UINT32_C(0xaaaaaaaa),"\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252\252"}};

static uint8_t Progress_node_freelist_buffer__4345[83] = {UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa), UINT8_C(0xaa)};
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
