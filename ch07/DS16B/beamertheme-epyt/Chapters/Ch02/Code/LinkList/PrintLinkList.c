#include "LinkList.h"

void PrintLinkList(LinkList L)
{
  LNode * p;
  p = L->next;
  if (p == NULL)
    printf("The LinkList is empty!\n");
  else
  {
    while (p)
    {
      printf("%3d ", p->data);
      p = p->next;
    }
    printf("\n");
  }
}
