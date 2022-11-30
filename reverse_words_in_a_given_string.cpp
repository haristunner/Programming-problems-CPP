#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="i.like.this.program.very.much";
    string ans="";
    s='.'+s;
    int n1=s.length();
    int n2=0;
    string res="";
    for(int i=n1-1; i>=0; i--)
    {
        if(s[i]!='.'){
         ans+=s[i];
         n2++;
        }
        else{
         for(int i=n2-1; i>=0; i--)
         {
            res+=ans[i];
         }
         res+='.';
         ans="";
         n2=0;
        }
    }
    for(int i=0; i<n1-1; i++)
        cout<<res[i];
    return 0;
}
