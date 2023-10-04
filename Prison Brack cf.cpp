#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

void solve()
{
    ll n,m,r,c;
    cin>>n>>m>>r>>c;
     ll ans=0;
     ans=max(ans,abs(r-1)+abs(c-1));
          ans=max(ans,abs(r-n)+abs(c-1));
               ans=max(ans,abs(r-1)+abs(c-m));
                    ans=max(ans,abs(r-n)+abs(c-m));
                    cout<<ans<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
