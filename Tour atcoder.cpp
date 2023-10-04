#include<bits/stdc++.h>
using namespace std;

vector<int>adj[2005];
int n,m;

bool vis[2005];

int bfs(int n)
{
    queue<int>q;
    q.push(n);
    int sum=0;
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        if(vis[f])continue;
        vis[f]=true;
        sum++;
        for(int i=0;i<adj[f].size();i++)
        {
            int v = adj[f][i];
            if(!vis[v])q.push(v);
        }
    }
    return sum;
}

void solve()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        memset(vis,false,sizeof vis);
        sum+=bfs(i);
    }
    cout<<sum<<endl;
}

int main()
{
    solve();
}
