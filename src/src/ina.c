#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "sac.h"
#include "sacinterface.h"

/**
 * The received json looks as follows:
 *
 * {"electricity_consumed_current":%f,"measurements":%d,"steady_time":%d,"electricity_consumed_total":%f,"power_draw":%f}
 *
 * We only care about electricity_consumed_total here, which is the fourth number.
 */
static int read(void)
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

    double val = -1.0f;
    int found = 0;

    char buf[1024];
    if (fgets(buf, sizeof(buf), fp)) {
        int found = 0;
        char *p = buf;

        while (*p && found < 4) {
            char *end;
            double tmp = strtof(p, &end);

            if (end != p) {
                // a number was found
                found++;
                if (found == 4) {
                    val = tmp;
                    break;
                }
                p = end;
            } else {
                // not a number
                p++;
            }
        }
    }

    pclose(fp);

    if (found < 4) {
        fprintf(stderr, "Invalid json\n");
        return -1.0f;
    }

    return val;
}

double inaStart(void)
{
    return read();
}

double inaStop(double start)
{
    double end = read();
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
