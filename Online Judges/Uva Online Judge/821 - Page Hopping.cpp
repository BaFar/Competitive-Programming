#include<bits/stdc++.h>
using namespace std;
#define inf 15000

void reset(int matrix[][110])
{
    for(int i = 0; i < 110; i++)
        for(int j = 0; j < 110; j++)
            matrix[i][j] = inf;

    for(int i = 0; i < 110; i++)
        matrix[i][i]=0;// as cycle exists in the graph
}

void FloyedWarshall(int matrix[][110],bool valid[])
{
    int i,j,k;
    for(k = 1; k < 101; k++ )
    {
        if(!valid[k]) continue;
        for(i = 1; i < 101; i++)
        {
             if(!valid[i]) continue;
            for(j = 1; j < 101; j++)
            {
                if(!valid[j]) continue;
                if(matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }

        }
    }

/*
     printf("Test printing of graph in FloyedWarshall: \n");

         for(int i = 0; i < 10; i++)
         {
            printf("\n");
            for(int j = 0; j < 10; j++)
            {
                printf("%5d ",matrix[i][j]);
            }

         }

        printf("\n\n\n");*/

}

int  find_cost(int matrix[][110],bool valid[])
{
    int i,j,k,cost=0;
    for(int i = 0; i < 101; i++)
        if(valid[i])
        for(int j = 0; j < 101; j++)
            if(valid[j])
            cost += matrix[i][j];

    return cost;

}




int main()
{
  //  freopen("821 input.txt","r",stdin);

    int matrix[110][110],NumberOfpair,i,j,k,u,v,node,C=1;
    bool valid[110];

    while(1)
    {
        reset(matrix);
        memset(valid,false,sizeof(valid));

        int flag=0;
        while(scanf("%d %d",&u, &v),(u!=0 && v!=0))
        {
            matrix[u][v] = 1;
            valid[u]=true;
            valid[v]=true;
            flag=1;


        }
        if(flag==0) break;//exit all text case

        node=0;
        for(i =1; i<101; i++)
            if(valid[i])
              node++;

        NumberOfpair = node *(node-1);

        FloyedWarshall(matrix,valid);
        int cost = find_cost(matrix,valid);

       /* printf("Test printing of graph in main: \n");

         for(int i = 0; i < 10; i++)
         {
                printf("\n");
                for(int j = 0; j < 10; j++)
                {
                    printf("%5d ",matrix[i][j]);
                }
         }

           // matrix[i][j] = inf;*/


        double clicks= (double) cost/NumberOfpair;

        printf("Case %d: average length between pages = %.3lf clicks\n",C++,clicks);
    }


    return 0;
}
