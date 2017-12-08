ElemType * search(BSTree root, int key) 
{
  if (!root) return NULL;
  if (key == root->data.key) return &(root->data);
  if (key < root->data.key)
    return search(root->lchild, key);
  return search(root->rchild, key);
}
