#include<bits/stdc++.h>
using namespace std;
using ll =long long;

void solve()
{
   ll n,u,v;
   cin>>n>>u>>v;
   int arr[n+5];
   bool tr=true,fr=true;
   for(int i=1;i<=n;i++)
   {
       cin>>arr[i];
   }

   for(int i=2;i<=n;i++)
   {
       if(abs(arr[i]-arr[i-1])>=2)tr=false;
   }
   if(!tr)
   {
       cout<<0<<endl;
       return ;
   }

   ll k= min(u+v,v+v);

   for(int i=2;i<=n;i++)
   {
       if(abs(arr[i]-arr[i-1])==1)
       {
           k=min(u,v);
           break;
       }
   }
   cout<<k<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   //solve();
}

