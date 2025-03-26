#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "rapl.h"

static long long rapl_read(int package_id)
{
    char path[64];
    snprintf(path, sizeof(path), "/sys/class/powercap/intel-rapl:%d/energy_uj", package_id);

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

void rapl_init(struct rapl **rapl_out)
{
    *rapl_out = (struct rapl *)malloc(sizeof(struct rapl));

    long long energy;
    int package_id = 0;
    while ((energy = rapl_read(package_id)) >= 0)
    {
        (*rapl_out)->package_nanojoules[package_id] = energy;
        package_id += 1;
    }

    (*rapl_out)->num_packages = package_id;
}

void rapl_start(struct rapl *rapl)
{
    long long energy;
    for (int package_id = 0; package_id < rapl->num_packages; package_id++)
    {
        energy = rapl_read(package_id);
        assert(energy >= 0);
        rapl->package_nanojoules[package_id] = energy;
    }
}

void rapl_end(struct rapl *rapl)
{
    struct rapl elapsed;
    elapsed.num_packages = rapl->num_packages;

    long long energy;
    for (int package_id = 0; package_id < rapl->num_packages; package_id++)
    {
        energy = rapl_read(package_id);
        assert(energy >= 0);
        elapsed.package_nanojoules[package_id] = energy - rapl->package_nanojoules[package_id];
    }

    rapl_print(&elapsed);
}

void rapl_print(struct rapl *rapl)
{
    assert(rapl->num_packages > 0);
    printf("%lld", rapl->package_nanojoules[0]);
    for (int package_id = 1; package_id < rapl->num_packages; package_id++)
    {
        printf(",%lld", rapl->package_nanojoules[package_id]);
    }
    printf("\n");
}
