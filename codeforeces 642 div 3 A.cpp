#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   ll n,k;
   cin>>n>>k;
   if(n==1)
   {
       cout<<0<<endl;
   }
   else if(n==2)
   {
       cout<<k<<endl;
   }
   else cout<<k*2<<endl;
}

int main()
{
   int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
  //  solve();
}
