// 图的深度遍历
typedef char VertexType;
typedef int VertexEdge;
typedef struct EdgeNode{
    int adjvex;
    VertexEdge weight;
    struct EdgeNode *next;
}EdgeNode;

typedef struct VertexNode{
    VertexType data;
    EdgeNode *firstedge;
}VertexNode, AdjList[MAXVEX];

typedef struct{
    AdjList adjList;
    int numVertexes, numEdges;
}Graph;

void DFS(Graph G, int i, int t) 
{
    EdgeNode *p;
    visited[i] = TRUE;
    if (G->adjList[i].data == t) return;
    p = G->adjList[i].firstedge;
    while (p) {
        if (!visited[p->adjvex]) {
            DFS(G, p->adjvex, t);
        }
        p = p->next;
    }   
}

void DFSTraverse(Graph G, int t)
{
    int i;
    for (i=0; i<G->numVertexes; i++) {
        visited[i] = FALSE;
    }
    for (i=0; i<G->numVertexes; i++) {
        if (!visited[i]) {
            DFS(G, i, t);
        }
    }
}