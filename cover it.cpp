#include<bits/stdc++.h>
using namespace std;
#define N 200010

vector<int>adj[N];
int n,m,t,vis[N],col[2];

int edge(int a,int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void dfs(int u,int c)
{
    vis[u]=c;
    col[c]++;
    for(int v=0;adj[u].size()>v;v++)
    {
        if(!vis[adj[u][v]])dfs(adj[u][v],3-c);
    }
}



int main()
{
   cin>>t;
   while(t--)
   {
       cin>>n>>m;
       col[1]=col[2]=0;
       for(int i=1;i<=n;i++)
       {
           adj[i].clear();
           vis[i]=0;
       }
       for(int i=0;i<m;i++)
       {
           int a,b;
           cin>>a>>b;
           edge(a,b);
       }
     dfs(1,1);
     int ans=1;
     if(col[1]>col[2])ans=2;
     cout<<col[ans]<<endl;
     for(int i=1;i<=n;i++)
     {
        if(vis[i]==ans) cout<<i<<" ";
     }
     cout<<endl;
   }
}
