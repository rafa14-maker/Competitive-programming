#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,k;

void solve()
{
    ll a = n;
    ll digit=0;
    while(a>0)
    {
        a/=k;
        digit++;
    }
    ll zero = 0;
    a = k;
    ll c = k/2;

    while(c<=n)
    {
        zero += n/c;
        c*=(k/2);
    }

    cout<<zero<<" "<<digit<<endl;

}

int main()
{
    while(scanf("%lld %lld",&n,&k)!=EOF)
    {
        solve();
    }
}
