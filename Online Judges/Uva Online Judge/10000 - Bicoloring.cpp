#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<memory.h>
#include<queue>
#include<vector>
using namespace std;

class Graph
{
public:
    unsigned int nodes,edges,u,v;
    vector<int>graph[205];
    Graph(unsigned int nodes, unsigned int edges);
    void inputGraph();
    bool Bicolor(int source);

};

Graph::Graph(unsigned int nodes, unsigned int edges)
{

    this->nodes=nodes;
    this->edges=edges;
}

void Graph::inputGraph()
{
    int u,v;
    for(unsigned int i = 0; i < edges; i++)
    {
        scanf("%d %d",&u, &v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
}

bool Graph::Bicolor(int source)
{
    queue<int>Q;
    Q.push(source);
    int color[205];
    memset(color,-1,sizeof(color));//white
    color[source]=1;// red=1, green=2, blue=3,yellow=4

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        int sz=graph[u].size();

        for(int i = 0; i < sz; i++)
        {
            int v=graph[u][i];
            if(color[v] == -1)
            {
                if(color[u] == 4)
                    color[v]=1;
                else
                    color[v]=color[u]+1;

                Q.push(v);

            }

            if(color[v] == color[u])// two neighbor has same color
                return false;

        }
    }

    return true;
}


int main()
{
    unsigned int nodes,edges;

    while(scanf("%u",&nodes),nodes)
    {
        scanf("%u",&edges);

        Graph g(nodes, edges);
        g.inputGraph();

        int source=0;// asume source node is  always 0
        if(g.Bicolor(source))
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");

    }

    return 0;
}
