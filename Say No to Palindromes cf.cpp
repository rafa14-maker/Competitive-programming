#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
ll m= 1e9+7;

long long  bigmod(long long f,long long b)
{
    if(b==0)
    {
        return 1;
    }
    long long x=bigmod(f,b/2,m);
    x=(x*x)%m;
    if(b%2==1)x=(x*f)%m;

    return x;
}


void solve()
{
    int h,q;
    cin>>h>>q;
    string s;
    cin>>s;
    ll n = s.size();
    ll arr[n+5];
    for(int i=1;i<=n;i++)
    {
        int k = (int)s[i]-'a';
        arr[i] = k*bidmod(19,i+1);
        arr[i] = arr[i]%m;
    }

    for(i=1;i<n;i++)
    {
        arr[i] = (arr[i]+arr[i-1])%m;
    }

    while(q--)
    {
        int l,int r;
        cin>>l>>r;
        if()
    }

}

int main()
{
    solve();
}
