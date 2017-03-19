#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while(getline(cin,str))
    {
        int sz=str.size();

        for(int i=0; i<sz; i++)
            str[i]=str[i]-7;
        cout<<str<<endl;

    }


    return 0;
}
