#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <curses.h>
#include <stdbool.h>

double series(double x, double eps) {
    double ak = x;
    double s = fabs(ak);
    int k = 0;
    while (fabs(ak) >= eps)
    {
        ak *= (-pow(x, 2) * (2 * k - 1)) / (2 * pow(k, 2) + k);
        s += ak;
        k++;
    }

    return s;
}

int main() {
    double A,B,r,eps;

    printf("Печатается таблица функции, заданной рядом Тейлора\n\n");

    while (true)
    {
        printf("Введите границы интервала\n\n");
        printf("\tЛевая: "); scanf("%lf",&A);
        printf("\tПравая: "); scanf("%lf",&B);
        if (A >= B) printf("Левая должна быть меньше правой! Повторите.\n\n");
        else break;
    }

    while (true)
    {
        printf("\nВведите шаг табулирования(Формат: 0.любое значение): "); scanf("%lf",&r);
        if (r < 0) printf("\nШаг меньше нуля не имеет смысла!\n\tПовторите: ");
        else if (r > (B-A)) printf("\n\tШаг должен быть меньше длинны интервала!\n\tПовторите: ");
        else break;
    }

    while (true)
    {
        printf("\nВведите допустимую погрешность вычисления(Формат: 0,любое значение):\n\t0 < eps <1: "); scanf("%lf",&eps);
        if (eps < 0 || eps > 1) printf("\nВведено недопустимое значение. Положено eps = 0,00001");
        else break;
    }

    printf("__________________________________\n");
    printf("[       x       |      f(x)      ]\n");

    for (double x = A; x <= B; x += r)
    {
        double fx = series(x, eps);
        printf("|   %lf   |    %lf   |", x, fx);
        printf("\n");
    }

    printf("---------------------------------");
}
