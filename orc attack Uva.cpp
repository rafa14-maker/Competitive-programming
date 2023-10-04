#include<bits/stdc++.h>
using namespace std;

const int N = 1e8+5;
int test;

void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5][n+5];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            arr[i][j]=N;
        }
        arr[i][i]=0;
    }

    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        arr[a][b]=min(arr[a][b],c);
        arr[b][a]=min(arr[b][a],c);
    }

    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
            }
        }
    }
    int mn=N;
    for(int i=6;i<=n;i++)
    {
        int mk=arr[i][1];
        bool tr=true;
        for(int j=2;j<=5;j++)
        {
            if(mk!=arr[i][j])mk=N;
        }
          if(mk!=N)
          {
              for(int j=6;j<=n;j++)
              {
                  mk=max(mk,arr[i][j]);
              }
          }
          mn=min(mn,mk);
    }

    if(mn==N)printf("Map %d: -1\n",++test);
    else printf("Map %d: %d\n",++test,mn);

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
