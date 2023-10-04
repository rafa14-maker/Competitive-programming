#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n,m,test;
vector<int>adj[105];
bool vis[105];
int frr[105];
vector<int>v;

void dfs(int u)
{
    vis[u] = true;
    for(int i=0;i<adj[u].size();i++)
    {
        int vk = adj[u][i];
        if(!vis[vk])dfs(vk);
    }
    v.push_back(u);
}

void bfs(int k)
{
    queue<int>q;
    q.push(k);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        vis[u] = true;
        for(int i=0;i<adj[u].size();i++)
        {
            int vk = adj[u][i];
            if(!vis[vk])
            {
                q.push(vk);
                break;
            }
        }
    }
}

void solve()
{
   // cout<<"yes"<<endl;
   cin>>n>>m;
   for(int i=1;i<=n;i++)adj[i].clear(),vis[i]=false,frr[i]=0;
   v.clear();
   for(int i=0;i<m;i++)
   {
       int a,b;
       cin>>a>>b;
       adj[a].push_back(b);
       frr[b]++;
   }
   for(int i=1;i<=n;i++)
   {
      if(frr[i] == 0)dfs(i);
   }
   memset(vis,false,sizeof vis);
 //  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
  int cnt = 0 ;
  for(int i=v.size()-1;i>=0;i--)
  {
      int a = v[i];
      if(!vis[a])cnt++,bfs(a);
  }
  printf("Case %d: %d\n",++test,cnt);
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

