#include "LinkList.h"

void DeleteLNodeKey(LinkList L, ElemType key)
{
  LinkList p = L, q = L->next;
  
  while (q != NULL && q->data != key)
  {
    p = q;
    q = q->next;
  }
  if (q == NULL)
  {
    printf("The Node you delete DONOT exist!\n");
    return;
  }
  if (q->data == key)
  {
    p->next = q->next;  free(q);
  }
  else
    printf("The Node you delete DONOT exist!\n");
}
