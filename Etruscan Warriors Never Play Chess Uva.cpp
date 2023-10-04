#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll bin(ll n)
{
    ll l=0,r=1e9+7;
    ll ans=0;
    while(l<=r)
    {
        ll mid = (l+r)/2;
       ll a = mid;
       ll b = mid+1;
       if(a%2==0)a = a/2;
       else if(b%2==0)b = b/2;
       ll eq = a*b;
        if(eq<=n)
        {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
}

void solve()
{
    ll n;
    scanf("%lld",&n);
    printf("%lld\n",bin(n));
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
