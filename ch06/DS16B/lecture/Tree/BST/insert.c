void insert(BSTree * node, int key, iType item)
{
  BSTree ptr, tmp = mod_search(*node, key);
  if (tmp || !(*node)) {
    ptr = BSTree malloc(sizeof(*ptr));
    ptr->data.key  = key;
    ptr->data.item = item;
    ptr->lchild = ptr->rchild = NULL;
    if (*node) {
      if (key < tmp->data.key)
        tmp->lchild = ptr;
      else
        tmp->rchild = ptr;
    }
    else
      *node = ptr;
  } 
}
