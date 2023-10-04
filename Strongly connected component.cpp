#include<bits/stdc++.h>
using namespace std;

vector<int>adj[250];
vector<int>vk;
bool vis[250];
int low[250];
int num[250];
int cnt,SC;
int n,m;

void fSSC(int u)
{
    low[u]=num[u]=cnt++;
    vis[u]=true;
    vk.push_back(u);
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(num[v]==0)
        {
            fSSC(v);
        }
        if(vis[v])
        {
            low[u]=min(low[u],low[v]);
        }
    }
    if(low[u]==num[u])
    {
       printf("SSC %d:",++SC);
    //   cout<<u<<" ";
       while(1)
       {
           int f=vk.back();
           cout<<f<<" ";
           vis[f]=false;
           vk.pop_back();
           if(f==u)break;
       }
       cout<<endl;
    }
  //  printf("\n");
}

void solve()
{
  //  memset(vis,-1,sizeof vis);
  cnt=0;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    for(int i=1;i<=n;i++)
    {
        if(num[i]==0)fSSC(i);
    }
}

int main()
{
    solve();
}

/*

6 7
1 2
2 3
3 1
3 4
4 5
5 6
6 4

*/
