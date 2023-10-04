#include<bits/stdc++.h>
using namespace std;

long long dp[1000][1000];
long long mod = 1e9+7;

long long ncr(long long n,long long r)
{
    if(n==r)return 1;
    if(r==0)return 1;
    if(dp[n][r]!=-1)return dp[n][r];
    return dp[n][r] = ((ncr(n-1,r)%mod)+(ncr(n-1,r-1)%mod))%mod;
}


int main()
{
   memset(dp,-1,sizeof dp);
   int n;
   cin>>n;
    long long sum=n;
    for(int i=2;i<=n-1;i++)
    {
        sum= ncr(n,i);
        cout<<i<<" "<<sum<<endl;
       // sum=sum%mod;
    }
    cout<<sum<<endl;
}
