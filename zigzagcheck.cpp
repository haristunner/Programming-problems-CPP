#include <iostream>
using namespace std;                                            
int main()
{
    int a[7]={4,3,7,8,6,2,1},i,n=7;
    
    for(i=0;i<n;i++)
    {
    if(i%2==0)
          {
      if(a[i]>a[i+1])  
      {
          int temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp;
      }}
      else
      {   
          if(a[i]<a[i+1])
          {
          int temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp;}
      }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
