#include<bits/stdc++.h>
using namespace std;

vector<int>adj[200];
int vis[200];
int low[200];
int num[200];
int parent[200];
int counter;

void dfs(int u).
{
    vis[u]=0;
    for(int i=0;i<adj[u].size();i++)
    {

        int v= adj[u][i];
        if(vis[v]==-1)
        {
            parent[v]=u;
            dfs(v);
        }
        else if(vis[v]==0)
        {
            if(parent[u]==v)
            {
                printf("Two ways %d %d\n",u,v);
            }
            else
            {
                printf("Back edge %d %d\n",u,v);
            }
        }
        else
        {
            printf("Cross edge %d %d\n",v,u);
        }
    }
    vis[u]=1;
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
    }
    memset(vis,-1,sizeof vis);

   for(int i=1;i<=n;i++)if(vis[i]==-1)dfs(i);
}
/*

7 10
1 2
1 3
2 4
2 5
3 6
3 7
5 6
4 1
1 7
3 1

*/



