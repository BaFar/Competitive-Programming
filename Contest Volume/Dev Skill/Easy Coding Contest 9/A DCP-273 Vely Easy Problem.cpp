#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T,flag;
    string str;
    //freopen("inputA.txt","r",stdin);

    scanf("%d",&T);
    while(T--)
    {
        flag=0;
        cin>>str;
        int SIZE=str.size();
        for(int i=0; i<SIZE; i++)
        {

            if(str[i]=='r')
            {
                 flag=1;
                 break;
            }

        }

        if(flag==1)
            printf("Not vely easy\n");
        else
            printf("Vely easy\n");

    }
    return 0;
}
