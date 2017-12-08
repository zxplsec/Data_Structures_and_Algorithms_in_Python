#include"BiTree.h"

/* Creat a new bitree */
BiTree InitBiTree(BTNode * root)
{
  BiTree tree = root;
  return tree;  
}

/* Generate a node */
BTNode * MakeNode(ElemType item, BTNode * lchild, BTNode * rchild)
{
  BTNode * pnode = (BTNode *) malloc(sizeof(BTNode));
  if (pnode)
  {
    pnode->data = item;
    pnode->lchild = lchild;
    pnode->rchild = rchild;
  }
  return pnode;
}

/* Free a node */
void FreeNode(BTNode *pnode)
{
  if(pnode != NULL)
    free(pnode);
}

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

/* Destroy a BiTree */
void DestroyBiTree(BiTree tree)
{
  if(tree)
    ClearBiTree(tree);
}

/* Is a BiTree Empty? */
int IsEmpty(BiTree tree)
{
  if (tree == NULL)
    return 0;
  else
    return 1;
}

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

/* Return a BiTree's root */
BiTree GetRoot(BiTree tree)
{
  return tree;
}

/* Return a node's value */
ElemType GetItem(BTNode * pnode)
{
  return pnode->data;
}

/* Set a node's value */
void SetItem(BTNode * pnode, ElemType item)
{
  pnode->data = item;
}

/* Set Left Child */
BiTree SetLChild(BiTree parent, BiTree lchild)
{
  parent->lchild = lchild;
  return lchild;
}

/* Set right Child */
BiTree SetRChild(BiTree parent, BiTree rchild)
{
  parent->rchild = rchild;
  return rchild;
}

/* Return left child */
BiTree GetLChild(BiTree tree)
{
  if (tree)
    return tree->lchild;
  return NULL;
}

/* Return right child */
BiTree GetRChild(BiTree tree)
{
  if (tree)
    return tree->rchild;
  return NULL;
}

/* Insert a new SubBiTree */
BiTree InsertChild(BiTree parent, int lr, BiTree child)
{
  if (parent)
  {
    if (lr == 0 && parent->lchild == NULL)
    {
      parent->lchild = child;
      return child;
    }
    if (lr == 1 && parent->rchild == NULL)
    {
      parent->rchild = child;
      return child;
    }
  }
  return NULL;
}

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
