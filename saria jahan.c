#include<stdio.h>
#include"vector"
#include<queue>
#include<algorithm>


int n,m,k,test;
vector<int>adj[1005];
int frr[1005];
int vis[1005];

int bfs(int n)
{
    queue<int>q;
    q.push(n);
    int cnt=0;
    while(!q.empty())
    {
        int u=q.front();
        vis[u]=1;
        cnt++;
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v = adj[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                q.push(v);
            }
        }
    }
    return cnt;
}

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
    scanf("%d %d %d",&n,&m,&k);

    for(int i=1;i<=n;i++)
    {
        adj[i].clear();
        frr[i]=0;
        vis[i]=0;
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
       int f;
       if(vis[i]==0)
       {
        f= bfs(i);
       }

        for(int i=1;i<=n;i++)
       {
        if(vis[i]==1&&frr[i]==0)
        {
            frr[i]=f;
            vis[i]=2;
        }
       }

   }
    printf("Case %d:\n",++test);
   while(k--)
   {
       int a;
       scanf("%d",&a);
       printf("%d\n",frr[a]);
   }


    }
}



