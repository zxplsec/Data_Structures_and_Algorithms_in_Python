#include "linkstack.h"
Status Pop(LinkStack * S, ElemType * e){
  LinkStackPtr p;
  if (S->top == NULL)
    return ERROR;    //栈空，返回错误标志
  *e = S->top->data;
  p  = S->top;
  S->top = S->top->next;
  free(p);
  S->count--;
  return OK;
}
