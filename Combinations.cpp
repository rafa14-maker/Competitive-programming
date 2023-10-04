#include<bits/stdc++.h>
using namespace std;

int dp[1000005];

int mod = 1000003;

int f(int pos)
{
    if(pos==1||pos==0)return 1;
    if(dp[pos]!=-1)return dp[pos];
    return (pos*f(pos-1))%mod;
}


int main()
{
    int q;
    cin>>q;
    memset(dp,-1,sizeof dp);
    for(int i=1;i<=q;i++)
    {
        int n,r;
        scanf("%d %d",&n,&r);
        printf("Case %d: %d\n",i,f(n)/((f(n-r)*f(r))%mod));
    }
}
