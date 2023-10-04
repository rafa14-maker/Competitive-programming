#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    //cout<<"yes"<<endl;
     int n;
     cin>>n;
     ll arr[n+5];

     ll sum =0 ;

     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
         sum += arr[i];
     }

     map<ll,ll>mp;

     ll ans = 0 ;

     for(int j=0;j<n;j++)
     {
         ans+= mp[n*arr[j]];
         mp[2*sum - n*arr[j]]++;
     }

     cout<<ans<<endl;
}

int main()
{
  int q;cin>>q;while(q--)solve();
   //solve();
}
