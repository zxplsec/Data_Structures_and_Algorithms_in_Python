#include <stdio.h>
int main(void)
{
  double d;
  printf("%f\n", (d=1, d+5, d++));
  return 0;
}
