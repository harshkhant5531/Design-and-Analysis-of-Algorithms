#include <stdio.h>

struct Edge
{
    int source;
    int destination;
    int weight;
};

int cmpa(struct Edge *a,struct Edge *b){
    return a->weight - b->weight;
}

int find(int parent[],int i){

    if(parent[i]==i){
        return i;
    }

    return  find(parent,parent[i]);

}

void unionSet(int parent[],int u,int v){
    parent[u]=v;
}

int findMinCost(int V, int E, struct Edge edges[])
{
    int parent[V];
    int edge = 0;
    struct Edge mst[V-1];
    int minEdges=0;
    int minCost=0;

    for(int i=0;i<V;i++){
        parent[i]=i;
    }

     int n=sizeof(edges)/sizeof(edges[0]);
     qsort(edges,n,sizeof(struct Edge),cmpa);

     for(int i=0;i<E;i++){
        int u=edges[i].source;
        int v=edges[i].destination;
        int cost=edges[i].weight;

        int ucomp=find(parent,u);
        int vcomp=find(parent,v);

        if(ucomp !=vcomp){
            printf("%d - %d = %d\n",u ,v, cost);

            mst[edge++]=edges[i];
            minCost+=cost;
            minEdges++;
            unionSet(parent,ucomp,vcomp);
            if(minEdges >=  V)break;
        }

     }
}

void main()
{
    int V = 7;
    int E = 12;

    struct Edge edges[] =
        {
            {0, 1, 1},
            {1, 2, 2},
            {2, 5, 6},
            {5, 6, 3},
            {3, 6, 4},
            {0, 3, 4},
            {3, 4, 3},
            {4, 5, 8},
            {1, 3, 6},
            {1, 4, 4},
            {2, 4, 5},
            {4, 6, 7}
        };



       
        

    int min_cost = findMinCost(V, E, edges);

    printf("\nMinimum cost: %d ",min_cost);
}