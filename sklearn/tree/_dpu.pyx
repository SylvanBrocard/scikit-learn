cimport numpy as np

ctypedef np.npy_uint32 UINT32_t

cdef extern from "src/_dpu_c.c":
   void print_n_clusters_c()
   void allocate(UINT32_t *ndpu)

def print_n_clusters():
    print_n_clusters_c()

def test_allocate():
    cdef UINT32_t ndpu
    cdef UINT32_t *ndpu_pointer = &ndpu
    allocate(ndpu_pointer)
    print(f"here too NDPU = {ndpu}")