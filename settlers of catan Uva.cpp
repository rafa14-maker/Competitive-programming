#include<bits/stdc++.h>
using namespace std;

int n,k;

bool vis[30];
vector<int>adj[30];
vector<int>adj1[30];

int mx;

void dfs(int u,int cnt)
{
    mx=max(cnt,mx);
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(v==-1e7)continue;
        else
        {
            for(int j=0;j<adj[v].size();j++)
            {
                if(adj[v][j]==u)
                {
                    adj[v][j]= -1e7;
                    break;
                }
            }
            adj[u][i]= -1e7;
            dfs(v,cnt+1);
        }
    }
}

void bu()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<adj1[i].size();j++)
        {
            adj[i].push_back(adj1[i][j]);
        }
    }
}

void solve()
{
    for(int i=0;i<n;i++)adj[i].clear(),adj1[i].clear();
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        adj1[a].push_back(b);
        adj1[b].push_back(a);
    }
    mx=0;
    for(int i=0;i<n;i++)
    {
        dfs(i,-1);
     //   bu();
    }
    cout<<mx<<endl;
}

int main()
{
    while(1)
    {
        cin>>n>>k;
        if(n==0&&k==0)break;
        solve();
    }
}
