#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    for(int i=0; i<n; i++)
        cin>>b[i];
    
    int ans[2*n],k=0;
    
    for(int i=0; i<2*n; i++)
    {
        if(i<n)
        {
            ans[i]=a[i];
        }
        else{
            ans[i]=b[k];
            k++;
        }
    }
    
    for(int i=0; i<2*n; i++){
        for(int j=i+1; j<2*n ;j++){
            if(ans[i]>ans[j])
            {
                int t=ans[i];
                ans[i]=ans[j];
                ans[j]=t;
            }
        }
    }
    
    cout<<ans[n]+ans[n-1];
    return 0;
}
