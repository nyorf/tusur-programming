#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
  int r;
  int n;
  int i;
  int x;
  int pr;
  srand(time(0));
  n = rand() % 10;
  int xmin = 1316134911;
  int mas[n];

  scanf("%d", &r);

  for (i = 0; i < n; i++){
    mas[i] = rand() % 20;
  }

  for (i = 0; i < n; i++)
    {
        x = abs(r - mas[i]);
        if (x < xmin){
            xmin = x;
            pr = mas[i];
        }
  }
  printf("%d", pr);
  return 0;
}