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
                if(a[j][i]>a[k][i])
                {
                    int temp=a[j][i];
                    a[j][i]=a[k][i];
                    a[k][i]=temp;
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
