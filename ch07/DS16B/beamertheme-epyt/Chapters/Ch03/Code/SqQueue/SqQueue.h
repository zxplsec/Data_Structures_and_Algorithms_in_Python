#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define ERROR 0
#define OK 1

typedef int Status;
typedef int ElemType;
typedef struct  
{
  ElemType data[MAXSIZE];
  int front;
  int rear;
} SqQueue;


void PrintQ(SqQueue *Q);
Status Init(SqQueue *Q);
int Length(SqQueue *Q);
int Enter(SqQueue * Q, ElemType e);
int Exit(SqQueue * Q, ElemType * e);
