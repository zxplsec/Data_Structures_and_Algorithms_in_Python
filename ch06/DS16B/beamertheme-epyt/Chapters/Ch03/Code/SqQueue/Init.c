#include "SqQueue.h"
Status Init(SqQueue *Q)
{
  Q->front = 0;
  Q->rear  = 0;
  return OK;
}
