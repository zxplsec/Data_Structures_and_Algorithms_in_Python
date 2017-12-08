Status Pop(SqDoubleStack * S, ElemType * e, int stackNumber)
{
  if(stackNumber == 1)
  {
    if(S->top1 == -1) return ERROR;
    *e = S->data[S->top1--];
  }
  if(stackNumber == 2)
    if(S->top2 == MAXSIZE) return ERROR;
    *e = S->data[S->top2++];    
  return OK;
}
