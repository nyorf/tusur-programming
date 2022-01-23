#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Rus");

    int array_size;
    
    printf("Введите размер массива (значение N): ");
    scanf("%d", &array_size);

    srand(time(0));

    int i, array[array_size];
    printf("\nВывод элементов массива: ");
    for (i = 0; i < array_size; i++) {
        array[i] = rand() % (99 + 1 - 0) + 0;
        printf("\n%d", array[i]);
    }
    
    int array_max = INT_MIN, array_min = INT_MAX;
    for (i = 0; i < array_size; i++) {
        if (array[i] > array_max) {
            array_max = array[i];
        }
        if (array[i] < array_min) {
            array_min = array[i];
        }
    }

    int result = INT_MIN;
    bool resultFound = false;

    printf("\n\narray_min = %d", array_min);
    printf("\narray_max = %d", array_max);

    for (i = 0; i < array_size; i++) {
        if (array[i] > result && array[i] != array_max && array[i] != array_min) {
            result = array[i];
            resultFound = true;
        }
    }
    
    if (resultFound) {
        printf("\n\nМаксимальный из элементов массива, не являющихся ни локальным минимумом, ни локальным максимумом: %d", result);
    }
    else {
        printf("\n\n0");
    }

    return 0;
}