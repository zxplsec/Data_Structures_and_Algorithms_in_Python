#include "SqQueue.h"
int Exit(SqQueue * Q, ElemType * e)
{
  if(Q->front == Q->rear)
    return ERROR;
  *e = Q->data[Q->front];
  Q->front = (Q->front+1) % MAXSIZE;
  return OK;
}
