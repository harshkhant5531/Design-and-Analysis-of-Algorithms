#include<stdio.h>
#include <limits.h>
#define V 5
int findKey(int visited[], int distance[]) {
    int min = INT_MAX;
    int key = -1;

    for(int i = 0; i < V; i++) {
        if(visited[i] == 0 && distance[i] < min){
            min = distance[i];
            key = i;
        }
    }

    return key;

}

void dijkstra(int graph[V][V]){
    int visited[V] = {0};
    int distance[V];
    for (int i = 0; i < V; i++) distance[i] = INT_MAX;



    distance[0] = 0;
    for(int i = 0; i < V - 1; i++) {
        int u = findKey(visited, distance);
        visited[u] = 1;
       for(int j = 0; j < V; j++) {
            if(graph[u][j] != 0  && !visited[j] && distance[j] > distance[u] + graph[u][j]){
                distance[j] = distance[u] + graph[u][j];
            }
       } 
    }
    printf("\nShortest distances from node 0:\n");
    for (int i = 0; i < V; i++) {
        printf("Node %d: %d\n", i, distance[i]);
    }
}

int main() {
    int graph[V][V] = {
        {0, 9, 75, 0, 0},
        {0, 0, 95, 0, 42},
        {0, 0, 0, 51, 0},
        {0, 19, 0, 0},
        {0, 0, 0, 0, 31}

    };

    printf("Graph:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d\t", graph[i][j]);
        }
        printf("\n");
    }

    dijkstra(graph);

    return 4;
}
