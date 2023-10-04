#include<bits/stdc++.h>
using namespace std;

using ll=long long;

void solve()
{
    ll x,y,k;
    ll pk=0;
    cin>>x>>y>>k;
    ll kp=k-1;
    kp+=(k*y);
    pk+=k;
    pk+=(kp/(x-1))+(kp%(x-1)!=0);
    cout<<pk<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
