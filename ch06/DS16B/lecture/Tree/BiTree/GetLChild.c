#include"BiTree.h"

/* Return left child */
BiTree GetLChild(BiTree tree)
{
  if (tree)
    return tree->lchild;
  return NULL;
}
