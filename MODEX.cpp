#include<bits/stdc++.h>
using namespace std;

long long mod;

long long bigmod(long long a,long long b)
{
    if(b==0)
    {
        return 1;
    }
    long long  x=bigmod(a,b/2);
    x=(x*x);
    x=x%mod;
    if(b%2==1)x=(x*a);
    x=x%mod;

    return x;
}


int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n,m;
        cin>>n>>m>>mod;
        cout<<bigmod(n,m)%mod<<endl;
    }
}
