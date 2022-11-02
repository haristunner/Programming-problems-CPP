#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int start=0,end=0;
    int sum=0, max=INT_MIN;
    for(int i=0; i<n; i++)
    {   
       sum+=a[i];    
       if(sum>max){
       max=sum;
       end=i;
    }
    if(sum<0){
        sum=0;
        start=i+1;
    }}
    for(int i=start; i<=end; i++)
        cout<<a[i]<<" ";
    cout<<endl;    
    cout<<max;
    return 0;
}
