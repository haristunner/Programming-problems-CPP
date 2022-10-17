#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0; i<n; i++)
    {
        if(s[i]==' ')
            {
                for(int h=i; h<n; h++)
                {
                    s[h]=s[h+1];
                }
                i--;
                n--;
            }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[i]>s[j])
            {
                char temp= s[i];
                s[i]= s[j];
                s[j]= temp;
            }
        }
    }
    
    for(int i=0; i<n; i++)
    {   
        for(int j=i+1; j<n; j++)
        {
            if(s[i]==s[j])
            {
                for(int k=j; k<n; k++)
                {
                    s[k]=s[k+1];
                }
                j--;
                n--;
            }
        }
    }
    if(n!=26)
    cout<<"no";
    else
    cout<<"yes";
    return 0;
}
