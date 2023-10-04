#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,c;
    cin>>a>>b>>c;

    long long k = a+ 2*b + 3*c;

    cout<<k%2<<endl;
}

int main()
{
    int q;cin>>q;
    while(q--)solve();
}
