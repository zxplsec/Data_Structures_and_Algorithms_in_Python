#include "SqQueue.h"

int main(void)
{
  SqQueue Q;
  int e;
  Init(&Q);
  PrintQ(&Q);
  
  Enter(&Q, 3); Enter(&Q, 4); Enter(&Q, 5);
  Length(&Q);
  PrintQ(&Q);
  
  Exit(&Q, &e); Exit(&Q, &e);
  Length(&Q);
  PrintQ(&Q);
  
  
}
