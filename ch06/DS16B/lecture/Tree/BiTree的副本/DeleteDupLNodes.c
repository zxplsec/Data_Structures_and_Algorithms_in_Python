#include "LinkList.h"

void Delete_LinkList_Value(LinkList L)
{
  LinkList p = L->next, q, ptr;
  while (p != NULL)
  {
    q = p;
    ptr = p->next;
    while (ptr != NULL)
    {
      if (ptr->data == p->data)
      {
        q->next = ptr->next;
        free(ptr);
        ptr = q->next;
      }
      else
      {
        q=ptr;
        ptr=ptr->next;
      }
    }
    p = p->next;
  }
}