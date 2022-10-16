#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,t=0;
    cin>>n;
    int temp=n;
    while(1){
        rem=n%10;
        t=(t*10)+rem;
        n=n/10;
        if(n==0)
        break;
    }
    if(t==temp)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
