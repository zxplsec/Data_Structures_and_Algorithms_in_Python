#include "SqStack.h"
void Convert(int n, int d)
{
  SqStack S;
  int k, * e;
  Init(&S);
  while(n > 0)
  {
    k = n % d;
    Push(&S, k);
    n /= d;
  }
  while (S.top > -1)
  {
    Pop(&S, e);
    printf("%1d", *e);
  }
  printf("\n");
}
