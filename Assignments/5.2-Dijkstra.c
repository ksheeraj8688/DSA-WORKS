#include <stdio.h>

#define INF 999999

// Q10 - unfinished draft, not giving shortest paths yet
int main()
{
    int cost[20][20],visited[20]={0},dist[20];
    int n,i,j,source,count,min,next;

    printf("Number of cities (1-20): ");
    if(scanf("%d",&n) != 1 || n<1 || n>20)
        return 1;

    // I use -1 for no road, so a road can also have zero cost
    printf("Enter costs (-1 for no road, 0 on diagonal):\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(scanf("%d",&cost[i][j]) != 1)
                return 1;
            if(cost[i][j] < -1 || cost[i][j] >= INF)
            {
                printf("Use -1 or a cost from 0 to 999998\n");
                return 1;
            }
        }
    }

    printf("Source city (1 to %d): ",n);
    if(scanf("%d",&source) != 1 || source<1 || source>n)
        return 1;
    source--;

    // I start with direct road costs from the source
    for(i=0;i<n;i++)
    {
        if(cost[source][i] == -1)
            dist[i]=INF;
        else
            dist[i]=cost[source][i];
    }
    dist[source]=0;
    visited[source]=1;

    for(count=0;count<n-1;count++)
    {
        min=INF;
        next=-1;
        for(i=0;i<n;i++)
        {
            if(visited[i]==0 && dist[i]<min)
            {
                min=dist[i];
                next=i;
            }
        }
        if(next==-1)
            break;
        visited[next]=1;

        // TODO: I need to update neighbour distances through next here.
        // Selecting the minimum alone does not finish Dijkstra.
    }

    printf("\nDraft distances - direct roads only, NOT final shortest paths\n");
    for(i=0;i<n;i++)
    {
        if(dist[i]==INF)
            printf("City %d : no direct road\n",i+1);
        else
            printf("City %d : %d\n",i+1,dist[i]);
    }

    return 0;
}
