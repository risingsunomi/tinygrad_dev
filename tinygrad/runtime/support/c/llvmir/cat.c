#include <stddef.h>
#include <omp.h>

void llvmir_cat(size_t len, float* out, float* a, float* b) {
    int i;
    #pragma omp parallel for
    for(i = 0; i < (int)len; i++){
        out[i] = a[i] + b[i];
    }
}
