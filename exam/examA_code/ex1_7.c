#include <stdio.h>
void incre(void);
 
int main (void) 
{
  int i;
  for (i = 1; i <= 2; i++)
    incre();
}

void incre(void) 
{
  static int  x = 1;
  x *= x + 1;
  printf("%d ", x);
}
