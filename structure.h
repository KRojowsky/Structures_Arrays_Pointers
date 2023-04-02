#ifndef STRUCTURE_H
#define STRUCTURE_H

typedef struct {
    int size;
    double *array;
} Array;

void create_array(Array *arr, int size);
void free_array(Array *arr);
void fill_array_random(Array *arr, double min, double max);
void sort_array(Array *arr);
double sum_array(Array *arr);
double min_array(Array *arr);
double max_array(Array *arr);

#endif
