#include<bits/stdc++.h>
using namespace std;

#define INF 20000
int matrix[1000 + 5][1000 + 5];
queue <int >Q;
int Nrow,Ncolumn;

void reset()
{
    int sz = sizeof(int);
    int elements = Ncolumn+2;
    for(int i = 0; i < Nrow+2; i++)
        memset(matrix[i], -1,(sz*elements));// partially memset

    Q = queue <int > ();

}

void input(int M_rows)//takes partial input
{
    int row,col,Nmines;
    for(int i = 0; i < M_rows; i++)
        {
            scanf("%d",&row);
            scanf("%d", &Nmines);
            for(int j = 0; j < Nmines; j++)// takes the pos of mines in this row
            {
                scanf("%d", &col);
                matrix[row][col]=INF;// set the mines pos as infinity

            }

        }
}

bool valid(int r, int c)
{
    if(r >= 0 && r < Nrow && c >= 0 && c < Ncolumn && matrix[r][c] < 0)
        return true;
    else
        return false;
}

void Insert(int value, int r, int c)
{
    matrix[r][c]=value + 1;
    Q.push(r);
    Q.push(c);
}

int find_time(int source_R, int source_C, int dest_R, int dest_C)
{

    Q.push(source_R);
    Q.push(source_C);
    matrix[source_R][source_C]=0;

    while(!Q.empty())
    {
        int r=Q.front();
            Q.pop();
        int c=Q.front();
            Q.pop();

            if(valid(r+1,c))
                Insert(matrix[r][c],r+1,c);
            if(valid(r-1,c))
                Insert(matrix[r][c],r-1,c);
            if(valid(r,c+1))
                Insert(matrix[r][c],r,c+1);
            if(valid(r,c-1))
                Insert(matrix[r][c],r,c-1);

            if(matrix[dest_R][dest_C]!=-1)
                break;
    }

    return matrix[dest_R][dest_C];

}


/** main function **/
int main()
{
    //freopen("10653 input.txt","r",stdin);

    int M_rows,source_R,source_C,dest_R,dest_C,time;
    while(scanf("%d %d", &Nrow, &Ncolumn) && ( Nrow && Ncolumn))
    {
        reset();

        scanf("%d", &M_rows);
        input(M_rows);// takes the position of mines
        scanf("%d %d %d %d", &source_R, &source_C, &dest_R, &dest_C);//takes source and destination

    time=find_time(source_R, source_C, dest_R, dest_C);
    printf("%d\n",time);//output

    }

    return 0;
}
