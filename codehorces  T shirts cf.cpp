#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   string arr[n+5],brr[n+5];
   map<string,int>cnta,cntb;
   for(int i=0;i<n;i++)cin>>arr[i],cnta[arr[i]]++;
   for(int i=0;i<n;i++)cin>>brr[i],cntb[brr[i]]++;
   int ans  = n;
   for(auto it : cnta)
   {
       ans -= min(it.second,cntb[it.first]);
   }
   cout<<ans<<endl;
}

int main()
{
    solve();
}
