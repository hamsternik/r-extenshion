#include <R.h>
#include <stdlib.h>

void vec_of_max_values_int(int *inp_vec, size_t *n, int *out_vec) {
    int max_elem = inp_vec[0];
    
    for (size_t i=0; i < *n; ++i) {
        if (max_elem <= inp_vec[i])
                max_elem = inp_vec[i];
        out_vec[i] = max_elem;
    }
}
