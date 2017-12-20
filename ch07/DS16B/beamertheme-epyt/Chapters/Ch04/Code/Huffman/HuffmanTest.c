#include "Huffman.h"
int main(void){
  Queue *head;
  HuffNode *root;
  HuffNode *node[100];
  ElemType ch,cc[100];
  int weight[100]={0};
  int i,k=0;
  while(1){
    scanf("%c",&ch);
    if(ch=='\n'){
      break;
    }else{
      cc[k++]=ch;
    }
  }
 
  for(i=0;i<k;i++)
      weight[cc[i]-'A']++;

  k=0;
  for(i=0;i<9;i++){
    if(weight[i]>0){
      node[k++]=MakeNode('A'+i,NULL,NULL,weight[i]);
    }
  }
  /* printf("%d\n",k); */
  /* HuffNode *n1=MakeNode('A',NULL,NULL,5); */
  /* HuffNode *n2=MakeNode('B',NULL,NULL,3); */
  /* HuffNode *n3=MakeNode('C',NULL,NULL,7); */
  /* HuffNode *n4=MakeNode('D',NULL,NULL,12); */
  /* HuffNode *n5=MakeNode('E',NULL,NULL,1); */
  /* HuffNode *n6=MakeNode('F',NULL,NULL,6); */
  /* HuffNode *n7=MakeNode('G',NULL,NULL,9); */

  head=Create_Empty_Queue();
  for(i=0;i<k;i++)
    OrderEnterQueue(head,node[i]);
  /* OrderEnterQueue(head,n1); */
  /* OrderEnterQueue(head,n2); */
  /* OrderEnterQueue(head,n3); */
  /* OrderEnterQueue(head,n4); */
  /* OrderEnterQueue(head,n5); */
  /* OrderEnterQueue(head,n6); */
  /* OrderEnterQueue(head,n7); */
 
  root=Create_Huffman_Tree(head);
  printf("Depth of Huffman Tree is %d\n",GetDepth(root));
  HuffmanCode(root);  
}
