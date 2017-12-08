#include"BiTree.h"

/* Insert a new SubBiTree */
BiTree InsertChild(BiTree parent, int lr, BiTree child)
{
  if (parent)
  {
    if (lr == 0 && parent->lchild == NULL)
    {
      parent->lchild = child;
      return child;
    }
    if (lr == 1 && parent->rchild == NULL)
    {
      parent->rchild = child;
      return child;
    }
  }
  return NULL;
}
