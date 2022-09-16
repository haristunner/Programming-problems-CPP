#include <iostream>
using namespace std;
int main()
{
     int i,j;
     string S={"helh"};
       char ans;
       for(i=0;i<S.length();i++){
           int flag=0;
           for(j=0;j<S.length();j++)
              {
                if(i==j)
                continue;
                
               if(S[i]!=S[j]){
                 ans=S[i];
               }
               else if(S[i]==S[j]){
                   flag=1;
                   ans='$';
                   break;}
           }
           if(flag==0)
           break;
       }
       cout<<ans;
    return 0;
}
