#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=1,r=0;
        cin>>n;
        while(n/x>0)
        {
            ll d=n/x;
            r+=d;
            x*=2;
        }
        cout<<r<<endl;
    }
}
