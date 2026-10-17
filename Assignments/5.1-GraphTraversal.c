#include <stdio.h>

// Q9 - rough draft, I am using DFS here
int graph[20][20], visited[20], n;

void dfs(int v)
{
    int i;
    visited[v] = 1; // I mark it before going to the next vertex
    printf("%d ", v+1);

    for(i=0; i<n; i++)
    {
        if(graph[v][i] == 1 && visited[i] == 0)
            dfs(i);
    }
}

int main()
{
    int i,j,start;
    printf("Number of locations (1-20): ");
    if(scanf("%d",&n) != 1 || n<1 || n>20)
        return 1;

    printf("Enter adjacency matrix, 1 for edge and 0 for no edge:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(scanf("%d",&graph[i][j]) != 1)
                return 1;

    printf("Starting vertex (1 to %d): ",n);
    if(scanf("%d",&start) != 1 || start<1 || start>n)
        return 1;

    printf("Visit order: ");
    dfs(start-1);
    printf("\n");

    // TODO: I still need to list the locations not reached from start
    // Right now I only print the component reachable from start.
    return 0;
}
