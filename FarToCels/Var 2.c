#include <stdio.h>

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
