#include<bits/stdc++.h>
using namespace std;

bool vis[350],tr;
vector<int>adj[350];
int col[350];

int n;

void f(int n)
{
    queue<int>pq;
    pq.push(n);
    vis[n]=true;
    col[n]=1;
    while(!pq.empty())
    {
        int f=pq.front();
        pq.pop();
        for(int i=0;i<adj[f].size();i++)
        {
            int v=adj[f][i];
            if(col[v]==0)
            {
                if(col[f]==1)col[v]=2;
                else col[v]=1;
            }
            else
            {
                if(col[v]==col[f])tr=false;
            }
            if(!vis[v])
            {
                vis[v]=true;
                pq.push(v);
            }
        }

    }
}

void solve()
{
    for(int i=1;i<=n;i++)col[i]=0,adj[i].clear(),vis[i]=false,col[i]=0;
    while(1)
    {
        int a,b;
        cin>>a>>b;
        if(a==0&&b==0)break;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    tr=true;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])f(i);
    }
    if(tr)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    while(1)
    {
        cin>>n;
        if(n==0)break;
        solve();
    }
}

