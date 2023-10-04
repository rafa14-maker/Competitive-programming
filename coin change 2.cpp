#include<bits/stdc++.h>
using namespace std;

int dp[10005];

int mod = 1e8+7;

int main()
{
    int q;
    scanf("%d",&q);

    for(int c=1;c<=q;c++){

    int n,k;

    scanf("%d %d",&n,&k);

    int coin[n+5];

    for(int i=0;i<n;i++)scanf("%d",&coin[i]);

    memset(dp,0,sizeof dp);

   dp[0]=1;

    for(int i=0;i<n;i++)
    {
        for(int j=coin[i];j<=k;j++)
        {
          dp[j]+=dp[j-coin[i]];
          dp[j]%=mod;
        }
    }

    printf("Case %d: %d\n",c,dp[k]);

    }
}
