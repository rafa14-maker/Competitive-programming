#include<bits/stdc++.h>
using namespace std;

int n,k;

int arr[55];

int dp[55][55];

int f(int left,int right)
{
    if(left+1==right)return 0;
    if(dp[left][right]!=-1)return dp[left][right];

    int ans=9999999;

    for(int i=left+1;i<right;i++)
    {
        ans=min(ans,f(left,i)+f(i,right)+(arr[right]-arr[left]));
    }

    return dp[left][right]=ans;
}

int main()
{
    while(scanf("%d",&k))
    {
        if(k==0)return 0;
        scanf("%d",&n);
        arr[0]=0;
        arr[n+1]=k;
        for(int i=1;i<=n;i++)scanf("%d",&arr[i]);
        memset(dp,-1,sizeof dp);
        printf("The minimum cutting is %d.\n",f(0,n+1));
    }
    return 0;
}
