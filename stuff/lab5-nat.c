#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Rus");
    
    int m, n;
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
        scanf("%d", &m);
        printf("N = ");
        scanf("%d", &n);
        printf("\n");
    }
    else if (check == 3) {
        m = 4;
        n = 4;
        printf("\nРазмер матрицы: 4x4.");
    }

    int arr[m][n];

    if (check == 1) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("\tВведите элемент массива arr[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &arr[i][j]);
            }
            printf("\n");
        }
    }
    else if (check == 2) {
        srand(time(0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = rand()%20;
            }
        }
    }
    else if (check == 3) {
        arr[0][0] = 1; arr[0][1] = 2; arr[0][2] = 3; arr[0][3] = 0;
        arr[1][0] = 4; arr[1][1] = 5; arr[1][2] = 6; arr[1][3] = 0;
        arr[2][0] = 7; arr[2][1] = 8; arr[2][2] = 9; arr[2][3] = 0;
        arr[3][0] = 7; arr[3][1] = 8; arr[3][2] = 9; arr[3][3] = 0;
    }

    printf("\nВывод матрицы:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    int count = 0, ver;
    for (int i = 0; i < n; i++) {
        ver = 0;
        for (int j = 0; j < m; j++) {
            if(arr[j][i] != 0) {
                ver = 1;
            }
        }
        if (ver == 0) {
            count++;
        }
    }

    printf("Кол-во нулевых столбцов = %d", count);
    return 0;
}