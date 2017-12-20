#include<stdio.h>
#include<stdlib.h>
#define ERROR 0
#define OK 1

typedef int Status;
typedef int ElemType;
typedef struct StackNode
{
  ElemType data;
  struct StackNode * next;
} StackNode, * LinkStackPtr;

typedef struct LinkStack
{
  LinkStackPtr top;
  int count;
} LinkStack;

LinkStack * Init(void);
Status Push  (LinkStack * S, ElemType e);
Status Pop   (LinkStack * S, ElemType * e);
Status PrintS(LinkStack * S);
