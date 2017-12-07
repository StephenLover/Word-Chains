// Graph ADT interface ... COMP9024 17s2
#include <stdbool.h>
#include <string.h>
typedef struct GraphRep *Graph;

// vertices are char
typedef char Vertex;

// edges are pairs of vertices (end-points)
typedef struct Edge {
   Vertex v;
   Vertex w;
} Edge;

Graph newGraph(int);
void  insertEdge(Graph, Edge);
void  removeEdge(Graph, Edge);
bool  adjacent(Graph, Vertex, Vertex);
void  showGraph(Graph);
void  freeGraph(Graph);
