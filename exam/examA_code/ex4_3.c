#include<stdio.h>
#define N 5
int main(void)
{
  int i, j;
  
  for(i = 0; i < N; i++) {
    for(j = N-2-i; j >= 0; j--)
      putchar(' ');
    for(j = 1; j <= 2*i+1; j++)
      putchar('*');
    putchar('\n');
  }

  putchar('\n');

  
  for(j = N-2; j >= 0; j--)
    putchar(' ');
  putchar('*');
  putchar('\n');
  for(i = 1; i < N-1; i++) {
    for(j = N-2-i; j >= 0; j--)
      putchar(' ');
    putchar('*');
    for(j = 1; j <= 2*i-1; j++)
      putchar(' ');
    putchar('*');
    putchar('\n');
  }
  for(j = 1; j <= 2*N-1; j++)
    putchar('*');
  putchar('\n');
  return 0;
}