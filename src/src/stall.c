#define _GNU_SOURCE
#include <linux/perf_event.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <stdint.h>

#include "sac.h"
#include "sacinterface.h"

static long perf_event_open(struct perf_event_attr *hw_event, pid_t pid,
                            int cpu, int group_fd, unsigned long flags)
{
    return syscall(__NR_perf_event_open, hw_event, pid, cpu, group_fd, flags);
}

static unsigned long read_counter(int fd)
{
    unsigned long value = 0;
    if (read(fd, &value, sizeof(value)) != sizeof(value)) {
        perror("read counter");
        return 0;
    }
    return value;
}

int stallStart(void)
{
    struct perf_event_attr pe;
    memset(&pe, 0, sizeof(struct perf_event_attr));

    pe.type = PERF_TYPE_HARDWARE;
    pe.size = sizeof(struct perf_event_attr);
    pe.config = PERF_COUNT_HW_BUS_CYCLES;
    pe.disabled = 1;
    pe.exclude_kernel = 0;
    pe.exclude_hv = 0;

    int fd = perf_event_open(&pe, 0, -1, -1, 0);
    if (fd == -1) {
        perror("perf_event_open PERF_COUNT_HW_BUS_CYCLES");
        exit(1);
    }

    if (ioctl(fd, PERF_EVENT_IOC_RESET, 0) < 0) {
        perror("ioctl PERF_EVENT_IOC_RESET");
        exit(1);
    }

    if (ioctl(fd, PERF_EVENT_IOC_ENABLE, 0) < 0) {
        perror("ioctl PERF_EVENT_IOC_ENABLE");
        exit(1);
    }

    return fd;
}

unsigned long stallStop(int fd)
{
    if (ioctl(fd, PERF_EVENT_IOC_DISABLE, 0) < 0) {
        perror("ioctl PERF_EVENT_IOC_DISABLE");
        exit(1);
    }

    unsigned long stalls = read_counter(fd);

    if (close(fd) < 0) {
        perror("close");
        exit(1);
    }

    return stalls;
}

void *SAC_stall_create(void)
{
    return (void*)0;
}

void SAC_stall_touch(void *obj)
{
    /* noop */
}
