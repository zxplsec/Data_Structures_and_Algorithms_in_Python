#include"BiTree.h"

/* Set Left Child */
BiTree SetLChild(BiTree parent, BiTree lchild)
{
  parent->lchild = lchild;
  return lchild;
}
