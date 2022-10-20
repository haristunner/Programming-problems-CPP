#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   int freq[26]={0},i=0;
   while(s[i]!='\0')
   {
       freq[s[i]-'a']++;
       i++;
   }
   for(int i=0; i<26; i++)
   {
      
       cout<<char(i+97)<<freq[i]<<" ";
   }
    return 0;
}
