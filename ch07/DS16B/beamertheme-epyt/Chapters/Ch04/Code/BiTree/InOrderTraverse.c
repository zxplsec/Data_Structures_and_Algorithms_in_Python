#include"BiTree.h"

/* InOrder Traverse a BiTree */
void InOrderTraverse(BiTree tree, void(* visit)())
{
  BTNode * pnode = tree;
  if (pnode)
  {
    InOrderTraverse(pnode->lchild, visit);
    visit(pnode->data);
    InOrderTraverse(pnode->rchild, visit);
  }
}
