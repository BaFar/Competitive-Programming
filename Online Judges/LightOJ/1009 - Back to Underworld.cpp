//Accepted
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int status[200050];
int BFS(vector<int>race[], int u)
{
    int current_node,st,o_st,k,v,sz,i;
    int arr[3]={0,0,0}; // arr[1] is one race and arr[2] is another race
    queue<int> q;
    //q.clear();


    q.push(u);
    status[u]=1; // if status is 1 then it is group 1 if status is -1 then this node for group or race 2
    arr[1]++;


    while(!q.empty())
    {
       u = q.front();
        st=status[u];

        o_st=st * (-1);// toggle race or status
        q.pop();

        if (st==1)// toggle to increse desired race
            k=2;
        else if(st==-1)
            k=1;
       // else printf("Bug\n");

        sz=race[u].size();

        for(i=0; i < sz; i++)
        {
            v =race[u][i];
            if(status[v]==0)
            {
                status[v]=o_st;
                q.push(v);
                arr[k]++;
            }
        }
    }

    return (arr[1] > arr[2])  ? arr[1]: arr[2] ;

}

int main()
{

    int T,C=1,u,v,MAX,store[20050];
    long long N,temp,max_node,i,j;
    scanf("%d",&T);

    while(T--)
    {

       std::vector <int> race[100050];
       memset(store,1,sizeof(store));// store is used to track which node appear in the graph
       memset(status,0,sizeof(status));// status is used to track which node is visited

        scanf("%lld",&N);
        max_node=0;// max_node to find out max node of the graph
        MAX=0;

        for(i=0; i < N; i++)
        {
            scanf("%d %d",&u, &v);

            race[u].push_back(v);
            race[v].push_back(u);
            if(u>max_node)
                max_node=u;
            if(v>max_node)
                max_node=v;

                store[u]=store[v]=0;
        }

        MAX=BFS(race,v);// first call of BFS


        for(i=1; i<=max_node; i++) // as graph may be disconnected so every time call BFS if the is unvisited node
            if(store[i]==0 && status[i]==0)
                MAX+=BFS(race,i);




        printf("Case %d: %d\n",C++,MAX);
    }


    return 0;
}
