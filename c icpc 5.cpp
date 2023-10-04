#include<bits/stdc++.h>
using namespace std;

const int N = 2*1e5+5;

vector<int>adj[N];
int n,m;
int out[N];
bool vis[N];
int frr[N];

vector<int>vk;

void f(int u)
{
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(!vis[v])
        {
            f(v);
        }
    }
    vk.push_back(u);
}


void solve()
{
    cin>>n>>m;
    for(int i=0;i<N;i++)
    {
        vis[i]=false;
        frr[i]=1;
    }
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        out[a]++;
    }

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
            f(i);
    }

    reverse(vk.begin(),vk.end());

    int mx = 1e8+7;

    vector<int>vm;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {
            int v = adj[i][j];
            frr[v]+=frr[i];
        }
        if(out[i]==0)
        {
            vm.push_back(frr[i]);
        }
    }

    sort(vm.begin(),vm.end());
    reverse(vm.begin(),vm.end());

    if(vm.size()==1)cout<<0<<endl;
    else cout<<vm[1]<<endl;
}

int main()
{
    solve();
}
