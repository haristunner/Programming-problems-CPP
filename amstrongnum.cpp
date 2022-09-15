#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,rem,sum=0;
    cin>>n;
    
    int temp=n,count=0;
    while(1)
    {
        n/=10;
        count++;
        if(n==0)
           break;
    }
    n=temp;
    for(int i=0; i<count; i++)
    {
        rem=n%10;
        sum=sum+ pow(rem,count);
        n=n/10;
    }
    cout<<sum;
    if(temp==sum)
    cout<<"yes";
}
