#include<bits/stdc++.h>
using namespace std;


vector<int>adj[200005];
bool vis[200005];
int k;

void edge(int a,int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void dfs(int u)
{
    vis[u]=true;
    if(adj[u].size()!=2)k=0;

    for(int v=0;v<adj[u].size();v++)
    {
        if(!vis[adj[u][v]])
        {
            dfs(adj[u][v]);
        }
    }
}

int main()
{
    int n,e,ans=0;
    cin>>n>>e;

    while(e--)
    {
        int a,b;
        cin>>a>>b;
        edge(a,b);
            }
     for(int i=1;i<=n;i++)
     {
         k=1;
         if(!vis[i])
         {
             dfs(i);
             if(k)ans++;
         }
     }

     cout<<ans<<endl;

}
