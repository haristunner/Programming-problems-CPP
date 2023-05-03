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

// another method

// string s;
//     cin>>s;
//     int n=s.length(),count=0;
//     char c;
    
//     for(int i=0; i<n; i++){
//         for(int j=i+1;j<n;j++){
//             if(s[i]==s[j]){
//                 count++;
//             }
//         }
//         if(count==0){
//             cout<<s[i];
//             return 0;
//         }
//         // cout<<count;
//         count=0;
//     }
