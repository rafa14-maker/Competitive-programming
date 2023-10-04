#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int test;
ll n;

void solve()
{
   ll l=1;
   ll r = 1e9;
   ll ans = 1e18;
   while(l<=r)
   {
       ll mid = (l+r)/2;
       ll k = mid * (mid-3) /2;
       if(k>=n)
       {
           ans = min(ans,mid);
           r = mid-1;
       }
       else l = mid + 1;
   }
   printf("Case %d: %d\n",++test,ans);
}

int main()
{
    while(1)
    {
       cin>>n;
       if(n==0)break;
       solve();
    }
}
