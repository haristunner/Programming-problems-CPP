#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    string t="", r="";
    int j=0, count=0, n1=0;
    if(n%2==0)
    {
        for(int i=0; i<n/2; i++)
        {
            t+=s[i];
            n1++;
        }
        for(int i=(n/2)-1; i>=0; i--)
        {
            r+=t[i];
        }
        for(int i=n/2; i<n; i++){
            
            if(r[j]==s[i]){
                count++;
                j++;
            }
            else
                j++;
        }
        if(count==n1)
        {
        cout<<"0";
        return 0;
        }
    }
    else{
        for(int i=0; i<(n/2); i++)
        {
            t+=s[i];
            n1++;
        }
        for(int i=(n/2)-1; i>=0; i--)
        {
            r+=t[i];
        }
        for(int i=(n/2)+1; i<n; i++){
            
            if(r[j]==s[i]){
                count++;
                j++;
            }
            else
                j++;
        }
        if(count==n1)
        {
        cout<<"0";
        return 0;
        }
    }
    cout<<n-1;
    return 0;
}
