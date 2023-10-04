#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solve()
{
   int n,k;
   cin>>n>>k;
   ll arr[n+5];
   map<ll,ll>mp;
   ll mx=0,px=-1;

   bool tr=false;


   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       if(arr[i]%k!=0)tr=true;
       else continue;
       arr[i]=arr[i]%k;
       if(arr[i]!=0)arr[i]=k-arr[i];
       mp[arr[i]]++;
    if(mx<mp[arr[i]])
    {
        mx=mp[arr[i]];
        px=arr[i];
    }
    else if(mx==mp[arr[i]])
    {
        px=max(px,arr[i]);
    }
   }
  if(!tr)
  {
      cout<<0<<endl;
      return ;
  }
  cout<<((k)*(mx))-abs(px-k)+1<<endl;

}

int main()
{
int q;cin>>q;while(q--)solve();

   // solve();
}
