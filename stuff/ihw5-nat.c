#include <stdio.h> 
 
int main() { 
    int a[100]; 

    int n; 

    printf("N: "); 
    scanf("%i",&n); 

    int i; 
    for (i = 0; i < n; i++) { // задаем набор самостоятельно 
        printf("a[%i]: ", i + 1); 
        scanf("%i", &a[i]); 
    } 

    int min = 0, max = 0; 

    for (i = n - 1; i >= 0; i--) { //находим максимум и минимум в набор, n - размкр 
        if (a[i] > a[max]) {
            max = i; 
        }
        if (a[i] < a[min]) {
            min = i; 
        }
    } 

    if (max < min) { 
        max += min; 
        min = max - min; 
        max = max - min; 
    } 

    for (i = min; i < min + 1 + (max - min) / 2; i++) {
        if (i != (max - i + min)) { 
            a[i] += a[max - i + min]; 
            a[max - i + min] = a[i] - a[max - i + min]; 
            a[i] = a[i] - a[max - i + min]; 
        } 
    } 

    printf("A: \n"); 
    for (i = 0; i < n; ++i) {
        printf(" %i: %i\n", i + 1, a[i]); 
    }

    return 0; 
}