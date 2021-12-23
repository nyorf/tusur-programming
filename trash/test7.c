#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

 
bool isEven(int num) {
    if (num % 2 == 0)
    {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    if (isEven(0)){
        printf("true");
    }
    else {
        printf("false");
    }
    return 0;
}