#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int>adj[N];
int w[N],arr[N];
int n,cnt;

void f(int u,int sum)
{
    sum+=w[u];
    if(sum<0)sum=0;
    if(sum>arr[u])return ;
    cnt++;
    for(int i=0;i<adj[u].size();i++)
    {
        f(adj[u][i],sum);
    }
}

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=2;i<=n;i++)
    {
        int p;
        cin>>p>>w[i];
        adj[p].push_back(i);
    }

    f(1,0);

    cout<<n-cnt<<endl;
}

int main()
{
    solve();
}
