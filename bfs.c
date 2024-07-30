#include <stdio.h>
#include <stdlib.h>
void bfs(int a[10][10],int n,int visited[10],int source)
{
    int queue[10],rear=-1,front=0,delnod,i;
    visited[source]=1;
    queue[++rear]=source;
    while(front<=rear)
    {
        delnod=queue[front++];
        for(i=1;i<=n;i++)
        {
            if(a[delnod][i]==1 && visited[i]==0)
            {
                queue[++rear]=i;
                visited[i]=1;
            }
        }
    }
}
int main()
{
    int n,a[10][10],i,j,visited[10],count=0;
    printf("\nRead number of nodes:");
    scanf("%d",&n);
    printf("\n Read adjacency matrix\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);

        }
    }

    for(i=1;i<=n;i++)
         visited[i]=0;
    for(i=1;i<=n;i++){
        if(visited[i]==0)
        {
            bfs(a,n,visited,i);
            count++;
        }
    }
    if(count==1)
        printf("\nGraph connected,%d component",count);
    else
        printf("Graph not connected,%d component",count);
    return 0;
}
