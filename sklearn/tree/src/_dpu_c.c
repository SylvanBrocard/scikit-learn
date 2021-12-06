#include <stdio.h>
#include <dpu.h>

struct dpu_set_t allset;

static void print_n_clusters_c() {
    printf("%d\n",NB_CLUSTERS);
}

static void allocate(uint32_t *ndpu)
{
    DPU_ASSERT(dpu_alloc(DPU_ALLOCATE_ALL, NULL, &allset));
    DPU_ASSERT(dpu_get_nr_dpus(allset, ndpu));
    printf("ndpu = %d\n",*ndpu);
    DPU_ASSERT(dpu_free(allset));
}