#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   string s;
   cin>>s;

   string frr = "CODEFORCES";

   map<char,int>mp;
    map<char,int>kmp;

   for(int i=0;i<s.size();i++)
   {
       mp[s[i]]++;
   }

    for(int i=0;i<frr.size();i++)
   {
       kmp[frr[i]]++;
   }

   for(int i=0;i<frr.size();i++)
   {
       if(kmp[frr[i]]>mp[frr[i]])
       {
           cout<<"NO"<<endl;
           return ;
       }
   }

   cout<<"YES"<<endl;


}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
    solve();
}

