#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long k;
    cin>>k;
    if(k%2==1)cout<<2<<" "<<k-1<<endl;
    else cout<<2<<" "<<k/2<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
