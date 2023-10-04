#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin>>n;
    ll k =n;

    for(ll i = sqrt(n);i>0;i--)
    {
        if(n%i==0)
        {
            ll a = n/i;
            if(__gcd(a,i)==1)
            {
                cout<<i<<" "<<a<<endl;
                return ;
            }
        }
    }

}

int main()
{
    solve();
}

/*

200560490130

*/
