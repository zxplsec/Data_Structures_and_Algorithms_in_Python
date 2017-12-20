#include "LinkList.h"

void CreateLinkListHead(LinkList L, int n)
{
  LinkList p;
  int i;
  /* srand(time(0)); */
  L->next = NULL;
  for(i = 0; i < n; i++)
  {
    p = (LinkList) malloc(sizeof(LNode));
    p->data = rand()%100+1;
    p->next = L->next;
    L->next = p;
  }
}
