#include "LinkList.h"

Status ClearLinkList(LinkList L){
  LinkList p,q;
  p=L->next;			/* Point to the first node */
  while(p){
    q=p->next;
    free(p);
    p=q;
  }
  L->next=NULL;
  return OK;
}
