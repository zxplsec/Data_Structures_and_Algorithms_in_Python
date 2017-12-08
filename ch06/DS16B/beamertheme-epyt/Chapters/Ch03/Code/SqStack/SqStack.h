#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define ERROR 0
#define OK 1

typedef int Status;
typedef int ElemType;
typedef struct SqStack
{
  ElemType * data;
  int top;
} SqStack;


ElemType Pop  (SqStack * S);
Status Push   (SqStack * S, ElemType e);
Status Init   (SqStack * S);
Status Clear  (SqStack * S);
Status Destroy(SqStack * S);
void PrintS   (SqStack * S);
