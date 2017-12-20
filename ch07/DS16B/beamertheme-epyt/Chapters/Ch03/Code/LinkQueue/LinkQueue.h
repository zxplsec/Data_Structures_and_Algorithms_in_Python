#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0

typedef int ElemType;
typedef struct QNode
{
  ElemType data;
  struct QNode * next;
} QNode, * QueuePtr;

typedef struct LinkQueue
{
  QueuePtr front, rear;
} LinkQueue;
