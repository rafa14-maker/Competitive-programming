#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5][n+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=N;
        }
        arr[i][i]=0;
    }
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        arr[a][b]=c;
    }
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d %d = %d\n",i,j,arr[i][j]);
        }
    }

}

int main()
{
    solve();
}
