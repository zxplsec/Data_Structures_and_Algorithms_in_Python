#include<stdio.h>
int main(void)  
{
  int a[5], i, j, t;
  
  for(i = 0; i < 5; i++) 
    scanf("%d", &a[i]); 
  for(i = 0; i < 5; i++)   
    printf("%5d", a[i]); 
  printf("\n"); 
  for(j = 1; j < 5; j++) {
    t=a[0];  
    for(i = 1; i <= 5; i++) 
      a[i-1]=a[i]; 
    a[i]=t;  
    for(i = 0; i < 5; i++) 
      printf("%5d", a[i]); 
    printf("\n");
  } 
}
