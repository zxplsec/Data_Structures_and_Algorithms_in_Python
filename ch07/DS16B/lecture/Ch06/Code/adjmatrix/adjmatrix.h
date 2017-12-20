typedef char VertexType;
typedef int EdgeType;

#define MAXV 100
#define INF 65535

typedef struct{
  VertexType v[MAXV];
  EdgeType e[MAXV][MAXV];
  int numVertices,numEdges;
}MGraph;

/* 用于存储最短路径下标的数组 */
int dist[MAXV];

/* 用于存储到各点最短路径的权值和 */
int prev[MAXV];
