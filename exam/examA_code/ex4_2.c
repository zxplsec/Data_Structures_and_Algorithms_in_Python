#include <stdio.h>
#define N 3
int is_sym(int a[][N], int n) ;
int main(void)
{
  int a[N][N] = {
    {1, 2, 3},
    {1, 3, 1},
    {3, 1, 2}
  };
  int flag;

  flag = is_sym(a, N);
  if (flag == 1)
    printf("Is symmetric matrix!\n");
  else
    printf("Is not symmetric matrix!\n");

  return 0;
}

int is_sym(int  a[][N], int n) 
{
  int i, j;
  int flag = 1;
  for (i = 0; i < n; i++) {
    for (j = 0; j < N; j++) {
      if (a[i][j] != a[j][i]) {
	flag = 0;
	break;
      }
    }
    if (flag == 0)
      break;
  }
  return flag;
}
