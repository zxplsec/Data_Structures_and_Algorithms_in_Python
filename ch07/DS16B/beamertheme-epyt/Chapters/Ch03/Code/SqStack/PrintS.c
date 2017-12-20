#include "SqStack.h"
void PrintS(SqStack * S)
{
  int i;
  if(S->top == -1)
  {
    printf("Stack is empty!\n\n");
    return;
  }
  for(i = 0; i <= S->top; i++)
    printf("%3d ", S->data[i]);
  printf("\n\n");
}