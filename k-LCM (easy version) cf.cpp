#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n,k;
    cin>>n>>k;
    if(n==3)cout<<1<<" "<<1<<" "<<1<<endl;
    else if(n==4)
    {
        cout<<1<<" "<<1<<" "<<2<<endl;
    }
    else if(n%2==0)
    {
        ll p = n/2;
        if(p%2==0)
        {
            cout<<p<<" "<<p/2<<" "<<p/2<<endl;
        }
        else
        {
            n-=2;
            cout<<2<<" "<<n/2<<" "<<n/2<<endl;
        }
    }
    else
    {
        cout<<1<<" ";
        n-=1;
        cout<<n/2<<" "<<n/2<<endl;
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
