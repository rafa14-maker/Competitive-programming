#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   map<int,int>mp;
   int n;
   cin>>n;
   for(int i=0;i<n-1;i++)
   {
       int a,b;
       cin>>a>>b;
       mp[a]++;
       mp[b]++;
   }
   bool tr=false;
   for(int i=1;i<=n;i++)
   {
       if(mp[i]==n-1)tr=true;
   }
   if(tr)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}

