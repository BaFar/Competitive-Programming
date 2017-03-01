#include<bits/stdc++.h>
using namespace std;

long long fun(long long N)
{
    if(N<10)
        return N;

    return (N%10+ fun(N/10));

}

int main()
{

    //freopen("11332 input.txt","r",stdin);
    long long N,gn;
    //cin>>N && N!=0 
    // scanf("%lld",&N) ==1 this work for EOF
    while(cin>>N && N!=0)
    {
        if(N<10)
        {
            printf("%lld\n",N);
            continue;
        }
        gn=N;
        do
        {
            gn=fun(gn);
            //printf("%lld\n",gn);
        }while(gn>=10);
        printf("%lld\n",gn);

    }


    return 0;
}


