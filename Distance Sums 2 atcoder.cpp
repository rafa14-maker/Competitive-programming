#include<bits/stdc++.h>
using namespace std;

const int mx  = 2e5+5;

vector<int>adj[mx];
bool vis[mx];
bool tr;
int n;

void dfs(int u)
{
    vis[u]=true;
    bool tr=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(!vis[v]){
        dfs(v);
        if(tr)
        {
            cout<<u<<" ";
            tr=false;
        }
        }
    }
    if(tr)cout<<u<<" ";
}

void solve()
{
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis,-1,sizeof vis);
    dfs(1);
}

int main()
{
    solve();
}

/*

7
1 2
1 3
2 4
2 5
3 6
3 7

*/
