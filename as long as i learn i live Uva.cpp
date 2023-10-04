#include<bits/stdc++.h>
using namespace std;

int test;
int n,m;
vector<int>adj[150];
int arr[150];
bool vis[150];
int ed,sum;

void built()
{
    for(int i=0;i<=n;i++)adj[i].clear(),vis[i]=false;
}

void f(int u)
{
    vis[u]=true;
    int mx=0, vv=-1;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!vis[v])
        {
            if(arr[v]>mx)    mx=arr[v], vv=v;
        }
    }
    if(vv!=-1) sum+=mx, ed=vv, f(vv);
return;
}



void solve()
{
    ed=0;
    sum=0;
    cin>>n>>m;
    built();

    for(int i=0;i<n;i++)cin>>arr[i];

    while(m--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    f(0);
   printf("Case %d: %d %d\n",++test,sum,ed);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
