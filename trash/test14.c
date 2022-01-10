#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    int check;

    scanf("%d", &check);

    while (check != 1 && check != 2 && check != 3) {
        printf("Введите значение от 1 до 3!");
        printf("\nВаш выбор: ");
        scanf("%d", &check);
    }
    return 0;
}