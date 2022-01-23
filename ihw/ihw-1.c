#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <locale.h>

bool isPrime(int n) {
    int i, flag = 0;
    bool nonprime = false; //по умолчанию число простое
    if (n > 1) {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                nonprime = true; //если число не простое, сменить на true
                break;
            }
        }
        if (nonprime) {
            return false;
        }
        else {
            return true;
        }
    } 
    else {
        return false;
    }
}

int main() {
    setlocale(LC_ALL, "Rus");

    int array_size;
    printf("Введите количество элементов массива: ");
    scanf("%d", &array_size);
    printf("\n");

    //создание и наполнение массива числами
    int i, numbers[array_size];
    srand(time(0)); //сидируем генератор текущим временем
    for (i = 0; i < array_size; i++) {
        numbers[i] = rand() % (99 + 1 - 2) + 2;
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    //проверка каждого элемента массива на простоту + счётчик
    int elem, counter;
    for (elem = 0; elem < array_size; elem++) {
        if (isPrime(numbers[elem])){
            counter++;
        }
    }

    printf("\nВсего в массиве %d простых чисел.", counter);

    return 0;
}