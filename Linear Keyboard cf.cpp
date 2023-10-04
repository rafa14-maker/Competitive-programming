#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   map<char,int>mp;
   string frr;
   cin>>frr;
   for(int i=0;i<frr.size();i++)
   {
       mp[frr[i]] = i+1;
   }
   ll ans = 0;

   string s;
   cin>>s;

   for(int i=1;i<s.size();i++)
   {
       int a = mp[s[i-1]];
       int b = mp[s[i]];
       ans += abs(a-b);
   }

   cout<<ans<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

