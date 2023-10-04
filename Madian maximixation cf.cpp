#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n,k;
    cin>>n>>k;
    if(n==1)
    {
        cout<<k<<endl;
        return ;
    }

    ll m = n/2 +(n%2);

    if(n%2==0)m+=1;

    cout<<k/m<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
