#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
bitset<N>vis;
map<int,bool>mp[N];

void dfs(int u)
{
    vis[u]=false;
    for(int i=vis._Find_first();i<vis.size();i=vis._Find_next(i))
    {
        if(!mp[u][i])
        {
            dfs(i);
        }
    }
}

void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)vis[i]=1;
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        mp[a][b]=true;
        mp[b][a]=true;
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i])
        {
            cnt++;
            dfs(i);
        }
    }

    cout<<cnt-1<<endl;
}

int main()
{
    solve();
}
