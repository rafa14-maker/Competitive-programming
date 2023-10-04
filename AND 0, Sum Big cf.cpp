#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin>>n>>k;
    long long mod = 1e9+7;
    long long sum = 1;
    for(int i=0;i<k;i++)
    {
        sum*=n;
        sum=sum%mod;
    }
    cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
