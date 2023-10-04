#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
vector<int>adj[N];
bool vis[N];
int n;

void dfs(int u)
{
    cout<<u<<" ";
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(!vis[v])
        {
            dfs(v);
            cout<<u<<" ";
        }
    }
}

void solve()
{
   cin>>n;
   memset(vis,false,sizeof vis);
   for(int i=1;i<n;i++)
   {
       int a,b;
       cin>>a>>b;
       adj[a].push_back(b);
       adj[b].push_back(a);
   }
   for(int i=1;i<=n;i++)
   {
       sort(adj[i].begin(),adj[i].end());
   }
   dfs(1);
   cout<<endl;
}

int main()
{
    solve();
}

