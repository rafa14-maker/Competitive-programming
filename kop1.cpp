#include<bits/stdc++.h>
using namespace std;

vector<int>adj[1000];
bool visit[1000];

void edge(int a,int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

int init()
{
    for(int i=0;i<1000;i++)visit[i]=false;
}

void dfs(int u)
{
    visit[u]=true;
    cout<<u<<" ";
    for(int v=0;v<adj[u].size();v++)
    {
        if(!visit[adj[u][v]])
        {
            dfs(adj[u][v]);
        }
    }
}

int main()
{
    init();
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        edge(a,b);
    }
    for(int i=1;i<=n;i++)
    {
        if(!visit[i])
        {
            dfs(i);
        }
    }
}
