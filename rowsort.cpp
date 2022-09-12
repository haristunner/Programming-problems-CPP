#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r=4,c=4;
    int a[r][c]={{9, 8, 7, 1},
                {7, 3, 0, 2},
                {9, 5, 3, 2},
                {6, 3, 1, 2}};
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            for(int k=j+1; k<c; k++)
            {
                if(a[i][j]>a[i][k])
                {
                    int temp=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=temp;
                }
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0; j<c;j++)
          cout<<a[i][j]<<" ";
          cout<<endl;
    }
    return 0;
}
