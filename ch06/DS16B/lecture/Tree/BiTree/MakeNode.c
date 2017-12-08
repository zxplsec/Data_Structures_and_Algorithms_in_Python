#include"BiTree.h"

/* Generate a node */
BTNode * MakeNode(ElemType item, BTNode * lchild, BTNode * rchild)
{
  BTNode * pnode = (BTNode *) malloc(sizeof(BTNode));
  if (pnode)
  {
    pnode->data = item;
    pnode->lchild = lchild;
    pnode->rchild = rchild;
  }
  return pnode;
}
