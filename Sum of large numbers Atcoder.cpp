#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll mod = 1e9+7;

int main()
{
    ll n,k;
    cin>>n>>k;
    ll ans=0;
    for(ll i=k;i<n+2;i++)
    {
        long long min = i* (i - 1) / 2;
        long long max = i * n - i * (i - 1) / 2;
        ans += (max - min+1);
       // ans=ans%mod;
    }
    cout<<ans%mod<<endl;
}
