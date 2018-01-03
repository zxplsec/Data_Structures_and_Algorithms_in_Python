#include <stdio.h>
int main(void)
{
  int x, y, k = 1;
  for (x=0, y=10; (y>0)&&(x<4); x++, y--){
    printf("k = %d\n", k);
    k++;
  } 
 return 0;
}
