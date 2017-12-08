#include "SqList.h"

Status SqListInit(SqList * L)
{
  L->data = (ElemType *) malloc(MAXSIZE * sizeof(ElemType));
  if(!L->data)
  {
    printf("Malloc Failed!\n");
    return ERROR;
  }
  L->length=0;  
  return OK;
}
