#include<bits/stdc++.h>
using namespace std;
using ll =long long;


void solve()
{
   int n;
   cin>>n;
   vector<pair<ll,ll> >v;
   ll mx1=1e12,mx2=1e12;

   ll arr[n+5],frr[n+5];

   for(int i=0;i<n;i++)cin>>arr[i];
   for(int i=0;i<n;i++)cin>>frr[i];


   for(int i=0;i<n;i++)
   {
      // ll a,b;
       //cin>>a>>b;
       v.push_back(make_pair(arr[i],frr[i]));
       mx1=min(mx1,arr[i]);
       mx2=min(mx2,frr[i]);
   }
   ll cnt=0;
   for(int i=0;i<v.size();i++)
   {
       ll a=v[i].first-mx1;
       ll b=v[i].second-mx2;
       ll k=min(a,b);
       cnt+=k;
       a-=k;
       b-=k;
       cnt+=a;
       cnt+=b;
      // cout<<cnt<<endl;
   }
   cout<<cnt<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();

  //  solve();
}

