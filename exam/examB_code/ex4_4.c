#include<stdio.h>
float max(float a[], int n);
float min(float a[], int n);
float aver(float a[], int n);
int main(void)
{
  int i;
  float a[5];
  float m, n,c;

  printf("Please input 5 float values to make array:\n");
  for (i = 0; i < 5; i++)
    scanf("%f", &a[i]);
  m = max(a, 5);
  n = min(a, 5);
  c = aver(a, 5);
  
  printf("max = %5f, min = %5f, aver = %5f\n", m, n, c);
  return 0;
}

float max(float a[], int n)  
{
  int i;  
  float max;  
  max=a[0];  
  for(i = 0; i < n; i++)  
    if(max<a[i]) max=a[i];  
  
  return max ;  
}    

float min(float a[], int n)  
{ 
  int i;  
  float min;  
  min=a[0];  
  for(i = 0; i < n; i++)  
    if(min>a[i]) min=a[i];  
  return min;  
}

float aver(float a[], int n)  
{ 
  int i;  
  float sum = 0.0, aver;
    
  for(i = 0; i < n; i++)  
    sum += a[i]; 
  aver = sum/n; 
  return aver;  
}
