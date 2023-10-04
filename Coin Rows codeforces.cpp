#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

const int N = 1e5+7;

ll dp[5][N];
ll arr[N];
ll frr[N];

void solve()
{
 int n;
 cin>>n;

 for(int i=1;i<=n;i++)cin>>arr[i];
 for(int i=1;i<=n;i++)cin>>frr[i];

 if(n==1)
 {
     cout<<0<<endl;
     return ;
 }

 for(int i=1;i<=n;i++)arr[i]+=arr[i-1];
 for(int i=1;i<=n;i++)frr[i]+=frr[i-1];

 ll sum=1e18;

 for(int i=1;i<=n;i++)
 {
     ll mx=0;
    mx=max(mx,arr[n]-arr[i]);
   if(i-1>=1) mx=max(mx,frr[i-1]);
   sum=min(sum,mx);
 }

 cout<<sum<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
