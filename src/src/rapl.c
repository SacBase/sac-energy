#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_PACKAGES 64
#define RAPL_PATH "/sys/class/powercap/intel-rapl:%d/energy_uj"

struct rapl
{
    long long package_nanojoules[MAX_PACKAGES];
    int num_packages;
};

static long long read_energy(int package_id)
{
    char path[64];
    snprintf(path, sizeof(path), RAPL_PATH, package_id);

    FILE *fp = fopen(path, "r");
    if (!fp) {
        return -1;
    }

    long long energy;
    int res = fscanf(fp, "%lld", &energy);
    assert(res > 0);
    fclose(fp);

    return energy;
}

void rapl_init(struct rapl **rapl)
{
    *rapl = (struct rapl *)malloc(sizeof(struct rapl));

    long long energy;
    int package_id = 0;
    while ((energy = read_energy(package_id)) >= 0)
    {
        (*rapl)->package_nanojoules[package_id] = energy;
        package_id += 1;
    }

    (*rapl)->num_packages = package_id;
}

void rapl_reset(struct rapl *rapl)
{
    long long energy;
    for (int package_id = 0; package_id < rapl->num_packages; package_id++)
    {
        energy = read_energy(package_id);
        assert(energy >= 0);
        rapl->package_nanojoules[package_id] = energy;
    }
}

void rapl_elapsed(long long **elapsed, struct rapl *rapl)
{
    *elapsed = (long long *)malloc(sizeof(long long) * MAX_PACKAGES);

    long long energy, diff;
    for (int package_id = 0; package_id < rapl->num_packages; package_id++)
    {
        energy = read_energy(package_id);
        assert(energy >= 0);
        (*elapsed)[package_id] = energy - rapl->package_nanojoules[package_id];
    }
}

void rapl_print(struct rapl *rapl)
{
    for (int package_id = 0; package_id < rapl->num_packages; package_id++)
    {
        printf("%lld,", rapl->package_nanojoules[package_id]);
    }
    printf("\n");
}
