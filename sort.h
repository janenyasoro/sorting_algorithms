#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Printing helper functions */
void print_array(const int *array, size_t size);

/* Sorting algoritms */
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);

#endif /* SORT_H */
