#include<bits/stdc++.h>
using namespace std;

const int N = 1e8+5;
int test;

void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5][n+5];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==j)arr[i][j]=0;
            else arr[i][j]=N;
        }
    }

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a][b]=1;
        arr[b][a]=1;
    }


    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][k]!=N&&arr[k][j]!=N)
                {
                    arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
                }
            }
        }
    }

    int mx=0;

    int s,d;
    cin>>s>>d;

    for(int i=0;i<n;i++)
    {
        if(arr[s][i]!=N&&arr[i][d]!=N)
        {
            mx=max(mx,arr[s][i]+arr[i][d]);
        }
    }

   // cout<<mx<<endl;
     printf("Case %d: %d\n",++test,mx);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
