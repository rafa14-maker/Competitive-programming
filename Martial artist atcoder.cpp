#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    ll frr[n+5]={0};

    for(int i=0;i<n;i++)
    {
        int k ;
        cin>>k;
        frr[i] = k;
        int p;
        cin>>p;
        for(int j=0;j<p;j++)
        {
            ll a;
            cin>>a;
            frr[i] += frr[a-1];
        }
    }
    cout<<frr[n-1]<<endl;
}

int main()
{
    solve();
}
