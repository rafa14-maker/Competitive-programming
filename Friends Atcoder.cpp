#include<bits/stdc++.h>
using namespace std;

const int N =2*1e5+5;

vector<int>adj[N];
int frr[N];
bool vis[N];
int cnt;

void dfs(int u)
{
    vis[u]=true;
    frr[cnt]++;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!vis[v])
        {
            dfs(v);
        }
    }
}


int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)vis[i]=false;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
           cnt++;
           dfs(i);
        }
    }
    int sum=0;
    if(cnt<2)
    {
        cout<<frr[1]<<endl;
        return 0;
    }
    //int sum=0;
    else
    {
        for(int i=1;i<=N;i++)
        {
            if(frr[i]==0)break;
            else
            {
                sum=max(sum,frr[i]);
            }
        }
    }
    cout<<sum<<endl;
}
