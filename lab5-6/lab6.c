#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <limits.h>

int randint(int maxnum) {
    //return rand() % maxnum - maxnum / 2;
    return rand() % (maxnum + 1 - 0) + 0;
}

int main() {
    setlocale(LC_ALL, "Rus");

    int n;
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
    printf("Введите размер квадратной матрицы (N x N): ");
    printf("\nN = ");
    scanf("%d", &n);
    }
    else if (check == 3) {
        n = 4;
        printf("\nРазмер матрицы: 4x4.");
    }

    int** matrix;

    matrix = (int**)malloc(n*sizeof(int*));

    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n*sizeof(int));
    }

    if (check == 1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("\tВведите элемент массива matrix[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
            }
            printf("\n");
        }
    }
    else if (check == 2) {
        srand(time(0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = randint(10);
            }
        }
    }
    else if (check == 3) {
        matrix[0][0] = 1; matrix[0][1] = 2; matrix[0][2] = 3; matrix[0][3] = 2;
        matrix[1][0] = 4; matrix[1][1] = 5; matrix[1][2] = 6; matrix[1][3] = 4;
        matrix[2][0] = 7; matrix[2][1] = 8; matrix[2][2] = 9; matrix[2][3] = 1;
        matrix[3][0] = 7; matrix[3][1] = 8; matrix[3][2] = 9; matrix[3][3] = 6;
    }

    printf("\nВывод матрицы:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    int column_summ;
    float* vector;
    vector=(float*)malloc(n*sizeof (float));
    float column_average;
    for (int j = 0; j < n; j++) {
        column_summ = 0;
        for (int i = 0; i < n; i++) {
            if (i == j) {
                continue;
            }
            else {
                column_summ += matrix[i][j];
            }
        }
        column_average = (float)column_summ / (float)(n - 1);
        vector[j] = column_average;
    }

    int k;
    float min_number = INT_MAX;
    for (k = 0; k < n; k++) {
        if (vector[k] < min_number) {
            min_number = vector[k];
        }
    }

    printf("\nМинимальный элемент вектора = %.2f", min_number);
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }

    free(matrix);
    free(vector);

    return 0;
}
