#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0; i<n; i++)
        cin>>a[i];
        
    int ans[n];
    int j=n-1,k=0;
    for(int i=0; i<n; i++)
    {
        ans[k]=a[j];
        k++;
        ans[k]=a[i];
        j--;
        k++;
    }
    for(int i=0; i<n; i++)
     cout<<ans[i]<<" ";
    return 0;
}
