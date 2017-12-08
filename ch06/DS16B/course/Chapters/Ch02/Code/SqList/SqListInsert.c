#include "SqList.h"

Status SqListInsert(SqList *L,int i,ElemType e){
  int k;
  if(i<0 || i>L->length+1)
    return ERROR;
  if(L->length>=MAXSIZE)
    return ERROR;
  for(k=L->length-1;k>=i-1;k--)
    L->data[k+1]=L->data[k];
  L->data[i-1]=e;
  L->length++;
  return OK;
}
