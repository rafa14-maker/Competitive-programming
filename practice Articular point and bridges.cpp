#include<bits/stdc++.h>
using namespace std;

bool vis[200];
vector<int>adj[200];
int parent[200];
int num[200];
int low[200];
bool art[200];
int counter,child,root;


void dfs(int u)
{
    counter++;
    low[u]=num[u]=counter;
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        if(u==root)child++;
        int v=adj[u][i];
        if(vis[v]==false)
        {
            parent[v]=u;
            dfs(v);
            if(num[u]<=low[v])
            {
                art[u]=true;
            }
             if(num[u]<low[v])
            {
                printf("%d %d Bridge\n",v,u);
            }
            low[u]=min(low[u],low[v]);
        }
        else if(parent[u]!=v)
        {
            low[u]=min(low[u],num[v]);
        }
    }
}

int main()
{
    int n,k;
    cin>>n>>k;

    memset(parent,-1,sizeof parent);
    memset(num,-1,sizeof num);
    memset(low,-1,sizeof low);
    memset(vis,false,sizeof vis);

    while(k--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=0;i<=n;i++)
    {
        if(vis[i]==false)
        {
            root = i;
            counter=0;
            child=0;
            dfs(i);
            if(child<=1)art[i]=false;
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(art[i]==true)cout<<i<<" ";
    }
}
