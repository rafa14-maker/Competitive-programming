#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    long long m = (b-a)+1;

    long long  l = m/c;

    long long r = m/d;

    long long k = (c*d)/__gcd(c,d);

  cout<<m<<" "<<l<<" "<<r<<" "<<k<<"\n";

   cout<<m-l-r+max(1LL,(m/k))<<"\n";
}
