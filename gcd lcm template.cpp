#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll n,ll k)
{
    if(k==0)return n;
    else return gcd(k,n%k);
}

ll lcm(ll n,ll k)
{
    ll g = gcd(n,k);
    return n/g*k;
}

int main()
{
    int n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    ll sum=1;
    for(int i=0;i<n;i++)sum=lcm(sum,arr[i]);

    cout<<sum<<endl;
}

