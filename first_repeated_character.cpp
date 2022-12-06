#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count[256]={0},i=0;
    string st="";
    while(s[i]!='\0'){
       count[s[i]]++;
       if(count[s[i]]==2)
       {
           st=s[i];
           cout<<st;
           return 0;
       }
       i++;
    }
    cout<<"-1";
    return 0;
}

//https://practice.geeksforgeeks.org/problems/find-first-repeated-character4108/1
