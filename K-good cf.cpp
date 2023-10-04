#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const ll N = 1e5+5;

void solve()
{
    ll n;
    cin>>n;

    ll k=1;

    while(n%2==0)
    {
        n/=2;
        k*=2;
    }

    if(n==1)cout<<-1<<endl;
    else cout<<min(n,2*k)<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}

/*

1
1000000000000000000

*/
