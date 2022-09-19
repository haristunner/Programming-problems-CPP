#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0; i<n; i++)
     cin>>arr[i];
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(i<k)
        cout<<arr[k-i-1]<<" ";
        else{
            
        cout<<arr[n+j-1]<<" ";
        j--;
        }
    }
    return 0;
}
