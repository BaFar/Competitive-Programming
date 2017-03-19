#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool arr[1000000];

    int n,next,pre,dif;

    pre=0;
    while(scanf("%d",&n)==1)
    {
        memset(arr,false,sizeof(int)*(n+1));
        int tempn=n;
        pre=0;
        while(tempn--)
        {
        scanf("%d",&next);
        dif=fabs(next-pre);
        arr[dif]=true;
        pre=next;
        }

        int i;
        for( i=1; i<n; i++)
            if(arr[i]==false)
        {
            printf("Not jolly\n");
            break;
        }
        if(i==n)
            printf("Jolly\n");

    }



    return 0;
}
