#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
ll dp[250][200];

ll f(ll sum,int cnt)
{
   // cout<<sum<<" "<<cnt<<endl;
    if(cnt>13)return 0;
    if(sum<0)return 0;
    if(sum==0)
    {
        if(cnt==13)return 1;
        else return 0;
    }
    if(dp[sum][cnt]!=-1)return dp[sum][cnt];
    ll ans=0;
    for(int i=1;i<=sum;i++)
    {
        ans+=f(sum-i,cnt+1);
    }
    return dp[sum][cnt]=ans;
}

void solve()
{
    cin>>n;
    memset(dp,-1,sizeof dp);
    cout<<f(n,1)<<endl;
}

int main()
{
    solve();
}
