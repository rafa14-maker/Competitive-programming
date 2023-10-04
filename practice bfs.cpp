#include<bits/stdc++.h>
using namespace std;

bool vis[200];
vector<int>adj[200];

void bfs(int n)
{
    queue<int>q;
    q.push(n);
    vis[n]=true;
    while(!q.empty())
    {
        int f=q.front();
        cout<<f<<" ";
        q.pop();
        for(int i=0;i<adj[f].size();i++)
        {
            int u=adj[f][i];
            if(vis[u]==false)
            {
                q.push(u);
                vis[u]=true;
            }
        }
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    while(k--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==false)
        {
            bfs(i);
        }
    }
}
