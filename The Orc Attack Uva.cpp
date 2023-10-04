#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int test;

void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5][n+5];
    for(int i=1;i<=n;i++)
    {
        arr[i][i]=0;
        for(int j=1;j<=n;j++)
        {
            arr[i][j]=N;
        }
    }
    for(int i=1;i<=m;i++)
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
              //  cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
                arr[i][j]=min(arr[i][k]+arr[k][j],arr[i][j]);
            }
        }
    }

    int mx=N;

    for(int i=6;i<=n;i++)
        {
            int mn=0;
            for(int j=1;j<=5;j++)
            {
                cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
                   mn = max(mn,arr[i][j]);
            }
            if(mn!=N)mx=min(mx,mn);
        }
    if(mx==N)printf("Map %d: -1\n",++test);
    else printf("Map %d: %d\n",++test,mx);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*

1
10 17
1 9 20
1 7 12
2 3 7
2 8 10
2 7 12
3 8 10
4 8 10
4 6 4
5 7 12
5 9 20
5 9 31
6 9 16
6 10 35
7 8 2
7 9 35
8 9 10
9 10 40

*/
