#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   ll n,m,k;
   cin>>n>>m>>k;
   ll time =0 ;
   ll idx = 0;

   ll arr[n+5];

   for(int i=0;i<n;i++)cin>>arr[i];
   sort(arr,arr+n);

   for(int i=0;i<n;i+=2)
   {
       time += abs(arr[i+1]-arr[i]);
   }
   vector<int>v;
  // cout << time<<endl;
   for(int i=0;i<m;i++)
   {
       ll a;
       cin>>a;
       if(a*time<=k)v.push_back(0);
       else v.push_back(1);
   }

   for(int i=0;i<v.size();i++)cout <<v[i]<<" ";cout<<endl;

}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
  // int q;cin>>q;while(q--)solve();
    solve();
}

