#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   ll a,b;
   cin>>a>>b;

   bool tr = false;

   for(int i=0;i<100;i++)
   {
       a = a%b;
       if(a==0)tr=true;
       a = a*10;
   }

   if(tr)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

