#include "SqStack.h"
Status Destroy(SqStack * S)
{
  Clear(S);
  free(S->data);
  return OK;
}
