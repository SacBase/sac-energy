#include <stdio.h>
#include <stdlib.h>

void *SAC_temp_create(void)
{
    return (void*)0;
}

void SAC_temp_touch(void *obj)
{
    /* noop */
}

int SAC_temp_get(int zone)
{
    char path[128];
    snprintf(path, sizeof(path), "/sys/class/thermal/thermal_zone%d/temp", zone);

    FILE *fp = fopen(path, "r");
    if (!fp) {
        return 0;
    }

    int temp;
    if (fscanf(fp, "%d", &temp) <= 0) {
        perror("fscanf");
        return 0;
    }

    if (fclose(fp) < 0) {
        perror("fclose");
    }

    return temp;
}
