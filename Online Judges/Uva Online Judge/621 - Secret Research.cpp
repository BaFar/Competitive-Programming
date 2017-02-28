#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,SIZE=0;
    scanf("%d",&T);
    string str;

    while(T--)
    {
        cin>>str;
        SIZE=str.size();

        if(str=="1" || str=="4" || str=="78")
            printf("+\n");
        else if(str[SIZE-2]=='3' && str[SIZE-1]=='5')
            printf("-\n");
        else if(str[0]=='9' && str[SIZE-1]=='4')
            printf("*\n");
        else
        {
            printf("?\n");
        }

    }
    return 0;
}
