#include <stdio.h>
int main(void)
{
  int k;
  for (k = 1, printf("%d: Hi!\n",k); 
       printf("k = %d\n", k), k*k < 26;
       k += 2, printf("Now k is %d, ", k))
    printf("k is %d in the loop\n", k); 
  return 0;
}
