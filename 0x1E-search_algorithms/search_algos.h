#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_aux(int *array, size_t inferior, size_t superior, int value);
int min(int a, int b);
int jump_search(int *array, size_t size, int value);
#endif
