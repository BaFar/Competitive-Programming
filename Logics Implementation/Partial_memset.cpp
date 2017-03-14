#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    memset(arr,-1,sizeof(arr));
    for(int i = 0; i < 10; i++)
        printf("%d ",arr[i]);
    printf("\n\n\n\n");
    
    // on the third perameter  we just sent the toatal size of number of elements ,,so first find size of data type them multiply with the number of
    //elements you want to memset suppose 5
    //((sizeof(arr)/sizeof(int)*5))
    
    int number_of_elements=5;
    int y=sizeof(int);
    memset(arr,0,(number_of_elements*y));
     for(int i = 0; i < 10; i++)
        printf("%d ",arr[i]);
    printf("\n\n\n\n");



    return 0;

}
