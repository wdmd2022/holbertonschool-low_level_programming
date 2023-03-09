#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int ll_cool_binary(int *array, int target, size_t lefty, size_t righty);
int advanced_binary(int *array, size_t size, int value);


#endif /* SEARCH_ALGOS_H */
