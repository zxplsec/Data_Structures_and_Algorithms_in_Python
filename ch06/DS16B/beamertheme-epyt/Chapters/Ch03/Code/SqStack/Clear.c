#include "SqStack.h"
Status Clear(SqStack * S)
{
  ElemType e;
  while(S->top > -1)
    e = Pop(S);
  return OK;
}
