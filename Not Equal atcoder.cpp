#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;


void solve()
{
    int n;
    cin>>n;
    ll arr[n+5];
    map<ll,ll>mp;
    for(int i=0;i<n;i++)cin>>arr[i],mp[arr[i]]++;

    ll sum=0;

    for(int i=0;i<n;i++)
    {
        ll f = mp[arr[i]];
        mp[arr[i]]=0;
        ll k = arr[i]-1;
        sum += ((f*k)%mod);
        sum = sum%mod;
    }

    cout<<sum<<endl;
}

int main()
{
    solve();
}
