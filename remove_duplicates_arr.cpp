#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0; i<n; i++)
        cin>>s[i];
    
    for(int i=0; i<n; i++)
    {   
        for(int j=i+1; j<n; j++)
        {
            if(s[i]==s[j])
            {
                n--;
                for(int k=j; k<n; k++)
                {
                    s[k]=s[k+1];
                }
                j--;
            }
        }
    }
    for(int i=0; i<n; i++)
        cout<<s[i]<<" ";
    return 0;
}
