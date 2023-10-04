#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2005;

ll arr[N];

bool tmp(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.first>b.first)return true;
    if(a.first==b.first&&a.second<b.second)return true;
    return false;
}


void solve()
{
   int n;
   cin>>n;
   map<ll,int>mp;
   set<ll>st;

   for(int i=0;i<n;i++)
   {
       ll a;
       cin>>a;
       mp[a]++;
       st.insert(a);
   }

   vector<pair<ll,ll> >v;

   for(auto it=st.begin();it!=st.end();it++)
   {
       v.push_back(make_pair(mp[*it],*it));
   }

   sort(v.begin(),v.end(),tmp);

   for(int i=0;i<v.size();i++)
   {
      // cout<<v[i].first<<" "<<v[i].second<<endl;
   }


 vector<ll>vk;

 for(int i=0;i<v.size();i++)
 {
     ll a=v[i].first;
     ll b = v[i].second;
     while(a--)vk.push_back(b);
 }

  ll sum=0,mx=0,mn=1e18;

  for(int i=0;i<vk.size();i++)
  {
      mx=max(mx,vk[i]);
      mn=min(mn,vk[i]);
      sum+=(mx-mn);
  }

  cout<<sum<<endl;

}

int main()
{
    solve();
}
