#include<bits/stdc++.h>
using namespace std;

vector<int>adj[200];
bool vis[200];
vector<int>v;
int low[200];
int num[200];
int counter;

void dfs(int u)
{
    counter++;
    low[u]=num[u]=counter;
    vis[u]=true;
    v.push_back(u);
    for(int i=0;i<adj[u].size();i++)
    {
        int v1=adj[u][i];
        if(vis[v1]==false)
        {
            dfs(v1);
        }
        low[u]=min(low[u],low[v1]);
    }
    if(num[u]==low[u])
    {
        printf("SSC :");
        while(1)
        {
            int f=v.back();
            v.pop_back();
            cout<<f<<" ";
            if(f==u)break;
        }
        cout<<endl;
    }
}

int main()
{
    memset(vis,false,sizeof vis);

    counter=0;

    int n,k;
    cin>>n>>k;
    while(k--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    for(int i=0;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
}
/*



*/
