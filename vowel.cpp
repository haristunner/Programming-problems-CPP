#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(isupper(s[i]))
          s[i]+=32;
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
         cout<<s[i]<<" ";
    }
}
