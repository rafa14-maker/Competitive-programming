#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int N = 2e5+5;
vector<ll>adj[N];
ll frr[N];
int n;

void cal()
{
    for(int i=1;i<=n;i++)
    {
        adj[i].clear();
        frr[i] = 0;
    }
}

void solve()
{
   // cout<<"yes"<<endl;
    cin>>n;
    cal();

    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        int b = arr[i];
        adj[b].push_back(a);
    }

    for(int i=1;i<=n;i++)sort(adj[i].begin(),adj[i].end());

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<adj[i].size();j++)
        {
            adj[i][j] += adj[i][j-1];
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(adj[i].size()==0)continue;
        int len = adj[i].size();
        for(int j=1;j<=len;j++)
        {
            if(len%j==0)frr[j] += adj[i][len-1];
            else frr[j]+= (adj[i][len-1] - adj[i][(len%j)-1]);
        }
    }

    for(int i=1;i<=n;i++)cout<<frr[i]<<" ";cout<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
  // solve();
}

