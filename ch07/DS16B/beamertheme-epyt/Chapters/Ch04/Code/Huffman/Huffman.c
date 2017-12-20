#include "Huffman.h"

Queue *Create_Empty_Queue(){
  QueueNode *QNode;
  Queue *HQueue;

  QNode=(QueueNode*)malloc(sizeof(QueueNode));
  QNode->next=NULL;

  HQueue=(Queue*)malloc(sizeof(Queue));
  HQueue->front=HQueue->rear=QNode;

  return HQueue;
}

int EnterQueue(Queue *head,HuffNode *data){
  QueueNode *temp;

  temp=(QueueNode *)malloc(sizeof(QueueNode));
  temp->data=data;
  temp->next=NULL;

  head->rear->next=temp;
  head->rear=temp;

  return 0;
}

int OrderEnterQueue(Queue *head,HuffNode *p){
  QueueNode *m=head->front->next;
  QueueNode *n=head->front;
  QueueNode *temp;

  while(m){
    if (m->data->weight < p->weight){
      m=m->next;
      n=n->next;
    } else 
      break;
  }

  if(m==NULL){
    temp=(QueueNode *)malloc(sizeof(QueueNode));
    temp->data=p;
    temp->next=NULL;
    
    n->next=temp;
    head->rear=temp;    
    return 0;
  }
  
  temp=(QueueNode *)malloc(sizeof(QueueNode));
  temp->data=p;
  n->next=temp;
  temp->next=m;
  return 0;
}

int _Is_Empty_Queue(Queue *head){
  if(head->front->next->next==NULL){
    printf("Queue is empty!\n");
    return 1;
  }
  return 0;
}

int Is_Empty_Queue(Queue *head){
  if(head->front==head->rear)
    return 1;
  else
    return 0;
}

HuffNode *DeleteQueue(Queue *head){
  QueueNode *temp;

  temp=head->front;
  head->front=temp->next;
  free(temp);
  temp=NULL;
  return head->front->data;
}

HuffNode *Create_Huffman_Tree(Queue *head){
  HuffNode *right,*left,*current;

  while(!_Is_Empty_Queue(head)){
    left =DeleteQueue(head);
    right=DeleteQueue(head);
    current=(HuffNode *)malloc(sizeof(HuffNode));
    current->weight=left->weight+right->weight;
    current->rchild=right;
    current->lchild=left;
    OrderEnterQueue(head,current);
  }

  return head->front->next->data;
}

//Huffman Code
int HuffmanCode(HuffNode *root){
  HuffNode *current = NULL;
  Queue *queue = NULL;

  queue = Create_Empty_Queue();

  EnterQueue(queue, root);

  while(!Is_Empty_Queue(queue)){
      current = DeleteQueue(queue);
      
      if(current->rchild == NULL && current->lchild == NULL)
	printf("%c:%d %s\n",current->data,current->weight,current->code);
      
      if(current->lchild){
	strcpy(current->lchild->code,current->code);
	strcat(current->lchild->code,"0");
	EnterQueue(queue, current->lchild);
      }
      
      if(current->rchild){
	strcpy(current->rchild->code,current->code);
	strcat(current->rchild->code,"1");
	EnterQueue(queue, current->rchild);
      }
  } 
  return 0;
}



/* Generate a node */
HuffNode *MakeNode(ElemType item,HuffNode *lchild,HuffNode *rchild,int weight){
  HuffNode *pnode=(HuffNode *)malloc(sizeof(HuffNode));
  if(pnode){
    pnode->data=item;
    pnode->lchild=lchild;
    pnode->rchild=rchild;
    pnode->weight=weight;
    /* pnode->code=code; */
  }
  return pnode;
}

/* Return a BiTree's depth */
int GetDepth(HuffTree tree){
  int cd,ld,rd;
  cd=ld=rd=0;
  if(tree){
    ld=GetDepth(tree->lchild);
    rd=GetDepth(tree->rchild);
    cd=(ld>rd?ld:rd);
    return cd+1;
  }else
    return 0;
}
