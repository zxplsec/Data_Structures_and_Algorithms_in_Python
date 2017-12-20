#include"BiTree.h"

/* PostOrder Traverse a BiTree */
void PostOrderTraverse(BiTree tree, void(* visit)())
{
  BTNode * pnode = tree;
  if (pnode)
  {
    PostOrderTraverse(pnode->lchild, visit);
    PostOrderTraverse(pnode->rchild, visit);
    visit(pnode->data);
  }
}
