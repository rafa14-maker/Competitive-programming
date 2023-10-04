#include<bits/stdc++.h>
using namespace std;

vector<int>adj[500];
bool vis[500];
int parent[500];
int low[500];
int dis[500];
int cnt;
int n,m;
int root,child;
vector<int>vk;

void f(int u)
{
    vis[u]=true;
    low[u]=dis[u]=cnt++;
    for(int i=0;i<adj[u].size();i++)
    {
        if(u==root)child++;
        int v=adj[u][i];
        if(!vis[v])
        {
            vis[v]=true;
            parent[v]=u;
            f(v);
        low[u]=min(low[u],low[v]);
        if(low[v]>=dis[u])
        {
            vk.push_back(u);
        }
        if(low[v]>dis[u])
        {
            printf("edge %d %d\n",u,v);
        }

        }
         else if(parent[u]!=v)
        {
            low[u]=min(low[u],dis[v]);
        }
    }

}

void solve()
{
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vk.clear();
    cnt=1;
    memset(vis,false,sizeof vis);
    memset(low,0,sizeof low);
    memset(dis,0,sizeof dis);

    root=1,child=0;

    f(1);
  //  if(child>=2)cout<<root<<" ";
    for(int i=0;i<vk.size();i++)cout<<vk[i]<<" ";cout<<endl;

}

int main()
{
    solve();
}

/*

8 10
1 2
1 3
2 3
2 4
3 4
4 5
4 6
5 7
6 7
7 8

*/

