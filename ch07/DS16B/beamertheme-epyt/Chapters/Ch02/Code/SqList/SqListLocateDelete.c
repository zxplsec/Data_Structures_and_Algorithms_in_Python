#include "SqList.h"

Status SqListLocateDelete(SqList * L, ElemType e)
{
  int i = 0, k;

  while(i < L->length)
  {
    if(L->data[i] !=e ) i++;
    else
    {
      for(k = i+1; k < L->length; k++)
        L->data[k-1] = L->data[k];
      L->length--;
      break;
    }
  }
  
  if(i >= L->length)
  {
    printf("Elem you delete DONOT exist!\n");
    return ERROR;
  }
  else
  {
    printf("Elem located at %2d-th.\n", i+1);
    return i+1;
  }
}
