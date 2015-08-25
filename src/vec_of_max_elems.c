#include <R.h>

void vec_of_max_values(int *inp_vec, int *n, int *out_vec) {
    int max_elem = inp_vec[0];
    
    for (int i=0; i < *n; ++i) {
        if (max_elem <= inp_vec[i])
                max_elem = inp_vec[i];
        out_vec[i] = max_elem;
    }
}
