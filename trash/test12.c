#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main() {
    int m, n;
    int check;
    //printf("Выберите способ заполнения матрицы:\n[1] - вручную\n[2] - рандомными числами\n");
    printf("Ваш выбор: ");
    scanf("%d", &check);
    switch (check) {
        case 1:
            printf("\n1");
        case 2:
            printf("\n2");
        case 3:
            printf("\n3");
    }

    return 0;
}