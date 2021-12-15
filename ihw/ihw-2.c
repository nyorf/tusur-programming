#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(0)); //сразу сидируем генератор
    
    int n;
    printf("Введите число n: ");
    scanf("%d", &n);

    char numbers[] = "10,0,32,54,65,43,0,23,43"; //пока пусть будет заданный набор

    int num;
    for (int i = 0; i < n; i++) {
        num = rand() % (99 + 1 - 1) + 1;
        
    }

    return 0;
}