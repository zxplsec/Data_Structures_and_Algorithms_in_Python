#include "LinkQueue.h"
Status Enter(LinkQueue * Q, ELemType e)
{
  QueuePtr s = (QueuePtr) malloc(sizeof(QNode));
  if(!s) return ERROR;   // `入队列`
  s->data = e;
  s->next = NULL;
  Q->rear->next = s;
  Q->rear = s;
  return OK;
}
