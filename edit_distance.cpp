#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int a[26]={0},b[26]={0};
    int i=0,count=0;
    while(s[i]!='\0')
    {
        a[s[i]-'a']++;
        i++;
    }
    i=0;
    while(t[i]!='\0'){
        b[t[i]-'a']++;
        i++;
    }
    int ans=0;
    for(int i=0; i<26; i++)
    {   
        if(a[i]>b[i])
        {
         ans=a[i]-b[i];
        if(a[i]!=b[i])
            count+=ans;    
        }
        else {
            ans=b[i]-a[i];
            if(a[i]!=b[i]){
            count+=ans;
            }
        }
    }
    cout<<count;
    return 0;
}
