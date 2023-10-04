#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
vector<int>adj[N];
int vis[N];
vector<int>odd;
vector<int>even;
int n,m;

void bfs(int n)
{
    queue<int>pq;
    pq.push(n);
    while(!pq.empty())
    {
        int f = pq.front();
        pq.pop();
        if(vis[f]==-1)
        {
            vis[f]=0;
        }
        if(vis[f]==0)even.push_back(f);
        else if(vis[f]==1)odd.push_back(f);
        for(int i=0;i<adj[f].size();i++)
        {
            int v=adj[f][i];
            if(vis[v]==-1)
            {
                vis[v] = 1-vis[f];
                pq.push(v);
            }
        }
    }
}

void solve()
{
    odd.clear();
    even.clear();
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        adj[i].clear();
        vis[i]= -1;
    }

    for(int i=0;i<m;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1;i<=n;i++)
    {
        if(vis[i]==-1)bfs(i);
    }
  vector<int>v;

  if(even.size()<odd.size())v=even;
  else v=odd;

    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<"\n";
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
