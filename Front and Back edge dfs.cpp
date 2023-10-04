#include<bits/stdc++.h>
using namespace std;

int vis[200];
vector<int>adj[200];
int parent[200];

void dfs(int u)
{
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(vis[v]==-1)
        {
           parent[v]=u;
           vis[v]=0;
           dfs(v);
        }
        else if(vis[v]==0)
        {
            if(v==parent[u])
            {
                printf("Two ways %d %d\n",v,u);
            }
            else
            {
                printf("Back edge %d %d\n",v,u);
            }
        }
        else if(vis[v]==1)
        {
            printf("Front edge %d %d\n",v,u);
        }
    }
    vis[u]=1;
}

int main()
{
    memset(vis,-1,sizeof vis);
    int n,k;
    cin>>n>>k;
    while(k--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    dfs(1);
}

/*


8 10
1 2
1 5
2 3
5 6
3 6
3 4
6 7
6 8
1 8
4 2

*/


