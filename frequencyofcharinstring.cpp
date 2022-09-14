#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int freq[256]={0},i=0;
    while(s[i]!='\0')
    {
        freq[s[i]]++;
        i++;
    }
    for(int i=0; i<256; i++)
    {
        if(freq[i]>0)
        cout<<char(i)<<freq[i]<<" ";
    }
    return 0;
}
