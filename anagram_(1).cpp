#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    if(s.length()!=t.length())
    {
        cout<<"cannot be done";
        return 0;
    }
    for(int i=0; i<s.length(); i++)
    {
        for(int j=i+1; j<s.length(); j++)
        {
            if(s[i]>s[j])
            {
                char temp= s[i];
                s[i]= s[j];
                s[j]= temp;
            }
        }
    }
    for(int i=0; i<t.length(); i++)
    {
        for(int j=i+1; j<t.length(); j++)
        {
            if(t[i]>t[j])
            {
                char temp= t[i];
                t[i]= t[j];
                t[j]= temp;
            }
        }
    }
    int count=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!=t[i])
        count++;
    }
    if(count==0)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
