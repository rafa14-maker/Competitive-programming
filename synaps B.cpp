#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   ll a,b,c,d;
   //cin>>a>>b>>c>>d;
   scanf("%lld",&a);
   scanf("%lld",&b);
   scanf("%lld",&c);
   scanf("%lld",&d);
   if(b!=c)printf("-1\n");
   else printf("%lld\n",a*b*d);
}

int main()
{
   int q;scanf("%d",&q);while(q--)solve();
  // solve();
}

