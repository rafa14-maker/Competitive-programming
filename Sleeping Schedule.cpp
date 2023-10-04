#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
const int N = 2e3+5;

#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"

int l,r,h,n;
int arr[N];
int dp[N][N];

ll f(int pos,ll sum)
{
    if(pos>=n)return 0;
    if(dp[pos][sum]!=-1)return dp[pos][sum];
    ll ans = 0;
    ll p =(sum+arr[pos])%h;
    //p=p%h;
    if(l<=p&&p<=r)ans=max(ans,1+f(pos+1,p));
    else ans=max(ans,f(pos+1,p));

    p=(sum+arr[pos]-1)%h;
  //  p=p%h;
    if(l<=p&&p<=r)ans=max(ans,1+f(pos+1,p));
    else ans=max(ans,f(pos+1,p));

    return dp[pos][sum]=ans;
}

int main()
{
     FasterIO
    scanf("%d %d %d %d",&n,&h,&l,&r);
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    memset(dp,-1,sizeof dp);
    printf("%lld\n",f(0,0));
}
