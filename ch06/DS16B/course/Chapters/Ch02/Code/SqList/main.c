#include "SqList.h"

Status SqListInit(SqList *L);
Status SqListInsert(SqList *L,int i,ElemType e);
Status SqListDelete(SqList *L,int i,ElemType *e);
Status SqListLocateDelete(SqList *L,ElemType e);

int main(void){
  int i;
  SqList L;
  ElemType e;
  
  /* srand(time(0)); */
  SqListInit(&L);
  /* printf("L.length=%d\n",L.length); */

  for(i=1;i<=10;i++)
    SqListInsert(&L,i,rand()%100);

  printf("L.length=%d\n",L.length);
  for(i=0;i<L.length;i++)
    printf("%3d ",L.data[i]);
  printf("\n\n");


  SqListDelete(&L,3,&e);
  printf("L.length=%d\n",L.length);
  for(i=0;i<L.length;i++)
    printf("%3d ",L.data[i]);
  printf("\n\n");

  i=SqListLocateDelete(&L,72);
  printf("L.length=%2d\n",L.length);
  for(i=0;i<L.length;i++)
    printf("%3d ",L.data[i]);
  printf("\n\n");
}
