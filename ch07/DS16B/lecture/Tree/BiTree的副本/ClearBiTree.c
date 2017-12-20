#include"BiTree.h"

/* Clear a bitree */
void ClearBiTree(BiTree tree)
{
  BTNode * pnode = tree;
  if (pnode->lchild != NULL)
    ClearBiTree(pnode->lchild);
  
  if (pnode->rchild != NULL)
    ClearBiTree(pnode->rchild);
  
  FreeNode(pnode);
}
