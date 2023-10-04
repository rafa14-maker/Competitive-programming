#include<bits/stdc++.h>
using namespace std;
using ll = long long;

long long  bigmod(long long f,long long b)
{
    if(b==0)
    {
        return 1;
    }
    long long x=bigmod(f,b/2);
    x=(x*x);
    if(b%2==1)x=(x*f);

    return x;
}

void solve()
{
    int n;
    cin>>n;
    ll a = 0 , b = 0;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        if(k==0)b++;
        else if(k==1)a++;
    }
    ll p = bigmod(2,b);
    ll k = p*a;
    cout<<k<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
