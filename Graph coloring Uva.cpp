#include<bits/stdc++.h>
using namespace std;

int n,m,ans;
bitset<110>bt;
int vis[110];
vector<int>v;
vector<int>adj[100];

void f(int u)
{
    if(u==n)
    {
        int b=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==1)b++;
        }
        if(b>ans)
        {
            ans=b;
            v.clear();
            for(int i=0;i<n;i++)
            {
                if(vis[i]==1)v.push_back(i+1);
            }
        }
        return;
    }

    bool tr=true;
     for(int i=0;i<(int) adj[u].size();i++)
    {
        int v=adj[u][i];
        if(vis[v]==1&&bt[v])
        {
            tr=false;
            break;
        }
    }
    bt.set(u);
    if(tr)
    {
        vis[u]=1;
        f(u+1);
    }
    vis[u]=0;
    f(u+1);
    bt.reset(u);
}

void solve()
{
    cin>>n>>m;
    ans=-1;
   		for(int i=0;i<n;i++)adj[i].clear();
		bt.reset();
    for(int i=0;i<m;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    f(0);

    printf("%d\n",ans);
    for(int i=0;i<v.size();i++)
    {
        printf("%d",v[i]);
        if(i<v.size()-1)printf(" ");
    }

    printf("\n");
}

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)solve();
}
