#include <iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    int mul[n];
    for(int i=0; i<n; i++)
    {   
        mul[i]=1;
        for(int j=0; j<n; j++)
        {
            if (i==j)
            continue;
            mul[i]*=arr[j];
        }
        cout<<mul[i]<<" ";
    }
    return 0;
}
