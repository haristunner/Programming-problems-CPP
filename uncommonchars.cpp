#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    char temp1,temp2,temp3;
    int n1=s1.length(), n2=s2.length();
    for(int i=0; i<n1; i++)
    {
        for(int j=i+1; j<n1; j++)
        {
            if(s1[i]>s1[j]){
              temp1=s1[i];
              s1[i]=s1[j];
              s1[j]=temp1;
            }
        }
    }
    cout<<s1<<endl;
    for(int i=0; i<n2; i++)
    {
        for(int j=i+1; j<n2; j++)
        {
            if(s2[i]>s2[j]){
              temp2=s2[i];
              s2[i]=s2[j];
              s2[j]=temp2;
            }
        }
    }
    cout<<s2<<endl;
    for(int i=0; i<n1; i++)
    {
        for(int j=i+1; j<n1; j++)
        {
            if(s1[i]==s1[j]){
            for(int k=j; k<n1; k++){
              s1[k]=s1[k+1];
            }n1--;
            j--;
            }
        }
    }
    cout<<s1<<endl;
    for(int i=0; i<n2; i++)
    {
        for(int j=i+1; j<n2; j++)
        {
            if(s2[i]==s2[j]){
            for(int k=j; k<n2; k++){
              s2[k]=s2[k+1];
            }n2--;
            j--;
            }
        }
    }
    cout<<s2<<endl;
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(s1[i]==s2[j])
            {
                s1[i]='*';
                s2[j]='*';
            }
        }
    }
   for(int i=0; i<n1; i++)
   {
       if(s1[i]!='*')
         cout<<s1[i]<<" ";
   }
   for(int i=0; i<n2; i++)
   {
       if(s2[i]!='*')
         cout<<s2[i]<<" ";
   }
   string res;
   
    return 0;
}
