#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <locale.h>


int previousElementsRelation(int previous, int current) {
    if (previous < current) {
        return 0; //increasing
    }
    else if (previous > current) {
        return 1; //decreasing
    }
    else {
        return -1; //constant - not used
    }
}

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

    bool isMonotonic = false;
    int previous_element, streaks_count = 0;

    for (i = 1; i < array_size; i++) {
        int prev = array[i - 1];
        int curr = array[i];
        if (previousElementsRelation(prev, curr) == 0) {
            isMonotonic = true;
        }
        else if (previousElementsRelation(prev, curr) == 1) {
            streaks_count += 1;
            isMonotonic = false;
        }
    }

    printf("\n\nКоличество промежутков монотонности у массива: %d", streaks_count);
    return 0;
}