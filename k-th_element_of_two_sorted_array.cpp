#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int a[n],b[m];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];
        
    int res[n+m];
    for(int i=0; i<n+m; i++)
    {
        if(i<n)
        {
            res[i]=a[i];
        }
        else
        res[i]=b[i-m];
    }
    for(int i=0; i<n+m; i++)
    {
        for(int j=i+1; j<n+m; j++)
        {
            if(res[i]>res[j])
            {
                int t=res[i];
                res[i]=res[j];
                res[j]=t;
            }
        }
    }
    int k;
    cin>>k;
    cout<<res[k-1];
    return 0;
}
