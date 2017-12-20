#include "LinkList.h"

LinkList LocateNodeKey(LinkList L,ElemType key){
  LinkList p=L->next;
  
  while(p!=NULL&&p->data!=key) p=p->next;
  if(p->data==key) return p;
  else{
    printf("The node you find DONOT exist!\n");
    return NULL;
  }
}
