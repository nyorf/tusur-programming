#include <stdio.h>
#include <curses.h>
#include "locale.h"

#define K 5.0/9.0
#define A 32.0
#define LOWER 0
#define UPPER 300
#define STEP 20

int var1()
  {
    int lower,
        upper,
        step;

  	float fahr,
  	      celsius,
  	      k,
  	      a;

  	lower=0;
  	upper=300;
  	step=20;
    k=5.0/9.0;
    a=32.0;

  	printf("\n\t‘аренгейт\t ÷ельсий\n\n");
  	fahr=lower;
  	while (fahr<=upper)
  	 {
  	   celsius=k*(fahr-a);
  	   printf("\t%4.0f\t\t%6.1f\n", fahr, celsius);
  	   fahr=fahr+step;
  	 }
  	return 0;
  }

int var2()
  {
    int lower=0,
        upper=300,
        step=20;

    float fahr=lower,
          k=5.0/9.0,
          a=32.0,
          celsius;

    printf("\n\t‘аренгейт\t ÷ельсий\n\n");
  	while (fahr<=upper)
  	 {
  	   celsius=k*(fahr-a);
  	   printf("\t%4.0f\t\t%6.1f\n", fahr, celsius);
  	   fahr=fahr+step;
  	 }
  	return 0;
  }

int var3()
  {	float f=LOWER;
  	printf("\n\t‘аренгейт\t ÷ельсий\n\n");
  	while (f<=UPPER)
  	 { printf("\t%3.0f\t\t%5.1f\n", f, K*(f-A));
  	   f=f+STEP;
  	 }
  	return 0;
  }

int var4()
  {	float f;
  	printf("\n\t‘аренгейт\t ÷ельсий\n\n");
  	for (f=LOWER; f<=UPPER; f+=STEP)
  	  printf("\t%3.0f\t\t  %5.1f\n", f, K*(f-A));

  	return 0;
  }

int main()
{
    int var1(), var2();
    int var3(), var4();
    setlocale(LC_CTYPE, "RUSSIAN");
    printf("ѕеревод показаний термометра из шкалы ‘аренгейта в шкалу ÷ельси¤\n\n");

    printf("\tPress anykey\n");
    getch();

    printf("\n\n\tVar 1\n");
    var1();

    printf("\n\tPress anykey\n");
    getch();

    printf("\n\n\tVar 2\n");
    var2();

    printf("\n\tPress anykey\n");
    getch();

    printf("\n\n\tVar 3\n");
    var3();

    printf("\n\tPress anykey\n");
    getch();

    printf("\n\n\tVar 4\n");
    var4();

    return 0;
}
