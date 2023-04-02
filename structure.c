#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "structure.h"

void create_array(Array *arr, int size) {
    arr->size = size;
    arr->array = malloc(size * sizeof(double));
}

void free_array(Array *arr) {
    free(arr->array);
    arr->size = 0;
}

void fill_array_random(Array *arr, double min, double max) {
    srand(time(NULL));
    for (int i = 0; i < arr->size; i++) {
        arr->array[i] = (double)rand() / RAND_MAX * (max - min) + min;
    }
}

void sort_array(Array *arr) {
    for (int i = 0; i < arr->size - 1; i++) {
        for (int j = i + 1; j < arr->size; j++) {
            if (arr->array[i] > arr->array[j]) {
                double tmp = arr->array[i];
                arr->array[i] = arr->array[j];
                arr->array[j] = tmp;
            }
        }
    }
}

double sum_array(Array *arr) {
    double sum = 0.0;
    for (int i = 0; i < arr->size; i++) {
        sum += arr->array[i];
    }
    return sum;
}

double min_array(Array *arr) {
    double min = arr->array[0];
    for (int i = 1; i < arr->size; i++) {
        if (arr->array[i] < min) {
            min = arr->array[i];
        }
    }
    return min;
}

double max_array(Array *arr) {
    double max = arr->array[0];
    for (int i = 1; i < arr->size; i++) {
        if (arr->array[i] > max) {
            max = arr->array[i];
        }
    }
    return max;
}
