#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

int d,k,n;
int cnt;

int dp[105][105];

int f(int mxn,int cnt)
{
    if(mxn<0)return 0;
    if(mxn==0)
    {
        if(cnt>0)return 1;
        return 0;
    }

    if(dp[mxn][cnt]!=-1)return dp[mxn][cnt];

    int ans=0;

    for(int i=1;i<=k;i++)
    {
    if(i>=d)  ans+=  f(mxn-i,cnt+1);
    else ans+=f(mxn-i,cnt);
      ans = ans%mod;
    }

return  dp[mxn][cnt] = ans%mod;
}

int main()
{
    memset(dp,-1,sizeof dp);
    cin>>n>>k>>d;
   cout<<f(n,0)<<endl;
}

