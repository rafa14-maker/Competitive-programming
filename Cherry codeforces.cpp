#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll mx=0;
    for(int i=0;i<n-1;i++)
    {
       mx = max(mx,arr[i]*arr[i+1]);
    }
    cout<<mx<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
