#include "SqQueue.h"
int Enter(SqQueue * Q, ElemType e)
{
  if( (Q->rear + 1) % MAXSIZE == Q->front )
    return ERROR;
  Q->data[Q->rear] = e;
  Q->rear = (Q->rear+1) % MAXSIZE;
  return OK;
}
