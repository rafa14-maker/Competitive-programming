#include<bits/stdc++.h>
using namespace std;

int n,k,mx,idx;

vector<int>box[55];
vector<int>adj[55];
int dp[55];
int parent[55];
bool vis[55];
vector<int>vk;
vector<int>ans;

bool check(int i,int j)
{
    for(int a=0;a<k;a++)
    {
        if(box[i][a]>=box[j][a])return false;
    }
    return true;
}

void top(int u)
{
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(!vis[v])
        {
            top(v);
        }
    }
    vk.push_back(u);
}

void pi(int u)
{
   if(parent[u]==u)
   {
       ans.push_back(u+1);
       return ;
   }
   else
   {
      // printf("%d ",u+1);
      ans.push_back(u+1);
       return pi(parent[u]);
   }
}


void solve()
{
    for(int i=0;i<n;i++)
    {
        box[i].clear();
        adj[i].clear();
           dp[i]=1;
        parent[i]=i;
        vis[i]=false;
    }
    vk.clear();
    mx=0;
    idx=0;
    ans.clear();

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            int a;
            scanf("%d",&a);
            box[i].push_back(a);
        }
        sort(box[i].begin(),box[i].end());
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
               if(check(i,j))adj[i].push_back(j);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(!vis[i])top(i);
    }


    for(int i=vk.size()-1;i>=0;i--)
    {
        int u = vk[i];
        for(int j=0;j<adj[u].size();j++)
        {
            int v = adj[u][j];
            if(dp[v]<dp[u]+1)
            {
                dp[v]=dp[u]+1;
                parent[v]=u;
            }
        }
         if(mx<dp[u])
            {
                mx=dp[u];
                idx=u;
            }
    }

   printf("%d\n",mx);
   pi(idx);
   for(int i=ans.size()-1;i>=0;i--)
   {
       if(i==0)printf("%d\n",ans[i]);
       else printf("%d ",ans[i]);
   }

}

int main()
{
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        solve();
    }
}

/*

5 2
3 7
8 10
5 2
9 11
21 18
8 6
5 2 20 1 30 10
23 15 7 9 11 3
40 50 34 24 14 4
9 10 11 12 13 14
31 4 18 8 27 17
44 32 13 19 41 19
1 2 3 4 5 6
80 37 47 18 21 9


*/
