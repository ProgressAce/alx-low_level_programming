#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>

/* search algorithm prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_search(int *array, size_t left_i, size_t right_i);

#endif /* SEARCH_ALGOS */
