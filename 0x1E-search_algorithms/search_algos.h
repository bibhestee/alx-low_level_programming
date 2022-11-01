#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary(int *array, size_t lo, size_t hi,  int value);
void print_array(int *array, size_t lo, size_t hi);
int jump_search(int *array, size_t size, int value);

#endif /*----SEARCH ALGOS-----*/
