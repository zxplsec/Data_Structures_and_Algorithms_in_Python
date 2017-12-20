#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100
#define OK 1
#define ERROR 0
#define TRUE 1
typedef int Status;
typedef int ElemType;


typedef struct SqList{
  ElemType *data;
  int length;
} SqList;


