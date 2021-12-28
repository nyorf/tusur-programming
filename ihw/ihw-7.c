#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int randint(int maxnum) {
    //return rand() % maxnum - maxnum / 2;
    return rand() % (maxnum + 1 - 1) + 1;
}

int main() {
    int m, n;
    printf("Введите размер матрицы (M x N): ");
    printf("\nM = ");
    scanf("%d", &m);
    printf("N = ");
    scanf("%d", &n);
    printf("\n");
    
    int matrix[m][n];

    int check;
    printf("Выберите способ заполнения матрицы:\n[1] - вручную\n[2] - рандомными числами\n");
    printf("Ваш выбор: ");
    scanf("%d", &check);
    switch (check) {
        case 1:
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    printf("\tВведите элемент массива matrix[%d][%d]: ",i + 1,j + 1 );
                    scanf("%d", &matrix[i][j]);
                }
                printf("\n");
            }
        case 2:
            srand(time(0));

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    matrix[i][j] = randint(10);
                    printf("%d\t", matrix[i][j]);
                }
                printf("\n");
            }
    }
    
    int current_row[n];
    int min_num = INT_MAX;
    int ascending = 1, descending = 1, counter = 0, i_minnum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            current_row[j] = matrix[i][j];
        }
        while ((ascending == 1 || descending == 1) && counter < n - 1) {
            if (current_row[counter] < current_row[counter + 1]) {
                descending = 0;
            }
            else if (current_row[counter] > current_row[counter + 1]) {
                ascending = 0;
            }
            counter++;
        }
        if (ascending == 1 || descending == 1) {
            for (i_minnum = 0; i_minnum < n; i_minnum++) {
                if (current_row[i_minnum] < min_num) {
                    min_num = current_row[i_minnum];
                }
            }
        }
        else {
            min_num = 0;
        }
    }
    
    if (min_num == 0) {
        printf("\nУпорядоченные строки в матрице отсутствуют. (%d)", min_num);
    }
    else {
        printf("\nМинимальный элемент среди упорядоченных строк = %d", min_num);
    }
    return 0;
}