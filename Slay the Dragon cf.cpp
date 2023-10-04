#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    ll arr[n+5];
    ll sum=0;
    for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];
    sort(arr,arr+n);
    int q;
    cin>>q;
    while(q--)
    {
       // unsigned long long ans=9e18;
        ll kx,ky;
        cin>>kx>>ky;
         ll t = lower_bound(arr,arr+n,kx)-arr ;

         if(t==0)cout<<max(ky-(sum-arr[t]),0LL)<<"\n";
         else if(t==n)cout<< kx - arr[t-1]+max(ky-(sum-arr[t-1]),0LL)<<"\n";
         else{
            cout<<min(max(ky-(sum-arr[t]),0LL),kx-arr[t-1]+max(ky-(sum-arr[t-1]),0LL))<<"\n";
         }
    }
}

int main()
{
    solve();
   // int q;
   // cin>>q;
   // while(q--)solve();
}
