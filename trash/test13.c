#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Rus");
    
    int m, n;
    int arr[m][n];
    int check;

    printf("Выберите способ заполнения матрицы:\n[1] - вручную\n[2] - рандомными числами\n");
    printf("Ваш выбор: ");
    scanf("%d", &check);
    switch (check) {
        case 1: {
            printf("\nВведите размер матрицы (M x N): ");
            printf("\nM = ");
            scanf("%d", &m);
            printf("N = ");
            scanf("%d", &n);
            printf("\n");
            
            int arr[m][n];

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    printf("\tВведите элемент массива arr[%d][%d]: ", i + 1, j + 1);
                    scanf("%d", &arr[i][j]);
                }
                printf("\n");
            }
            break;
        }
        case 2: {
            printf("\nВведите размер матрицы (M x N): ");
            printf("\nM = ");
            scanf("%d", &m);
            printf("N = ");
            scanf("%d", &n);
            printf("\n");

            int arr[m][n];

            srand(time(0));
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    arr[i][j] = rand()%20;
                    printf("%d\t", arr[i][j]);
                }
                printf("\n");
            }
            break;
        }
        case 3: {
            m = 4;
            n = 4;
            int arr[m][n];
            
            printf("\nРазмер матрицы: 4x4.");
            printf("Вывод матрицы:");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    printf("%d\t", arr[i][j]);
                }
                printf("\n");
            }
            break;
        }
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        int ver = 0;
        for (int j = 0; j < m; j++) {
            if(arr[j][i] != 0) {
                ver = 1;
            }
        }
        if (ver == 0) {
            printf("%i\t", ++i);
            count++;
        }
    }
    printf("Кол-во нулевых столбцов = %d", count);
    return 0;
}