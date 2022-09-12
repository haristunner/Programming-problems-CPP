#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n=4;
    string s[n]={"geeksfor","geeksforgeeks","geeks","geekfor"};
    string t="";
    int m1;
    m1=s[0].length()>s[1].length()?s[1].length():s[0].length();
    for(int i=0; i<m1; i++)
    {
        if(s[0].at(i)==s[1].at(i))
          t+=s[0].at(i);
        else
          break;
    }
    string a="";
    for(int i=2; i<n;i++ )
    {   
        int m2=s[i].length()>t.length()?t.length():s[i].length();
        for(int j=0;j<m2;j++)
        {
            if(s[i].at(j)==t.at(j))
            {
                a+=t.at(j);
            }
            else
            break;
        }
        t=a;
        a="";
    }
    cout<<t;
    return 0;
}
