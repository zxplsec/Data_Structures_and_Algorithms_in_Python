#include<stdio.h>
int main(void) 
{
  int s, score;
  printf("Please input your score:\n");
  scanf("%d", &score); 
  s=score/10; 
  switch(s)  
    {
    case 10: printf("A\n");break;  
    case  9: printf("A\n");break;  
    case  8: printf("B\n");break;  
    case  7: printf("C\n");break;  
    case  6: printf("D\n");break;  
    case  5:
    case  4:  
    case  3:  
    case  2:   
    case  1: printf("E\n");break;  
    default: printf("error");  
    }

  return 0;
} 
