#include"BiTree.h"

/* Return a BiTree's depth */
int GetDepth(BiTree tree)
{
  int cd, ld, rd;
  cd = ld = rd = 0;
  if (tree)
  {
    ld = GetDepth(tree->lchild);
    rd = GetDepth(tree->rchild);
    cd = (ld > rd ? ld : rd);
    return cd + 1;
  }
  return 0;
}
