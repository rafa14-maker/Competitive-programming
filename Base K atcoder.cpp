#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll a,b,k;
    cin>>k;
    cin>>a>>b;
    ll c=0,d=0;
    ll idx=1;

    while(a>0)
    {
        ll r = a%10;
        a/=10;
        c += r*idx;
        idx *= k;
    }

    idx = 1;

     while(b>0)
    {
        ll r = b%10;
        b/=10;
        d += r*idx;
        idx *= k;
    }

   cout<<c*d<<endl;

}
