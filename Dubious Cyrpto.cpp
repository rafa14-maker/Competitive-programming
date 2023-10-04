#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
    ll l,r,m;
    cin>>l>>r>>m;
    for(int i=l;i<=r;i++)
    {
        ll b=m%i;
        if(b+l<=r&&(m>=i))
        {
            cout<<i<<" "<<l+b<<" "<<l<<endl;
            break;
        }
        b=i-b;
        if(l+b<=r)
        {
            cout<<i<<" "<<l<<" "<<l+b<<endl;
            break;
        }
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
