#include<bits/stdc++.h>
using namespace std;

int n,k;

int mod = 1e8+7;

int coin[100];

 //int frr[100];

int dp[100][10008];

long long  f(int i, int sum)
{
    long long ans;

    ans = 0;

    if(sum == k) {
        return 1;
    }

    if(i == n) {
        return 0;
    }

    if(dp[i][sum] != -1) {
        return dp[i][sum];
    }

    for (int j = 0; j <= k and (j * coin[i]) + sum <= k; j++) {
        ans += f(i+1, sum + j * coin[i]);
        ans = ans % mod;
    }


    return dp[i][sum] = ans;

}


int main()
{
    int q;
    cin>>q;
    for(int c=1;c<=q;c++)
    {
        scanf("%d %d",&n,&k);

        for(int i=0;i<n;i++)scanf("%d",&coin[i]);

       // for(int i=0;i<n;i++)scanf("%d",&frr[i]);

        memset(dp,-1,sizeof dp);

        printf("Case %d: %lld\n",c,f(0,0));
    }
}
