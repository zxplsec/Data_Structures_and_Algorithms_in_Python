typedef int iType;
typedef struct {
  int key;
  iType item;
} ElemType;

typedef struct BSTNode {
  ElemType data;
  struct BSTNode * lchild, * rchild;
} BSTree, BSTNode;
