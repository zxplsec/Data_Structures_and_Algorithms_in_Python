#include <stdio.h>
int main(void)
{
  int x = -1, k = 1;
  do {
    x = x*x;
    printf("k = %d\n", k++);
  } while (!x);

  return 0;
}
