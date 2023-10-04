#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int n;
vector<int>adj[N];
int vis_col[N];
int col[N];
bool vis[N];
bool good[N];

void f(int u)
{
   vis[u]=true;
   if(vis_col[col[u]]==0)
   {
       good[u]=true;
   }

   vis_col[col[u]]++;

   for(int i=0;i<adj[u].size();i++)
   {
       int v = adj[u][i];
       if(!vis[v])
       {
           f(v);
       }
   }

  vis_col[col[u]]--;
}

void solve()
{
    scanf("%d",&n);
    memset(vis,false,sizeof vis);
    memset(good,false,sizeof good);
    for(int i=1;i<=n;i++)cin>>col[i];
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    f(1);
    for(int i=1;i<=n;i++)if(good[i])cout<<i<<"\n";
}

int main()
{
    solve();
}
