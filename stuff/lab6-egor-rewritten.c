#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <limits.h>

int main() {
    setlocale(LC_ALL, "Rus"); //ставим русский язык

    int lines, columns; //инициализация переменных
    int check;

    printf("Выберите способ заполнения матрицы:\n[1] - вручную\n[2] - рандомными числами\n[3] - определённая заранее матрица\n");
    printf("Ваш выбор: ");
    scanf("%d", &check);

    while (check != 1 && check != 2 && check != 3) {
        printf("Введите значение от 1 до 3!");
        printf("\nВаш выбор: ");
        scanf("%d", &check);
    }

    if (check == 1 || check == 2) {
        printf("\nВведите размер матрицы (M x N): ");
        printf("\nM = ");
        scanf("%d", &lines);
        printf("N = ");
        scanf("%d", &columns);
        printf("\n");
        while (lines == columns) {
            printf("M не должно быть равно N! Попробуйте снова:");
            printf("\nM = ");
            scanf("%d", &lines);
            printf("N = ");
            scanf("%d", &columns);
            printf("\n");
        }
    }
    else if (check == 3) {
        lines = 4;
        columns = 5;
        printf("\nРазмер матрицы: 4 на 5.");
    }

    int** array;

    array = (int**)malloc(lines*sizeof(int*));

    for (int i = 0; i < lines; i++) {
        array[i] = (int*)malloc(columns*sizeof(int));
    }

    if (check == 1) {
        for (int i = 0; i < lines; i++) {
            for (int j = 0; j < columns; j++) {
                printf("\tВведите элемент массива [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &array[i][j]);
            }
            printf("\n");
        }
    }
    else if (check == 2) {
        srand(time(0)); //настройка генератора чисел

        for (int i = 0; i < lines; i++) {
            for (int j = 0; j < columns; j++) {
                array[i][j] = rand()%20;
            }
        }
    }
    else if (check == 3) {
        array[0][0] = 1; array[0][1] = 2; array[0][2] = 3; array[0][3] = 7; array[0][4] = 2;
        array[1][0] = 4; array[1][1] = 5; array[1][2] = 6; array[1][3] = 0; array[1][4] = 0;
        array[2][0] = 7; array[2][1] = 8; array[2][2] = 9; array[2][3] = 3; array[2][4] = 7;
        array[3][0] = 7; array[3][1] = 8; array[3][2] = 9; array[3][3] = 2; array[3][4] = 7;
    }

    printf("\nВывод матрицы:\n");
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    int m;
    printf("\nВведите значение m: ");
    scanf("%d", &m);

    int counter = 0;
    int min_count = 0;
    int req_column_number = 0;
    int max_number = INT_MIN;

    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < lines; i++) {
            if (array[i][j] > m) {
                counter += 1;
            }
            if (array[i][j] > max_number) {
                max_number = array[i][j];
            }
        }
        if (j == 0) {
            min_count = counter;
            req_column_number = j + 1;
        }
        if (counter < min_count) {
            min_count = counter;
            req_column_number = j + 1;
        }
        counter = 0;
    }

    if (m > max_number) {
        printf("\nСтолбца, который удовлетворяет условиям задачи -- нет.");
    }
    else {
        printf("\nНомер столбца, где количество значений > m минимально -- %d", req_column_number);
    }

    for (int i = 0; i < lines; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}
