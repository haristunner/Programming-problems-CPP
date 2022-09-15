#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    char temp;
    int n1=s1.length();
    for(int i=0; i<n1; i++)
    {
        for(int j=i+1; j<n1; j++)
        {
            if(s1[i]>s1[j]){
              temp=s1[i];
              s1[i]=s1[j];
              s1[j]=temp;
            }
        }
    }
    cout<<s1;
    return 0;
}
