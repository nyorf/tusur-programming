#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include <locale.h>


int randint(int maxnum) {
    return rand() % (maxnum + 1 - 0) + 0;
}

int setofnumbers(int row_length) {
    int number, current_summ = 0, saved_summ = 0, zeros_counter = 0;
    bool zeroFound;
    for (int i = 1; i <= row_length; i++) {
        number = randint(5);
        printf("\n%d", number);
        if (number == 0 && zeroFound) {
            zeros_counter++;
            saved_summ = current_summ;
            current_summ = 0;
            continue;
        }
        else if (number == 0 && !zeroFound) {
            zeroFound = true;
            zeros_counter++;
            continue;
        }
        if (zeroFound) {
            current_summ += number;
        }
    }
    if (zeros_counter < 2) {
        return -1;
    }
    else {
        return saved_summ;
    }
}


int main() {
    setlocale(LC_ALL, "Rus");

    int row_length;
    int number;
    int current_summ;
    int saved_summ = 0;
    int zeros_counter;
    bool zeroFound = false;

    printf("Введите (минимальную) длину ряда: ");
    scanf("%d", &row_length);

    while (row_length<=0) {
        printf("Число должно быть больше нуля. Введите число снова: ");
        scanf("%d", &row_length);
    }

    srand(time(0));

    printf("Вывод сгенерированных чисел:\n");
    int result = setofnumbers(row_length);
    if (result == -1) {
        while (result == -1) {
            printf("\n\nВ наборе чисел не сгенерировалось хотя бы два нуля.");
            printf("\nИдёт повторная генерация набора...");
            sleep(1);
            result = setofnumbers(row_length);
        }
    }
    printf("\n\n========================================================\n");
    printf("Сумма чисел, расположенная между двумя последними нулями = %d", result);
    return 0;
}