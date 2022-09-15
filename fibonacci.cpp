#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c;
    int a=0,b=1;
    if(n==0)
     cout<<"no";
    else if(n==1)
     cout<<a;
    else
    {cout<<a<<" ";
    cout<<b<<" ";}
    int sum=b;
    while((a+b)<10)
    {
        c=a+b;
        a=b;
        b=c;
        sum+=c;
        cout<<c<<" "<<endl;
    }
    cout<<sum;
}
