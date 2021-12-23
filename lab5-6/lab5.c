#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <math.h>
#include <time.h>
#include <limits.h>

int randint(int maxnum) {
    //return rand() % maxnum - maxnum / 2;
    return rand() % (maxnum + 1 - 0) + 0;
}

int main() {
    srand(time(0));

    int n;
    printf("Введите размер квадратной матрицы (N x N): ");
    printf("\nN = ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("\nГенерация и вывод матрицы:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = randint(10);
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    int column_summ;
    float vector[n];
    float column_average;
    for (int j = 0; j < n; j++) {
        column_summ = 0;
        for (int i = 0; i < n; i++) {
            if (i == j) {
                continue;
            }
            else {
                column_summ += matrix[i][j];
                //printf("%d\t", matrix[i][j]);
            }
        }
        //printf("\n");
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
    return 0;
}
