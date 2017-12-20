#include"BiTree.h"

/* PreOrder Traverse a BiTree */
void PreOrderTraverse(BiTree tree, void(* visit)())
{
  BTNode * pnode = tree;
  if (pnode)
  {
    visit(pnode->data);
    PreOrderTraverse(pnode->lchild, visit);
    PreOrderTraverse(pnode->rchild, visit);
  }
}
