Status Push(SqDoubleStack * S, ElemType e, int stackNumber)
{
  if(S->top1+1 == S->top2)
    return ERROR;
  if(stackNumber == 1)
    S->data[++S->top1] = e;
  if(stackNumber == 2)
    S->data[--S->top2] = e;
  return OK;
}
