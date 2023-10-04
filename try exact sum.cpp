#include<bits/stdc++.h>
using namespace std;

int n,tot,ans,mn;
int arr[105];
int dp[105][30005];
int coin_dp[105][30005];

int f(int pos,int sum)
{
    if(sum>=tot)return sum;
    if(pos==n)return INT_MAX;
    if(dp[pos][sum]!=-1)return dp[pos][sum];
    int ans=INT_MAX;
    ans=min(f(pos+1,sum),f(pos+1,sum+arr[pos]));
    return dp[pos][sum]=ans;
}

int coin(int pos,int sum,int counter)
{
    if(sum==ans)
    {
        return counter;
    }
    if(sum>ans)return INT_MAX;
    if(pos==n)return INT_MAX;
     if(coin_dp[pos][sum]!=-1)return coin_dp[pos][sum];
    int ans=INT_MAX;
    ans=min(coin(pos+1,sum,counter),coin(pos+1,sum+arr[pos],counter+1));
    return coin_dp[pos][sum]=ans;

}



int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&tot,&n);
        for(int i=0;i<n;i++)scanf("%d",&arr[i]);
        sort(arr,arr+n);
        reverse(arr,arr+n);
        memset(dp,-1,sizeof dp);
        ans=f(0,0);
        printf("%d ",ans);
        mn=INT_MAX;
        memset(coin_dp,-1,sizeof coin_dp);
        printf("%d\n",coin(0,0,0));
    }
}
