#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
#include <unistd.h>
#include <time.h>


int randint(int maxnum) {
    return rand() % (maxnum + 1 - 0) + 0;
}

int rowOperations(int row_count, int row_length) {
    int number, saved_count = 0;
    //printf("\n\nВывод сгенерированных чисел для %d набора:\n\n", row_count);
    for (int i = 1; i <= row_length; i++) {
        number = randint(15);
        //printf("%d", number);
        if (number == 2) {
            saved_count = i;
        }
    }
    return saved_count;
}

int main() {
    int total_rows, row_length;

    printf("Введите количество наборов (число K): ");
    scanf("%d", &total_rows);
    printf("Введите количество элементов в каждом наборе (число N): ");
    scanf("%d", &row_length);

    srand(time(0));

    for (int i = 1; i <= total_rows; i++) {
        printf("\nПоследний № элемента со значением 2 в %d наборе: ", i);
        printf("%d", rowOperations(i, row_length));
        sleep(1);
    }
    
    return 0;
}