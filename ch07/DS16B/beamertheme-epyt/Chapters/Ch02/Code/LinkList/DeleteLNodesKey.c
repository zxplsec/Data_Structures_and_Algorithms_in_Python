#include "LinkList.h"

void DeleteLNodesKey(LinkList L, int key)
{
  LinkList p = L, q = L->next;
  while (q != NULL)
  {
    if (q->data == key)
    {
      p->next = q->next;
      free(q);
      q = p->next;
    }
    else
    {
      p = q;
      q = q->next;
    }
  }
}