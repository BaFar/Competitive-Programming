#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,Case=1,value,temp,N,high,low;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        high=low=0;

        for(int i=0; i<N; i++)
        {
            scanf("%d",&value);

            if(i==0)
            {
                temp=value;
                continue;
            }


            if(value > temp)
                high++;
            else if(value < temp)
                low++;
            else
            {

            }
            temp=value;
        }

        printf("Case %d: %d %d\n",Case++,high,low);
    }


    return 0;
}
