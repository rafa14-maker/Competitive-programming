#include<bits/stdc++.h>
using namespace std;
int n,m,test;

int arr[80][80];

bool vis[80][80];

int dp[80][80][10][3];

int f(int i,int j,int k,int l)
{
    if(i<0||i==n||j<0||j==n)return -1e9;
    if(arr[i][j]<0)k--;
    if(k<0)return -1e9;
    if(dp[i][j][k][l]!=-1)return dp[i][j][k][l];
    if(j==n-1&&i==n-1)return dp[i][j][k][l]=arr[i][j];
    int ans = -1e9;
    ans=max(ans,f(i+1,j,k,1));
    if(l!=2)ans=max(ans,f(i,j+1,k,0));
    if(l!=0)ans=max(ans,f(i,j-1,k,2));
    if(ans!=-1e9)return dp[i][j][k][l] = arr[i][j]+ans;
    else return dp[i][j][k][l]= -1e9;
}

void solve()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
    memset(dp,-1,sizeof dp);
    int mn=f(0,0,m,0);
    if(mn==-1e9)printf("Case %d: impossible\n",++test);
    else printf("Case %d: %d\n",++test,mn);
}

int main()
{
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)break;
        solve();
    }
}
