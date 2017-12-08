#include<stdio.h>
#include<stdlib.h>
#define MAX_NODE  50

typedef int ElemType;
typedef struct node {
  struct node * lchild;
  struct node * rchild;
  ElemType data;
} BTNode, * BTree;

BiTree InitBiTree(BTNode * root);
BTNode * MakeNode(ElemType data, BTNode * lchild, BTNode * rchild);
void FreeNode(BTNode * pnode);
void ClearBiTree(BiTree tree);
void DestroyBiTree(BiTree tree);
int IsEmpty(BiTree tree);
int GetDepth(BiTree tree);
ElemType GetItem(BTNode * pnode);
void SetItem(BTNode * pnode, ElemType item);
BiTree SetLChild(BiTree parent, BiTree lchild);
BiTree SetRChild(BiTree parent, BiTree rchild);
BiTree GetLChild(BiTree tree);
BiTree GetRChild(BiTree tree);
BiTree InsertChild(BiTree parent, int lr, BiTree child);
void DeleteChild(BiTree parent, int lr);
void PreOrderTraverse(BiTree tree, void(* visit)());
void InOrderTraverse(BiTree tree, void(* visit)());
void PostOrderTraverse(BiTree tree, void(* visit)());
void LevelOrderTraverse(BiTree tree, void(* visit)());
void Print(ElemType item);
