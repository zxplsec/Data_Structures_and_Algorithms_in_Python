#include"BiTree.h"

/* LevelOrder Traverse a BiTree */
void LevelOrderTraverse(BiTree tree, void(* visit)())
{
  BTNode * Queue[MAX_NODE], * pnode = tree;
  int front = 0, rear = 0;
  if (pnode != NULL)
  {
    Queue[++rear] = pnode;
    while (front < rear)
    {
      pnode = Queue[++front];
      visit(pnode->data);
      if (pnode->lchild)
        Queue[++rear] = pnode->lchild;
      if (pnode->rchild)
        Queue[++rear] = pnode->rchild;
    }
  }
}
