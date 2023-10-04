#include<bits/stdc++.h>
using namespace std;

const int mod = 10000007;

int main(){

        long long q,n,k;
    scanf("%lld\n",&q);
    long dp[10005];
    for( k=1;k<=q;k++)
    {
        cin>>dp[0]>>dp[1]>>dp[2]>>dp[3]>>dp[4]>>dp[5]>>n;
        for(int i=6;i<=n;i++)
        {
            dp[i]=(dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%10000007;
        }
         printf("Case %lld: %lld\n",k,dp[n]%10000007);
    }
}
