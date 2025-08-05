#include<stdio.h>
#define V 8

int graph[V][V] = {
    {0, 1, 1, 1, 1, 0, 0, 0},
    {1, 0, 0, 0, 0, 1, 0, 0},
    {1, 0, 0, 0, 0, 1, 0, 0},
    {1, 0, 0, 0, 0, 0, 1, 0},
    {1, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 0, 0, 1, 1}
};

int visited[V];

void DFS(int node) {
    visited[node] = 1;
    printf("%d ", node);

    for (int i = 0; i < V; i++) {
        if (graph[node][i] == 1 && visited[i] == 0) {
            DFS(i);
        }
    }
}

int main() {
    for (int i = 0; i < V; i++) {
        visited[i] = 0;
    }

    printf("DFS traversal starting node 0:\n");
    DFS(0);

    return 0;
}