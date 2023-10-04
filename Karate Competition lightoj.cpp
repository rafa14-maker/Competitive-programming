#include<bits/stdc++.h>
using namespace std;

int dp[150][150];
int test;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    int frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>frr[i];
    sort(arr,arr+n,greater<int>());
     sort(frr,frr+n,greater<int>());

     memset(dp,0,sizeof dp);

     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=n;j++)
         {
             int point=0;
             if(arr[i-1]>frr[j-1])point=2;
             else if(arr[i-1]==frr[j-1])point=1;
             dp[i][j]=max(dp[i-1][j],max(dp[i][j-1],dp[i-1][j-1]+point));
         }
     }

     printf("Case %d: %d\n",++test,dp[n][n]);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
