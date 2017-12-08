#include "SqStack.h"
Status Push(SqStack * S, ElemType e)
{
  if (S->top == MAXSIZE-1)
    return ERROR;
  S->top++;			
  S->data[S->top] = e;		
  return OK;
}

