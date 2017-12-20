#include"BiTree.h"

int main(void){
  BTNode * n1 = MakeNode(10, NULL, NULL);
  BTNode * n2 = MakeNode(20, NULL, NULL);
  BTNode * n3 = MakeNode(30, n1, n2);
  BTNode * n4 = MakeNode(40, NULL, NULL);
  BTNode * n5 = MakeNode(50, NULL, NULL);
  BTNode * n6 = MakeNode(60, n4, n5);
  BTNode * n7 = MakeNode(70, NULL, NULL);

  BiTree tree = InitBiTree(n7);
  SetLChild(tree, n3);
  SetRChild(tree, n6);

  printf("Depth of BiTree is %d\n", GetDepth(tree));

  printf("PreOrder Traverse:\n");
  PreOrderTraverse(tree, Print); printf("\n");

  printf("InOrder Traverse:\n");
  InOrderTraverse(tree, Print); printf("\n");

  printf("PostOrder Traverse:\n");
  PostOrderTraverse(tree, Print); printf("\n");

  printf("LevelOrder Traverse:\n");
  LevelOrderTraverse(tree, Print); printf("\n");
  
  SetItem(tree, 100);
  printf("Root: %d\n", GetItem(tree));

  DeleteChild(tree, 0);
  printf("PreOrder Traverse:\n");
  PreOrderTraverse(tree, Print); printf("\n");

  DestroyBiTree(tree);
  if(IsEmpty(tree))
    printf("BiTree is empty, succeed to destroy!\n");
}
