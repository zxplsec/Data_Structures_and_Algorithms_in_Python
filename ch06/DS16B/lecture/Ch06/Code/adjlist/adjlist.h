typedef char VertexType;
typedef int EdgeType;
typedef struct EdgeNode{
  int adjvtx;
  EdgeType weight;
  struct EdgeNode *next;
}EdgeNode;
typedef struct VertexNode{
  VertexType data;
  EdgeNode *firstedge;
}VertexNode, AdjList[MAXVERTEX];
typedef struct{
  AdjList adjList;
  int numVertices,numEdges;
}GraphAdjList;
