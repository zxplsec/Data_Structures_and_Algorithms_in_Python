#include "LinkList.h"

void DeleteLNodeIndex(LinkList L,int i){
  int j=1; LinkList p,q;
  p=L; q=L->next;
  while(p->next!=NULL&&j<i){
    p=q; q=q->next; j++;
  }
  if(j!=i) printf("i too big or equal 0!\n");
  else {
    p->next=q->next;
    free(q);
  }
}
