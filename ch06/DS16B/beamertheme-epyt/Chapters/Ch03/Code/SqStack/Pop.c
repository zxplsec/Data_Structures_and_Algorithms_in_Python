#include "SqStack.h"
ElemType Pop(SqStack * S)
{
  ElemType  e;
  if (S->top == -1)
    printf("Stack is Empty, Cannot Pop!");
  e = S->data[S->top];
  S->top--;
  return e;
}
