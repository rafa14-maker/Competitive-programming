#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string arr,frr;
    cin>>arr>>frr;
    int n=arr.size();
    int m=frr.size();
    int k=n*m;
    k=k/__gcd(n,m);
   // cout<<k<<endl;
    string prr,crr;
    while(prr.size()<k)
    {
        prr+=arr;
    }
    while(crr.size()<k)
    {
        crr+=frr;
    }
   // cout<<arr<<" "<<frr<<endl;
    if(prr==crr)cout<<prr<<endl;
    else cout<<"-1"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
