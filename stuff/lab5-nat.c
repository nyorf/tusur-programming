#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Rus");
    int m, k;
    int check;
    
    printf("Выберите способ заполнения матрицы:\n[1] - вручную\n[2] - рандомными числами\n[3] - уже заданный размер\n");
    printf("Ваш выбор: ");
    scanf("%d", &check);
    switch (check) {
        case 1:
            printf("\nВведите количество строк матрицы: ");
            scanf("%d", m);
            printf("Введите количество столбцов матрицы: ");
            scanf("%d", k);
        case 2:
            srand(time(NULL));
            m = rand()%20;
            k = rand()%20;

        case 3:
            m = 4;
            k = 4;
    }

    int arr[m][k];
    for (int i = 0;i < m ; i++) {
        for (int j = 0; j < k; j++) {
            arr[i][j] = rand()%20;
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    
    int count = 0;
    for (int i = 0; i<k; i++) {
        int ver = 0;
        for (int j = 0; j < m; j++) {
            if(arr[j][i]!=0) {
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