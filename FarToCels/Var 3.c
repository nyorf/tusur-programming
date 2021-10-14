#include <stdio.h>

#define K 5.0/9.0
#define A 32.0
#define LOWER 0
#define UPPER 300
#define STEP 20

int var3()
  {	float f=LOWER;
  	printf("\n\t‘аренгейт\t ÷ельсий\n\n");
  	while (f<=UPPER)
  	 { printf("\t%3.0f\t\t%5.1f\n", f, K*(f-A));
  	   f=f+STEP;
  	 }
  	return 0;
  }
