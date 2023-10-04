
#include<bits/stdc++.h>
#define ll long long
#define mx 1000000
const long long  m = 1e6+3;
using namespace std;

ll power(ll x, unsigned ll y, unsigned ll m)
{
    if (y == 0)
        return 1;
    ll p = power(x, y/2, m) % m;
    p = (p * p) % m;

    return (y%2 == 0)? p : (x * p) % m;
}

ll modInverse(ll a, ll m)
{
    return power(a, m-2, m);
}

ll  fact[mx+1];

int main()
{
    fact[0]=1;

    for(ll i=1; i<=mx; i++)
    {
        fact[i]=((fact[i-1]%m)*(i%m))%m;
    }

    ll t,n,r,ans;

    scanf("%lld",&t);
    for(ll ca=1; ca<=t; ca++)
    {
        scanf("%lld%lld",&n,&r);

        ans= ((fact[r]%m)*(fact[n-r]%m))%m;
        ans=modInverse(ans,m);
        ans=((fact[n]%m)*(ans%m))%m;
        printf("Case %lld: %lld\n",ca,ans);
    }
}

