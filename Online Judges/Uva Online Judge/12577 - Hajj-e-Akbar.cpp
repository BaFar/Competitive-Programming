
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Case=1;
    string word;
    while(cin>>word && word !="*")
    {
        if(word[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n",Case++);
        else
            printf("Case %d: Hajj-e-Asghar\n",Case++);

    }
    return 0;
}
