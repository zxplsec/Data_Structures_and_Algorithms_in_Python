#define MAX_TREE_SIZE 100
typedef struct CTNode {		/* 孩子结点 */
  int child;
  struct CTNode *next;
} * ChildPtr;
typedef struct {			/* 表头结构 */
  ElemType data;
  ChildPtr firstchild;
} CTBox;
typedef struct {			/* 树结构 */
  CTBox nodes[MAX_TREE_SIZE];	/* 结点数组 */
  int r, n;			/* 根的位置和结点数 */
} Tree;
