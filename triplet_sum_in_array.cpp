#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(a[i]+a[j]+a[k]==x)
                {
                    cout<<"1";
                    return 0;
                }
            }
        }
    }
    cout<<"0";
    return 0;
}
