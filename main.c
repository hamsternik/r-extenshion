#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

#define EPSILON 0.001

void vec_of_max_values_int(int*, size_t);  
void vec_of_max_values_long(long *, size_t);  
void vec_of_max_values_float(float *, size_t);  
void vec_of_max_values_double(double *, size_t);  

int main() {
    time_t t;
    srand((unsigned) time(&t));

    size_t n;
    printf("Hello, pls, enter a vector of numbers: ");
    scanf("%d", &n);

    int *vec = (int *)calloc(n, sizeof(int));
    if (!vec) {
        printf("There is not any memory allocation!");
        exit(0);
    }

    for (size_t i=0; i < n; ++i) 
        vec[i] = rand() % 30 + 1;
        /* scanf("%i", vec + i); */

    vec_of_max_values_int(vec, n); 

    free(vec);
}

void vec_of_max_values_int(int *inp_vec, size_t n) {
    int *new_vec = (int *)calloc(n, sizeof(int));
    int max_elem = inp_vec[0];
    
    for (size_t i=0; i < n; ++i) {
        if (max_elem <= inp_vec[i])
                max_elem = inp_vec[i];
        new_vec[i] = max_elem;
    }

    for (size_t i=0; i < n; ++i)
        printf("%i, ", *(new_vec + i));
    printf("\n");

    free (new_vec);
}

void vec_of_max_values_long(long *inp_vec, size_t n) {
    long *new_vec = (long *)calloc(n, sizeof(long));
    long max_elem = inp_vec[0];
    
    for (size_t i=0; i < n; ++i) {
        if (max_elem <= inp_vec[i])
                max_elem = inp_vec[i];
        new_vec[i] = max_elem;
    }

    for (size_t i=0; i < n; ++i)
        printf("%i, ", *(new_vec + i));
    printf("\n");

    free (new_vec);
}

void vec_of_max_values_float(float *inp_vec, size_t n) {
    float *new_vec = (float *)calloc(n, sizeof(float));
    float max_elem = inp_vec[0];

    for (size_t i=0; i < n; ++i) {
        if ( (inp_vec[i] - max_elem) > EPSILON )
            max_elem = inp_vec[i];
        new_vec[i] = max_elem;
    }

    for (size_t i=0; i < n; ++i)
        printf("%.3lf, ", *(new_vec + i));
    printf("\n");

    free (new_vec);
}

void vec_of_max_values_double(double *inp_vec, size_t n) {
    double *new_vec = (double *)calloc(n, sizeof(double));
    double max_elem = inp_vec[0];

    for (size_t i=0; i < n; ++i) {
        if ( (inp_vec[i] - max_elem) > EPSILON )
            max_elem = inp_vec[i];
        new_vec[i] = max_elem;
    }

    for (size_t i=0; i < n; ++i)
        printf("%.3lf, ", *(new_vec + i));
    printf("\n");

    free (new_vec);
}
