#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

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
    int array_quantity;
    printf("Введите количество элементов массива: ");
    scanf("%d", &array_quantity);

    //создание и наполнение массива числами
    int i, numbers[array_quantity];
    srand(time(0)); //сидируем генератор текущим временем
    for (i = 0; i < array_quantity; i++) {
        numbers[i] = rand() % (99 + 1 - 2) + 2;
    }

    //проверка каждого элемента массива на простоту + счётчик
    int elem, counter;
    for (elem = 0; elem < array_quantity; elem++) {
        if (isPrime(numbers[elem])){
            counter++;
        }
    }

    printf("Всего в массиве %d простых чисел.", counter);

    return 0;
}