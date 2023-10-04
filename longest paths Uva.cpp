#include<bits/stdc++.h>
using namespace std;

const int N = 1e8+5;

vector<int>adj[105];
bool vis[105];
int frr[105];
int n,test;
vector<int>vk;

void f(int u)
{
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(!vis[v])
        {
            f(v);
        }
    }
    vk.push_back(u);
}

void solve()
{
    vk.clear();
    for(int i=1;i<=n;i++)adj[i].clear(),frr[i]=0;

    int s;
    cin>>s;

    while(1)
    {
        int a,b;
        cin>>a>>b;
        if(a==0&&b==0)break;
        vis[a]=false;
        vis[b]=false;
        adj[a].push_back(b);
    }

   /* for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            f(i);
        }
    }*/

    reverse(vk.begin(),vk.end());

    queue<int>pq;
    pq.push(s);
    frr[s]=0;

    while(!pq.empty())
    {
        int f = pq.front();
        pq.pop();
        for(int i=0;i<adj[f].size();i++)
        {
            int v = adj[f][i];
            if(frr[v]<frr[f]+1)
            {
                frr[v]=frr[f]+1;
                pq.push(v);
            }
        }
    }

    int mx=0,idx=-1;

    for(int i=1;i<=n;i++)
    {
        if(frr[i]>mx)
        {
            mx = frr[i];
            idx=i;
        }
    }

    printf("Case %d: The longest path from %d has length %d, finishing at %d.\n",++test,s,mx,idx);
    cout<<"\n";
}

int main()
{
    while(scanf("%d",&n))
    {
        if(n==0)break;
        solve();
    }
}
