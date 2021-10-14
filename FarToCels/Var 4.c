#include <stdio.h>

#define K 5.0/9.0
#define A 32.0
#define LOWER 0.0
#define UPPER 300.0
#define STEP 20.0

int var4()
  {	float f;
  	printf("\n\t‘аренгейт\t ÷ельсий\n\n");
  	for (f=LOWER; f<=UPPER; f+=STEP)
  	  printf("\t%3.0f\t\t  %5.1f\n", f, K*(f-A));

  	return 0;
  }
