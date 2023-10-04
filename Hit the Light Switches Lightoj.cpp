#include<bits/stdc++.h>
using namespace std;

const int mx = 10005;

int n,m,test;
vector<int>adj[mx];
bool vis[mx];

vector<int>vk;

void f(int u)
{
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(!vis[v])
        {
            f(v);
        }
    }
    vk.push_back(u);
}

void dfs(int u)
{
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(!vis[v])
        {
            dfs(v);
        }
    }
}

void solve()
{
    vk.clear();

     scanf("%d",&n);
     scanf("%d",&m);

     for(int i=1;i<=n;i++)vis[i]=false,adj[i].clear();

     for(int i=0;i<m;i++)
     {
         int a,b;
         scanf("%d",&a);
         scanf("%d",&b);
         adj[a].push_back(b);
     }

     int counter = 0;

     for(int i=1;i<=n;i++)
     {
         if(!vis[i])
         {
             f(i);
         }
     }

     for(int i=1;i<=n;i++)vis[i]=false;

     reverse(vk.begin(),vk.end());

  //  for(int i=0;i<vk.size();i++)cout<<vk[i]<<" ";cout<<endl;

     for(int i=0;i<vk.size();i++)
     {
         int u = vk[i];
         if(!vis[u])
         {
             dfs(u);
             counter++;
         }
     }

     printf("Case %d: %d\n",++test,counter);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
