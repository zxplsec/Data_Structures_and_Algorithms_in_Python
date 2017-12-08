#include "linkstack.h"
Status PrintS(LinkStack * S)
{
  LinkStackPtr p;
  p = S->top;
  while(p != NULL){
    printf("%3d ", p->data);
    p = p->next;
  }
  printf("\n");
  return OK;
}
