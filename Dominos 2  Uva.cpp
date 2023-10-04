#include<bits/stdc++.h>
using namespace std;

const int N = 10005;

vector<int>adj[N];
bool vis[N];
int n,m,l;
int cnt;

void dfs(int u)
{
    if(vis[u])return;
    vis[u]=true;
    cnt++;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!vis[v])
        {
            dfs(v);
        }
    }
}

void solve()
{
    memset(vis,false,sizeof vis);
    for(int i=0;i<N;i++)adj[i].clear();

    cin>>n>>m>>l;

    while(m--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
  cnt=0;
    while(l--)
    {
        int a;
        cin>>a;
       // cnt=0;
        dfs(a);
      //  cout<<cnt<<endl;
    }

    cout<<cnt<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
