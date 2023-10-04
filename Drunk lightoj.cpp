#include<bits/stdc++.h>
using namespace std;

const int mx = 10005;

map<string,int>mp;
vector<int>adj[mx];
int vis[mx],test;
bool cycle;

void f(int u)
{
    vis[u]=1;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(vis[v]==0)
        {
            f(v);
        }
        else if(vis[v]==1)
        {
            cycle = true;
            return ;
        }
    }
    vis[u]=2;
}

void fun(int n)
{
    memset(vis,0,sizeof vis);
    for(int i=1;i<=n;i++)
    {
        if(cycle)return ;
        if(vis[i]==0)f(i);
    }
}

void solve()
{
    mp.clear();
    int m;
    scanf("%d",&m);
    int idx=0;
    for(int i=0;i<m;i++)
    {
        string a,b;
        cin>>a>>b;
        if(mp[a]==0)
        {
            idx++;
            mp[a]=idx;
            adj[idx].clear();
        }
        if(mp[b]==0)
        {
            idx++;
            mp[b]=idx;
            adj[idx].clear();
        }

        int ak = mp[a];
        int bk = mp[b];
        adj[ak].push_back(bk);
    }
    cycle = false;
    fun(idx);
    printf("Case %d: ",++test);
    if(cycle)printf("No\n");
    else printf("Yes\n");
}

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)solve();
}
