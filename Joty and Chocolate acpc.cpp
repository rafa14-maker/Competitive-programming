#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    long long n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll k1=n/a;
    ll k2=n/b;
    ll r1=(a*b)/__gcd(a,b);
    r1=n/r1;
    k1-=r1;
    k2-=r1;
    cout<<k1*p+k2*q+r1*(max(p,q))<<endl;
}
