#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); 
    int num = rand() % (99 + 1 - 1) + 1;
    char str[] = "bruh";

    sprintf(str, "%d", num);

    printf("%s", str);

    return 0;
}