#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 9005;
vector<int>adj[N];
int n;
int arr[N];

void cal()
{
    for(int i=0;i<n;i++)adj[0].push_back(arr[i]);
    for(int i=1;i<=2*n;i++)
    {
        map<int,int>mp;
        for(int j=0;j<n;j++)mp[arr[j]]++;
        for(int j=0;j<n;j++)arr[j] = mp[arr[j]],adj[i].push_back(arr[j]);
    }
}

void solve()
{
   // cout<<"yes"<<endl;
   for(int i=0;i<N;i++)adj[i].clear();
   cin>>n;
   for(int i=0;i<n;i++)cin>>arr[i];
   cal();

    int q;
    cin>>q;
    while(q--)
    {
        int m;
        long long k;
        cin>>m>>k;
        if(k>=2*n)k=2*n;
        cout<<adj[k][m-1]<<endl;
    }

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

