#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int>adj[105];

bool vis[105];

vector<int>v;

void f(int u)
{
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int k=adj[u][i];
        if(!vis[k])
        {
            f(k);
        }
    }
    v.push_back(u);
}

void solve()
{
    for(int i=0;i<105;i++)adj[i].clear();
    memset(vis,false,sizeof vis);
   // cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    v.clear();
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])f(i);
    }
   // cout<<"pk"<<endl;
   reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<"\n";
}

int main()
{
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)break;
        solve();
    }
}
