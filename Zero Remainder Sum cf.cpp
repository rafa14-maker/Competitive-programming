#include<bits/stdc++.h>
using namespace std;

int n,m,k;

int arr[75][75];
int dp[72][72][72][72];

int f(int i,int j,int cnt,int sum)
{
   if(j>=m||i>n||sum>=k||cnt>m/2)return -1e8;
    if(i==n)
    {
        if(sum==0)return sum;
        else return -1e8;
    }
    if(dp[i][j][cnt][sum]!=-1)return dp[i][j][cnt][sum];
    int ans=-1e7;

   ans=max(ans,arr[i][j]+f(i,j+1,cnt+1,(sum+arr[i][j])%k));

   ans=max(ans,f(i,j+1,cnt,sum));

  if(cnt<m/2)  ans=max(ans,arr[i][j]+f(i+1,0,0,(sum+arr[i][j])%k));

    ans=max(ans,f(i+1,0,0,sum));

    return dp[i][j][cnt][sum]=ans;
}

int main()
{
    cin>>n>>m>>k;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>arr[i][j];
    }
    memset(dp,-1,sizeof dp);
    cout<<f(0,0,0,0)<<endl;
}
