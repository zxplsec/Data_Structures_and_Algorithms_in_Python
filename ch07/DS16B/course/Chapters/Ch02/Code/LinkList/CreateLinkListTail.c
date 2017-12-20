#include "LinkList.h"

void CreateLinkListTail(LinkList L, int n){
  LinkList p,r;
  int i;
  /* srand(time(0)); */
  r=L;
  for(i=0;i<n;i++){    
    p=(LinkList) malloc(sizeof(LNode));
    p->data=rand()%100+1;
    r->next=p;
    r=p;
  }
  r->next=NULL;
}
