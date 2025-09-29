#define _GNU_SOURCE
#include <linux/perf_event.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <time.h>
#include <stdint.h>
#include <errno.h>

#include "sac.h"
#include "sacinterface.h"

static long perf_event_open(struct perf_event_attr *hw_event, pid_t pid,
                            int cpu, int group_fd, unsigned long flags)
{
    return syscall(__NR_perf_event_open, hw_event, pid,
                   cpu, group_fd, flags);
}

static uint64_t read_counter(int fd)
{
    uint64_t value = 0;
    if (read(fd, &value, sizeof(value)) != sizeof(value)) {
        perror("read counter");
        return 0;
    }
    return value;
}

void freqStart(int *fd_cycles_out, int *fd_ref_out)
{
    struct perf_event_attr pe_cycles, pe_ref;
    memset(&pe_cycles, 0, sizeof(struct perf_event_attr));
    memset(&pe_ref, 0, sizeof(struct perf_event_attr));

    // Count actual CPU cycles
    pe_cycles.type = PERF_TYPE_HARDWARE;
    pe_cycles.size = sizeof(struct perf_event_attr);
    pe_cycles.config = PERF_COUNT_HW_CPU_CYCLES;
    pe_cycles.disabled = 1;
    pe_cycles.exclude_kernel = 0;
    pe_cycles.exclude_hv = 0;

    // Count reference (constant) cycles
    pe_ref.type = PERF_TYPE_HARDWARE;
    pe_ref.size = sizeof(struct perf_event_attr);
    pe_ref.config = PERF_COUNT_HW_REF_CPU_CYCLES;
    pe_ref.disabled = 1;
    pe_ref.exclude_kernel = 0;
    pe_ref.exclude_hv = 0;

    int fd_cycles = perf_event_open(&pe_cycles, -1, 0, -1, 0);
    if (fd_cycles == -1) {
        perror("perf_event_open cycles");
        exit(1);
    }

    int fd_ref = perf_event_open(&pe_ref, -1, 0, -1, 0);
    if (fd_ref == -1) {
        perror("perf_event_open ref");
        exit(1);
    }

    // Enable counters
    ioctl(fd_cycles, PERF_EVENT_IOC_RESET, 0);
    ioctl(fd_ref, PERF_EVENT_IOC_RESET, 0);
    ioctl(fd_cycles, PERF_EVENT_IOC_ENABLE, 0);
    ioctl(fd_ref, PERF_EVENT_IOC_ENABLE, 0);

    *fd_cycles_out = fd_cycles;
    *fd_ref_out = fd_ref;
}

double freqStop(int fd_cycles, int fd_ref)
{
    // Disable counters
    ioctl(fd_cycles, PERF_EVENT_IOC_DISABLE, 0);
    ioctl(fd_ref, PERF_EVENT_IOC_DISABLE, 0);

    uint64_t cycles = read_counter(fd_cycles);
    uint64_t ref = read_counter(fd_ref);

    close(fd_cycles);
    close(fd_ref);

    if (ref > 0) {
        double avg_freq = (double)cycles / (double)ref;
        // Multiply by reference frequency (MHz)
        avg_freq *= 100.0;
        return avg_freq;
    } else {
        printf("Reference counter is zero!\n");
        return 0.0;
    }
}

void *SAC_freq_create(void)
{
    return (void*)0;
}

void SAC_freq_touch(void *obj)
{
    /* noop */
}
