#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,k;
    cin>>n>>k;
    ll arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    map<ll,ll>mp;
    int mx=0;
    for(int i=0;i<k;i++)
    {
        if(mp[arr[i]]==0)mx++;
        mp[arr[i]]++;
    }
    int idx = mx;

    for(int i=k;i<n;i++)
    {
        mp[arr[i-k]]--;
        if(mp[arr[i-k]]==0)idx--;
        if(mp[arr[i]]==0)
        {
            idx++;
        }
        mp[arr[i]]++;
        mx=max(idx,mx);
    }

    cout<<mx<<endl;

}

int main()
{
    solve();
}
