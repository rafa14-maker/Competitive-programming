#include<bits/stdc++.h>
using namespace std;
const int N = 1050;

int n,m;
vector<int>adj[N];
bool vis[N];
int parent[N];
bool path[N][N];
int low[N];
int num[N];
int cnt,test;

void f(int u)
{
    num[u]=low[u]=cnt++;
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!vis[v])
        {
            vis[v]=true;
            parent[v]=u;
          //  f(v);
            if(!path[u][v]&&!path[v][u])
            {
                printf("%d %d\n",u,v);
                path[u][v]=true;
               // path[v][u]=true;
            }
            f(v);
            if(low[v]>num[u])
            {
                if(!path[u][v])  printf("%d %d\n",u,v);
                if(!path[v][u])    printf("%d %d\n",v,u);
                path[u][v]=true;
                path[v][u]=true;
            }
            low[u]=min(low[u],low[v]);
        }
        else if(parent[u]!=v)
        {
            low[u]=min(low[u],num[v]);
        }
        if(!path[u][v]&&!path[v][u])
        {
             printf("%d %d\n",u,v);
             path[u][v]=true;
        }
    }
}

void solve()
{
    cnt=0;
    for(int i=1;i<=n;i++)
    {
        adj[i].clear();
        vis[i]=false;
    }
    memset(path,false,sizeof path);
    while(m--)
    {
        int a,b;
       scanf("%d %d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
     printf("%d\n\n",++test);
     for(int i=1;i<=n;i++)
     {
         if(!vis[i])f(i);
     }
     printf("#\n");
}

int main()
{
    while(1)
    {
        scanf("%d %d",&n,&m);
        if(n==0&&m==0)break;
        solve();
    }
}

/*

7 9
1 2
1 3
1 4
2 3
3 4
2 6
3 5
4 7
6 5

*/

