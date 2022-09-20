#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3]={3,1,1},b[3]={6,5,4};
    int n=3;
    for (int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(b[i]>b[j])
            {
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    int ans=0,k=n-1;
    for(int i=0; i<n; i++)
    {
        for(int j=k; j>=0; j--)
        {
            ans+=a[i]*b[j];
            k--;
            break;
        }
    }
    cout<<ans;
}
