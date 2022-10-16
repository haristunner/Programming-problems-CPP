#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t;
    for(int i=s.length()-1; i>=0; i--)
    {
        t+=s[i];
    }
    int count=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==t[i])
        count++;
    }
    if(count==s.length())
    cout<<"yes";
    return 0;
}
