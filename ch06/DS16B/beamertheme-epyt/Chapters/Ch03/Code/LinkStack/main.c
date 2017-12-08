#include "linkstack.h"
int main(void)
{
  LinkStack *S; ElemType e;
  
  S=Init();               PrintS(S);
  
  Push(S,1);  Push(S,3);
  Push(S,5);  Push(S,7);  PrintS(S);

  Pop(S,&e);  Pop(S,&e);  PrintS(S);
  
  return 1;
}
