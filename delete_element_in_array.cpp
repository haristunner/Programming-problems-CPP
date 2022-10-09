#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=4;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x){
        while(i<n){
        arr[i]=arr[i+1];
        i++;
        } }
    }
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
