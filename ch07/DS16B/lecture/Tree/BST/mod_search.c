BSTree mod_search(BSTree root, int key)
{
  if (!root) return NULL;
  while (root) {
    if (key == root->data.key) return NULL;
    if (key < root->data.key) {
      if (!root->lchild)
        return root;
      root = root->lchild;
    }
    else {
      if (!root->rchild)
        return root;
      root = root->rchild;
    }
  }
}
