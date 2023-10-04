#include<bits/stdc++.h>
using namespace std;

vector<int>adj[10000];
int visit[1000];

void edge_set(int a,int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void ini(int n)
{
    for(int i=1;i<=n;i++)visit[i]=false;
}

void dfs(int u)
{
    visit[u]=true;
    cout<<u<<" ";
    for(int v=0;v<adj[u].size();v++)
    {
        if(visit[adj[u][v]]==false)
        {
            dfs(adj[u][v]);
        }
    }
}

int main()
{
    int node,edge;
    cin>>node>>edge;
    ini(node);
    for(int i=1;i<=edge;i++)
    {
        int a,b;
        cin>>a>>b;
        edge_set(a,b);
    }
    for(int i=1;i<=node;i++)
    {
        if(!visit[i])
        {
            dfs(i);
        }
    }
}
