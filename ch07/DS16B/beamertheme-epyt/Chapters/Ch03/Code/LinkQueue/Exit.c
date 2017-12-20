#include "LinkQueue.h"
Status Exit(LinkQueue * Q, ELemType * e)
{
  QueuePtr p;
  if(Q->front == Q->rear)
    return ERROR;
  p = Q->front->next;
  *e = p->data;
  Q->front->next = p->next;
  if(Q->rear == p)
    Q->rear = Q->front;
  free(p);
  return OK;
}
