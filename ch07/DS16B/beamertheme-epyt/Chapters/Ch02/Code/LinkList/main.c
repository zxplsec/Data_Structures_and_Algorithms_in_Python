#include "LinkList.h"

void CreateLinkListHead(LinkList L,int n);
void CreateLinkListTail(LinkList L,int n);
Status GetElem(LinkList L,int i,ElemType *e);
Status ClearLinkList(LinkList L);
void PrintLinkList(LinkList L);
LinkList LocateNodeKey(LinkList L, ElemType key);
void InsertLNode(LinkList L,int i,ElemType e);
void DeleteLNodeIndex(LinkList L,int i);
void DeleteLNodeKey(LinkList L,ElemType key);

int main(void){
  int i,e;
  LinkList L, p;
  
  L=(LinkList) malloc(sizeof(LNode));
  CreateLinkListHead(L,10);
  PrintLinkList(L);

  /* CreateLinkListTail(L,10); */
  /* PrintLinkList(L); */

  i=3;
  GetElem(L,i,&e);
  printf("the %2d-th element is %3d\n",i,e);

  p=LocateNodeKey(L,59);
  printf("%3d\n",p->data);

  InsertLNode(L,2,66);
  PrintLinkList(L);

  DeleteLNodeIndex(L,4);
  PrintLinkList(L);

  DeleteLNodeKey(L,12);
  PrintLinkList(L);
  
  ClearLinkList(L);
  PrintLinkList(L);
}
