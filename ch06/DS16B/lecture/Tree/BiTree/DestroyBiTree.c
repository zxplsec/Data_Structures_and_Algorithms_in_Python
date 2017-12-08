#include"BiTree.h"

/* Destroy a BiTree */
void DestroyBiTree(BiTree tree)
{
  if(tree)
    ClearBiTree(tree);
}
