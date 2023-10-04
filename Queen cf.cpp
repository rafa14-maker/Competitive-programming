#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

vector<int>adj[N];
vector<int>v;
int frr[N];
int n,r;

void dfs(int u)
{
    bool tr = false;
  //  cout<<u<<endl;
    if(frr[u]== 1)tr=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int vk = adj[u][i];
        if(frr[vk]== 0&& vk != r)tr=false;
        dfs(vk);
    }
    if(tr)v.push_back(u);
}

void solve()
{
    cin>>n;
    r = -1;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        frr[i] = b;
        if(a == -1)r = i;
       if(a != -1) adj[a].push_back(i);
    }
    dfs(r);
    sort(v.begin(),v.end());
    if(v.size() == 0)cout<< -1 <<endl;
    else
    {
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
    }
}

int main()
{
    solve();
}
