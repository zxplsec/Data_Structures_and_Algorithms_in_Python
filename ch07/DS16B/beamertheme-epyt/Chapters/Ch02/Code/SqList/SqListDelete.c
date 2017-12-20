#include "SqList.h"

Status SqListDelete(SqList * L, int i, ElemType * e)
{
  int k;
  
  if (i < 0 || i > L->length) {
    printf("The element you want to delete do not exist!\n");
    return ERROR;
  }
  if (L->length == 0 ){
    printf("SqList is empty!\n");
    return ERROR;
  }
  
  *e = L->data[i-1];
  for(k = i; k < L->length; k++)
    L->data[k-1] = L->data[k];
  L->length--;
  
  return OK;
}
