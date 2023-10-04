#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll a,x,b,k;

ll mod = 1e9+7;

ll f(ll n)
{
    if(n==0)return x;
    if(n==1)return k;

    ll p = n/2;

    ll x1 = (f(p)*x)%mod;
    ll x1 = (x1+b)%mod;



}

int main()
{
    ll n;
    cin>>a>>b>>x>>n;
    k=(a*x)%mod;
    k=(k+b)%mod;
    cout<<f(n)<<endl;
}
