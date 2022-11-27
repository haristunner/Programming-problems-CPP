#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int n;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
      cin>>s[i];
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {   
            if((s[i]+s[j])<(s[j]+s[i])){
                string t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    for(int i=0; i<n; i++)
     cout<<s[i];
    return 0;
}
