#include<bits/stdc++.h>
using namespace std;
using ll =long long ;

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll k=a+b+c;
    ll z=min(a,min(b,c));
    if(k>8&&(k%9==0)&&(k/9<=z))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
