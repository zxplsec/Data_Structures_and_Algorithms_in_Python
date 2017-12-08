#include "SqQueue.h"
void PrintQ(SqQueue *Q)
{
  int i;
  for (i = Q->front; i < Q->rear; i = (i+1)%MAXSIZE)
    printf("%3d ", Q->data[i]);
  printf("\n");
}
