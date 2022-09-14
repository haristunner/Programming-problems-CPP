#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100]={0},t[100]={0};
      cin>>s;
      cin>>t;
    int freq[256]={0},freq1[256]={0},i=0,j=0,count=0,count1=0;
    while(s[i]!=0)
    {
        count++;
        i++;
    }
    while(t[j]!=0)
    {
        count1++;
        j++;
    }
    i=0,j=0;
    while(i<count)
    {
        freq[s[i]]++;
        i++;
    }
    while(j<count1)
    {
        freq1[t[j]]++;
        j++;
    }
    for(int i=0; i<256; i++){
    if(freq[i]>0)
      cout<<char(i)<<freq[i]<<" ";}
    cout<<endl;
    for(int i=0; i<256; i++){
    if(freq1[i]>0)
      cout<<char(i)<<freq1[i]<<" ";}
    cout<<endl;
    int flag=0;
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=freq1[i])
           flag=1;
    }
    if(flag==0)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
