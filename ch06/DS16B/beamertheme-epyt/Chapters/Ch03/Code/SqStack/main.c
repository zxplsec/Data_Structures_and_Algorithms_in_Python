#include "SqStack.h"
int main(void)
{
  SqStack S;
  ElemType e;
  
  Init(&S);
  PrintS(&S);

  Push(&S,1); Push(&S,2); Push(&S,3);
  PrintS(&S);


  e = Pop(&S);
  e = Pop(&S);
  PrintS(&S);

  Clear(&S);
  PrintS(&S);

  Destroy(&S);
  
  return 0;
}


