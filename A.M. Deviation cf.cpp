#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll k =abs((a+c) - (2*b));

    k = k % 3;

    cout<<min(k,1LL)<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
