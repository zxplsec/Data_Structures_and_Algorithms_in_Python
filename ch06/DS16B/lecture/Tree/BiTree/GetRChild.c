#include"BiTree.h"

/* Return right child */
BiTree GetRChild(BiTree tree)
{
  if (tree)
    return tree->rchild;
  return NULL;
}
