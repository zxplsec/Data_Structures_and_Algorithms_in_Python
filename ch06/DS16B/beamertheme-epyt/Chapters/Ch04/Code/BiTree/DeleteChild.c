#include"BiTree.h"

/* Delete SubBiTree */
void DeleteChild(BiTree parent, int lr)
{
  if (parent)
  {
    if(lr == 0 && parent->lchild != NULL){
      parent->lchild = NULL;
      /* FreeNode(parent->lchild); */
    }
    
    if(lr == 1 && parent->rchild != NULL){
      parent->rchild = NULL;
      /* FreeNode(parent->rchild); */
    }
  }
}
