#include "SqQueue.h"
int Length(SqQueue *Q)
{
  int len = (Q->rear - Q->front + MAXSIZE) % MAXSIZE;
  printf("Length of Queue is %3d.\n", len);
  return len;
}
