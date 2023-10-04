#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin>>n;
    ll idx = 0;
    ll cnt = 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            n-=i;
            cnt ++;
            break;
        }
    }
    if(cnt==0)cout<<1<<endl;
    else
    {
        cout<<cnt+n/2<<endl;
    }
}

int main()
{
    solve();
}
