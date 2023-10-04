#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int>adj[1005];
int frr[1005];
bool vis[1005];

void f(int nk)
{
    queue<int>q;
    q.push(nk);
    frr[nk]=0;
   // cout<<nk<<endl;
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        vis[f]=true;
        for(int i=0;i<adj[f].size();i++)
        {
            int v=adj[f][i];
            if(!vis[v])
            {
                vis[v]=true;
                frr[v]=frr[f]+1;
                q.push(v);
            }
        }
    }
}

void solve()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        frr[i]=0;
        adj[i].clear();
        vis[i]=false;
    }
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    f(0);
    for(int i=1;i<n;i++)printf("%d\n",frr[i]);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
