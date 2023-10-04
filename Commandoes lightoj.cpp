#include<bits/stdc++.h>
using namespace std;
bool vis[500];
vector<int>adj[500];

int mn;
int k,p;

void dfs(int u,int cnt)
{
    vis[u]=true;

    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!vis[v])
        {
            dfs(v,cnt+1);
        }
    }
}


void solve(int test)
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        adj[i].clear();
        vis[i]=false;
    }
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    mn=1e9;
    cin>>k>>p;
     dfs(k,0);

     printf("Case %d: %d\n",test,mn);
}

int main()
{
    int q;
    cin>>q;
    int test=0;
    while(q--)solve(++test);
}
