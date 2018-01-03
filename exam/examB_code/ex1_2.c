#include <stdio.h>
int main(void)
{
  int a = 12;

  a += a -= a*a;
  printf("a = %d\n", a);
  
  
  return 0;
}
