#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   int n,k;
   cin>>n>>k;
   map<ll,ll>mp;
   ll idx=0;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       a%=k;
       mp[a]++;
       while(mp[idx%k]>0)
       {
           mp[idx%k]--;
           idx++;
       }
       cout<<idx<<endl;
   }
}

int main()
{
    solve();
}
