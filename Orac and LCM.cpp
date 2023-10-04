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
    int arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<ll>v;

    for(int i=0;i<n-1;i++)
    {
        ll a=arr[i];
        ll b=arr[i+1];
        ll c=lcm(a,b);
        v.push_back(c);
    }

  //  sort(v.begin(),v.end());

    ll c=0;

    for(int i=1;i<v.size();i++)
    {
       // cout<<c<<endl;
        c=gcd(c,v[i]);
    }
    cout<<c<<endl;
}
