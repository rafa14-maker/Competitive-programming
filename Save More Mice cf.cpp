#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   ll n;
   cin>>n;
   int k;
   cin>>k;
  // ll k
   ll arr[k+5];
   for(int i=0;i<k;i++)
    cin>>arr[i];

   ll ans = 0;
   ll cnt = 0;
   sort(arr,arr+k);
   reverse(arr,arr+k);

   for(int i=0;i<k;i++)
   {
       if(cnt>=arr[i])
       {
           ans++;
           continue;
       }
       cnt+=(n-arr[i]);
   }
   cout<<k-ans<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

