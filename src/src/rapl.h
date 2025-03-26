#ifndef _SAC_RAPL_H_
#define _SAC_RAPL_H_

#define MAX_PACKAGES 64

struct rapl
{
    long long package_nanojoules[MAX_PACKAGES];
    int num_packages;
};

void rapl_init(struct rapl **rapl_out);
void rapl_start(struct rapl *rapl);
void rapl_end(struct rapl *rapl);
void rapl_print(struct rapl *rapl);

#endif /* _SAC_RAPL_H_ */
