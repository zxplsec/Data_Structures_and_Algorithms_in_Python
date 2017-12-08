#define MAX_TREE_SIZE 100
typedef int ElemType;
typedef struct {
  ElemType data; 		/* 结点数据 */
  int parent;			/* 双亲位置 */
} PTNode;
typedef struct {
  PTNode nodes[MAX_TREE_SIZE];	/* 结点数组 */
  int r, n;			/* 根的位置和结点数 */
} Tree;
