#include "LinkList.h"

Status GetElem(LinkList L, int i, ElemType * e)
{
  int j = 1;
  LinkList p;
  
  p=L->next;		// Point to the first node
  while(p != NULL && j < i)
  {
    p=p->next;
    j++;
  }
  
  if(!p || j > i)   // the i-th elem
    return ERROR;	// DONOT exist
  
  *e = p->data; // get data of the i-th elem
  
  return OK;
}
