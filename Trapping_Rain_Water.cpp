#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int n;
    cin>>n;
    int s[n];
    for(int i=0; i<n; i++)
      cin>>s[i];
    
    int sum=0,height=s[0];
    for(int i=1; i<n; i++)
    {
        if(s[i]<height)
        {
            sum+=(height-s[i]);
        }
    }
    
    cout<<sum;
    return 0;
}
