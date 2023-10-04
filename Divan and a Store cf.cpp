#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   ll n,l,r,k;
   cin>>n>>l>>r>>k;

  ll arr[n+5];

  for(int i=0;i<n;i++)cin>>arr[i];

  sort(arr,arr+n);

  int ans  = 0 ;

  for(int i=0;i<n;i++)
  {
      if(arr[i]<=k&&arr[i]>=l&&arr[i]<=r)
      {
          ans ++;
          k-=arr[i];
      }
  }

  cout<<ans<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

