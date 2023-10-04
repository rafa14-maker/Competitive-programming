#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   ll arr[n+5];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

   if(n%2==0)
   {
       cout<<"YES"<<endl;
       return ;
   }


   bool tr= false;

   for(int i=0;i<n-1;i++)
   {
       if(arr[i]>=arr[i+1])tr=true;
   }

   if(tr)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}
