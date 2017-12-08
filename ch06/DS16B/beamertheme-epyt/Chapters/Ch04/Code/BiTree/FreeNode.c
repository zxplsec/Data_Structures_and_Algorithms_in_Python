#include"BiTree.h"

/* Free a node */
void FreeNode(BTNode * pnode)
{
  if(pnode != NULL)
    free(pnode);
}
