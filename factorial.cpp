#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,fact=1;
    cin>>n;
    for(int i=n; i>0; i--)
    {
        fact*=i;
    }
    cout<<fact;
    return 0;
}