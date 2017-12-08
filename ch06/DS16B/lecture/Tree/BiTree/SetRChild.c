#include"BiTree.h"

/* Set right Child */
BiTree SetRChild(BiTree parent, BiTree rchild)
{
  parent->rchild = rchild;
  return rchild;
}
