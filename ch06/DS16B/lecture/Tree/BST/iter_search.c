ElemType * iter_search(BSTree root, int key)
{
  while (root) {
    if (key == root->data.key) return &(root->data);
    if (key < root->data.key)
      root = root->lchild;
    else 
      root = root->rchild;
  }
  return NULL;
}
