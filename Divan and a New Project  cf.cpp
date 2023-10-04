#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   int arr[n+5];
   vector<pair<int,int> >v;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       v.push_back(make_pair(arr[i],i));
   }
   sort(v.begin(),v.end());
   reverse(v.begin(),v.end());
   map<int,int>mp;
   int idx = 1, cnt = 0;
   for(int i=0;i<v.size();i++)
   {
       int a = v[i].first;
       int b = v[i].second;
       if(cnt%2==0) mp[b] = idx;
       else
       {
           mp[b] = -idx;
           idx++;
       }
       cnt++;
   }
   ll sum = 0;
   for(int i=0;i<v.size();i++)
   {
       int a = v[i].first;
       int b = v[i].second;
       ll kp = 2*abs(mp[b]);
       kp *= a;
       sum+=kp;
   }

   cout<<sum<<endl;

   cout<<0<<" ";

  /* for(auto it = mp.begin();it!=mp.end();it++)
   {
       cout<< it->second<<" ";
   } */

   for(int i=0;i<n;i++)
   {
       cout<<mp[i]<<" ";
   }

   cout<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

