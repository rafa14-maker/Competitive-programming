#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k=0;
    int arr[10][10];

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int a=1;a<=5;a++)
    {
        for(int b=1;b<=5;b++)
        {
            for(int c=1;c<=5;c++)
            {
                for(int d=1;d<=5;d++)
                {
                    for(int e=1;e<=5;e++)
                    {
                        if(a+b+c+d+e==15&&a*b*c*d*e==120)
                        {
                            k=max(k,arr[a][b]+arr[b][a]+arr[c][b]+arr[b][c]+2*(arr[c][d]+arr[d][c]+arr[d][e]+arr[e][d]));
                        }
                    }
                }
            }
        }
    }

  cout<<k<<endl;
}
