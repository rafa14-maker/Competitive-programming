#include<bits/stdc++.h>
using namespace std;
const int N =  2e5+5;
using ll = long long;

int n;

int cnt,sum;

vector<int>adj[N];

int dfs(int u,int par)
{
    int res=0;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(v==par)continue;
        res += (dfs(v,u)==0);
    }
    if(res)++cnt , sum+=res;
    return res;
}

void solve()
{
    for(int i=1;i<=n;i++)adj[i].clear();
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cnt = sum = 0;
    dfs(1,0);
    printf("%d\n",sum-(cnt-1));
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
