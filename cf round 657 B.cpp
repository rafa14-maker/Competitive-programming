#include<bits/stdc++.h>
using namespace std;

 using ll = long long;


#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve()
{
    ll l,r,m;
    cin>>l>>r>>m;
    ll b=l,c=l,k=m%l;
    if(l+k>r)k=l-k;
  if(m-(b+k)+c>0)  cout<<r<<" "<<b+k<<" "<<c<<endl;
  else cout<<r<<" "<<b<<" "<<c+k<<endl;
}


int main()
{
    FasterIO

    int q;cin>>q;while(q--)solve();

   // solve();
}
