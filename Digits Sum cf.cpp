#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
    ll n;
    cin>>n;

    if(n==9)
    {
         cout<<1<<endl;
         return ;
    }

    int r = n%10;
    n-=r;
    int mx =0 ;
    if(r==9)mx=1;
    mx += n/10;
    cout<<mx<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
