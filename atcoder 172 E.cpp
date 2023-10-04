#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;

int main()
{
    ll n,k;
    cin>>n>>k;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=((k-i)*(k-i-1));
        sum=sum%mod;
    }
    cout<<sum%mod<<endl;
}
