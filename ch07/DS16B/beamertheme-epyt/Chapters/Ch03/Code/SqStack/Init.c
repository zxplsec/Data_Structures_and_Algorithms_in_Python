#include "SqStack.h"
Status Init(SqStack *S)
{
  S->data = (ElemType *) malloc(MAXSIZE * sizeof(ElemType));
  if(!S->data){
    printf("Malloc Failed!\n");
    return ERROR;
  }
  S->top = -1;
  return OK;
}
