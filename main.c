#include <stdio.h>
#include "structure.h"

int main() {
    Array arr;
    create_array(&arr, 10);
    fill_array_random(&arr, 0.0, 1.0); //OKREŒLANIE PRZEDZIA£ÓW LOSOWANIA

    printf("Nieposortowana tablica:\n");
    for (int i = 0; i < arr.size; i++) {
        printf("%f\n", arr.array[i]);
    }
    printf("\n");

    sort_array(&arr);

    printf("Posortowana tablica:\n");
    for (int i = 0; i < arr.size; i++) {
        printf("%f\n", arr.array[i]);
    }
    printf("\n");

    double sum = sum_array(&arr);
    printf("Suma elementow tablicy: %f\n", sum);

    double min = min_array(&arr);
    printf("Najmniejszy element: %f\n", min);

    double max = max_array(&arr);
    printf("Najwiekszy element: %f\n", max);

    free_array(&arr);
}
