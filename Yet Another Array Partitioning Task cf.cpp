#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    ll arr[n+5];
    vector<pair<ll,ll> >v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        v.push_back(make_pair(arr[i],i+1));
    }
    sort(v.begin(),v.end());
    ll sum = 0 ;
    vector<ll>idx;
    for(int i=n - m*k;i<v.size();i++)
    {
        sum += v[i].first;
        idx.push_back(v[i].second);
    }
    cout<<sum<<endl;
    sort(idx.begin(),idx.end());
    for(int i=m-1;i<idx.size()-1;i+=m)cout<<idx[i]<<" ";cout<<endl;
}

int main()
{
    solve();
}
