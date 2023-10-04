#include<bits/stdc++.h>
using namespace std;

const int mx = 1e4+5;

int n,counter,test;
vector<int>adj[mx];
vector<pair<int,int> >vk;
bool vis[mx];
int num[mx];
int low[mx];
int parent[mx];

void f(int u)
{
    counter++;
    low[u]=num[u]=counter;
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(vis[v]==false)
        {
            parent[v]=u;
            f(v);
        if(low[v]>num[u])
        {
            vk.push_back(make_pair(min(u,v),max(u,v)));
        }
        low[u]=min(low[u],low[v]);
        }
        else if(parent[u]!=v)
        {
            low[u]=min(num[v],low[u]);
        }
    }
}

void solve()
{
    vk.clear();
    counter = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)adj[i].clear();
    for(int i=0;i<n;i++)
    {
        int k;
        scanf("%d",&k);
        vis[k]=false;
        parent[k]=0;
        num[k]=0;
        low[k]=0;
        char c;
        int cnt;
        cin>>c>>cnt>>c;
        for(int j=0;j<cnt;j++)
        {
            int b;
            scanf("%d",&b);
            adj[k].push_back(b);
        }
    }

    for(int i=0;i<n;i++)
    {
        if(!vis[i])f(i);
    }

    printf("Case %d:\n",++test);
    printf("%d critical links\n",vk.size());

    sort(vk.begin(),vk.end());

    for(int i=0;i<vk.size();i++)
    {
        printf("%d - %d\n",vk[i].first,vk[i].second);
    }

}

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)solve();
}
