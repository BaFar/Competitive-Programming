#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int T,height,low,high,a,b,c,d,e,f,g,h,i,j;
    scanf("%d",&T);
    printf("Lumberjacks:\n");

    while(T--)
    {

        scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

         if(a<=b && b<=c && c<=d && d<=e && e<=f && f<=g && g<=h && h<=i && i<=j)
             printf("Ordered\n");

        else if( a>= b && b>=c && c>=d && d>=e && e>=f && f>=g && g>=h && h>=i && i>=j)
            printf("Ordered\n");

        else
            printf("Unordered\n");
    }


    return 0;
}
