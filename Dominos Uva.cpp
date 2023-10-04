#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector<int>adj[N];
vector<int>vk;
bool vis[N];
int low[N];
int num[N];
int n,m;
int cnt,flag;

void f(int u)
{

}

/*
void f(int u)
{
    num[u]=low[u]=++cnt;
    vis[u]=true;
    vk.push_back(u);
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(num[v]==0)
        {
            f(v);
            low[u]=min(low[u],low[v]);
        }
        if(vis[v])low[u]=min(low[u],low[v]);
    }
    if(low[u]==num[u])
    {
        flag++;
        while(1)
        {
            int f=vk.back();
            vk.pop_back();
            vis[f]=false;
          //  cout<<f<<" ";
            if(f==u)break;
        }
     //   cout<<endl;
    }
}
*/

void solve()
{
    cin>>n>>m;
    vk.clear();
    for(int i=1;i<=n;i++)
    {
        adj[i].clear();
        vis[i]=true;
        num[i]=0;
        low[i]=0;
    }

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

  /*  cnt=0,flag=0;
    for(int i=1;i<=n;i++)
    {
        if(num[i]==0)f(i);
    }
    cout<<flag<<endl;*/



}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
