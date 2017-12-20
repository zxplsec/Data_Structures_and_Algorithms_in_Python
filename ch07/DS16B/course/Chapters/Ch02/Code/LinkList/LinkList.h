#include<stdio.h>
#include<stdlib.h>

#define OK 1
#define ERROR 0
#define TRUE 1
typedef int Status;
typedef int ElemType;


typedef struct LNode{
  ElemType data;
  struct LNode *next;
} LNode;
typedef struct LNode *LinkList;


