#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    int input, mas_size, mas[mas_size], i;
    srand(time(0));
    scanf("%d", input);
    mas_size = rand() % (99 + 1 - 2) + 2;
    int x, xmin = (mas_size++), num;
    for (i = 0; i < mas_size; i++) {
        x = abs(input - mas[i]);
        printf("122223");
        if (x < xmin) {
            xmin = x;
            num = mas[i];
            printf("123");
        }
    }
    printf("%d", num);
    return 0;
}
*/


int main()
{
    int array_quantity = 10;
    int i, numbers[array_quantity];
    srand(time(0));
    for (i = 0; i < array_quantity; i++) {
        numbers[i] = rand()%20;
    }

    for (int i = 0; i < array_quantity; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}