#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "sac.h"
#include "sacinterface.h"

static int energy_uj(int package_id, long long *value)
{
    char path[64];
    snprintf(path, sizeof(path), "/sys/class/powercap/intel-rapl:%d/energy_uj", package_id);

    FILE *fp = fopen(path, "r");
    if (!fp) {
        return 0;
    }

    assert(fscanf(fp, "%lld", value) > 0);
    fclose(fp);

    return 1;
}

static void max_energy_range_uj(int package_id, long long *value)
{
    char path[64];
    snprintf(path, sizeof(path), "/sys/class/powercap/intel-rapl:%d/max_energy_range_uj", package_id);

    FILE *fp = fopen(path, "r");
    assert(fp);

    assert(fscanf(fp, "%lld", value) > 0);
    fclose(fp);
}

SACarg *raplStart(void)
{
    long long *packages = (long long *)malloc(sizeof(long long) * 64);

    int num_packages = 0;
    while (energy_uj(num_packages, &packages[num_packages]))
    {
        num_packages += 1;
    }

    //printf("Found %d RAPL packages\n", num_packages);
    packages = (long long *)realloc(packages, sizeof(long long) * num_packages);
    return SACARGcreateFromPointer (SACTYPE__MAIN__longlong, (void *)packages, 1, num_packages);
}

SACarg *raplStop(SACarg *start)
{
    int num_packages = SACARGgetShape (start, 0);
    const long long *start_data = (const long long *)SACARGgetSharedData (SACTYPE__MAIN__longlong, start);
    long long *elapsed_data = (long long *)malloc(sizeof(long long) * num_packages);

    long long prev, next, max;
    for (int i = 0; i < num_packages; i++)
    {
        prev = start_data[i];
        assert(energy_uj(i, &next));

        if (next >= prev) {
            elapsed_data[i] = next - prev;
        } else {
            //printf("The accumulator overflowed\n");
            max_energy_range_uj(i, &max);
            elapsed_data[i] = next + (max - prev);
        }
    }

    SACARGdeleteSacArray (&start);

    return SACARGcreateFromPointer (SACTYPE__MAIN__longlong, (void *)elapsed_data, 1, num_packages);
}

int numThreads(void)
{
    // Plus one for the queen
    return SAC_MT_cnt_worker_bees + 1;
}

long long constraint_0_power_limit_uw(void)
{
    char path[64] = "/sys/class/powercap/intel-rapl:0/constraint_0_power_limit_uw";

    FILE *fp = fopen(path, "r");
    assert(fp);

    long long value;
    assert(fscanf(fp, "%lld", &value) > 0);
    fclose(fp);

    return value;
}
