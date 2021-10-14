#include <stdio.h>

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
