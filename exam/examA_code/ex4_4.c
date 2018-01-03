#include<stdio.h>
void copy_arr(double * source, double * target, int n);
void print_ar1d(double * arr, int n);
int main(void) 
{
  double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double target1[5], target2[3];
  
  copy_arr(source, target1, 5);
  printf("target1:\n");
  print_ar1d(target1, 5);

  copy_arr(source+2, target2, 3);
  printf("target2:\n");
  print_ar1d(target2, 3);

  return 0;
}


void copy_arr(double * source, double * target, int n)
{
  int i;

  for (i = 0; i < n; i++)
    target[i] = source[i];
}

void print_ar1d(double * arr, int n)
{
  int i;
  for (i = 0; i < n; i++) 
    printf("%8.3f ", arr[i]);
  putchar('\n');
}
