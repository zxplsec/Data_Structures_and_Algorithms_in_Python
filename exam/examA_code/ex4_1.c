#include <stdio.h>
int main(void)
{
  int n, a, b, c;

  for (n = 100; n < 1000; n++) {
    a = n/100;
    b = n/10%10;
    c = n-a*100-b*10;
    if (n == a*a*a+b*b*b+c*c*c)
      printf("%d = %d^3 + %d^3 + %d^3\n", n, a, b, c);
  }

  return 0;
}
