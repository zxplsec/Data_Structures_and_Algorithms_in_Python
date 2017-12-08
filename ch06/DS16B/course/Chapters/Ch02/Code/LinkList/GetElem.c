#include "LinkList.h"

Status GetElem(LinkList L,int i,ElemType *e){
  int j;
  LinkList p;
  p=L->next;		/* Point to the first node */
  j=1;
  while(p!=NULL&&j<i){
    p=p->next; j++;
  }
  if(!p||j>i)
    return ERROR;	/* the i-th element DONOT exist */  
  *e=p->data;		/* get data of the i-th element */
  return OK;
}
