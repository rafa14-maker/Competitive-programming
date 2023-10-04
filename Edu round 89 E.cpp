#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
  ll a,b;
  ll counter=0;
  cin>>a>>b;
  if(a<=0||b<=0)
  {
      cout<<0<<endl;
      return;
  }
  ll k=0;
  while(1)
  {
      if(a<=0||b<=0)break;
      if(a==1&&b==1)break;
      if(a>b)swap(a,b);
      k++;
      a-=1;
      b-=2;
  }
  cout<<k<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
    //solve();
}
