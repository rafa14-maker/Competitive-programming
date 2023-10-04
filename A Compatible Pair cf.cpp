#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,m;
    cin>>n>>m;
    ll arr[n+5],frr[m+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<m;i++)cin>>frr[i];
    int idx = 0;
     ll  ans = -1e18;

     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             if(arr[i]*frr[j]>ans)
             {
                 ans  = arr[i]*frr[j];
                 idx = i;
             }
         }
     }

     ans  = -1e18;

     for(int i=0;i<n;i++)
     {
         if(i == idx)continue;
         for(int j=0;j<m;j++)
         {
             if(arr[i]*frr[j]>ans)
             {
                 ans  = arr[i]*frr[j];
                // idx = i;
             }
         }
     }

     cout<<ans<<endl;
}

int main()
{
    solve();
}
