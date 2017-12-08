#include"adjlist.h"

void CreateALGraph(GraphAdjList *G){
  int i,j,k;
  EdgeNode *e;

  printf("input number of nodes and edges:\n");
  scanf("%d,%d",&G->numVertices,&G->numEdges);
  for(i=0;i<G->numVertices;i++){
    scanf("%d",&G->adjList[i]->data);
    G->adjList[i].firstedge=NULL;
  }

  for(k=0;k<G->numEdges;k++){
    printf("input index of vertex on edge(vi,vj):\n");
    scanf("%d,%d",&i,&j);
    e=(EdgeNode *)malloc(sizeof(EdgeNode));
    e->adjvtx=j;
    e->next=G->adjList[i].firstedge;
    G->adjList[i].firstedge=e;

    e=(EdgeNode *)malloc(sizeof(EdgeNode));
    e->adjvtx=i;
    e->next=G->adjList[j].firstedge;
    G->adjList[j].firstedge=e;
  }
}

void DFS(GraphAdjList GL, int i){
  EdgeNode *p;
  visited[i]=TRUE;
  printf("%c ", GL->adjList[i].data);
  p=GL->adjList[i].firstedge;
  while(p){
    if(!visited[p->adjvtx])
      DFS(GL,p->adjvtx);
    p=p->next;
  }
}

void DFSTraverse(GraphAdjList GL){
  int i;
  for(i=0;i<GL->numVertices;i++)
    visited[i]=FALSE;
  for(i=0;i<GL->numVertices;i++)
    if(!visited[i])
      DFS(GL,i);
}


void BFSTraverse(GraphAdjList GL){
  int i;
  EdgeNode *p;
  Queue Q;
  for (i=0;i<GL->numVertices;i++)
    visited[i]=FALSE;
  InitQueue(&Q);
  for (i=0;i<GL->numVertices;i++){
    if (!visited[i]){
      visited[i]=TRUE;
      printf("%c ",GL->adjList[i].data);
      EnQueue(&Q,i);
      while (!QueueEmpty(Q)){
	    DeQueue(&Q,&i);
	    p=GL->adjList[i].firstedge;
	    while(p){
	      if (!visited[p->adjvtx]){
	        visited[p->adjvtx]=TRUE;
	        printf("%c ",GL->adjList[p->adjvtx].data);
	        EnQueue(&Q,p->adjvtx);
	      }
	      p=p->next;
	    }
      }
    }
  }
}
