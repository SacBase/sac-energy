#define _GNU_SOURCE
#include <linux/perf_event.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <stdint.h>

static long perf_event_open(struct perf_event_attr *hw_event, pid_t pid,
                            int cpu, int group_fd, unsigned long flags)
{
    return syscall(__NR_perf_event_open, hw_event, pid, cpu, group_fd, flags);
}

static int perf_event_create(unsigned int type, unsigned long long config)
{
    struct perf_event_attr pe;
    memset(&pe, 0, sizeof(struct perf_event_attr));

    pe.type = type;
    pe.size = sizeof(struct perf_event_attr);
    pe.config = config;
    pe.disabled = 1;
    pe.exclude_kernel = 0;
    pe.exclude_hv = 0;

    int fd = perf_event_open(&pe, 0, -1, -1, 0);
    if (fd == -1) {
        //perror("perf_event_open");
        return -1;
    }

    if (ioctl(fd, PERF_EVENT_IOC_RESET, 0) < 0) {
        perror("perf_event_reset");
        return -1;
    }

    if (ioctl(fd, PERF_EVENT_IOC_ENABLE, 0) < 0) {
        perror("perf_event_enable");
        return -1;
    }

    return fd;
}

static unsigned long read_counter(int fd)
{
    unsigned long value = 0;
    if (read(fd, &value, sizeof(value)) != sizeof(value)) {
        perror("perf_event_read");
        return 0;
    }
    return value;
}

static unsigned long perf_event_stop(int fd)
{
    if (fd == -1) {
        return 0;
    }

    if (ioctl(fd, PERF_EVENT_IOC_DISABLE, 0) < 0) {
        perror("perf_event_disable");
        return 0;
    }

    unsigned long counter = read_counter(fd);

    if (close(fd) < 0) {
        perror("perf_event_close");
    }

    return counter;
}

void perfStart(int *out_instructions_fd, int *out_cycles_fd, int *out_ref_cycles_fd, int *out_bus_cycles_fd, int *out_stalled_cycles_fd, int *out_cache_misses_fd, int *out_cache_ref_fd)
{
    *out_instructions_fd   = perf_event_create(PERF_TYPE_HARDWARE, PERF_COUNT_HW_INSTRUCTIONS);
    *out_cycles_fd         = perf_event_create(PERF_TYPE_HARDWARE, PERF_COUNT_HW_CPU_CYCLES);
    *out_ref_cycles_fd     = perf_event_create(PERF_TYPE_HARDWARE, PERF_COUNT_HW_REF_CPU_CYCLES);
    *out_bus_cycles_fd     = perf_event_create(PERF_TYPE_HARDWARE, PERF_COUNT_HW_BUS_CYCLES);
    *out_stalled_cycles_fd = perf_event_create(PERF_TYPE_SOFTWARE, PERF_COUNT_SW_TASK_CLOCK);
    *out_cache_misses_fd   = perf_event_create(PERF_TYPE_HW_CACHE, PERF_COUNT_HW_CACHE_L1D);
    *out_cache_ref_fd      = perf_event_create(PERF_TYPE_HW_CACHE, PERF_COUNT_HW_CACHE_LL);
}

void perfStop(unsigned long *out_instructions, unsigned long *out_cycles, unsigned long *out_ref_cycles, unsigned long *out_bus_cycles, unsigned long *out_stalled_cycles, unsigned long *out_cache_misses, unsigned long *out_cache_ref,
              int instructions_fd, int cycles_fd, int ref_cycles_fd, int bus_cycles_fd, int stalled_cycles_fd, int cache_misses_fd, int cache_ref_fd)
{
    *out_instructions   = perf_event_stop(instructions_fd);
    *out_cycles         = perf_event_stop(cycles_fd);
    *out_ref_cycles     = perf_event_stop(ref_cycles_fd);
    *out_bus_cycles     = perf_event_stop(bus_cycles_fd);
    *out_stalled_cycles = perf_event_stop(stalled_cycles_fd);
    *out_cache_misses   = perf_event_stop(cache_misses_fd);
    *out_cache_ref      = perf_event_stop(cache_ref_fd);
}
