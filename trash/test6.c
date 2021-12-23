#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <math.h>


float Series (float x, float eps) {
    float k = 1;
    float a =(-pow(x,-2));
    float S = 0;

    do {

        k += 1;
        a = (pow(x, 2) * (2 * pow(k, 2) - k) / (2 * pow(k, 3) + pow(k, 2) - 2 * k - 1));
        S+=a;
        } while (fabs(a)>=eps);

    return S;
}

int main(){
    float A,B;
    float r,eps;
    float Fx,x;
    printf("Table is printing\n\nEnter borders of the interval ");

    printf("\n\tLeft one= ");
    scanf("%f",&A);
    printf("\tRight one= ");
    scanf("%f",&B);

    while(A>=B)
    {
        printf("\nLeft border can't be less than right one. Repeat");
        printf("\n\tLeft= ");
        scanf("%f",&A);
        printf("\tRight= ");
        scanf("%f",&B);
    }


    printf("\nEnter step of the function:  ");
    scanf("%f",&r);
    while(r<=0||r>(B-A))
    {
        printf("\nStep can't be more the the interval. Repeat:  ");
        scanf("%f",&r);
    }

    printf("\nEnter eps (0<eps<1):  ");
    scanf("%f",&eps);
    while(eps<=0||eps>=1)
    {
        printf("\nIncorrect eps. Repeat:  ");
        scanf("%f",&eps);
    }

    printf("\n\t\t\tTABLE");

    printf("\n\t\t+---------+-----------+\n");
    printf("\t\t|    X    |   F(x)    |\n");
    printf("\t\t+---------+-----------+\n");

    for(x=A;x<=B;x+=r)
    {
        x=r*round(x/r);
        if(fabs(x) > eps)
        {
            Fx=Series(x,eps);
            printf("\t\t   %2.2f  |  %2.4f   \n",x,Fx);
        }
    }

    printf("\t\t+---------+-----------+\n");

    return 0;
}
