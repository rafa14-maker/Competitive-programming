#include<bits/stdc++.h>
using namespace std;
using ll =long long;

void solve()
{
   int n;
   cin>>n;
   ll arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];

   ll idx=0;

   for(int i=0;i<n;i++)
   {
       if(arr[i]>5000-i+1)
       {
           idx+=arr[i]+(5000-i+1);
            arr[i]=5000-i+1;
       }
   }

   while(1)
   {
       bool tr=false;
       ll i=0;
       for(;i<n;)
       {
           if(arr[i]>1)tr=true;
           ll k=arr[i];
           arr[i]=max(1LL,arr[i]-1);
           i+=k;
       }
       if(tr)idx++;
       else break;
   }
   cout<<idx<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}
