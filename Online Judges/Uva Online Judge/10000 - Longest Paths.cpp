#include<bits/stdc++.h>
using namespace std;
//accepted

int destnode;
int dijkstra(vector<int>vec[],int source,int nodes)
{
    queue<int> Q;
    Q.push(source);
    int cost[100];
    memset(cost,0,sizeof(cost));
    cost[source]=0;

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int j=0; j<vec[u].size(); j++)
        {
            int v = vec[u][j];
            if(cost[v] < (cost[u]+ 1) )//aslo works for unvisited*cost[v]==0,, enqueue the node for further use
               {
                   Q.push(v);
                    cost[v]=cost[u]+1;
               }

        }
    }

    int maxcost=0;

    for(int i=1; i<=nodes; i++)//find max length,,with min node number
    {
        if(cost[i]>maxcost)
        {
            maxcost=cost[i];
            destnode=i;//global variable
        }

    }

    return maxcost;

}

int main()
{
    //freopen("10000 input.txt","r",stdin);

    int T,n,s,u,v,source,C=1;

    vector<int> graph[110];

    while(scanf("%d",&n),n)
    {
        for(int p = 0; p<=n+5; p++)
            graph[p].clear();

        scanf("%d",&source);

        while(scanf("%d %d",&u,&v) &&(u!=0 && v!=0))
        {
            graph[u].push_back(v);
        }

       int maxcost= dijkstra(graph,source,n);
       printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",C++,source,maxcost,destnode);
       destnode=0;
    }

    return 0;
}
