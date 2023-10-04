#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n;

void solve()
{
    cin>>n;
    ll sum = 1;
    ll k = n/2;

    for(int i=n;i>n/2;i--)
    {
        sum = sum * i;
    }

    cout<< sum - (sum/k) <<endl;

}

int main()
{
   // nCr(25,25);
    solve();
}
