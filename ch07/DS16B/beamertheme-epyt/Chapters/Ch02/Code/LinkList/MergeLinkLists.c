#include "LinkList.h"

LinkList MergeLinklists(LinkList La, LinkList Lb)
{
  LinkList Lc, pa, pb, pc, ptr;
  
  Lc = La;
  pc = La;
  pa = La->next;
  pb = Lb->next;
  while(pa != NULL && pb != NULL)
  {
    if (pa->data < pb->data)
    {
      pc->next = pa;
      pc = pa;
      pa = pa->next;
    }
    if (pa->data < pb->data)
    {
      pc->next = pb;
      pc = pb;
      pb = pb->next;
    }
    if (pa->data == pb->data)
    {
      pc->next = pa;
      pc = pa;
      pa = pa->next;
      ptr = pb; pb = pb->next;
      free(ptr);
    }
  }
  if (pa != NULL)
    pc->next = pa;
  else
    pc->next = pb;
  free(Lb);
  
  return(Lc);
}
