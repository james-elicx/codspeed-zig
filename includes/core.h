// This file was manually created and exposes the functions of this library.
// TODO: Can we automatically generate this file?

#ifndef CORE_H
#define CORE_H

#include <stdbool.h>
#include <stdint.h>

typedef uint64_t *InstrumentHooks;

InstrumentHooks *instrument_hooks_init(void);
void instrument_hooks_deinit(InstrumentHooks *);

bool instrument_hooks_is_instrumented(InstrumentHooks *);
int8_t instrument_hooks_start_benchmark(InstrumentHooks *);
int8_t instrument_hooks_stop_benchmark(InstrumentHooks *);
int8_t instrument_hooks_executed_benchmark(InstrumentHooks *, int32_t pid,
                                           const char *uri);
int8_t instrument_hooks_set_integration(InstrumentHooks *, const char *name,
                                        const char *version);

int8_t callgrind_start_instrumentation();
int8_t callgrind_stop_instrumentation();

// Feature flags for instrument hooks

typedef enum {
  FEATURE_DISABLE_CALLGRIND_MARKERS = 0,
} instrument_hooks_feature_t;

void instrument_hooks_set_feature(instrument_hooks_feature_t feature,
                                  bool enabled);

#endif
