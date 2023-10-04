#include<bits/stdc++.h>
using namespace std;

const int N = 1e4+5;

vector<int>adj[N];
int frr[N];
int arr[N];

int n,cnt;

void f(int u,int col)
{
    if(arr[u]!=col)cnt++;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        f(v,arr[u]);
    }
}

void solve()
{
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        int a;
        cin>>a;
        adj[a].push_back(i);
    }
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    f(1,0);
    cout<<cnt<<endl;
}

int main()
{
    solve();
}
