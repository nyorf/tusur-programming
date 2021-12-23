#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
    int array_size;
    printf("Введите количество элементов массива: ");
    scanf("%d", &array_size);

    int i, array[array_size];
    srand(time(0)); //сидируем генератор текущим временем
    for (i = 0; i < array_size; i++) {
        array[i] = rand() % (99 + 1 - 2) + 2;
    }

    int size = sizeof(array) / sizeof(int);
    printf("размер массива = %d", size);
    return 0;
}