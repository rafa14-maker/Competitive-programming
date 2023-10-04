#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,pk=0;
    cin>>n>>k;
    int mn=min(n,k);
    int mx=max(n,k);
    int sum=mn*2;
    mx-=(sum/2);
   // cout<<mx<<endl;
    if(mx>0)pk=mx-1;
    cout<<sum+mx+pk<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
