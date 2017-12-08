#include"linkstack.h"
Status Push(LinkStack * S, ElemType e)
{
  LinkStackPtr s = (LinkStackPtr) malloc(sizeof(StackNode));
  if(!s) return ERROR;
  s->data = e;
  s->next = S->top;
  S->top  = s;
  S->count++;
  return OK;
}
