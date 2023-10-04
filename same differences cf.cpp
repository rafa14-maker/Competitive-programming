#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   // i was not able to solve it

   // i watched tutorial

   int n;
   cin>>n;

   map<int,int>mp;
   ll ans = 0;

   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       a-=i;
       ans += mp[a];
       mp[a]++;
   }

   cout<<ans<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
  // solve();
}

