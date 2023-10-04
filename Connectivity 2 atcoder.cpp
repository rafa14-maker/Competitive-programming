#include<bits/stdc++.h>
using namespace std;
const int mod = 998244353;

int frr[20];
bool adj[20][20];
int n,m;

void cal()
{
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            adj[i][j]=false;
        }
    }
}

void dfs(int u)
{
    frr[u]++;
    frr[u] = frr[u]%mod;
    for(int i=1;i<=n;i++)
    {
        if(adj[u][i]&&adj[i][u])
        {
            adj[u][i]=false;
            adj[i][u]=false;
            dfs(i);
        }
    }
}


void solve()
{
  // int n,m;
   cin>>n>>m;
   int arr[m+5][2];
   for(int i=0;i<m;i++)
   {
       cin>>arr[i][0]>>arr[i][1];
   }

    for(int i=0;i<pow(2,m);i++)
    {
        cal();
       // cout<<i<<endl;
        for(int j=0;j<m;j++)
        {
            if(i&(1<<j))
            {
               int a = arr[j][0];
               int b = arr[j][1];
               adj[a][b]=true;
               adj[b][a]=true;
            }
        }
       dfs(1);
    }

  for(int i=2;i<=n;i++)
  {
      cout<<frr[i]<<endl;
  }

}

int main()
{
    solve();
}

