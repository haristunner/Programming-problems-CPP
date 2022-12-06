#include <bits/stdc++.h>
using namespace std;

int main()
{
    string haystack="sadforsad", needle="sad";
    string s="";
    int k=0;
        for(int i=0; i<haystack.length(); i++)
        {
            k=i;
            for(int j=0; j<needle.length(); j++){
                
                s+=haystack[k];
                k++;
            }
            
            if(s==needle){
                cout<< i;
                return 0;
            }
            s="";
            k=0;
        }
        cout<<"-1";
    return 0;
}
