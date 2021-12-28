#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

int main() { 
    int m, k; 
    srand(time(0)); 

    printf("Введите кол-во строк: "); 
    scanf("%d", &m); 
    printf("Введите кол-во столбцов: "); 
    scanf("%d", &k); 
    int** arr; 

    arr = (int**)malloc(m*sizeof(int*));

    for (int i = 0; i < m; i++) {
        arr[i] = (int*)malloc(k*sizeof(int));
    }

    for (int i = 0; i < m ;i++) { 
        for (int j = 0; j < k; j++) { 
            arr[i][j] = rand()%20; 
            printf("%d\t", arr[i][j]); 
        } 
        printf("\n"); 
    } 
    printf("\n\n"); 
    
    int count = 0; 
    for (int i = 0; i < k; i++) { 
        int ver = 0; 
        for (int j = 0; j < m; j++) { 
            if(arr[j][i] !=0 ) { 
                ver = 1; 
            } 
        } 
        if (ver == 0) { 
            count++; 
        } 
    } 
    
    printf("Кол-во нулевых столбцов = %d", count); 

    for (int i = 0; i < m; i++) {
        free(arr[i]);
    }

    free(arr);

    return 0; 
}