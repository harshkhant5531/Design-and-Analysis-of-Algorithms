#include<stdio.h>
#define V 8

int queue[V];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == V - 1)
        return;
    if (front == -1) front = 0;
    queue[++rear] = value;
}

int dequeue() {
    if (front == -1 || front > rear)
        return -1;
    return queue[front++];
}

int isEmpty() {
    return front == -1 || front > rear;
}

void bfs(int graph[V][V], int start) {
    int visited[V] = {0};

    enqueue(start);
    visited[start] = 1;

    while (!isEmpty()) {
        int u = dequeue();
        printf("%d ",u);

        for (int i = 0; i < V; i++) {
            if (graph[u][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int graph[V][V] = {
        {0, 1, 1, 1, 1, 0, 0, 0},
        {1, 0, 0, 0, 0, 1, 0, 0},
        {1, 0, 0, 0, 0, 1, 0, 0},
        {1, 0, 0, 0, 0, 0, 1, 1},
        {1, 0, 0, 0, 0, 0, 1, 1},
        {0, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0}
    };

    printf("BFS traversal starting node 0:\n");
    bfs(graph, 0);

    return 0;
}