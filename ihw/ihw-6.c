#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100

int main() {
    int array_size, negatives_counter = 0;
    
    printf("Введите размер массива (значение N): ");
    scanf("%d", &array_size);

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