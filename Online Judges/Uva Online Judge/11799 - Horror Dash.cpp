#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,Case=1,number_caughters;
    long long speed=0,max_speed=0;
    char c;
    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&number_caughters);

        for(int i = 0; i < number_caughters; i++)
        {
            scanf("%d",&speed);

            if(i == 0)
                max_speed=speed;

            if(speed > max_speed)
                max_speed = speed;
        }
        printf("Case %d: %d\n",Case++,max_speed);

    }

    return 0;
}
