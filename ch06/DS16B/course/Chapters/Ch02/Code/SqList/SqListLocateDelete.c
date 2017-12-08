#include "SqList.h"

Status SqListLocateDelete(SqList *L,ElemType e){
  int i=0,k;
  printf("Delete the element %3d. ", e);
  while(i<L->length){
    if(L->data[i]!=e) i++;
    else {
      for(k=i+1;k<L->length;k++)
	L->data[k-1]=L->data[k];
      L->length--;
      break;
    }
  }
  if(i>=L->length){
    printf("The element you want to delete DONOT exist!\n");
    return ERROR;
  } else {
    printf("The element is located at the %2d-th.\n", i+1);
    return i+1;
  }
  
}
