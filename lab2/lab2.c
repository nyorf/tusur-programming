#include <stdio.h>
#include <curses.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");

    int n, k;
    float result, summ;
    printf("Enter a value for variable n: ");
    scanf("%d", &n);

    while(k < n)
    {
        k++;
        float calculation;
        calculation = k * exp(sin(k + 1));
        if(calculation > result) 
        {
            result = calculation;
        }
        else
        {
            summ = summ + calculation;
        }
    }
    printf("\nresult = %f and summ = %f", result, summ);
    return 0;
}