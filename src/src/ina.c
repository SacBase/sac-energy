#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "sac.h"
#include "sacinterface.h"

/**
 * The received json looks as follows:
 *
 * {"electricity_consumed_current":%f,"measurements":%d,"steady_time":%d,"electricity_consumed_total":%f,"power_draw":%f}
 */
static double read_energy_stats(void)
{
    const char *url = getenv("ENERGY_STATS");
    if (!url) {
        fprintf(stderr, "ENERGY_STATS not set\n");
        return -1.0f;
    }

    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "curl -s \"%s\"", url);

    FILE *fp = popen(cmd, "r");
    if (!fp) {
        perror("popen");
        return -1.0f;
    }

    char buf[2048];
    double current, total, power;
    int measurements, steady_time;
    double res = -1.0f;

    if (fgets(buf, sizeof(buf), fp)) {
        int n = sscanf(buf,
            " { \"electricity_consumed_current\" : %f ,"
            " \"measurements\" : %d ,"
            " \"steady_time\" : %d ,"
            " \"electricity_consumed_total\" : %f ,"
            " \"power_draw\" : %f } %*[^}]",
            &current, &measurements, &steady_time, &total, &power
        );

        if (n == 5) {
            res = total;
        } else {
            fprintf(stderr, "Failed to parse ENERGY_STATS response\n");
        }
    }

    if (pclose(fp) < 0) {
        perror("pclose");
        return -1.0f;
    }

    return res;
}

double inaStart(void)
{
    return read_energy_stats();
}

double inaStop(double start)
{
    double end = read_energy_stats();
    return end - start;
}

void *SAC_ina_create(void)
{
    return (void*)0;
}

void SAC_ina_touch(void *obj)
{
    /* noop */
}
