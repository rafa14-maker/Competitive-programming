#include<bits/stdc++.h>
using namespace std;

int n,m,test;
vector<int>adj[100050];
vector<int>vk;
bool vis[100050];
bool f_vis[100050];

void f(int u)
{
  vis[u]=true;
  for(int i=0;i<adj[u].size();i++)
  {
      int v=adj[u][i];
      if(!vis[v])f(v);
  }
  vk.push_back(u);
}
void dfs(int u)
{
 //   cout<<u<<" ";
  f_vis[u]=true;
  for(int i=0;i<adj[u].size();i++)
  {
      int v=adj[u][i];
      if(!f_vis[v])dfs(v);
  }
 // vk.push_back(u);
}


void solve()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        adj[i].clear();
        vis[i]=false;
        f_vis[i]=false;
    }
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    vk.clear();
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])f(i);
    }
  //  for(int i=0;i<vk.size();i++)cout<<vk[i]<<" ";cout<<endl;
    reverse(vk.begin(),vk.end());
    int cnt=0;

    for(int i=0;i<vk.size();i++)
    {
        int v=vk[i];
        if(!f_vis[v])
        {
            dfs(vk[i]);
            cnt++;
          //  cout<<endl;
        }
    }
  //  printf("Case %d: %d\n",++test,cnt);
  printf("%d\n",cnt);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
