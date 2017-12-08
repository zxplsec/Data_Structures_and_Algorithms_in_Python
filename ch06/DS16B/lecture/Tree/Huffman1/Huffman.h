#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char ElemType;

/* Huffman tree's node */
typedef struct HuffNode{
  ElemType data;
  struct HuffNode *rchild;
  struct HuffNode *lchild;

  // new member  
  int weight;
  ElemType code[20];
}HuffNode, *HuffTree;

/* Queue */
typedef struct QueueNode{
  HuffNode *data;
  struct QueueNode *next;
}QueueNode;

typedef struct{
  QueueNode *front;
  QueueNode *rear;
} Queue;

HuffNode *Create_Huffman_Tree(Queue *head);
int OrderEnterQueue(Queue *head,HuffNode *p);
Queue *Create_Empty_Queue();
int EnterQueue(Queue *head,HuffNode *data);
HuffNode *DeleteQueue(Queue *head);
int Is_Empty_Queue(Queue *head);
int HuffCode(HuffNode *root);
HuffNode *MakeNode(ElemType item,HuffNode *lchild,HuffNode *rchild,int weight);
int GetDepth(HuffTree tree);
