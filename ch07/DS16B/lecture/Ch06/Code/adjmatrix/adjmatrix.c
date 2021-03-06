#include"adjmatrix.h"

void CreateMGraph(MGraph *G){
  int i,j,k,w;
  printf("Input number of vertices and edges:\n");
  scanf("%d %d",&G->numVertices,&G->numEdges);
  for(i=0;i<G->numVertices;i++)
    scanf(&G->v[i]);
  for(i=0;i<G->numVertices;i++)
    for(j=0;j<G->numVertices;j++)
      G->e[i][j]=INF;
  for(k=0;k<G->numEdges;k++){
    printf("Input i, j and weight of (vi,vj):\n");
    scanf("%d %d %d",&i,&j,&w);
    G->e[i][j]=w;
    G->e[j][i]=G->e[i][j];
  }
}

typedef int Boolean
Boolean visited[MAXVERTEX];

void DFS(MGraph G, int i){
  int j;
  visited[i]=TRUE;
  printf("%c ", G.v[i]);
  for(j=0;j<G.numVertices;j++)
    if(G.e[i][j]==1 && !visited[j])
      DFS(G,j);
}

void DFSTraverse(MGraph G){
  int i;
  for(i=0;i<G.numVertices;i++)
    visited[i]=FALSE;
  for(i=0;i<G.numVertices;i++)
    if(!visited[i])
      DFS(G,i);
}


void BFSTraverse(MGraph G){
  int i,j;
  Queue Q;
  for (i=0;i<G.numVertices;i++)
    visited[i]=FALSE;
  InitQueue(&Q);
  for (i=0;i<G.numVertices;i++){
    if (!visited[i]){
      visited[i]=TRUE;
      printf("%c ",G.v[i]);
      EnQueue(&Q,i);
      while (!QueueEmpty(Q)){
	DeQueue(&Q,&i);
	for(j=0;j<G.numVertices;j++){
	  if(G.e[i][j]==1 && !visited[j]){
	    visited[j]=TRUE;
	    printf("%c ",G.v[j]);
	    EnQueue(&Q,j);
          }
	}
      }
    }
  }
}


void MiniSpanTree_Prim(MGraph G){
  int min,i,j,k;
  int adjvtx[MAXV];
  int lowcost[MAXV];
  lowcost[0]=0;
  adjvtx[0]=0;
  for(i=1;i<G.numVertices;i++){
    lowcost[i]=G.e[0][i];
    adjvtx[i]=0;
  }
  for(i=1;i<G.numVertices;i++){
    min=INF; j=1; k=0;
    while(j<G.numVertices){
      if(lowcost[j]!=0 && lowcost[j]<min){
	    min=lowcost[j];
	    k=j;
      }
      j++;
    }
    printf("(%d,%d)",adjvtx[k],k);
    lowcost[k]=0;
    for(j=1;j<G.numVertices;j++){
      if(lowcost[j]!=0 && G.e[k][j]<lowcost[j]){
	    lowcost[j]=G.e[k][j];
	    adjvtx[j]=k;
      }
    }
  }
}

void MiniSpanTree_Kruskal(MGraph G){
  int i,n,m;
  Edge edges[MAXE];
  int parent[MAXV];
  for(i=0;i<G.numVertices;i++)
    parent[i]=0;
  for(i=0;i<G.numEdges;i++){
    n=Find(parent,edges[i].begin);
    m=Find(parent,edges[i].end);
    if(n!=m){
      parent[n]=m;
      printf("(%d,%d)%d",edges[i].begin,edges[i].end,
	     edges[i].weight);      
    }
  }
}

int Find(int *parent, int f){
  while(parent[f]>0)
    f=parent[f];
  return f;
}

void ShortestPath_Dijkstra(MGraph G,int v0,){
  int v,w,k,min;
  int S[MAXV];  
  
  for (v=0;v<G.numvertices;v++){ 
    S[v]=0;	
    dist[v]=G.e[v0][v]; 
    prev[v]=0; 
  }
  dist[v0]=0;	
  S[v0]=1;			

  for(v=1;v<G.numVertices;v++){
    min=INF;
    for(w=0;w<G.numVertices;w++){
      if(!S[w] && dist[w]<min){
        k=w;
        min=dist[w];
      }
    }
    S[k]=1;
    for(w=0;w<G.numVertices;w++){
      if(!S[w] && (min+G.e[k][w]<dist[w])){
        dist[w]=min+G.e[k][w];
        prev[w]=k;
      }
    }
  }
}


void shortestPath_Floyd(MGraph G,Pathmatrix *P,
                        ShortPathTable *D){
  int v,w,k;
  for(v=0;v<G.numVertices;v++){
    for(w=0;w<G.numVertices;w++){
      (*D)[v][w]=G.e[v][w];
      (*P)[v][w]=w;
    }
  }
  for(k=0;k<G.numVertices;k++){
    for(v=0;v<G.numVertices;v++){
      for(w=0;w<G.numVertices;w++){
        if((*D)[v][w]>(*D)[v][k]+(*D)[k][w]){
          (*D)[v][w]=(*D)[v][k]+(*D)[k][w];
          (*P)[v][w]=(*P)[v][k];
        }
      }
    }
  }
}
