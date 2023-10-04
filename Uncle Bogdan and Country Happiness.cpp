#include<bits/stdc++.h>
using namespace std;
const int N =1e5+5;
int arr[N],frr[N];

vector<int>adj[N];

void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        arr[i]=0;
        frr[i]=0;
        adj[i].clear();
    }
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=1;i<=n;i++)cin>>frr[i];
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
