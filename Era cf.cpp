#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   ll arr[n+5];
   for(int i=1;i<=n;i++)cin>>arr[i];
   ll ans = 0;
   for(int i=1;i<=n;i++)
   {
       if(i==1)
       {
           if(arr[i]>1)ans+=arr[i]-1;
       }
       else
       {
           if(arr[i]>i+ans)ans+= arr[i]-i-ans;
       }
   }
   cout<<ans<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

