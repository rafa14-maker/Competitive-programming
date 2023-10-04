#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c&&d==b||a==c||d==b)
    {
        cout<<1<<endl;
        return ;
    }
    ll k=c-a+1;
    ll p=d-b+1;
    ll o=c-a;
    ll x=d-b;

    cout<<(k*p)-(o+x)<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
    //solve();
}

