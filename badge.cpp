#include<bits/stdc++.h>
using namespace std;

vector<int>adj[1005];

bool vis[1005];

void set_all()
{
    for(int i=1;i<=1000;i++)vis[i]=false;
}

void dfs(int u)
{
    if(vis[u]==true)
    {
        cout<<u<<" ";
        return;
    }
    vis[u]=true;
    dfs(adj[u][0]);
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        adj[i].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        set_all();
        dfs(i);
    }
}
