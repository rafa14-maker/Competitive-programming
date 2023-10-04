#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

void solve()
{
  int n;
 scanf("%d",&n);
  ll a[n+5],b[n+5];
  ll extra[n+5];
  for(int i=0;i<n;i++) scanf("%lld %lld",&a[i],&b[i]);
  ll s=0,d=1ll<<60;
  for(int i=0;i<n;i++)
  {
      extra[i]=max(0ll,a[i]-b[(i+n-1)%n]);
      s+=extra[i];
  }
  for(int i=0;i<n;i++)
  {
      d=min(d,s-extra[i]+a[i]);
  }
  printf("%lld\n",d);
}


int main()
{
    int q;
   scanf("%d",&q);
    while(q--)
    {
        solve();
    }
}
