#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("10963 input.txt","r",stdin);
    int T,i,column,y1,y2,diff;
    bool flag;
    scanf("%d",&T);
    //printf("\n");
    while(T--)
    {
        scanf("%d",&column);
        flag=true;
        for(i=0; i<column; i++)
        {
            scanf("%d %d",&y1, &y2);
            y2--;
             if(i==0)
                diff=fabs(y1-y2);

            if(diff!=fabs(y1-y2))
                flag=false;

        }

        if(flag==true)
            printf("yes\n");
        else
            printf("no\n");

            if(T!=0)
                printf("\n");
    }


    return 0;
}
