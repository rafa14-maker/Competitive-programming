#include<bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;

void solve()
{
    long long n,k;
    cin>>n>>k;
    if(n==0||k==0)
    {
        cout<<0<<endl;
        return;
    }
    k++;
    long long sum=(n+1)*(n+2);
 //   sum=sum%mod;
    sum=sum/2;
    sum=sum%mod;
    sum=sum*k;
    sum=sum%mod;

    cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
