#include<stdio.h>
int main(void)
{
  int a, b, t, p, r;
  
  printf("Please input two integers:\n");
  scanf("%d %d", &a, &b);
  if (a < b) {
    t = a;
    a = b;
    b = t;
  }
  p = a*b;
  while (b) {
    r = a % b;
    a = b;
    b = r;
  }
  printf("%5d%5d\n", a, p/a);

  return 0;
}
