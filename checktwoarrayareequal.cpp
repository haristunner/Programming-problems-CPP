#include <iostream>
using namespace std;
int main()
{
    int arr1[5]={1,2,3,4,5},arr2[5]={2,4,5,3,1};
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr1[i]>arr1[j])
            {
                int temp= arr1[i];
                arr1[i]= arr1[j];
                arr1[j]= temp;
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr2[i]>arr2[j])
            {
                int temp= arr2[i];
                arr2[i]= arr2[j];
                arr2[j]= temp;
            }
        }
    }
    int count =0;
    for(int i=0; i<5; i++)
    {
        if(arr1[i]==arr2[i])
        count++;
    }
    if(count==5)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
