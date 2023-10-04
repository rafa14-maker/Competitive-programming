#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll cnt=0;
    while(a%2==0&&a>0)
    {
        cnt++;
        a/=2;
    }
    while(b%2==0&&b>0)
    {
        cnt++;
        b/=2;
    }
    ll k=pow(2,cnt);
  //  if(cnt==0)k=0;
    if(k>=c)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
