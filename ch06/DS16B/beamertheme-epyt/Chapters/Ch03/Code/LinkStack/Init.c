#include "linkstack.h"
LinkStack * Init(void)
{
  LinkStack * S;
  S = (LinkStack *) malloc(sizeof(LinkStack));
  S->top = NULL;
  return S;
}
