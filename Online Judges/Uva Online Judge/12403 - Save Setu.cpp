
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i;
    long long int Amount=0,taka=0;
    string command;
    scanf("%lld",&T);

    while(T--)
    {

        cin>>command;
        if(command[0]=='d')
        {
            scanf("%d",&taka);
            Amount=Amount+taka;
        }
        else
            printf("%lld\n",Amount);
    }

    return 0;
}
