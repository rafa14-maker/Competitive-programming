#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
ll inf = 1e18;
ll W,H;

void solve()
{
    cout << fixed << setprecision(20);
    ll x1,y1,x2,y2,w,h;
    cin>>W>>H>>x1>>y1>>x2>>y2>>w>>h;
    ll ans = inf;

    if(x2 - x1 + w <= W)
    {
        ans=min(ans,max(0LL,w-x1));
        ans=min(ans,max(0LL,x2-(W-w)));
    }

    if(y2 - y1 + h <= H)
    {
        ans=min(ans,max(0LL,h-y1));
        ans=min(ans,max(0LL,y2-(H-h)));
    }

    if(ans==inf)cout<< -1<<endl;
    else cout<<ans<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
