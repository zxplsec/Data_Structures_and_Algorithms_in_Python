#include "LinkList.h"

void InsertLNode(LinkList L,int i,ElemType e){
  int j=0; LinkList p,q;
  p=L->next;			/* Point to the first node */
  while(p!=NULL&&j<i-1){
    p=p->next; j++;
  }
  if(j!=i-1) printf("i too big or equal 0!\n");
  else {
    q=(LinkList) malloc(sizeof(LNode));
    q->data=e; q->next=p->next;
    p->next=q;    
  }
}
