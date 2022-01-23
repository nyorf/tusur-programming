#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define MAX_SIZE 34

int main() {
    setlocale(LC_ALL, "Rus");

    int array_size, negatives_counter = 0;
    
    printf("Введите размер массива (значение N): ");
    scanf("%d", &array_size);
    
    if (array_size > MAX_SIZE) {
        while (array_size > MAX_SIZE) {
            printf("\nЗначение не может быть больше %d или меньше 0. Введите значение [0 < N <= 50]:", MAX_SIZE);
            scanf("%d", &array_size);
        }
    }

    srand(time(0));

    int array[MAX_SIZE], negative_ints_positions[MAX_SIZE];
    int i, position, x = 0, number, i_sec;

    for (i = 0; i < array_size; i++) {
        number = rand() % 100 - 100 / 2;
        array[i] = number;
        if (number < 0) {
            negative_ints_positions[negatives_counter] = i;
            negatives_counter++;
        }
    }

    printf("\n\nold array");
    for (i = 0; i < array_size; i++) {
        printf("\n%d", array[i]);
    }

    for (i = 0; i < negatives_counter; i++) {
        array_size++;
        position = negative_ints_positions[i] + i;
        for (i_sec = array_size - 1; i_sec > position; i_sec--) {
            array[i_sec] = array[i_sec - 1];
        }
        array[position + 1] = x;
    }

    printf("\n\nnew array");
    for (i = 0; i < array_size; i++) {
        printf("\n%d", array[i]);
    }

    return 0;
}