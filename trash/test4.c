#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int i,n,r;
    char b[] = "1";
    printf("N:");
    scanf("%i", &n);
    for (i = 1 ; i <= n; ++i){
        printf("%i:", i);
        scanf("%i", &r);
        if (r > 0){
            b = "True";
        }
        else {
            b = "False";
        }
    }
    printf("%s\n", b);
    return 0;
}