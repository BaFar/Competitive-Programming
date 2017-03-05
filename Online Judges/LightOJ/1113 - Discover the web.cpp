#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("1113 input.txt","r",stdin);
    stack<string> Backward;
    stack<string> Forward;

    int T,i,C=1;
    string str,sub_str,current_page;
    scanf("%d",&T);
    while(T--)
    {
        Backward=stack<string>();
        Forward=stack<string>();
        current_page="http://www.lightoj.com/";
        cout<<"Case "<<C++<<":\n";
        //Backward.push(str);
        while(1)
        {

            cin>>str;
            if(str[0]=='V')
            {
                cin>>sub_str;
                Backward.push(current_page);
               Forward=stack<string>();
                current_page = sub_str;
                cout<<sub_str<<endl;

            }
            else if(str[0]=='B')
            {

                if(Backward.empty())
                {
                     cout<<"Ignored"<<endl;
                }
                else
                {
                    Forward.push(current_page);
                    current_page=Backward.top();
                    Backward.pop();
                    cout<<current_page<<endl;
                }


            }
            else if(str[0]=='F')
            {
                if(Forward.empty())
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    Backward.push(current_page);
                    current_page=Forward.top();
                    Forward.pop();
                    cout<<current_page<<endl;
                }


            }
            else if(str[0]=='Q')
            {
                break;
            }
            else
            {

            }


        }
    }



    return 0;
}
