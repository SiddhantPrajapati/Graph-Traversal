//graph traveral
#include<stdio.h>

int source,v[10];
int dfs();
int bfs();
int main()
{
    int q[10][10],i,j,data,ch;
    printf("\n Enter the number of vertices:");
    scanf("%d",&v);
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            printf("\nEnter element:");
            scanf("%d",&data);
        }
    }
    printf("\n your matrix.");
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            printf("\t %d",data);

        }
        printf("\n");
    }
    printf("\n Enter your choise:\n 1)bfs \n 2)dfs");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        bfs();
        break;
    case 2:
        dfs();
        break;
    default :
        printf("\n enter valid choise.");
        break;
    }
}
int bfs()
{
    int i=0,j=0;
    printf("\n Enter source node:");
    scanf("%d",&source);
    while([i][j])
}
