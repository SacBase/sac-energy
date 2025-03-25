#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_PACKAGES 64
#define RAPL_PATH "/sys/class/powercap/intel-rapl:%d/energy_uj"

static int total_packages = MAX_PACKAGES;

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
    fscanf(fp, "%lld", &energy);
    fclose(fp);

    return energy;
}

void read_energies(struct rapl **rapl)
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

void update_energies(struct rapl *rapl)
{
    long long energy;
    for (int package_id = 0; package_id < rapl->num_packages; package_id += 1)
    {
        energy = read_energy(package_id);
        assert(energy >= 0);
        rapl->package_nanojoules[package_id] = energy - rapl->package_nanojoules[package_id];
    }
}

void print_energies(struct rapl *rapl)
{
    for (int package_id = 0; package_id < rapl->num_packages; package_id += 1)
    {
        printf("%lld,", rapl->package_nanojoules[package_id]);
    }
    printf("\n");
}
