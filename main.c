#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define EPSILON 0.001

void newOptimizeVec(int *inp_vec, size_t n) {
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
        /*scanf("%i", vec + i);*/

    newOptimizeVec(vec, n); 

    free(vec);
}
